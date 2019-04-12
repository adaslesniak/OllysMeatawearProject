// AvailableDevicesViewCtrl.swift [OllysProject] created by: Adas Lesniak on: 12/04/2019
import UIKit


class AvailableDevicesViewCtrl: UIViewController, UITableViewDataSource { //, UITableViewDelegate {//, UITableViewDelegate, UITableViewDataSource {
    
    @IBOutlet weak var backBtn: UIButton!
    @IBOutlet weak var devicesTable: UITableView!
    
    private var available = [DeviceCtrl]()
    
    static func instantiate() -> AvailableDevicesViewCtrl {
        let ctrl = AvailableDevicesViewCtrl(nibName: "AvailableDevicesView", bundle: nil)
        Devices.scanForKnownDevices { result in
            ctrl.available = result
            ctrl.devicesTable?.reloadData()
        }
        return ctrl
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        //devicesTable.delegate = self
        devicesTable.dataSource = self
        devicesTable.register(AvailableDeviceCell.self, forCellReuseIdentifier: AvailableDeviceCell.reuseId)
        backBtn.addAction(.tap) { [weak self] in
            self?.dismiss(animated: true)
        }
    }
    
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return available.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        guard let cell = tableView.dequeueReusableCell(withIdentifier: AvailableDeviceCell.reuseId) as? AvailableDeviceCell else {
            fatalError("reusable cell not registred")
        }
        cell.setup(available[indexPath.row])
        return cell
    }
    
}

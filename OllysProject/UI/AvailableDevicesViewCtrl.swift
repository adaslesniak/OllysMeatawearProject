// AvailableDevicesViewCtrl.swift [OllysProject] created by: Adas Lesniak on: 12/04/2019
import UIKit


class AvailableDevicesViewCtrl: UIViewController, UITableViewDataSource { //, UITableViewDelegate {//, UITableViewDelegate, UITableViewDataSource {
    
    @IBOutlet weak var backBtn: UIButton!
    @IBOutlet weak var devicesTable: UITableView!
    
    private var available = [DeviceCtrl]()
    
    static func instantiate() -> AvailableDevicesViewCtrl {
        let ctrl = AvailableDevicesViewCtrl(nibName: "AvailableDevicesView", bundle: nil)
        ctrl.refresh()
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
    
    func refresh() {
        Devices.scanForKnownDevices { [weak self] result in
            ExecuteOnMain {
                //TODO: compare available and result - only if different, then apply and reload
                self?.available = result
                self?.devicesTable?.reloadData()
            }
            ExecuteInBackground(after: 1.7) {
                self?.refresh() //constant refreshing so table is in sync
            }
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

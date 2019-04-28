// AvailableDevicesViewCtrl.swift [OllysProject] created by: Adas Lesniak on: 12/04/2019
import UIKit
import OllysLibrary


class AvailableDevicesViewCtrl: UIViewController, UITableViewDataSource {
    
    @IBOutlet weak var backBtn: UIButton!
    @IBOutlet weak var devicesTable: UITableView!
    @IBOutlet weak var resetBtn: UIButton!
    
    private var available = [DeviceCtrl]()
    
    static func instantiate() -> AvailableDevicesViewCtrl {
        let ctrl = AvailableDevicesViewCtrl(nibName: "AvailableDevicesView", bundle: nil)
        ctrl.refresh()
        return ctrl
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        devicesTable.dataSource = self
        devicesTable.register(AvailableDeviceCell.nib(), forCellReuseIdentifier: AvailableDeviceCell.reuseId)
        backBtn.addAction(.tap) { [weak self] in
            self?.dismiss(animated: true)
        }
        resetBtn.addAction(.tap) { [weak self] in
            Devices.forgetRmemberedDevices()
            self?.refresh()
        }
    }
    
    func refresh() {
        Devices.scanForKnownDevices { [weak self] result in
            ExecuteOnMain {
                guard let self = self else {
                    return
                }
                var missing = [DeviceCtrl]()
                var newOnes = [DeviceCtrl]()
                
                for old in self.available {
                    if !result.contains(where: { $0.id == old.id }) {
                        Log.debug(" \(old.name) dissapeared")
                        missing.append(old)
                    }
                }
                for new in result {
                    if !self.available.contains(where: { $0.id == new.id }) {
                        Log.debug(" \(new.name) appeared")
                        newOnes.append(new)
                    }
                }
                for removed in missing {
                    guard let iRemoved = self.available.firstIndex(of: removed) else {
                        Log.error("that should not be possible")
                        continue
                    }
                    self.available.remove(at: iRemoved)
                }
                for new in newOnes {
                    self.available.append(new)
                }
                
                if newOnes.count > 0 || missing.count > 0 {
                    self.devicesTable?.reloadData()
                }
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

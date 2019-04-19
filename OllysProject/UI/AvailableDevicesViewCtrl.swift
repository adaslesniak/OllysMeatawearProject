// AvailableDevicesViewCtrl.swift [OllysProject] created by: Adas Lesniak on: 12/04/2019
import UIKit


class AvailableDevicesViewCtrl: UIViewController, UITableViewDataSource {
    
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
        devicesTable.dataSource = self
        devicesTable.register(AvailableDeviceCell.nib(), forCellReuseIdentifier: AvailableDeviceCell.reuseId)
        backBtn.addAction(.tap) { [weak self] in
            self?.dismiss(animated: true)
        }
    }
    
    func refresh() {
        Devices.scanForKnownDevices { [weak self] result in
            ExecuteOnMain {
                guard let self = self else {
                    return
                }
                //FIXME: don't reload valid cells - just remove invalid ones, fix valid ones... hmmm
                //that means implement DeviceCtrl which is stored independently from cell? or at init of cell figure out state of led/streams
                Log.debug("found \(result.count) accessible devices")
                var isChanged = self.available.count != result.count
                //TODO: find || implement abstract method which does compare two arrays of T where T is equatable
                if !isChanged {
                    for element in result {
                        if !self.available.contains(where: { $0.id == element.id }) {
                            isChanged = true
                            break
                        }
                    }
                }
                if !isChanged {
                    for element in self.available {
                        if !result.contains(where: { $0.id == element.id }) {
                            isChanged = true
                            break
                        }
                    }
                }
                if isChanged {
                    self.available = result
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

// AvailableDevicesViewCtrl.swift [OllysProject] created by: Adas Lesniak on: 12/04/2019
import UIKit


class AvailableDevicesViewCtrl: UIViewController {//, UITableViewDelegate, UITableViewDataSource {
    
    @IBOutlet weak var backBtn: UIButton!
    @IBOutlet weak var devicesTable: UITableView!
    
    static func instantiate() -> AvailableDevicesViewCtrl {
        return AvailableDevicesViewCtrl(nibName: "AvailableDevicesView", bundle: nil)
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        //devicesTable.delegate = self
        //devicesTable.dataSource = self
        //devicesTable.register(, forCellReuseIdentifier: )
        backBtn.addAction(.tap) { [weak self] in
            self?.dismiss(animated: true)
        }
    }
}

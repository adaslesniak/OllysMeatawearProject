// ViewController.swift [] created by: Adas Lesniak on: 04/04/2019
import UIKit
import MetaWear


class InitialViewCtrl: UIViewController {

    @IBOutlet weak var instruction: UILabel!
    @IBOutlet weak var placeholder: UIView! //FIXME: that's bad name - put device area marker would be too long
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        Devices.scanArea { [weak self] result in
            
        }
    }


}


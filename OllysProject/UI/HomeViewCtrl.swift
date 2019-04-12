// HomeViewCtrl.swift [OllysProject] created by: Adas Lesniak on: 12/04/2019
import UIKit


class HomeViewCtrl: UIViewController {
    
    @IBOutlet weak var connectBtn: UIButton!
    @IBOutlet weak var manageBtn: UIButton!
    
    static func instantiate() -> HomeViewCtrl {
        return HomeViewCtrl(nibName: "HomeView", bundle: nil)
    }
    
    override func viewDidLoad() {
        connectBtn.addAction(.tap) { [weak self] in
            
        }
        manageBtn.addAction(.tap) { [weak self] in
            
        }
    }
    
    
}

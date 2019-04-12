// NamingViewCtrl.swift [OllysProject] created by: Adas Lesniak on: 05/04/2019
import UIKit


class NamingViewCtrl: UIViewController, UITextFieldDelegate {
    
    @IBOutlet weak var textField: UITextField!
    @IBOutlet weak var finishBtn: UIButton!
    
    private var callback: ((String) -> Void)!
    
    
    static func presentOver(_ host: UIViewController, whenDone: @escaping (String) -> Void) {
        let ctrl = NamingViewCtrl(nibName: "NamingView", bundle: nil)
        host.modalPresentationStyle = .overFullScreen
        host.present(ctrl, animated: false)
        ctrl.callback = whenDone
        
    }
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        textField.delegate = self
        finishBtn.isEnabled = false
        finishBtn.addAction(.tap) { [weak self] in
            guard self?.finishBtn.isEnabled == true else {
                return
            }
            guard let name = self?.textField.text else {
                Log.error("ups...")
                return
            }
            self?.callback?(name)
            self?.dismiss(animated: false)
        }
    }
    
    func textField(_ textField: UITextField, shouldChangeCharactersIn range: NSRange, replacementString string: String) -> Bool {
        finishBtn.isEnabled = ((textField.text?.count ?? 0) + string.count)  > 3
        return true
    }
    
    
}

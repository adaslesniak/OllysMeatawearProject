// ViewController.swift [] created by: Adas Lesniak on: 04/04/2019
import UIKit
import MetaWear


class InitialViewCtrl: UIViewController {

    @IBOutlet weak var instruction: UILabel!
    @IBOutlet weak var placeholder: UIView! //FIXME: that's bad name - put device area marker would be too long
    @IBOutlet weak var confirmatioPanel: UIView!
    @IBOutlet weak var confirmBtn: UIButton!
    @IBOutlet weak var denyBtn: UIButton!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        scanForNearestDevice()
        confirmatioPanel.isHidden = true
        denyBtn.addAction(.tap) { [weak self] in
            self?.confirmatioPanel.isHidden = true
            self?.scanForNearestDevice()
        }
        confirmBtn.addAction(.tap) { [weak self] in
            Log.error("NOT_IMPLEMENTED")
        }
    }
    
    func scanForNearestDevice() {
        Devices.scanArea { [weak self] result in
            do {
                guard let closest = result.keys.sorted(by: { $0.signal?.strength ?? -10000 > $1.signal?.strength ?? -10000 }).first else {
                    throw Exception.error("there is no closest from \(result.count) visible devices") //that should be zero
                }
                guard let rrsi = closest.signal?.strength, rrsi  > -80 else {
                    throw Exception.error("device signal too weak")
                }
                guard !Devices.known.contains(closest) else {
                    throw Exception.error("this device is already known")
                }
                guard let closestDevice = result[closest] else {
                    throw Exception.error("ups... that is impossible to happen")
                }
                self?.learnDevice(closestDevice)
            } catch {
                Log.warning("failed to find neareast new device: \(error)")
                self?.scanForNearestDevice()
            }
            
        }
    }
    
    func learnDevice(_ device: MetaWear) {
        placeholder.backgroundColor = UIColor.red
        device.flashGreen()
        confirmatioPanel.isHidden = false
    }


}


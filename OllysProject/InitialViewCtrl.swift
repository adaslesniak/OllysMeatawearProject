// ViewController.swift [] created by: Adas Lesniak on: 04/04/2019
import UIKit
import MetaWear
import MetaWearCpp


class InitialViewCtrl: UIViewController {

    @IBOutlet weak var instruction: UILabel!
    @IBOutlet weak var placeholder: CircleView! //FIXME: that's bad name - put device area marker would be too long
    @IBOutlet weak var confirmatioPanel: UIView!
    @IBOutlet weak var confirmBtn: UIButton!
    @IBOutlet weak var denyBtn: UIButton!
    
    private var checkedDevice: MetaWear?
    
    static func instantiate() -> InitialViewCtrl {
        return InitialViewCtrl(nibName: "InitialView", bundle: nil)
    }
    
    let pinkLight = UIColor(red: 255/255, green: 192/255, blue: 203/255, alpha: 0.5)
    let pinkIntensive = UIColor(red: 255/255, green: 20/255, blue: 147/255, alpha: 1)
    
    override func viewDidLoad() {
        super.viewDidLoad()
        scanForNearestDevice()
        confirmatioPanel.isHidden = true
        denyBtn.addAction(.tap) { [weak self] in
            self?.confirmatioPanel.isHidden = true
            self?.scanForNearestDevice()
        }
        confirmBtn.addAction(.tap) { [weak self] in
            guard let self = self, let checked = self.checkedDevice else {
                return
            }
            NamingViewCtrl.presentOver(self) { [weak self] givenName in
                Devices.remember(checked, as: givenName)
                self?.scanForNearestDevice()
                self?.placeholder.adjust(border: self?.pinkLight)
                self?.confirmatioPanel.isHidden = true
            }
        }
        placeholder.adjust(border: pinkLight, center: .clear, borderSize01: 0.2)
    }
    
    private func scanForNearestDevice() {
        print(" -> scanning for nearest device")
        checkedDevice = nil
        Devices.scanArea { [weak self] result in
            Log.add(" -> got results from scan")
            do {
                Log.add("scanned \(result.count) devices", on: .bluetooth)
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
                ExecuteOnMain {
                    self?.placeholder.adjust(border: self?.pinkIntensive)
                    self?.learnDevice(closestDevice)
                }
            } catch {
                Log.warning("failed to find neareast new device: \(error)")
                ExecuteInBackground(after: 1.05) {
                    self?.scanForNearestDevice()
                }
            }
        }
    }
    
    
    private func learnDevice(_ device: MetaWear) {
        
        device.connectAndSetup().continueWith { [weak self] task in
            guard task.error == nil else {
                Log.error("could not connect with device: \(device)")
                return
            }
            device.flashLED(color: .green, intensity: 1.0, _repeat: 3)
            ExecuteOnMain {
                self?.checkedDevice = device  //that is... ugly way to pass argument to anonymous method
                self?.confirmatioPanel.isHidden = false //TODO: that is unclear way of launching view and continuing process, it's not clear what happens next (block assigned to yes buttond in view did load). Refactor this!x
            }
        }
    }


}


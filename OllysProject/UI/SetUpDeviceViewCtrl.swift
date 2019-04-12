//created by: Adas Lesniak on: 04/04/2019
import UIKit
import MetaWear


class SetUpDeviceViewCtrl: UIViewController {

    @IBOutlet weak var instruction: UILabel!
    @IBOutlet weak var placeholder: CircleView! //FIXME: that's bad name - put device area marker would be too long
    @IBOutlet weak var confirmatioPanel: UIView!
    @IBOutlet weak var confirmBtn: UIButton!
    @IBOutlet weak var denyBtn: UIButton!
    @IBOutlet weak var backBtn: UIButton!
    
    private var checkedDevice: DeviceCtrl?
    
    static func instantiate() -> SetUpDeviceViewCtrl {
        return SetUpDeviceViewCtrl(nibName: "SetUpDeviceView", bundle: nil)
    }
    
    let pinkLight = UIColor(red: 255/255, green: 192/255, blue: 203/255, alpha: 0.5)
    let pinkIntensive = UIColor(red: 255/255, green: 20/255, blue: 147/255, alpha: 1)
    
    override func viewDidLoad() {
        super.viewDidLoad()
        scanForNearestDevice()
        confirmatioPanel.isHidden = true
        denyBtn.addAction(.tap) { [weak self] in
            self?.confirmatioPanel.isHidden = true
            self?.checkedDevice?.turnOffLed()
            self?.checkedDevice?.disconnect()
            self?.checkedDevice = nil
            self?.placeholder.adjust(border: self?.pinkLight)
            self?.scanForNearestDevice()
        }
        confirmBtn.addAction(.tap) { [weak self] in
            guard let self = self, let checked = self.checkedDevice else {
                return
            }
            NamingViewCtrl.presentOver(self) { [weak self] givenName in
                Devices.remember(checked.device, as: givenName)
                self?.scanForNearestDevice()
                self?.placeholder.adjust(border: self?.pinkLight)
                self?.confirmatioPanel.isHidden = true
                print("checked device: \(self?.checkedDevice != nil)")
                self?.checkedDevice?.turnOffLed()
                self?.checkedDevice = nil
                Log.printDevices(Devices.known, header: "known devices \(Devices.known.count) after returning from NamingViewCtrl")
            }
        }
        backBtn.addAction(.tap) { [weak self] in
            self?.checkedDevice?.turnOffLed()
            self?.checkedDevice?.disconnect()
            self?.checkedDevice = nil
            self?.dismiss(animated: true)
        }
        placeholder.adjust(border: pinkLight, center: .clear, borderSize01: 0.2)
    }
    
    private func scanForNearestDevice() {
        guard checkedDevice == nil else {
            Log.debug("won't scan while checking: \(checkedDevice)")
            ExecuteInBackground(after: 1, scanForNearestDevice)
            return
        }
        Log.printDevices(Devices.known, header: "scanning for nearest device, known before scan")
        Devices.scanArea { [weak self] result in
            Log.debug(" -> got results from scan")
            do {
                Log.debug("scanned \(result.count) devices", on: .bluetooth)
                guard let closest = result.keys.sorted(by: { $0.signal?.strength ?? -10000 > $1.signal?.strength ?? -10000 }).first else {
                    throw Exception.error("there is no closest from \(result.count) visible devices") //that should be zero
                }
                guard let rrsi = closest.signal?.strength, rrsi  > -40, rrsi < 0 else {
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
                Log.debug("no nearest new device: \(error)")
                ExecuteInBackground(after: 1.05) {
                    self?.scanForNearestDevice()
                }
            }
        }
    }
    
    
    private func learnDevice(_ device: MetaWear) {
        let ctrl = DeviceCtrl(device)
        ExecuteOnMain {
            if self.checkedDevice !== ctrl {
                self.checkedDevice?.turnOffLed() //that's just being overcautio
            }
            self.checkedDevice = ctrl  //that is... ugly way to pass argument to anonymous method (assigned in view did load to yes button)
            self.confirmatioPanel.isHidden = false //TODO: that is unclear, it's far from obvious what happens next (new viewCtrl happens and when it finish block assigned to yes button in view did load). Refactor this!
        }
        device.connectAndSetup().continueWith { task in
            guard task.error == nil else {
                Log.error("could not connect with device: \(device)")
                return
            }
            ctrl.startFlashing()
        }
    }


}


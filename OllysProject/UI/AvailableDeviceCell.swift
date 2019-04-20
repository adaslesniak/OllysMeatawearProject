// AvailableDeviceCellTableViewCell.swift [OllysProject] created by: Adas Lesniak on: 12/04/2019 
import UIKit
import OllysLibrary


//FIXME: this name sucks, it isn't clear
class AvailableDeviceCell: UITableViewCell {
    
    @IBOutlet weak var title: UILabel!
    @IBOutlet weak var id: UILabel!
    @IBOutlet weak var isRed: ToggleView!
    @IBOutlet weak var isBlue: ToggleView!
    @IBOutlet weak var isSensorFusing: ToggleView!
    @IBOutlet weak var isAccelerometering: ToggleView!
    
    private var controlled: DeviceCtrl?
    
    static let reuseId = "available_device_cell"
    
    static func nib() -> UINib {
        return UINib(nibName: "AvailableDeviceCell", bundle: nil)
    }
    
    override func prepareForReuse() {
        resetToggles()
        clearDeviceConnection()
    }
    
    deinit {
        clearDeviceConnection()
    }
    
    func setup(_ withDevice: DeviceCtrl) {
        Log.debug("setting up cell for device: \(withDevice.device.name)")
        controlled = withDevice
        title.text = withDevice.name
        id.text = withDevice.id.description
        isRed.setAction { [weak self] isOn in
            self?.controlled?.connect {
                if isOn {
                    self?.controlled?.turnOnLed(.red)
                } else {
                    self?.controlled?.turnOffLed(.red)
                }
            }
            Log.debug("toggled red led on \(self?.controlled?.name ?? "nil") to \(self?.isRed.isOn.description ?? "nil")", on: .userAction)
        }
        isBlue.setAction { [weak self] isOn in
            self?.controlled?.connect {
                if isOn {
                    self?.controlled?.turnOnLed(.blue)
                } else {
                    self?.controlled?.turnOffLed(.blue)
                }
            }
            Log.debug("toggled blue led on \(self?.controlled?.name ?? "nil") to \(self?.isBlue.isOn.description ?? "nil")", on: .userAction)
        }
        isSensorFusing.setAction { [weak self] isOn in
            print("isSensorFusing: \(isOn)")
        }
        isAccelerometering.setAction { [weak self] isOn in
            self?.controlled?.connect {
                if isOn {
                    self?.controlled?.startAccelerometering { measurment in
                        Log.debug("acceleration: \(measurment)")
                    }
                } else {
                    self?.controlled?.stopAccelerometering()
                }
            }
            Log.debug("toggled accelerometer on \(self?.controlled?.name ?? "nil") to \(self?.isAccelerometering.isOn.description ?? "nil")", on: .userAction)
        }
        withDevice.connect { [weak self] in
            self?.keepCheckingDevice()
        }
    }
    
    private func keepCheckingDevice() {
        func resume(after delay: Double) {
            ExecuteOnMain(after: delay) { [weak self] in
                self?.keepCheckingDevice()
            }
        }
        guard controlled?.isConnected != true else {
            resume(after: 0.66)
            return //all is fine
        }
        if controlled == nil {
            Log.error("how that can be?!")
            self.resetToggles() //that is not possible
            resume(after: 0.9)
            return
        }
        var didConnect = false
        controlled?.connect() {
            didConnect = true
        }
        let timeout = 1.88
        ExecuteOnMain(after: timeout) { [weak self] in
            if !didConnect {
                self?.resetToggles()
            }
        }
    }
    
    private func resetToggles() {
        isAccelerometering.toggle(to: false)
        isSensorFusing.toggle(to: false)
        isRed.toggle(to: false)
        isBlue.toggle(to: false)
    }
    
    private func clearDeviceConnection() {
        //TODO: stop streams
        controlled?.turnOffLed()
        controlled?.disconnect()
        controlled = nil
    }
    
}

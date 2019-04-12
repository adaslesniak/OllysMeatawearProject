// AvailableDeviceCellTableViewCell.swift [OllysProject] created by: Adas Lesniak on: 12/04/2019 
// Copyright ©Aulendil   All rights reserved.

import UIKit

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
            print("isRed?= \(isOn)")
        }
        isBlue.setAction { [weak self] isOn in
            self?.controlled?.connect {
                if isOn {
                    self?.controlled?.turnOnLed(.blue)
                } else {
                    self?.controlled?.turnOffLed(.blue)
                }
            }
            print("isBlue: \(isOn)")
        }
        isSensorFusing.setAction { [weak self] isOn in
            print("isSensorFusing: \(isOn)")
        }
        isAccelerometering.setAction { [weak self] isOn in
            print("isAccelerometering: \(isOn)")
        }
        withDevice.connect { [weak self] in
            self?.keepCheckingDevice()
        }
    }
    
    private func keepCheckingDevice() {
        if controlled?.isConnected == false {
            Log.warning("device from cell isn't connected")
            ExecuteOnMain {
                self.resetToggles()
            }
        }
        ExecuteOnMain(after: 0.7) { [weak self] in
            self?.keepCheckingDevice()
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

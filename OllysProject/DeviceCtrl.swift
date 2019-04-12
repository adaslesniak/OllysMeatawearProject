// DeviceCtrl.swift [OllysProject] created by: Adas Lesniak on: 11/04/2019 
import MetaWear
import Foundation


//wrapper around MetaWear with api limited to this project functionality
class DeviceCtrl: CustomStringConvertible {
    
    public let device: MetaWear
    private var isFlashing = false
    internal private(set) var name: String
    
    var id: UUID { return device.peripheral.identifier }
    
    
    init(_ device: MetaWear, name: String? = nil) {
        self.device = device
        self.name = name ?? device.name
    }
    
    func startFlashing() {
        Log.debug(">>>START<<< flashing")
        isFlashing = true
        continueFlashing()
    }
    
    func disconnect() {
        device.cancelConnection()
    }
    
    func stopFlashing() {
        Log.debug(">>>STOP<<< flashing")
        isFlashing = false
    }
    
    private func continueFlashing() {
        guard isFlashing else {
            return
        }
        device.flashLED(color: .green, intensity: 1.0, _repeat: 1)
        ExecuteInBackground(after: 0.96, continueFlashing)
    }
    
    var description: String {
        return "[\(device.name): \(device.peripheral.identifier)]"
    }
}

extension String.StringInterpolation {
    mutating func appendInterpolation(_ value: DeviceCtrl?) {
        if let theValue = value {
            appendLiteral(theValue.description)
        } else {
            appendLiteral("nil")
        }
    }
}

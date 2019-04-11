// DeviceCtrl.swift [OllysProject] created by: Adas Lesniak on: 11/04/2019 
import MetaWear
import Foundation


class DeviceCtrl: CustomStringConvertible {
    
    public let device: MetaWear
    private var isFlashing = false
    
    init(_ device: MetaWear) {
        self.device = device
    }
    
    func startFlashing() {
        Log.add(">>>START<<< flashing")
        isFlashing = true
        continueFlashing()
    }
    
    func stopFlashing() {
        Log.add(">>>STOP<<< flashing")
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

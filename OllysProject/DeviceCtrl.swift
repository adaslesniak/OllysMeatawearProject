// DeviceCtrl.swift [OllysProject] created by: Adas Lesniak on: 11/04/2019 
import MetaWear
import Foundation


class DeviceCtrl {
    
    public let device: MetaWear
    private var isFlashing = false
    
    init(_ device: MetaWear) {
        self.device = device
    }
    
    func startFlashing() {
        isFlashing = true
        continueFlashing()
    }
    
    func stopFlashing() {
        isFlashing = false
    }
    
    private func continueFlashing() {
        guard isFlashing else {
            return
        }
        device.flashLED(color: .green, intensity: 1.0, _repeat: 1)
        ExecuteInBackground(after: 0.96, continueFlashing)
    }
    
    
}

// DeviceCtrl.swift [OllysProject] created by: Adas Lesniak on: 11/04/2019 
import MetaWear
import MetaWearCpp
import BoltsSwift
import Foundation


//wrapper around MetaWear with api limited to this project functionality
class DeviceCtrl: CustomStringConvertible {
    
    public let device: MetaWear
    public private(set) var name: String
    private var ledsCtrl: LedCtrl! //should be let, but can't initialize properly then
    private var accelerometerCtrl: AccelerometerCtrl!
    
    public var id: UUID { return device.peripheral.identifier }
    
    
    public init(_ device: MetaWear, as name: String? = nil) {
        self.device = device
        self.name = name ?? device.name
        self.ledsCtrl = LedCtrl(self)
        self.accelerometerCtrl = AccelerometerCtrl(self)
    }
    
    public func disconnect() {
        device.cancelConnection()
    }
    
    public func connect(_ whenReady: Action? = nil) {
        if isConnected {
            whenReady?()
        } else {
            device.connectAndSetup().continueWith { [weak self] answer in
                guard let self = self else {
                    return
                }
                guard answer.error == nil else {
                    Log.error("couldn't connect to device(\(self.name). error: \(answer.error!))")
                    return
                }
                whenReady?()
            }
        }
    }
    
    public var isConnected: Bool { return device.isConnectedAndSetup }

    
    public func startFlashing(_ color: LedColor) {
        connect { [weak self] in
            self?.ledsCtrl.startFlashing(color)
        }
    }
    public func turnOnLed(_ color: LedColor) {
        connect { [weak self] in
            self?.ledsCtrl.turnOnLed(color)
        }
    }
    public func turnOffLed(_ color: LedColor = .all) {
        connect { [weak self] in //TODO: consider if in this case there should be no strong self, but deinit calls it, so it would never deinit?
            self?.ledsCtrl.turnOffLed(color)
        }
    }
    
    
    public func startAccelerometering(_ listener: @escaping (AccelerometerMeasurment) -> Void) {
        connect { [weak self] in
            self?.accelerometerCtrl.startAccelerometering(listener)
        }
    }
    public func stopAccelerometering() {
        connect { [weak self] in
            self?.accelerometerCtrl.stopAccelrometering()
        }
    }
    
    
    public var description: String {
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

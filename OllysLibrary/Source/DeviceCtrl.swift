// DeviceCtrl.swift [OllysProject] created by: Adas Lesniak on: 11/04/2019 
import MetaWear
import Foundation


//wrapper around MetaWear with api limited to this project functionality
@objc public class DeviceCtrl: NSObject {
    
    let device: MetaWear
    @objc public private(set) var name: String = "unnamed"
    private var ledsCtrl: LedCtrl! //should be let, but can't initialize properly then
    private var accelerometerCtrl: AccelerometerCtrl!
    
    func card() -> DeviceCard {
        return DeviceCard(name: name, id: id)
    }
    
    @objc public var id: UUID { return device.peripheral.identifier }
    
    
    init(_ theDevice: MetaWear, as theName: String? = nil) {
        device = theDevice
        name = theName ?? theDevice.name
        super.init()
        self.ledsCtrl = LedCtrl(self)
        self.accelerometerCtrl = AccelerometerCtrl(self)
    }
    
    @objc public func disconnect() {
        device.cancelConnection()
    }
    
    @objc public func connect(_ whenReady: Action? = nil) {
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
    
    @objc public var isConnected: Bool { return false } //device.isConnectedAndSetup }

    
    @objc public func startFlashing(_ color: LedColor) {
        connect { [weak self] in
            self?.ledsCtrl.startFlashing(color)
        }
    }
    @objc public func turnOnLed(_ color: LedColor) {
        connect { [weak self] in
            self?.ledsCtrl.turnOnLed(color)
        }
    }
    @objc public func turnOffLed(_ color: LedColor = .all) {
        connect { [weak self] in //TODO: consider if in this case there should be no strong self, but deinit calls it, so it would never deinit?
            self?.ledsCtrl.turnOffLed(color)
        }
    }
    
    
    @objc public func startAccelerometering(_ listener: @escaping (AccelerometerMeasurment) -> Void) {
        connect { [weak self] in
            self?.accelerometerCtrl.startAccelerometering(listener)
        }
    }
    @objc public func stopAccelerometering() {
        connect { [weak self] in
            self?.accelerometerCtrl.stopAccelrometering()
        }
    }
    
    
    @objc public override var description: String {
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

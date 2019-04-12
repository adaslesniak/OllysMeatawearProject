// DeviceCtrl.swift [OllysProject] created by: Adas Lesniak on: 11/04/2019 
import MetaWear
import Foundation


//wrapper around MetaWear with api limited to this project functionality
class DeviceCtrl: CustomStringConvertible {
    
    typealias ColorComponents = (r: CGFloat, g: CGFloat, b: CGFloat)
    enum LedColor {
        case red
        case green
        case blue
        case all
        
        var components: ColorComponents {
            switch self {
            case .red:
                return (1, 0, 0)
            case .green:
                return (0, 1, 0)
            case .blue:
                return (0, 0, 1)
            case .all:
                return (1, 1, 1)
            }
        }
    }
    
    public let device: MetaWear
    private var flashing = [LedColor]()
    internal private(set) var name: String
    
    var id: UUID { return device.peripheral.identifier }
    
    
    init(_ device: MetaWear, name: String? = nil) {
        self.device = device
        self.name = name ?? device.name
    }
    
    func startFlashing(_ color: LedColor = .green) {
        ledsOn = [] //sorry can't combine
        guard !flashing.contains(color) else {
            return
        }
        Log.debug("\(name) START flashing")
        let wasFlashing = flashing.count > 0
        flashing.append(color)
        if !wasFlashing {
            keepFlashing() 
        }
    }
    
    func disconnect() {
        device.cancelConnection()
    }
    
    func connect(_ whenReady: Action? = nil) {
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
    
    var isConnected: Bool { return device.isConnectedAndSetup }

    
    //those will collide with falshing
    var ledsOn = [LedColor]()
    func turnOnLed(_ color: LedColor) {
        flashing = [] //sorry or flash or "constant"
        guard !ledsOn.contains(color) else {
            return
        }
        let wasKeepingLedsOn = ledsOn.count > 0
        ledsOn.append(color)
        if !wasKeepingLedsOn {
            keepLedsOn() 
        }
    }
    func turnOffLed(_ color: LedColor = .all) {
        if color == .all {
            flashing = []
            ledsOn = []
        } else {
            if let iFlash = flashing.firstIndex(of: color) {
                flashing.remove(at: iFlash)
            }
            if let iLed = ledsOn.firstIndex(of: color) {
                ledsOn.remove(at: iLed)
                print("removed led: \(color) (left: \(ledsOn.count))")
            }
        }
        if flashing.count == 0 && ledsOn.count == 0 {
            device.turnOffLed()
        }
    }
    
    
    private func combineColor(_ components: [LedColor]) -> UIColor? {
        guard components.count > 0 else {
            return nil
        }
        var full = ColorComponents(0, 0, 0)
        for color in components {
            full.r += color.components.r
            full.g += color.components.g
            full.b += color.components.b
        }
        return UIColor(red: full.r, green: full.g, blue: full.b, alpha: 1)
    }
    
    //be carefull to not call it multiple times
    private func keepLedsOn() {
        Log.debug("keeping \(ledsOn.count) leds on")
        if let theColor = combineColor(ledsOn) {
            device.flashLED(color: theColor, intensity: 0.6, _repeat: 1, onTime: 500)
            ExecuteOnMain(after: 0.52) { [weak self] in
                self?.keepLedsOn()
            }
        }
    }
    
    //be carefull to not call it multiple times
    private func keepFlashing() {
        if let theColor = combineColor(flashing) {
            device.flashLED(color: theColor, intensity: 0.9, _repeat: 1)
            ExecuteInBackground(after: 0.96) { [weak self] in
                self?.keepFlashing()
            }
        }
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

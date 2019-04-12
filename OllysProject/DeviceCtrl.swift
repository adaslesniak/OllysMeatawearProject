// DeviceCtrl.swift [OllysProject] created by: Adas Lesniak on: 11/04/2019 
import MetaWear
import Foundation


//wrapper around MetaWear with api limited to this project functionality
class DeviceCtrl: CustomStringConvertible {
    
    enum LedColor {
        case red
        case green
        case blue
        case all
        
        var components: (r: CGFloat, g: CGFloat, b: CGFloat) {
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
        Log.debug("\(name) START flashing")
        flashing.append(color)
        continueFlashing()
    }
    
    func disconnect() {
        device.cancelConnection()
    }
    
    func connect(_ whenReady: Action? = nil) {
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
    
    var isConnected: Bool { return device.isConnectedAndSetup }
    
    func stopFlashing(_ color: LedColor = .all) {
        Log.debug("\(name) STOP flashing")
        flashing = []
    }
    
    private func continueFlashing() {
        guard flashing.count > 0 else {
            return
        }
        var fullColor: (r: CGFloat, g: CGFloat, b: CGFloat) = (0, 0, 0)
        for color in flashing {
            fullColor.r += color.components.r
            fullColor.g += color.components.g
            fullColor.b += color.components.b
        }
        let theColor = UIColor(red: fullColor.r, green: fullColor.g, blue: fullColor.b, alpha: 1)
        device.flashLED(color: theColor, intensity: 1.0, _repeat: 1)
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

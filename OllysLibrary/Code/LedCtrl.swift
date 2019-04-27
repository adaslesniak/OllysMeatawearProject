// LedLight.swift [OllysProject] created by: Adas Lesniak on: 15/04/2019
import Foundation
//import MetaWear


public typealias ColorComponents = (r: Float, g: Float, b: Float)
@objc public enum LedColor : Int {
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

//controlling LED's on MetaWear
class LedCtrl {
    private var ctrl: DeviceCtrl
    
    private var flashing = [LedColor]()
    private var ledsOn = [LedColor]()
    
    init(_ device: DeviceCtrl) {
        ctrl = device
    }
    
    deinit {
        turnOffLed(.all)
    }
    
    func startFlashing(_ color: LedColor = .green) {
        ledsOn = [] //sorry can't combine
        guard !flashing.contains(color) else {
            return
        }
        Log.debug("\(ctrl.name) start flashing")
        let wasFlashing = flashing.count > 0
        flashing.append(color)
        if !wasFlashing {
            keepFlashing()
        }
    }
    func turnOnLed(_ color: LedColor) {
        flashing = [] //sorry or flash or "constant"
        guard !ledsOn.contains(color) else {
            return
        }
        Log.debug("\(ctrl.name) turn led on")
        let wasKeepingLedsOn = ledsOn.count > 0
        ledsOn.append(color)
        if !wasKeepingLedsOn {
            keepLedsOn()
        }
    }
    func turnOffLed(_ color: LedColor = .all) {
        /*if color == .all {
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
            ctrl.device.turnOffLed()
        }*/
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
        return UIColor(red: CGFloat(full.r), green: CGFloat(full.g), blue: CGFloat(full.b), alpha: 1)
    }
    
    //be carefull to not call it multiple times
    private func keepLedsOn() {
        /*Log.debug("keeping \(ledsOn.count) leds on")
        if let theColor = combineColor(ledsOn) {
            ctrl.device.flashLED(color: theColor, intensity: 0.6, _repeat: 1, onTime: 500)
            ExecuteOnMain(after: 0.52) { [weak self] in
                self?.keepLedsOn()
            }
        }*/
    }
    
    //be carefull to not call it multiple times
    private func keepFlashing() {
        /*Log.debug("keeping \(flashing.count) leds flashing")
        if let theColor = combineColor(flashing) {
            ctrl.device.flashLED(color: theColor, intensity: 0.9, _repeat: 1)
            ExecuteInBackground(after: 0.96) { [weak self] in
                self?.keepFlashing()
            }
        }*/
    }
}



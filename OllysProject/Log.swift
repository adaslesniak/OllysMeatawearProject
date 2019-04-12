// Log.swift [OllysProject] created by: Adas Lesniak on: 04/04/2019 
// Copyright ©Aulendil   All rights reserved.

import Foundation

public class Log {
    
    //channels are here so we can later disable some channels to have a clearel log - especially for debug
    enum Channel {
        case bluetooth
        case viewNavigation
        case userAction
        case debug //all crap goes here
        case all
    }
    
    static var isIgnoringWarnings = false
    enum Level : Int {
        case debug = 0
        case warning = 1
        case error = 2
        
        var isHighPriority: Bool {
            if Log.isIgnoringWarnings {
                return self == .error
            } else {
                return self != .debug
            }
        }
    }
    
    static var enabledChannels: [Channel] = [.all]
    
    static func debug(_ message: String, on channel: Channel = .debug) {
        doLog(message, chnl: channel, lvl: .debug)
    }
    
    static func error(_ message: String) {
        doLog("\nERROR: \(message)", chnl: .debug, lvl: .error)
    }
    
    static func warning(_ message: String) {
        doLog("   Warning: \(message)", chnl: .debug, lvl: .warning)
    }
    
    //FIXME: that is somehow ugly - Log is generic class, should not be depended on business logic implemntation
    static func printDevices(_ devices: [DeviceCard], header: String) {
        var theString = header + ":  "
        if devices.count == 0 {
            theString += #"none"#
        } else {
            devices.forEach({ theString += "[\($0.id): \($0.name)]; " })
        }
       doLog(theString, chnl: .bluetooth, lvl: .debug)
    }
    
    private static var logQueue = DispatchQueue(label: "log", qos: .background)
    private static func doLog(_ msg: String, chnl: Channel, lvl: Level) {
        logQueue.async {
            let isChannelEnabled = enabledChannels.contains(.all) || enabledChannels.contains(chnl)
            guard isChannelEnabled || lvl.isHighPriority else {
                return
            }
            if chnl == .debug {
                print(" - \(msg)")
            } else {
                print("[\(chnl)]: \(msg)")
            }
        }
    }
    
}

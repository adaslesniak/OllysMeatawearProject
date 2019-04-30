// MetaWearUnity.swift [OllysLibrary] created by: Adas Lesniak on: 30/04/2019
import Foundation
//#import "UnityInterface.h"

@objc public class MetaWearUnity: NSObject {

    static let kUnityMessageReceiver = "iOSMessageReceiver"
    static let kUnityMessageMethod = "onMessageFromiOS"
    
    @objc public static func scanForNewDevices() {
        print("MetaWearUnity.scanForNewDevices executing...")
        Devices.scanForNewDevices { newOnes in
            print("meatawearUnity - don't know how to send answer to unity [\(newOnes.count) new devices]")
        }
        
    }
    
    @objc public static func scanForKnownDevices() {
        print("MetaWearUnity.scanForKnownDevices executing...")
        Devices.scanForKnownDevices { knownOnes in
            print("metawearUnity - don't know how to handle answer to unity [\(knownOnes.count) known devices]")
        }
    }
    
    
    
    public static func sendAccelerometerData(_ measurment: AccelerometerMeasurment) {
        var json = [String:Any]()
        json["what"] = "accelerometerData"
        json["sender"] = measurment.sourceName()
        json["accelX"] = measurment.xAcceleration;
        json["accelY"] = measurment.yAcceleration;
        json["accelZ"] = measurment.zAcceleration;
        let formatter = DateFormatter()
        formatter.dateFormat = "HH:mm:ss.SSS"
        json["when"] = formatter.string(from: measurment.when)
        sendObjFromiOS2Unity(json)
    }
    
    private static func sendObjFromiOS2Unity(_ object: [String:Any]) {
        do {
            let jsonData = try JSONSerialization.data(withJSONObject: object, options: .prettyPrinted)
            guard let serialised = String(data: jsonData, encoding: .utf8) else {
                throw Exception.error("failed to serialised jsonData")
            }
            sendMsgFromiOS2Unity(serialised)
        } catch {
            Log.error("failed to communicate with unity because: \(error)\n  message was: \(object)")
        }
        
    }
    private static func sendMsgFromiOS2Unity(_ message: String) {
        //UnitySendMessage(kUnityMessageReceiver, "onMessageFromiOS", message)
    }
    
    
}

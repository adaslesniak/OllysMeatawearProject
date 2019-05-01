// MetaWearUnity.swift [OllysLibrary] created by: Adas Lesniak on: 30/04/2019
import Foundation
//#import "UnityInterface.h"

@objc public class MetaWearUnity: NSObject {

    static let kUnityMessageReceiver = "iOSMessageReceiver"
    static let kUnityMessageMethod = "onMessageFromiOS"
    
    public typealias Listener = (String) -> Void
    private static var unityListener: Listener?
    
    @objc public static func scanForNewDevices() {
        print("MetaWearUnity.scanForNewDevices executing...")
        Devices.scanForNewDevices { newOnes in
            print("meatawearUnity - don't know how to send answer to unity [\(newOnes.count) new devices]")
            sendMsg2Unity("hey - this message is received by unity [callback from scanForNewDevices]")
        }
    }
    
    @objc public static func scanForKnownDevices() {
        print("MetaWearUnity.scanForKnownDevices executing...")
        Devices.scanForKnownDevices { knownOnes in
            print("metawearUnity - don't know how to handle answer to unity [\(knownOnes.count) known devices]")
            sendMsg2Unity("hey - this message is received by unity [callback from scanForKnownDevices]")
        }
    }
    
    @objc public static func setUnityListener(_ code: @escaping Listener) {
        unityListener = code
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
        sendObj2Unity(json)
    }
    
    private static func sendObj2Unity(_ object: [String:Any]) {
        do {
            let jsonData = try JSONSerialization.data(withJSONObject: object, options: .prettyPrinted)
            guard let serialised = String(data: jsonData, encoding: .utf8) else {
                throw Exception.error("failed to serialised jsonData")
            }
            sendMsg2Unity(serialised)
        } catch {
            Log.error("failed to communicate with unity because: \(error)\n  message was: \(object)")
        }
        
    }
    private static func sendMsg2Unity(_ message: String) {
        guard let listener = unityListener else {
            Log.error("no listener set, can't comunicate with Unity code")
            return
        }
        listener(message)
    }
    
    
}

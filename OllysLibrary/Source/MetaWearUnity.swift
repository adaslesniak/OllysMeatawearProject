// MetaWearUnity.swift [OllysLibrary] created by: Adas Lesniak on: 30/04/2019
import Foundation
import MetaWear
//#import "UnityInterface.h"

@objc public class MetaWearUnity: NSObject {

    static let kUnityMessageReceiver = "iOSMessageReceiver"
    static let kUnityMessageMethod = "onMessageFromiOS"
    
    enum MessageSubject : String {
        case accelerometerData = "accelerator_measurment"
        case newDevicesFound = "new_devices"
        case knownDevicesFound = "known_devices"
        case simpleMessage = "unspecified"
    }
    
    static func ledColorFromCode(_ colorCode: String) -> LedColor? {
        switch colorCode {
        case "all":
            return .all
        case "blue":
            return .blue
        case "green":
            return .green
        case "red":
            return .red
        default:
            return nil
        }
    }
    
    public typealias Listener = (String, String) -> Void
    private static var unityListener: Listener?
    
    @objc public static func scanForNewDevices() {
        print("MetaWearUnity.scanForNewDevices executing...")
        Devices.scanForNewDevices { newOnes in
            let data = newOnes.map({ $0.key.serialise() })
            sendObj2Unity(["data":data], topic: .newDevicesFound)
            //send2Unity(.newDevicesFound, msg: "hey - this message is received by unity [callback from scanForNewDevices -> \(newOnes.count)]")
        }
    }
    
    @objc public static func scanForKnownDevices() {
        print("MetaWearUnity.scanForKnownDevices executing...")
        Devices.scanForKnownDevices { knownOnes in
            let data = knownOnes.map({ $0.card().serialise() })
            sendObj2Unity(["data" : data], topic: .knownDevicesFound)
            //send2Unity(.knownDevicesFound, msg: "hey - this message is received by unity [callback from scanForKnownDevices -> \(knownOnes.count)]")
        }
    }
    
    @objc public static func setUnityListener(_ code: @escaping Listener) {
        unityListener = code
    }
    
    @objc public static func forgetAllDevices() {
        Devices.forgetRmemberedDevices()
    }
    
    @objc public static func startAccelerometering(_ deviceId:  String) {
        deviceCtrl(deviceId)?.startAccelerometering { measurement in
            sendObj2Unity(measurement.serialize(), topic: .accelerometerData)
        }
    }
    
    @objc public static func stopAccelerometering(_ deviceId: String) {
        deviceCtrl(deviceId)?.stopAccelerometering()
    }
    
    @objc public static func startSensorFusion(_ deviceId:  String) {
        
        //deviceCtrl(deviceId)?.device.sensor
    
        
        
        //deviceCtrl(deviceId)?.startAccelerometering { measurement in
       //     sendObj2Unity(measurement.serialize(), topic: .accelerometerData)
        //}
        print("NOT IMPLEMENTED SENSOR FUSION STUFF!!!")
    }
    
    @objc public static func stopSensorFusion(_ deviceId: String) {
    //    deviceCtrl(deviceId)?.stopAccelerometering()
        //deviceCtrl(deviceId)?.
        print("NOT IMPLEMENTED SENSOR FUSION STUFF!!!")
    }
    
    
    //could add color here but that would be too darn hard
    @objc public static func startFlashing(_ deviceId: String) {
        deviceCtrl(deviceId)?.startFlashing(.green)
    }
    
    @objc public static func startLed(_ deviceId: String, colorsCode: String) {
        guard let colors = ledColorFromCode(colorsCode) else {
            Log.error("wrong colord code send to startLed: \(colorsCode)")
            return
        }
        deviceCtrl(deviceId)?.turnOnLed(colors)
    }
    
    @objc public static func stopLeds(_ deviceId: String, colorsCode: String) {
        print("MetaWearUnity.stopDeviceLeds (is there device?= \(deviceCtrl(deviceId) != nil))")
        guard let colors = ledColorFromCode(colorsCode) else {
            Log.error("wrong color code send to stopLeds: \(colorsCode)")
            return
        }
        deviceCtrl(deviceId)?.turnOffLed(colors)
    }
    
    @objc public static func rememberDevice(_ deviceId: String, as givenName: String) {
        guard let ctrl = deviceCtrl(deviceId) else {
            Log.error("can't remember this device as it's not more anywhere")
            return
        }
        Devices.remember(ctrl, as: givenName)
    }
    
    private static func deviceCtrl(_ withId: String) -> DeviceCtrl? {
        guard let theDevice = Devices.neighbourhood.first(where: { $0.id.uuidString == withId }) else {
            var nearbyIds = "["
            for something in Devices.neighbourhood {
                nearbyIds += "\(something.id.uuidString);  "
            }
            nearbyIds += "]"
            Log.error("device >\(withId)< not found among \(Devices.neighbourhood.count)  nearby devices: \(nearbyIds)")
            return nil
        }
        return theDevice
    }
    
    
    public static func sendAccelerometerData(_ measurment: AccelerometerMeasurment) {
        var json = [String:Any]()
        json["sender"] = measurment.sourceName()
        json["accelX"] = measurment.xAcceleration;
        json["accelY"] = measurment.yAcceleration;
        json["accelZ"] = measurment.zAcceleration;
        let formatter = DateFormatter()
        formatter.dateFormat = "HH:mm:ss.SSS"
        json["when"] = formatter.string(from: measurment.when)
        sendObj2Unity(json, topic: .accelerometerData)
    }
    
    private static func sendObj2Unity(_ object: [String:Any], topic: MessageSubject) {
        do {
            let jsonData = try JSONSerialization.data(withJSONObject: object, options: .prettyPrinted)
            guard let serialised = String(data: jsonData, encoding: .utf8) else {
                throw Exception.error("failed to serialised jsonData")
            }
            send2Unity(topic, msg: serialised)
        } catch {
            Log.error("failed to communicate with unity because: \(error)\n  message was: \(object)")
        }
        
    }
    private static func send2Unity(_ topic: MessageSubject, msg message: String) {
        guard let listener = unityListener else {
            Log.error("no listener set, can't comunicate with Unity code")
            return
        }
        listener(topic.rawValue, message)
    }
    
    
}

// AccelerometerMeasurment.swift [OllysProject] created by: Adas Lesniak on: 15/04/2019
import Foundation
import MetaWear
import MetaWearCpp


@objc public class AccelerometerMeasurment : NSObject {
    public var xAcceleration: Float = 0
    public var yAcceleration: Float = 0
    public var zAcceleration: Float = 0
    
    public var when = Date()
    public var source = UUID() //device
    public func sourceName() -> String {
        return Devices.known.first(where: {$0.id == source})?.name ?? "unknown"
    }
    
    init?(_ dataPtr: UnsafePointer<MblMwData>?, device: MetaWear) {
        do {
            guard let data = dataPtr?.pointee else {
                throw Exception.error("no data")
            }
            guard data.type_id == MBL_MW_DT_ID_CARTESIAN_FLOAT else {
                throw Exception.error("wrong data type: \(data.type_id)")
            }
            let cartesian: MblMwCartesianFloat = data.valueAs()
            self.xAcceleration = cartesian.x
            self.yAcceleration = cartesian.y
            self.zAcceleration = cartesian.z
            self.source = device.peripheral.identifier
            self.when = data.timestamp
        } catch {
            Log.error("couldn't create AccelerometerMeasurment, error: \(error)")
            return nil
        }
    }
    
    public static func ==(lhv: AccelerometerMeasurment, rhv:AccelerometerMeasurment) -> Bool {
        return rhv.source == lhv.source && rhv.when == lhv.when
    }
    
    public override var description: String {
        return "\(sourceName()) at: \(when.toUnityString()) = [\(xAcceleration);  \(yAcceleration);  \(zAcceleration)]"
    }
    
    func serialize() -> [String:Any] {
        return ["device_id":source.uuidString, "when": when.toUnityString(), "x": xAcceleration, "y": yAcceleration, "z": zAcceleration]
    }
}

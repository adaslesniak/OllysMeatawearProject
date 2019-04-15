// AccelerometerMeasurment.swift [OllysProject] created by: Adas Lesniak on: 15/04/2019
import Foundation
import MetaWear
import MetaWearCpp


struct AccelerometerMeasurment : CustomStringConvertible {
    var xAcceleration: Float
    var yAcceleration: Float
    var zAcceleration: Float
    
    var when: Date
    var source: UUID //device
    func sourceName() -> String {
        return Devices.known.first(where: {$0.id == source})?.name ?? "unknown"
    }
    
    init?(_ dataPtr: UnsafePointer<MblMwData>?) {
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
            self.source = UUID()
            //self.source = device.peripheral.identifier
            self.when = data.timestamp
        } catch {
            Log.error("couldn't create AccelerometerMeasurment, error: \(error)")
            return nil
        }
    }
    
    static func ==(lhv: AccelerometerMeasurment, rhv:AccelerometerMeasurment) -> Bool {
        return rhv.source == lhv.source && rhv.when == lhv.when
    }
    
    var description: String {
        let formatter = DateFormatter()
        formatter.dateFormat = "HH:mm:ss:mmm"
        return "\(sourceName()) at: \(formatter.string(from: when)) = [\(xAcceleration);  \(yAcceleration);  \(zAcceleration)]"
    }
}

// DeviceCard.swift [OllysProject] created by: Adas Lesniak on: 05/04/2019 
import MetaWear
import Foundation


class DeviceCard : CustomStringConvertible, Hashable {
    let name: String
    let serialNumber: String
    var signal: (when: Date, strength: Int)? = nil
    
    init(name: String, serial: String) {
        self.name = name
        self.serialNumber = serial
    }
    
    static func == (_ lhv: DeviceCard, _ rhv: DeviceCard) -> Bool {
        return lhv.serialNumber == rhv.serialNumber
    }
    
    var description: String {
        return "\(name)(\(serialNumber)) RRSI: \(signal?.strength.description ?? "unknown")"
    }
    
    func hash(into hasher: inout Hasher) {
        hasher.combine(serialNumber)
    }
}

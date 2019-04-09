// DeviceCard.swift [OllysProject] created by: Adas Lesniak on: 05/04/2019 
import MetaWear
import Foundation


//IMPORTANT NOTE: this card will look differnt for the same device on different phones, as apple generates different uuid's (but on the same phone works fine)
class DeviceCard : CustomStringConvertible, Hashable {
    let name: String
    let id: UUID
    var signal: (when: Date, strength: Int)? = nil
    
    init(name: String, id: UUID, serial: String? = nil) {
        self.name = name
        self.id = id
    }
    
    //326A9000-85CB-9195-D9DD-464CFBBAE75A - that is my device thing
    static func == (_ lhv: DeviceCard, _ rhv: DeviceCard) -> Bool {
        return lhv.id == rhv.id
    }
    
    var description: String {
        return "\(name)(\(id)) RRSI: \(signal?.strength.description ?? "unknown")"
    }
    
    func hash(into hasher: inout Hasher) {
        hasher.combine(id)
    }
}

// DeviceCard.swift [OllysProject] created by: Adas Lesniak on: 05/04/2019 
import Foundation


//IMPORTANT NOTE: this card will look differnt for the same device on different phones, as apple generates different uuid's (but on the same phone works fine)
public class DeviceCard : CustomStringConvertible, Hashable {
    public let name: String
    public let id: UUID
    public var signal: (when: Date, strength: Int)? = nil
    
    public init(name: String, id: UUID, serial: String? = nil) {
        self.name = name
        self.id = id
    }
    
    //326A9000-85CB-9195-D9DD-464CFBBAE75A - that is my device thing
    public static func == (_ lhv: DeviceCard, _ rhv: DeviceCard) -> Bool {
        return lhv.id == rhv.id
    }
    
    public var description: String {
        return "\(name)(\(id)) RRSI: \(signal?.strength.description ?? "unknown")"
    }
    
    public func hash(into hasher: inout Hasher) {
        hasher.combine(id)
    }
}

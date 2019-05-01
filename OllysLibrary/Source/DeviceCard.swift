// DeviceCard.swift [OllysProject] created by: Adas Lesniak on: 05/04/2019 
import Foundation


@objc public class LastSignal: NSObject {
    @objc public let when: Date
    @objc public let strength: Int
    public init(_ when: Date, strength: Int) {
        self.when = when
        self.strength = strength
    }
}

//NOTE: this card will look differnt for the same device on different phones, as apple generates different uuid's (but on the same phone works fine)
@objc public class DeviceCard : NSObject {
    @objc public let name: String
    @objc public let id: UUID
    @objc public var signal: LastSignal? //: (when: Date, strength: Int)? = nil
    
    @objc public init(name: String, id: UUID, serial: String? = nil) {
        self.name = name
        self.id = id
    }
    
    public static func == (_ lhv: DeviceCard, _ rhv: DeviceCard) -> Bool {
        return lhv.id == rhv.id
    }
    
    public override var description: String {
        return "\(name)(\(id)) RRSI: \(signal?.strength.description ?? "unknown")"
    }
    
    func serialise() -> [String:Any] {
        return ["name":name, "id":id.uuidString, "signalStrength": signal?.strength ?? -255, "signalTime": "unimplemented"]
    }
    
    /* damn crap wiht those objective-c requriements for exporting something
    public override func hash(into hasher: inout Hasher) {
        hasher.combine(id)
    }*/
}

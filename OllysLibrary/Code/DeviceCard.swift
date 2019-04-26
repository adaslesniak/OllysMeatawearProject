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

//IMPORTANT NOTE: this card will look differnt for the same device on different phones, as apple generates different uuid's (but on the same phone works fine)
@objc public class DeviceCard : NSObject {
    @objc public let name: String
    @objc public let id: UUID
    @objc public var signal: LastSignal? //: (when: Date, strength: Int)? = nil
    
    @objc public init(name: String, id: UUID, serial: String? = nil) {
        self.name = name
        self.id = id
    }
    
    //326A9000-85CB-9195-D9DD-464CFBBAE75A - that is my device thing
    public static func == (_ lhv: DeviceCard, _ rhv: DeviceCard) -> Bool {
        return lhv.id == rhv.id
    }
    
    public override var description: String {
        return "\(name)(\(id)) RRSI: \(signal?.strength.description ?? "unknown")"
    }
    
    /* damn crap wiht those objective-c requriements for exporting something
    public override func hash(into hasher: inout Hasher) {
        hasher.combine(id)
    }*/
}

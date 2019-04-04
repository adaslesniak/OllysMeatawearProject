// DevicesScanner.swift [OllysProject] created by: Adas Lesniak on: 04/04/2019
import MetaWear
import Foundation


class Devices {

    private static var _known: [DeviceCard] = {
        //TODO: implement reading it from some persistent memory
        return []
    }()
    static var known: [DeviceCard] { return _known }
    //private static var nearby = [DeviceCard:MetaWear]()
    
    private static var listeners = [() -> Void]()
    
    
    public static func scanArea(_ whendDone: @escaping ([DeviceCard:MetaWear]) -> Void) {
        var nearby = [DeviceCard:MetaWear]()
        var requestPending = 0
        MetaWearScanner.shared.startScan(allowDuplicates: true) { device in
            guard device.rssi > -80 else {
                return //signal too weak
            }
            requestPending += 1
            device.createCard(name: "") { info in
                if let named = known.first(where: { $0 == info }) {
                    Log.add("found known device: \(named)", on: .bluetooth)
                    nearby[named] = device
                } else {
                    Log.add("found new nearby device: \(info)", on: .bluetooth)
                    nearby[info] = device
                }
                
                requestPending -= 1
                if requestPending == 0 {
                    whendDone(nearby)
                }
            }
        }
    }
    
}

// DevicesScanner.swift [OllysProject] created by: Adas Lesniak on: 04/04/2019
import MetaWear
import Foundation


class Devices {

    private static var _known: [DeviceCard] = {
        //TODO: implement reading it from some persistent memory
        return []
    }()
    static var known: [DeviceCard] { return _known }
    private static var listeners = [() -> Void]()
    
    
    public static func scanArea(_ whendDone: @escaping ([DeviceCard:MetaWear]) -> Void) {
        var nearby = [DeviceCard:MetaWear]()
        var requestPending = 0
        MetaWearScanner.shared.startScan(allowDuplicates: true) { device in
            guard device.rssi > -80 else {
                return //signal too weak
            }
            requestPending += 1
            //TODO: refactor it - can be done synchronously and should be DeviceCard(about: device)
            device.createCard() { info in
                if let named = known.first(where: { $0 == info }) {
                    Log.add("found known device: \(named)", on: .bluetooth)
                    nearby[named] = device
                } else {
                    Log.add("found new device: \(info)", on: .bluetooth)
                    nearby[info] = device
                    
                }
                
                requestPending -= 1
                if requestPending == 0 {
                    MetaWearScanner.shared.stopScan() //that is buggy name - scan is singular - should be startScanning and stopScanning if it's continuus process
                    whendDone(nearby)
                }
            }
        }
    }
    
    
    public static func remember(_ toBeRemembered: MetaWear, as givenName: String) {
        print("\n >>> WRONG <<<\n")
        toBeRemembered.createCard() { card in
            _known.append(card)
            //TODO: save this to some persistent storage
        }
    }
    
}

// DevicesScanner.swift [OllysProject] created by: Adas Lesniak on: 04/04/2019
import MetaWear
import Foundation


class Devices {
    
    internal private(set) static var nearby = [MetaWear]()
    internal private(set) static var paired = [MetaWear]()
    internal private(set) static var connected = [MetaWear]()
    
    private static var listeners = [() -> Void]()
    
    
    public static func scanAreaForNewDevices() {
        MetaWearScanner.shared.startScan(allowDuplicates: true) { device in
            guard device.rssi > -80 else {
                return //signal too weak
            }
            guard !connected.contains(device) else {
                return //already connected
            }
            device.connectAndSetup().continueWith { task in
                guard task.error == nil else {
                    
                }
                
            }
        }
    }
    
    private static var scanner: MetaWearScanner = {
        let scnr = MetaWearScanner.shared
        scnr.startScan(allowDuplicates: false, callback: onDeviceFound)
        return scnr
    }()
    
    
    private static func onDeviceFound(_ device: Any) {
        nearby.append(device)
    }
}

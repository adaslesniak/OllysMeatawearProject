// MetaWear+.swift [OllysProject] created by: Adas Lesniak on: 05/04/2019 
import MetaWear
import Foundation


extension MetaWear {
    
    func createCard(name: String, whenReady: (DeviceCard) -> Void) {
        self.readSerialNumber().continueWith { task in
            guard task.error == nil else {
                Log.error("failed to read serial number")
                return
            }
            guard let sn = task.result else {
                Log.error("no serial number")
                return
            }
            let card = DeviceCard(name: name, serial: sn)
            card.rrsi = (Date(), self.rssi)
        }
    }
    
}

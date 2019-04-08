// MetaWear+.swift [OllysProject] created by: Adas Lesniak on: 05/04/2019 
import MetaWear
import MetaWearCpp
import Foundation


extension MetaWear {
    
    func createCard(whenReady: @escaping (DeviceCard) -> Void) {
        let card = DeviceCard(name: self.name, id: self.peripheral.identifier)
        card.signal = (Date(), rssi)
        whenReady(card)
        return
    }
    
}

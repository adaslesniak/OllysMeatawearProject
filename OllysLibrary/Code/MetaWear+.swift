// MetaWear+.swift [OllysProject] created by: Adas Lesniak on: 05/04/2019 
import MetaWear
import Foundation


extension MetaWear {
    
    func createCard() -> DeviceCard {
        let card = DeviceCard(name: self.name, id: self.id)
        card.signal = LastSignal(Date(), strength: rssi) //(Date(), rssi)
        return card
    }
    
    var id: UUID { return peripheral.identifier }
    
}

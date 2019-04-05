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
    
    
    func flashGreen() {
        Log.add("flashing green...")
        var pattern = MblMwLedPattern()
        /*mbl_mw_led_load_preset_pattern(&pattern, MBL_MW_LED_PRESET_PULSE)
        mbl_mw_led_stop_and_clear(self.board)
        mbl_mw_led_write_pattern(self.board, &pattern, MBL_MW_LED_COLOR_GREEN)
        mbl_mw_led_play(self.board)*/
        Log.add("...flash green command send")
    }
    
}

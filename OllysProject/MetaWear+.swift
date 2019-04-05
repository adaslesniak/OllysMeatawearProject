// MetaWear+.swift [OllysProject] created by: Adas Lesniak on: 05/04/2019 
import MetaWear
import MetaWearCpp
import Foundation


extension MetaWear {
    
    func createCard(name: String, whenReady: @escaping (DeviceCard) -> Void) {
        self.readSerialNumber().continueWith { task in
            do {
                guard task.error == nil else {
                    throw Exception.error("failed to read serial number: \(task.error!)")
                }
                guard let sn = task.result else {
                    throw Exception.error("no serial number")
                }
                let card = DeviceCard(name: name, serial: sn)
                card.signal = (Date(), self.rssi)
                whenReady(card)
            } catch {
                Log.error("couldn't create card: \(error)")
            }
        }
    }
    
    
    func flashGreen() {
        var pattern = MblMwLedPattern()
        mbl_mw_led_load_preset_pattern(&pattern, MBL_MW_LED_PRESET_PULSE)
        mbl_mw_led_stop_and_clear(self.board)
        mbl_mw_led_write_pattern(self.board, &pattern, MBL_MW_LED_COLOR_GREEN)
        mbl_mw_led_play(self.board)
    }
    
}

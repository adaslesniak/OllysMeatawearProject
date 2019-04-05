// MetaWear+.swift [OllysProject] created by: Adas Lesniak on: 05/04/2019 
import MetaWear
import MetaWearCpp
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
            card.signal = (Date(), self.rssi)
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

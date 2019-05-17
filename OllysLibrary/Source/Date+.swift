// Date+.swift [OllysLibrary] created by: Adas Lesniak on: 17/05/2019
import Foundation

extension Date {
    func toUnityString() -> String {
        let formatter = DateFormatter()
        formatter.dateFormat = "HH:mm:ss.SSS"
        return formatter.string(from: self)
    }
}

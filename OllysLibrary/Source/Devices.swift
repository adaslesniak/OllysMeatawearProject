// DevicesScanner.swift [OllysProject] created by: Adas Lesniak on: 04/04/2019
import MetaWear
import Foundation


@objc public class Devices: NSObject {

    @objc public static private(set) var known: [DeviceCard] = []
    @objc public private(set) static var available = [DeviceCtrl]()
    private static var _known: [MetaWear]?
    private static var listeners = [() -> Void]()
    private static var names = PersistentDictionary("saved_devices")
    static private(set) var neighbourhood = [DeviceCtrl]()
    
    public static func forgetRmemberedDevices() {
        Log.printDevices(Devices.known, header: "devices known before forgetting")
        MetaWearScanner.shared.retrieveSavedMetaWearsAsync().continueWith { task in
            guard task.error == nil else {
                Log.error("failed forgetting: \(task.error!)")
                return
            }
            task.result?.forEach({ $0.forget() })
            known = []
            available = []
            Log.debug("all devices forgotten")
        }
    }
    
    private static var isLoadingSavedDevices: Bool = false //true means not finished, but started
    @objc public static func loadSavedDevices() {
        guard !isLoadingSavedDevices else {
            Log.error("can't load saved devices while already loading them")
            return //initialisation already in progress
        }
        isLoadingSavedDevices = true
        MetaWearScanner.shared.retrieveSavedMetaWearsAsync().continueWith { callback in
            defer {
                updateCardsOfKnownDevices()
            }
            do {
                guard callback.error == nil else {
                    throw Exception.error("failed to retrive saved metawears")
                }
                guard let result = callback.result else {
                    throw Exception.error("got no devices")
                }
                _known = result
                Log.debug("loaded: \(result.count) saved devices")
            } catch {
                Log.debug("didn't load saved devices because: \(error)")
                _known = []
            }
        }
    }

    private static func updateCardsOfKnownDevices() {
        var cards = [DeviceCard]()
        guard let devices = _known else {
            Log.error("can't prepare cards while there are no devices")
            loadSavedDevices()
            return
        }
        for thingie in devices {
            let deviceId = thingie.peripheral.identifier
            if let saved = names[deviceId.uuidString] as? String {
                cards.append(DeviceCard(name: saved, id: deviceId))
            } else {
                cards.append(thingie.createCard())
            }
        }
        known = cards
        isLoadingSavedDevices = false
    }
    
    
    //TODO: refactor:
    public static func scanForKnownDevices(_ whenDone: @escaping ([DeviceCtrl]) -> Void) {
        var accessible = [DeviceCtrl]()
        var isDoneWithOtherThing = false //TODO: find better name - it means that we have 2 async queries and if both returns then only we are done and good to call back
        func tryCallback() {
            if !isDoneWithOtherThing {
                isDoneWithOtherThing = true
                return
            }
            Log.debug("scanned \(accessible.count) devices (connected or available for connection)")
            whenDone(accessible)
        }
        
        MetaWearScanner.shared.retrieveConnectedMetaWearsAsync().continueWith { result in
            guard result.error == nil else {
                Log.error("failed to retrive connected devices: \(result.error!)")
                return
            }
            guard let devices = result.result else {
                Log.error("failed when retriving connected devices")
                return
            }
            devices.forEach({ sensor in
                let savedName = known.first(where: {$0.id == sensor.id })?.name
                accessible.append(DeviceCtrl(sensor, as: savedName))
            })
            Log.debug("there were \(devices.count) connected devices")
            tryCallback()
        }
        scanForNearbyDevices { detected in
            for found in detected {
                if let info = known.first(where: {$0.id == found.id}) {
                    accessible.append(DeviceCtrl(found.device, as: info.name))
                } else {
                    var knownDscr = "known id's: "
                    known.forEach({ knownDscr += "\($0.id); " })
                    Log.debug("found some unknown device (\(found.id)) while scanning for \(known.count) known ones: [\(knownDscr)]")
                }
            }
            tryCallback()
        }
    }
    
    private static func scanForNearbyDevices(_ whenDone: @escaping ([DeviceCtrl]) -> Void) {
        var actualNeraby = [MetaWear]()
        var requestsPending = 0
        var timeout = 1.9
        func finishScan() {
            MetaWearScanner.shared.stopScan()
            let detected = actualNeraby.map({ return DeviceCtrl($0) })
            neighbourhood = detected //keeping reference to self, but then it's static class
            whenDone(detected)
            timeout = -1 //invalid
        }
        MetaWearScanner.shared.startScan(allowDuplicates: false) { found in
            if actualNeraby.contains(found) {
                return
            }
            requestsPending += 1
            if found.rssi < -88 {
                Log.debug("found weak(\(found.rssi)) signal from: \(found.id.description)")
            } else {
                actualNeraby.append(found)
            }
            guard timeout > 0 else {
                return
            }
            ExecuteInBackground(after: 0.56) {
                requestsPending -= 1
                if requestsPending == 0 {
                    finishScan()
                }
            }
        }
        ExecuteInBackground(after: timeout) {
            guard timeout > 0 else {
                return
            }
            finishScan()
        }
    }
    
    public static func scanForNewDevices(_ whendDone: @escaping ([DeviceCard:DeviceCtrl]) -> Void) {
        scanForNearbyDevices { detected in
            var newDevices = [DeviceCard:DeviceCtrl]()
            for found in detected {
                if !known.contains(where: { $0.id == found.id }) {
                    let info = found.device.createCard()
                    newDevices[info] = found
                }
            }
            whendDone(newDevices)
        }
    }
    
    
    public static func remember(_ toBeRemembered: DeviceCtrl, as givenName: String) {
        toBeRemembered.device.remember() //that is stupid - it should never be called on device
        names[toBeRemembered.device.peripheral.identifier.uuidString] = givenName
        _known?.append(toBeRemembered.device)
        updateCardsOfKnownDevices()
        Log.debug("rememered device: \(givenName) [id: \(toBeRemembered.id)]")
    }
    
}

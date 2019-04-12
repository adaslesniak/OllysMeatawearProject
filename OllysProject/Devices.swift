// DevicesScanner.swift [OllysProject] created by: Adas Lesniak on: 04/04/2019
import MetaWear
import Foundation


class Devices {

    static var known: [DeviceCard] { return [] }
    private static var _known: [MetaWear]?
    private static var listeners = [() -> Void]()
    private static var names = PersistentDictionary("saved_devices")
    
    
    public static func debugForgetRmemberedDevices() {
        Log.warning("DEBUG MODE - claning devices list to test again")
        Log.printDevices(Devices.known, header: "known before debug forgetting")
        MetaWearScanner.shared.retrieveSavedMetaWearsAsync().continueWith { task in
            guard task.error == nil else {
                Log.error("failed forgetting: \(task.error!)")
                return
            }
            task.result?.forEach({ $0.forget() })
            Log.debug("all devices forgotten")
        }
    }
    
    private static var isLoadingSavedDevices: Bool = false //false means not yet, but started
    public static func loadSavedDevices() {
        guard !isLoadingSavedDevices else {
            Log.error("can't load saved devices while already loading them")
            return //initialisation already in progress
        }
        isLoadingSavedDevices = true
        MetaWearScanner.shared.retrieveSavedMetaWearsAsync().continueWith { callback in
            defer {
                prepareCardsOfKnownDevices()
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

    private static func prepareCardsOfKnownDevices() {
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
        isLoadingSavedDevices = false
    }
    
    
    public static func scanArea(_ whendDone: @escaping ([DeviceCard:MetaWear]) -> Void) {
        var nearby = [DeviceCard:MetaWear]()
        var requestPending = 0
        MetaWearScanner.shared.startScan(allowDuplicates: true) { device in
            if nearby.keys.contains(device.createCard()) {
                Log.debug("duplicated find in nearby devices: \(device.name)")
                return
            }
            requestPending += 1
            if device.rssi < -80 {
                Log.debug("found some weak signal \(device.rssi) from: \(device.id)")
            } else {
                //TODO: refactor it - can be done synchronously and should be DeviceCard(about: device)
                let info = device.createCard()
                if let named = known.first(where: { $0 == info }) {
                    Log.debug("found known device: \(named)", on: .bluetooth)
                    nearby[named] = device
                } else {
                    Log.debug("found new device: \(info)", on: .bluetooth)
                    nearby[info] = device
                }
            }
            ExecuteInBackground(after: 0.66) { //give  time to find other devices
                requestPending -= 1
                if requestPending == 0 {
                    MetaWearScanner.shared.stopScan() //that is buggy name - scan is singular - should be startScanning and stopScanning if it's continuus process
                    Log.printDevices(Array(nearby.keys), header: "\(nearby.count) reachable devices")
                    whendDone(nearby)
                }
            }
        }
    }
    
    
    public static func remember(_ toBeRemembered: MetaWear, as givenName: String) {
        toBeRemembered.remember() //that is stupid - it should never be called on device
        names[toBeRemembered.peripheral.identifier.uuidString] = givenName
        //prepareCardsOfKnownDevices()
    }
    
}

// DeviceCtrl.swift [OllysProject] created by: Adas Lesniak on: 11/04/2019 
import MetaWear
import MetaWearCpp
import BoltsSwift
import Foundation


//wrapper around MetaWear with api limited to this project functionality
class DeviceCtrl: CustomStringConvertible {
    
    public let device: MetaWear
    internal private(set) var name: String
    private var ledsCtrl: LedCtrl! //should be let, but can't initialize properly then
    
    var id: UUID { return device.peripheral.identifier }
    
    
    init(_ device: MetaWear, as name: String? = nil) {
        self.device = device
        self.name = name ?? device.name
        self.ledsCtrl = LedCtrl(self)
    }
    
    private class AccelerometerListenerObj : Any {
        var signal: OpaquePointer
        var callback: (UnsafePointer<MblMwData>?) -> Void
        init(_ withSinal: OpaquePointer, withCallback: @escaping (UnsafePointer<MblMwData>?) -> Void) {
            signal = withSinal
            callback = withCallback
        }
    }
    
    private var accelerometerListener: AccelerometerListenerObj? = nil
    var isAccelerometering: Bool { return accelerometerListener != nil }
    func startAccelerometering(_ listener: @escaping (AccelerometerMeasurment) -> Void) {
        guard !isAccelerometering else {
            return
        }
        mbl_mw_acc_set_range(device.board, 8.0)
        mbl_mw_acc_write_acceleration_config(device.board)
        let signal: OpaquePointer = mbl_mw_acc_get_acceleration_data_signal(device.board)
        accelerometerListener = AccelerometerListenerObj(signal) { [weak self] dataPtr in
            guard let self = self, let data = AccelerometerMeasurment(dataPtr, device: self.device) else {
                return
            }
            listener(data)
        }
        mbl_mw_datasignal_subscribe(signal, bridge(obj: accelerometerListener!)) { (context, dataPtr) in
            let listener: AccelerometerListenerObj = bridge(ptr: context!)
            listener.callback(dataPtr)
        }
        mbl_mw_acc_enable_acceleration_sampling(device.board)
        mbl_mw_acc_start(device.board)
    }
    func stopAccelrometering() {
        mbl_mw_acc_stop(device.board)
        mbl_mw_acc_disable_acceleration_sampling(device.board);
        mbl_mw_datasignal_unsubscribe(accelerometerListener?.signal)
        accelerometerListener = nil
    }
    
    func disconnect() {
        device.cancelConnection()
    }
    
    func connect(_ whenReady: Action? = nil) {
        if isConnected {
            whenReady?()
        } else {
            device.connectAndSetup().continueWith { [weak self] answer in
                guard let self = self else {
                    return
                }
                guard answer.error == nil else {
                    Log.error("couldn't connect to device(\(self.name). error: \(answer.error!))")
                    return
                }
                whenReady?()
            }
        }
    }
    
    var isConnected: Bool { return device.isConnectedAndSetup }

    
    func startFlashing(_ color: LedColor) {
        ledsCtrl.startFlashing(color)
    }
    func turnOnLed(_ color: LedColor) {
        ledsCtrl.turnOnLed(color)
    }
    func turnOffLed(_ color: LedColor = .all) {
        ledsCtrl.turnOffLed(color)
    }
    
    
    var description: String {
        return "[\(device.name): \(device.peripheral.identifier)]"
    }
}

extension String.StringInterpolation {
    mutating func appendInterpolation(_ value: DeviceCtrl?) {
        if let theValue = value {
            appendLiteral(theValue.description)
        } else {
            appendLiteral("nil")
        }
    }
}

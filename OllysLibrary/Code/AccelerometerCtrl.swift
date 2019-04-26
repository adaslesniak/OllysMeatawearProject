// AccelerometerCtrl.swift [OllysProject] created by: Adas Lesniak on: 15/04/2019 
import Foundation
import MetaWear
import MetaWearCpp

class AccelerometerCtrl: NSObject {
    
    private let ctrl: DeviceCtrl
    
    public init(_ device: DeviceCtrl) {
        ctrl = device
    }
    deinit {
        stopAccelrometering()
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
        mbl_mw_acc_set_range(ctrl.device.board, 8.0)
        mbl_mw_acc_write_acceleration_config(ctrl.device.board)
        let signal: OpaquePointer = mbl_mw_acc_get_acceleration_data_signal(ctrl.device.board)
        accelerometerListener = AccelerometerListenerObj(signal) { [weak self] dataPtr in
            guard let self = self, let data = AccelerometerMeasurment(dataPtr, device: self.ctrl.device) else {
                return
            }
            listener(data)
        }
        mbl_mw_datasignal_subscribe(signal, bridge(obj: accelerometerListener!)) { (context, dataPtr) in
            let listener: AccelerometerListenerObj = bridge(ptr: context!)
            listener.callback(dataPtr)
        }
        mbl_mw_acc_enable_acceleration_sampling(ctrl.device.board)
        mbl_mw_acc_start(ctrl.device.board)
    }
    func stopAccelrometering() {
        mbl_mw_acc_stop(ctrl.device.board)
        mbl_mw_acc_disable_acceleration_sampling(ctrl.device.board);
        mbl_mw_datasignal_unsubscribe(accelerometerListener?.signal)
        accelerometerListener = nil
    }
}

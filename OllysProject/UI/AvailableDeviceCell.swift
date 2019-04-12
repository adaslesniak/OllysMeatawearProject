// AvailableDeviceCellTableViewCell.swift [OllysProject] created by: Adas Lesniak on: 12/04/2019 
// Copyright ©Aulendil   All rights reserved.

import UIKit

class AvailableDeviceCell: UITableViewCell {
    
    @IBOutlet weak var title: UILabel!
    @IBOutlet weak var id: UILabel!
    @IBOutlet weak var isRed: ToggleView!
    @IBOutlet weak var isBlue: ToggleView!
    @IBOutlet weak var isSensorFusing: ToggleView!
    @IBOutlet weak var isAccelerometering: ToggleView!
    
    private var controlled: DeviceCtrl?
    
    static let reuseId = "available_device_cell"
    
    override init(style: UITableViewCell.CellStyle, reuseIdentifier: String?) {
        super.init(style: style, reuseIdentifier: reuseIdentifier)
        //backgroundColor = UIColor.red
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        //backgroundColor = UIColor.yellow
    }
    
    override func prepareForReuse() {
        clearDeviceConnection()
    }
    
    deinit {
        clearDeviceConnection()
    }
    
    
    private func clearDeviceConnection() {
        //TODO: make sure all light are off and... just leave device clean
        controlled?.stopFlashing()
        controlled?.device.turnOffLed()
        controlled?.disconnect()
        controlled = nil
    }
    
    func setup(_ withDevice: DeviceCtrl) {
        Log.debug("setting up cell for device: \(withDevice.device.name)")
        controlled = withDevice
        title.text = withDevice.name
        id.text = withDevice.id.description
        isRed.setAction { [weak self] isOn in
            self?.controlled?.connect {
                if isOn {
                    self?.controlled?.turnOnLed(.red)
                } else {
                    self?.controlled?.turnOfLed(.red)
                }
            }
            print("isRed?= \(isOn)")
        }
        isBlue.setAction { [weak self] isOn in
            self?.controlled?.connect {
                if isOn {
                    self?.controlled?.startFlashing(.blue)
                } else {
                    self?.controlled?.stopFlashing(.blue)
                }
            }
            print("isBlue: \(isOn)")
        }
        isSensorFusing.setAction { [weak self] isOn in
            print("isSensorFusing: \(isOn)")
        }
        isAccelerometering.setAction { [weak self] isOn in
            print("isAccelerometering: \(isOn)")
        }
        withDevice.connect()
    }
    
    
    func describeSubviews() -> String {
        var dscr = "subviews: "
        func viewDscr(_ uiView: UIView, address: [Int]) -> String {
            var name = ""
            address.forEach({name += "\($0)-" })
            return "[\(name) \(type(of: uiView))]"
        }
        for sub in subviews.enumerated() {
            let subName = viewDscr(sub.element, address: [sub.offset])
            dscr.append(subName)
            for ssub in sub.element.subviews.enumerated() {
                let ssubName = viewDscr(ssub.element, address: [sub.offset, ssub.offset])
                dscr.append(ssubName)
            }
        }
        return dscr
    }
    
    
    //TODO: clean up connection whe prepparing for reuse
    
}

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
         backgroundColor = UIColor.red
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        backgroundColor = UIColor.yellow
    }
    
    override func prepareForReuse() {
        print("preparing device cell for reuse")
        backgroundColor = UIColor.gray
    }
    
    
    func setup(_ withDevice: DeviceCtrl) {
        Log.debug("setting up cell for device: \(withDevice.device.name)")
        controlled = withDevice
        //TODO: setup can be called before view is ready
        ExecuteOnMain(after: 0.3) {
            self.title?.text = withDevice.device.name
            self.id?.text = withDevice.device.id.description
            self.backgroundColor = UIColor.blue
        }

    }
    
    
    
    //TODO: clean up connection whe prepparing for reuse
    
}

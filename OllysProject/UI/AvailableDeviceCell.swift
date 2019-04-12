// AvailableDeviceCellTableViewCell.swift [OllysProject] created by: Adas Lesniak on: 12/04/2019 
// Copyright ©Aulendil   All rights reserved.

import UIKit

class AvailableDeviceCell: UITableViewCell {
    
    /*@IBOutlet weak var title: UILabel!
    @IBOutlet weak var id: UILabel!
    @IBOutlet weak var isRed: ToggleView!
    @IBOutlet weak var isBlue: ToggleView!
    @IBOutlet weak var isSensorFusing: ToggleView!
    @IBOutlet weak var isAccelerometering: ToggleView!*/
    
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
        print("preparing device cell for reuse")
        //backgroundColor = UIColor.gray
    }
    
    override func awakeFromNib() {
        print("\n >>> CELL AWOKEN <<< \n   [subviews: \(subviews.count)]\n")
    }
    
    
    func setup(_ withDevice: DeviceCtrl) {
        Log.debug("setting up cell for device: \(withDevice.device.name)")
        controlled = withDevice
        //TODO: setup can be called before view is ready
        print("cell subviews: \(describeSubviews())")
        ExecuteOnMain(after: 0.3) {
            //print("is there title label?= \(self.title != nil) [\(self.describeSubviews())]")
            //self.title?.text = withDevice.device.name
            //self.id?.text = withDevice.device.id.description
            //self.backgroundColor = UIColor.blue
        }

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

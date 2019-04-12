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
    
    static let reuseId = "available_device_cell"
    
    
    static func nib() -> UINib {
        return UINib(nibName: "AvailableDeviceCell", bundle: nil)
    }
    

    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }
    

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }
    
}

// CircleView.swift [OllysProject] created by: Adas Lesniak on: 09/04/2019
import UIKit

//TODO:  make those colors/size IBInspectable
public class CircleView : UIView {
    
    public private(set) var border: UIColor = UIColor.clear
    public private(set) var borderSize01: Float = 0 //0 means border is 0 * radious; 1 means border is full circle
    
    
    public override init(frame: CGRect) {
        super.init(frame: frame)
        circluarize()
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        circluarize()
    }
    
    private func circluarize() {
        layer.masksToBounds = true
        self.clipsToBounds = true
        layer.cornerRadius = min(frame.width, frame.height) / 2
        layer.borderColor = border.cgColor
        layer.borderWidth = layer.cornerRadius * CGFloat(borderSize01)
    }
    
    public func adjust(border: UIColor? = nil, center: UIColor? = nil, borderSize01: Float? = nil) {
        if let theBorder = border {
            self.border = theBorder
        }
        if let theCenter = center {
            self.backgroundColor = theCenter
        }
        if let size = borderSize01 {
            self.borderSize01 = size
        }
        circluarize()
    }
    
    
}

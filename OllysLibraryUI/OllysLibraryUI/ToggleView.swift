// ToggleView.swift [OllysProject] created by: Adas Lesniak on: 12/04/2019
import UIKit
import OllysLibrary //just to import SwiftSugar


class ToggleView: UILabel {
    
    private var listener: BoolAction? //FIXME: that is ugly that it's exposed to everyone to change it
    public private(set) var isOn = false
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        setView()
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        setView()
    }
    
    public func setAction(_ action: @escaping BoolAction) {
        listener = action
        self.addAction(.tap) { [weak self] in//addAction is missleading name - it's setAction (there is only one)
            self?.toggle()
            self?.listener?(self!.isOn)
        }
    }
    
    
    public func toggle(to state: Bool? = nil) {
        isOn = state ?? !isOn
        setView()
        
    }
    
    private func setView() {
        //not TODO: this is slow, some of this could be done only once on viewDidLoad, but... it's not crucial
        layer.cornerRadius = frame.height * 0.25
        layer.masksToBounds = true
        layer.borderWidth = frame.height * 0.05
        
        layer.borderColor = (isOn ? UIColor.blue : UIColor.gray).cgColor
        textColor = isOn ? UIColor.blue : UIColor.gray
    }
    
    
}

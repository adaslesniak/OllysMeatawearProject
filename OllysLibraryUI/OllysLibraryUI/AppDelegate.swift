// AppDelegate.swift [] created by: Adas Lesniak on: 04/04/2019
import UIKit
import OllysLibrary

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    var window: UIWindow?
    
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        Devices.loadSavedDevices() //that is important
        window = UIWindow(frame: UIScreen.main.bounds)
        window?.rootViewController = HomeViewCtrl.instantiate()
        window?.makeKeyAndVisible()
        return true
    }
    
    func applicationWillTerminate(_ application: UIApplication) {
        // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    }
    
    
}


#import <OllysLibrary/OllysLibrary-Swift.h>
#import <Foundation/Foundation.h>

#pragma mark - C interface

extern "C" {

    
    void ios_scanForNewDevices() {
        printf("scanning for new devices... objc++ code");
        [MetaWearUnity scanForNewDevices];
    }
    
    void ios_scanForKnownDevices() {
        printf("scanning for known devices... objc++ code");
        [MetaWearUnity scanForKnownDevices];
    }
    
    void ios_startFlashingDevice(const char* deviceId) {
        NSString* deviceIdString = [NSString stringWithCString:deviceId encoding:NSUTF8StringEncoding];
        printf("should start flashing device: %s", [deviceIdString cStringUsingEncoding:NSUTF8StringEncoding]);
    }
    
    typedef void (*CallbackListener)(const char* message);
    void ios_setCallbackReceiver(CallbackListener listener) {
        [MetaWearUnity setUnityListener: ^(NSString* message) {
            listener([message cStringUsingEncoding:NSUTF8StringEncoding]);
        }];
    }
}

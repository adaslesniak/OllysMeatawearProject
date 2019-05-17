#import <OllysLibrary/OllysLibrary-Swift.h>
#import <Foundation/Foundation.h>

#pragma mark - C interface

NSString* iosString(const char* cString) {
    return [NSString stringWithCString:cString encoding:NSUTF8StringEncoding];
}

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
        printf("ios_startFlashingDevice");
        [MetaWearUnity startFlashing:iosString(deviceId)];
    }
    
    void ios_turnDeviceLedOn(const char* deviceId, const char* colorsCode) {
        printf("ios_turnDeviceLedOn");
        [MetaWearUnity startLed:iosString(deviceId) colorsCode:iosString(colorsCode)];
    }
    
    void ios_stopDeviceLeds(const char* deviceId, const char* colorsCode) {
        printf("ios_stopDeviceLeds executed");
        [MetaWearUnity stopLeds:iosString(deviceId) colorsCode:iosString(colorsCode)];
    }
    
    void ios_startAccelerometering(const char* deviceId) {
        [MetaWearUnity startAccelerometering:iosString(deviceId)];
    }
    
    void ios_stopAccelerometering(const char* deviceId) {
        [MetaWearUnity stopAccelerometering:iosString(deviceId)];
    }
    
    void ios_rememberDevice(const char* deviceId, const char* name) {
        printf("ios_rememberDevice: %s", deviceId);
        [MetaWearUnity rememberDevice:iosString(deviceId) as:iosString(name)];
    }
    
    typedef void (*CallbackListener)(const char* topic, const char* message);
    void ios_setCallbackReceiver(CallbackListener listener) {
        [MetaWearUnity setUnityListener: ^(NSString* topic, NSString* message) {
            const char* topicCString = [topic cStringUsingEncoding:NSUTF8StringEncoding];
            const char* messageCString = [message cStringUsingEncoding:NSUTF8StringEncoding];
            listener(topicCString, messageCString);
        }];
    }
    
    //this is kind of init... should be automatically triggered probably
    void ios_loadSavedDevices() {
        printf("ios_loadSavedDevices");
        [Devices loadSavedDevices];
    }
    
    void ios_forgetRememberedDevices() {
        printf("ios_forgetRememberedDevices");
        [MetaWearUnity forgetAllDevices];
    }
}

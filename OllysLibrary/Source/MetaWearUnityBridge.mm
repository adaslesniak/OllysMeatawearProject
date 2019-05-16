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
        NSString* idString = iosString(deviceId);
        [MetaWearUnity startFlashing:idString];
    }
    
    void ios_turnDeviceLedOn(const char* deviceId, const char* colorsCode) {
        printf("ios_turnDeviceLedOn");
        NSString* idString = iosString(deviceId);
        NSString* colorString = iosString(colorsCode);
        [MetaWearUnity startLed:idString colorsCode:colorString];
    }
    
    void ios_stopDeviceLeds(const char* deviceId, const char* colorsCode) {
        printf("ios_stopDeviceLeds executed");
        NSString* idString = iosString(deviceId);
        NSString* colorsString = iosString(colorsCode);
        [MetaWearUnity stopLeds:idString colorsCode:colorsString];
    }
    
    void ios_rememberDevice(const char* deviceId, const char* name) {
        NSString* idString = iosString(deviceId);
        NSString* newName = iosString(name);
        printf("ios_rememberDevice: %s", deviceId);
        [MetaWearUnity rememberDevice:idString as:newName];
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

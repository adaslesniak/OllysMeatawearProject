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
        //NSString* deviceIdString = [NSString stringWithCString:deviceId encoding:NSUTF8StringEncoding];
        NSString* idString = iosString(deviceId);
        [MetaWearUnity startFlashing:idString];
    }
    
    void ios_turnDeviceLedOn(const char* deviceId, const char* colorsCode) {
        NSString* idString = iosString(deviceId);
        NSString* colorString = iosString(colorsCode);
        [MetaWearUnity startLed:idString colorsCode:colorString];
    }
    
    void ios_stopDeviceLeds(const char* deviceId, const char* colorsCode) {
        printf("ios_stopDeviceLeds executed");
        //NSString* deviceIdString = [NSString stringWithCString:deviceId encoding:NSUTF8StringEncoding];
        //NSString* colorsId = [NSString stringWithCString:colorsCode encoding:NSUTF8StringEncoding];
        NSString* idString = iosString(deviceId);
        NSString* colorsString = iosString(colorsCode);
        [MetaWearUnity stopLeds:idString colorsCode:colorsString];
    }
    
    void ios_rememberDevice(const char* deviceId, const char* name) {
        //NSString* deviceIdString = [NSString stringWithCString:deviceId encoding:NSUTF8StringEncoding];
        //NSString* newName = [NSString stringWithCString:name encoding:NSUTF8StringEncoding];
        NSString* idString = iosString(deviceId);
        NSString* newName = iosString(name);
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
    
    void ios_forgetRememberedDevices() {
        [MetaWearUnity forgetAllDevices];
    }
}

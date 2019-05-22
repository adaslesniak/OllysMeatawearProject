/* crated by Adas Lesniak on Apr 30 2019 */
using UnityEngine;
using AOT;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using Newtonsoft.Json.Linq;

//FIXME: that should be MetaWearNative and all if ios should be followed by else if android
public class MetaWearNative : MonoBehaviour {


    public delegate void VoidWithDeviceCards(List<DeviceCard> devices);
    public static event VoidWithDeviceCards onNewDevicesScaned;
    public static event VoidWithDeviceCards onKnowDevicesScaned;


    //NOTE: ensure this are exactly as on iOS side: MetaWearUnity.swift
    class MessageSubjects {
        public const string acceleratorData = "accelerator_measurment";
        public const string foundKnownDevices = "known_devices";
        public const string foundNewDevices = "new_devices";
        public const string unspecified = "unspecified";
    }
    public enum LedColors {
        NONE, GREEN, BLUE, RED, ALL
    }
    //NOTE: ensure those are exactly as on iOS side: MetaWearUnity.swift
    private static string LedColorCode(LedColors forColor) {
        switch(forColor) {
        case LedColors.ALL:
            return "all";
        case LedColors.BLUE:
            return "blue";
        case LedColors.GREEN:
            return "green";
        case LedColors.RED:
            return "red";
        case LedColors.NONE:
            return "none";
        default:
            return "unspecified";
        }
    }

    #region EXTERNAL_DECLARATIONS
    delegate void MessageReceiver(string topic, string message);
    const string DLL_LOCATION = "__Internal";
    //#if UNITY_IOS && !UNITY_EDITOR
    [DllImport(DLL_LOCATION)]
    private static extern void ios_loadSavedDevices();

    [DllImport(DLL_LOCATION)]
    private static extern void ios_scanForNewDevices();

    [DllImport(DLL_LOCATION)]
    private static extern void ios_scanForKnownDevices();

    [DllImport(DLL_LOCATION)]
    private static extern void ios_startAccelerometering([MarshalAs(UnmanagedType.LPStr)]string deviceId);

    [DllImport(DLL_LOCATION)]
    private static extern void ios_stopAccelerometering([MarshalAs(UnmanagedType.LPStr)]string deviceId);


    [DllImport(DLL_LOCATION)]
    private static extern void ios_startSensorFusioning([MarshalAs(UnmanagedType.LPStr)]string deviceId);

    [DllImport(DLL_LOCATION)]
    private static extern void ios_stopSensorFusioning([MarshalAs(UnmanagedType.LPStr)]string deviceId);

    [DllImport(DLL_LOCATION)]
    private static extern void ios_startFlashingDevice([MarshalAs( UnmanagedType.LPStr )]string deviceId);

    [DllImport(DLL_LOCATION)]
    private static extern void ios_setCallbackReceiver(MessageReceiver listener);

    [DllImport(DLL_LOCATION)]
    private static extern void ios_stopDeviceLeds([MarshalAs(UnmanagedType.LPStr)]string deviceI, [MarshalAs(UnmanagedType.LPStr)]string colorsCode);

    [DllImport(DLL_LOCATION)]
    private static extern void ios_turnDeviceLedOn([MarshalAs(UnmanagedType.LPStr)]string deviceId, [MarshalAs(UnmanagedType.LPStr)]string colorsCode);

    [DllImport(DLL_LOCATION)]
    private static extern void ios_rememberDevice([MarshalAs(UnmanagedType.LPStr)]string deviceId, [MarshalAs(UnmanagedType.LPStr)]string name);

    [DllImport(DLL_LOCATION)]
    private static extern void ios_forgetRememberedDevices();
    //#endif
#endregion EXTERNAL_DECLARATIONS


    public static void ScanForNewDevices() {
        print("MetaWeariOSUnity.ScanForNewDevices - calling C code");
#if UNITY_IOS && !UNITY_EDITOR
        ios_scanForNewDevices();
#endif
    }

    public static void ScanForKnownDevices() {
#if UNITY_IOS && !UNITY_EDITOR
        ios_scanForKnownDevices();
#endif
    }

    public static void StartFlashingDevice(DeviceCard device) {
#if UNITY_IOS && !UNITY_EDITOR
        ios_startFlashingDevice(device.id);
#endif
    }

    public static void StartDeviceLed(DeviceCard device, LedColors color) {
#if UNITY_IOS && !UNITY_EDITOR
        ios_turnDeviceLedOn(device.id, LedColorCode(color));
#endif
    }

    public static void StopDeviceLeds(DeviceCard device, LedColors color = LedColors.ALL) {
#if UNITY_IOS && !UNITY_EDITOR
        ios_stopDeviceLeds(device.id, LedColorCode(color));
#endif
    }

    public static void RememberDevice(DeviceCard device, string withName) {
#if UNITY_IOS && !UNITY_EDITOR
        ios_rememberDevice(device.id, withName);
#endif
    }

    public static void ForgetAllRememberdDevices() {
#if UNITY_IOS && !UNITY_EDITOR
        ios_forgetRememberedDevices();
#endif
    }

    public static void StartAccelerometerStream(DeviceCard onDevice) {
#if UNITY_IOS && !UNITY_EDITOR
        ios_startAccelerometering(onDevice.id);
#endif
    }

    public static void StopAccelerometerStream(DeviceCard onDevice) {
#if UNITY_IOS && !UNITY_EDITOR
        ios_stopAccelerometering(onDevice.id);
#endif
    }

    public static void StartSensorFusionStream(DeviceCard onDevice) {
#if UNITY_IOS && !UNITY_EDITOR
        ios_startSensorFusioning(onDevice.id);
#endif
    }

    public static void StopSensorFusionStream(DeviceCard onDevice) {
#if UNITY_IOS && !UNITY_EDITOR
        ios_stopSensorFusioning(onDevice.id);
#endif
    }

    public static void DisconnectDevice(DeviceCard device) {
        Debug.LogWarning("NOT_IMPLEMENTED - disconnect device");
    }

    public static void DisconnectAllDevices() {
        Debug.LogWarning("NOT_IMPLEMENTED - disconnect all devices");
    }

    static MetaWearNative() {
        Application.SetStackTraceLogType(LogType.Log, StackTraceLogType.None);
        Application.SetStackTraceLogType(LogType.Warning, StackTraceLogType.None);
#if UNITY_IOS && !UNITY_EDITOR
        ios_loadSavedDevices();
        ios_setCallbackReceiver(ProcessIosMessage);
#endif
    }




    [MonoPInvokeCallback(typeof(MessageReceiver))]
    private static void ProcessIosMessage(string subject, string content) {
        var isAboutDevicesFound = subject == MessageSubjects.foundNewDevices || subject == MessageSubjects.foundKnownDevices;
        if (isAboutDevicesFound) {
            var devices = new List<DeviceCard>();
            var jsonContent = JObject.Parse(content);
            var jsonData = jsonContent["data"] as JArray;

            var anything = jsonData.First;
            //print("ehmmm.... [" + anything.GetType() + "]: " + anything);
            foreach (var thingie in jsonData) {
                devices.Add(DeviceCard.fromIosSerialised(thingie as JObject));
            }
            print("deserialised " + devices.Count + " cards at ProcessIosMessage<" + subject + ">");
            if (subject == MessageSubjects.foundNewDevices) {
                onNewDevicesScaned?.Invoke(devices);
            } else if (subject == MessageSubjects.foundKnownDevices) {
                onKnowDevicesScaned?.Invoke(devices);
            }
        } else if(subject == MessageSubjects.acceleratorData) {
            print("HAVE DATA FROM ACCELEROMETER: " + content);
            var jContent = JObject.Parse(content);
            print("it is: "+jContent);
            var translated = AcceleratorData.fromIosSerialised(jContent);
            print("so finally we have model: " + translated);

        } else { 
            print(">>> got [" + subject + "] message from iOS inside unity: \n   " + content);
        }
    }

}
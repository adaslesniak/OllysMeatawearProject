/* crated by Adas Lesniak on Apr 30 2019 */
using UnityEngine;
using AOT;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using Newtonsoft.Json.Linq;

//FIXME: that should be MetaWearNative and all if ios should be followed by else if android
public class MetaWeariOSUnity : MonoBehaviour {


    public delegate void VoidWithDeviceCards(List<DeviceCard> devices);
    public static event VoidWithDeviceCards onNewDevicesScaned;
    public static event VoidWithDeviceCards onKnowDevicesScaned;


    //NOTE: ensure this are exactly as on iOS side
    class MessageSubjects {
        public string acceleratorData = "accelerator_measurment";
        public const string foundKnownDevices = "known_devices";
        public const string foundNewDevices = "new_devices";
        public const string unspecified = "unspecified";
    }

    #region EXTERNAL_DECLARATIONS
        delegate void MessageReceiver(string topic, string message);
//#if UNITY_IOS && !UNITY_EDITOR
        [DllImport("__Internal")]
        private static extern void ios_scanForNewDevices();

        [DllImport("__Internal")]
        private static extern void ios_scanForKnownDevices();

        [DllImport("__Internal")]
        private static extern void ios_startFlashingDevice([MarshalAs( UnmanagedType.LPStr )]string deviceId);

        [DllImport("__Internal")]
        private static extern void ios_setCallbackReceiver(MessageReceiver listener);
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

    public static void StartFlashingDevice(string deviceId) {
        #if UNITY_IOS && !UNITY_EDITOR
        ios_startFlashingDevice(deviceId);
        #endif
    }

    static MetaWeariOSUnity() {
        Application.SetStackTraceLogType(LogType.Log, StackTraceLogType.None);
        Application.SetStackTraceLogType(LogType.Warning, StackTraceLogType.None);
        #if UNITY_IOS && !UNITY_EDITOR 
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
            print("deserialised " + devices.Count + " cards at ProcessIosMessage<"+subject+">");
            if (subject == MessageSubjects.foundNewDevices) {
                onNewDevicesScaned?.Invoke(devices);
            } else if(subject == MessageSubjects.foundKnownDevices) {
                onKnowDevicesScaned?.Invoke(devices);
            }
        } else {
            print(">>> got [" + subject + "] message from iOS inside unity: \n   " + content);
        }
    }

}
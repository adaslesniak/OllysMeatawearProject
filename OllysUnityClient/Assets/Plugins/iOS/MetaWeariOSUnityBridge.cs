/* crated by Adas Lesniak on Apr 30 2019 */
using UnityEngine;
using AOT;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using Newtonsoft.Json.Linq;


//FIXME: that should be MetaWearNative and all if ios should be followed by else if android
public class MetaWeariOSUnity : MonoBehaviour {

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
        /*var messageReceiver = new MessageReceiver((msg) => {
            print(">>> got message inside unity: \n   " + msg);
        });
        var cPointer = Marshal.GetFunctionPointerForDelegate(messageReceiver);*/
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
            print("ehmmm.... [" + anything.GetType() + "]: " + anything);
            foreach (var thingie in jsonData) {
                devices.Add(DeviceCard.fromIosSerialised(thingie as JObject));
            }

            
        } else {
            print(">>> got [" + subject + "] message from iOS inside unity: \n   " + content);
        }
    }


    //urghmm... why writing this manuallly?!
    private static List<string> ListFromJson(string data, string listFieldName = null) {



        var theList = new List<string>();
        return theList;
    }
}

public class DeviceCard {
    public string id { get; private set; }
    public string name { get; private set; }
    public int signalStrength { get; private set; }
    public System.DateTime signalTime { get; private set; }

    public static DeviceCard fromIosSerialised(JObject serialised) {
        var self = new DeviceCard();
        /*Newtonsoft.Json.Linq.JObject]: {
            "signalStrength": -68,
            "signalTime": "unimplemented",
            "id": "7B3B7ECA-BF7C-C5E7-5FC5-51EC7DD9670F",
            "name": "MetaWear"
        }*/
        self.id = serialised["id"].Value<string>();
        Debug.Log("got id: " +self.id);
        self.name = serialised["name"].Value<string>();
        Debug.Log("got name: " + self.name);
        self.signalStrength = serialised["signalStrength"].Value<int>();
        Debug.Log("got signalStrength: " + self.signalStrength);
        self.signalTime = System.DateTime.Now; //FIXME: that is not implemented
        Debug.Log("WARNING: correct deserialisation of signal time not implemented");
        return self;
    }
}

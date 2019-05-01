/* crated by Adas Lesniak on Apr 30 2019 */
using UnityEngine;
using AOT;
using System.Runtime.InteropServices;


//FIXME: that should be MetaWearNative and all if ios should be followed by else if android
public class MetaWeariOSUnity : MonoBehaviour {

    #region EXTERNAL_DECLARATIONS
        delegate void MessageReceiver(string message);
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
    private static void ProcessIosMessage(string message) {
        print(">>> got message from iOS inside unity: \n   " + message);
    }
}

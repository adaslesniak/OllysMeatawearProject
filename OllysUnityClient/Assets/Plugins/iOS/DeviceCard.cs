using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json.Linq;

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
        //Debug.Log("got id: " +self.id);
        self.name = serialised["name"].Value<string>();
        //Debug.Log("got name: " + self.name);
        self.signalStrength = serialised["signalStrength"].Value<int>();
        //Debug.Log("got signalStrength: " + self.signalStrength);
        self.signalTime = System.DateTime.Now; //FIXME: that is not implemented
        //Debug.Log("WARNING: correct deserialisation of signal time not implemented");
        return self;
    }
}

/* crated by Adas Lesniak on April 30 2019 */
using Newtonsoft.Json.Linq;
using System;

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
        self.name = serialised["name"].Value<string>();
        self.signalStrength = serialised["signalStrength"].Value<int>();
        var dateString = serialised["signalTime"].Value<string>();
        self.signalTime = DateTimeExt.fromiOSDate(dateString);
        return self;
    }

    public override string ToString() {
        return $"{name}'s card. Id= {id}; signal({signalStrength}) captured at {signalTime}";
    }
}

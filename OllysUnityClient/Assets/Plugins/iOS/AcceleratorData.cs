/* crated by Adas Lesniak on May 17 2019 */
using System;
using Newtonsoft.Json.Linq;

public class AcceleratorData  {

    public float xAcceleration { get; private set; } = 0;
    public float yAcceleration { get; private set; } = 0;
    public float zAcceleration { get; private set; } = 0;

    public DateTime when = DateTime.Now;
    public string deviceId { get; private set; } = "";
    public string deviceName = "";



    public static AcceleratorData fromIosSerialised(JObject serialised) {
        /*{
            "y" : -0.164306640625,
            "z" : 1.021728515625,
            "device_id" : "6DB79342-CE9F-D01A-CA42-175A006E5F15",
            "when" : "NOT_IMPLEMENTED",
            "x" : -0.113525390625
        }*/              
        var self = new AcceleratorData();
        self.xAcceleration = serialised["x"].Value<float>();
        self.yAcceleration = serialised["y"].Value<float>();
        self.zAcceleration = serialised["z"].Value<float>();
        self.deviceId = serialised["device_id"].Value<string>();
        var dateString = serialised["when"].Value<string>();
        //FIXME: implement date
        return self;
    }

    public override string ToString() {
        return $"from: {deviceId} at {when} -> [{xAcceleration}; {yAcceleration}; {zAcceleration}]";
    }
}

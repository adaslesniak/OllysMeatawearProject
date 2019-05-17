/* crated by Adas Lesniak on May 17 2019 */
using System;

public static class DateTimeExt  {

    //NOTE: "HH:mm:ss.SSS" - in OllysLibrary
    public static DateTime fromiOSDate(string serialised) {
        try {
            return DateTime.Parse(serialised);
        } catch(Exception exc) {
            UnityEngine.Debug.Log("failed to deserialise date string: " + serialised + "\n error: "+exc);
            return new DateTime(2000, 1, 1); //TODO: that is ugly... but xCode doesn't print c# errors... maybe should rethrow
        }
    }

}

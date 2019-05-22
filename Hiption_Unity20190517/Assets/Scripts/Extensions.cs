using UnityEngine;
using System.Collections;

public static class Extensions
{
    public static bool IsBetween (this float val, float min, float max)
    {
        if (min > max) {
            float tmp = min;
            min = max;
            max = tmp;
        }

        return val > min && val < max;
    }
}

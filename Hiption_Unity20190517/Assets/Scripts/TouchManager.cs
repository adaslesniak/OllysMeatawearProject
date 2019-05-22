using UnityEngine;
using System.Collections;

public class TouchManager : MonoBehaviour
{
    
    public delegate void OnTouchDownHandler (Touch touch);
    public static event OnTouchDownHandler OnTouchDown;

    public delegate void OnTouchUpHandler (Touch touch);
    public static event OnTouchUpHandler OnTouchUp;
    
    public delegate void OnTouchMoveHandler (Touch touch);
    public static event OnTouchMoveHandler OnTouchMove;

    void Update ()
    {
        for (int i = 0; i < Input.touches.Length; i++) {
            if (Input.touches [i].phase == TouchPhase.Began) {
                if (TouchManager.OnTouchDown != null)
                    TouchManager.OnTouchDown (Input.touches [i]);
            } else if (Input.touches [i].phase == TouchPhase.Ended) {
                if (TouchManager.OnTouchUp != null)
                    TouchManager.OnTouchUp (Input.touches [i]);
            } else if (Input.touches [i].phase == TouchPhase.Moved) {
                if (TouchManager.OnTouchMove != null)
                    TouchManager.OnTouchMove (Input.touches [i]);
            }
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RhythmController : MonoBehaviour {
    public AudioClip _audio;
    private float i;
    private float audio_length;
    private RandomMusicalNote note;
    // Use this for initialization
    void Start () {
        audio_length = _audio.length;
        
    }
	void TimeSchedule()
    {
        if (audio_length > i)
        {
            i += Time.fixedDeltaTime;
            if (i<0.22f&&i>0.2f)
            {
                //note.RandomNumber();
            }
        }
    }
	// Update is called once per frame
	void Update () {
        Debug.Log(_audio.channels);
        
	}
}

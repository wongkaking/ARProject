using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartAudio : MonoBehaviour {

	private AudioSource Audio;

	public static StartAudio Instance;

	void Awake() {
		Instance = this;
	}

	// Use this for initialization
	void Start () {
		Audio = GetComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void ButtonAudio() {
		Audio.Play ();
	}
}

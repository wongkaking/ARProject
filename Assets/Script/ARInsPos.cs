using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARInsPos : MonoBehaviour {

	private GameObject[] pets;

	public Transform[] tanPos;

	public Transform CameraTra;

	// Use this for initialization
	void Start () {
		pets = Resources.LoadAll<GameObject> ("Pets");
		InsPet ();
		checkDis ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void InsPet() {
		int _index = Random.Range (0, tanPos.Length);
		Transform _tra = tanPos [_index];
		int _petIndex = StaticData.CatchPetIndex;
		GameObject _pet = Instantiate (pets [_petIndex], _tra.transform.position, _tra.rotation);
//		调整生成预制体大小
		_pet.transform.localScale = new Vector3 (0.5f, 0.5f, 0.5f);

//		_pet.transform.LookAt (new Vector3 (CameraTra.position.x, _pet.transform.position.y, CameraTra.position.z));
	}

//	生成点与摄像机的距离
	private void checkDis(){
		foreach (Transform pos in tanPos) {
			float _dis = Vector3.Distance (pos.position, CameraTra.position);
		}	
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoreInsPet : MonoBehaviour {

	public Transform[] Pos;
	private GameObject[] pets;
	private GameObject[] petsShow = new GameObject[3];
	private static int StoreNumber = 3;

	void Awake() {
		pets = Resources.LoadAll<GameObject> ("Pets");
	}

	// Use this for initialization
	void Start () {
		InsPet ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void InsPet() {
//		获取已不抓数量
		int _petNum = StaticData.PetList.Count;

		if (_petNum > 0) {
			for (int i = 0; i < StoreNumber; i++) {
				if ((_petNum - 1) < i) {
					return;
				}
//				获取名字和序号
				PetSave _petInfo = StaticData.PetList[i];
//				获取小精灵，并放到位置
				Instantiate (pets [_petInfo.PetIndex], Pos[i].position, Pos[i].rotation);

				string _petName = _petInfo.PetName;

				StoreUIManager.Instance.UpdatePetName (i, _petName);

				string _petType = StaticData.GetPetType (_petInfo.PetIndex);
				StoreUIManager.Instance.UpdatePetType (i, _petType);
			}
		}
	}
}

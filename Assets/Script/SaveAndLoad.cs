using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class SaveAndLoad {

	public static void Save() {
		ES3.Save<int> ("BallNum", StaticData.BallNum);
		ES3.Save<int> ("FoodNum", StaticData.FoodNum);
		ES3.Save<int> ("PetNum", StaticData.PetList.Count);


		for (int i = 0; i < StaticData.PetList.Count; i++) {
			ES3.Save<string> ("PetNum" + i.ToString(), StaticData.PetList[i].PetName);
			ES3.Save<int> ("PetIndex" + i.ToString (), StaticData.PetList [i].PetIndex);
		}
	}

	public static void Load() {
		if (ES3.KeyExists ("BallNum") && ES3.KeyExists ("PetNum")) {
			StaticData.BallNum =  ES3.Load<int> ("BallNum");
			StaticData.FoodNum =  ES3.Load<int> ("FoodNum");

			int _petNum = ES3.Load<int> ("PetNum");

			for (int i = 0; i < _petNum; i++) {
				string _petName = ES3.Load<string> ("PetNum" + i.ToString ());
				int _petIndex = ES3.Load<int> ("PetIndex" + i.ToString ());

				StaticData.AddPet (new PetSave (_petName, _petIndex));
			}
		}
	}
}

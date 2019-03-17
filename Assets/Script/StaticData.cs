using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class StaticData {
	
	public static int BallNum = 5;
	public static int FoodNum = 5;

	public static int CatchPetIndex;

	public static List<PetSave> PetList = new List<PetSave>();

	/// <summary>
	/// Adds the pet into the petlist
	/// </summary>
	/// <param name="petSave">pet's property.</param>
	public static void AddPet (PetSave petSave) {
		PetList.Add (petSave);
	}

//	小精灵类型
	public static string GetPetType(int index) {
		if (index == 0) {
			return "Bear";
		} else if (index == 1) {
			return "Cattle";
		} else if (index == 2) {
			return "Rabbit";
		} else if (index == 3) {
			return "Chick";
		} else if (index == 4) {
			return "Tiger";
		} else if (index == 5) {
			return "Monkey";
		} else if (index == 6) {
			return "Lion";
		}else {
			return "Penguin";
		}
	}
}

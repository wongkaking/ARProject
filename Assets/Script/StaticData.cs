using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class StaticData {
	
	public static int BallNum = 5;

	public static int CatchPetIndex;

	public static List<PetSave> PetList = new List<PetSave>();

	/// <summary>
	/// Adds the pet into the petlist
	/// </summary>
	/// <param name="petSave">pet's property.</param>
	public static void AddPet (PetSave petSave) {
		PetList.Add (petSave);
	}
}

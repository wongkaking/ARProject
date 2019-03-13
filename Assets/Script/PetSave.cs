using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PetSave {

	private string strName = "no name";

	private int petIndex = 0;

	public string PetName {
		get { return strName; }
		set { strName = value; }
	}

	public int PetIndex {
		get { return PetIndex; }
		set { petIndex = value; }
	}

	/// <summary>
	/// constructor
	/// </summary>
	/// <param name="name">Afferent parameter pet name.</param>
	/// <param name="index">Afferent parameter pet index.</param>
	public PetSave(string name, int index) {
		PetName = name;
		PetIndex = index;
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayAni : MonoBehaviour {

    Animator myAni;
	//Is the first time enter the game or not
   static bool isFirst = false;
   static int i = 0;
	void Start () {
        myAni = GetComponent<Animator>();
        if (!isFirst)
        {
            if (this.name == "TitleImage")
                myAni.Play("TitleAnimation");
            else
            {
                myAni.Play("buttonAnimation");
            }
            i++;
        }

	}
	
	void Update () {

        if (i > 3)
            isFirst = true;
 
	}
}

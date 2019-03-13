using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterCtl : MonoBehaviour {

	private Animator ator;
	private MoveAvatar moveAvatar;

	// Use this for initialization
	void Start () {
		ator = gameObject.GetComponent<Animator> ();
		moveAvatar = transform.parent.GetComponent<MoveAvatar> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (moveAvatar.animationState==MoveAvatar.AvatarAnimationState.Idle)
		{
			if (!ator.GetCurrentAnimatorStateInfo(0).IsName("Idle"))
			{
				ator.SetTrigger("Idle");
			}
		}else if (moveAvatar.animationState == MoveAvatar.AvatarAnimationState.Walk)
		{
			if (!ator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
			{
				ator.SetTrigger("Walk");
			}        
		}
		else if (moveAvatar.animationState == MoveAvatar.AvatarAnimationState.Run)
		{
			if (!ator.GetCurrentAnimatorStateInfo(0).IsName("Run"))
			{
				ator.SetTrigger("Run");
			}
		}
	}
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/// <summary>
/// 将其绑在弹力带上
/// </summary>
public class DashCollision : MonoBehaviour {
    public OverlapAmount overlap;
    // Use this for initialization
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.name == "")
        {
            overlap.temp_combo++;
        }
    }
}

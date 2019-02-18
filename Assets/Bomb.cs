using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bomb{
	// Use this for initialization
	public Bomb()
    {

    }
    public virtual void RandomBomb()
    {
        int random = Random.Range(0, 4);
        switch (random)
        {
            case 0:
                break;
            case 1:
                //加载预制体，需要名字相符
                LoadPrefab("Prefab3D/ComboBombs");
                break;
            case 2:
                break;
            case 3:
                LoadPrefab("Prefab3D/NoteBombs");
                break;
            default:
                break;
        }
    }
    private void LoadPrefab(string path)
    {
        GameObject game = Object.Instantiate(Resources.Load<GameObject>(path));
    }

}

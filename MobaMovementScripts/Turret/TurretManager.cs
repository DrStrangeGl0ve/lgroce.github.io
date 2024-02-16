using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurretManager : MonoBehaviour
{
    GameObject aggroRange;
    public int turretHealth;
    public GameObject enemyNPC;

    // Start is called before the first frame update
    void Start()
    {

    }

    /*void private void OnCollisionStay(Collision other)
    {


        {
            if (other.gameObject == enemyNPC)
            {
                turretHealth -= 1;
                if (turretHealth < 1)
                {
                    Destroy(gameObject);
                }
            }
        }
        */
    // Update is called once per frame
    void Update()
    {

    }
}

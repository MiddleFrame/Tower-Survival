using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class EnemyView : MonoBehaviour
{
    [Serializable]
    public enum EnemyType
    {
        Basic=0,
        Tank=1,
        Dynamite=2,
        Barrel=3
    }

    public SpriteRenderer healthBar;

    public Animator animator;

    [SerializeField]
    private GameObject model;

    [SerializeField]
    private GameObject deadAnim;
    
    public AnimationEventHandler handler;

    public EnemyType enemyNumber;

    [HideInInspector]
    public int enemyEntity;

    private static readonly HashSet<EnemyView> ActiveViews = new HashSet<EnemyView>();
    private bool _deathVfxSpawned;

    public static EnemyView[] GetActiveViewsSnapshot()
    {
        return ActiveViews.ToArray();
    }

    private void OnEnable()
    {
        ActiveViews.Add(this);
    }

    private void OnDisable()
    {
        ActiveViews.Remove(this);
    }

    public void SpawnDeathVfx()
    {
        if (_deathVfxSpawned || deadAnim == null || DataController.IsGameplayEnding)
            return;

        if (InitData.sharedData?.ViewPools != null)
        {
            InitData.sharedData.ViewPools.SpawnTimed(deadAnim, transform.position, Quaternion.identity, 0.7f);
        }
        else
        {
            var dead = Instantiate(deadAnim, transform.position, new Quaternion());
            Destroy(dead, 0.7f);
        }

        _deathVfxSpawned = true;
    }

    public void Configure(int entity)
    {
        enemyEntity = entity;
        _deathVfxSpawned = false;
        if (model == null)
            return;

        if (transform.position.x > 0f)
        {
            var scale = model.transform.localScale;
            model.transform.localScale = new Vector3(-Mathf.Abs(scale.x), scale.y, scale.z);
        }
        else
        {
            var scale = model.transform.localScale;
            model.transform.localScale = new Vector3(Mathf.Abs(scale.x), scale.y, scale.z);
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using Leopotam.EcsLite;
using UnityEngine;

public class EnemyView : MonoBehaviour
{
    [Serializable]
    public enum EnemyType
    {
        Basic=0,
        Tank=1,
        Ranged=2
    }

    public SpriteRenderer healthBar;

    public Animator animator;

    [SerializeField]
    private GameObject model;

    [SerializeField]
    private bool sortModelRelativeToTower;

    [SerializeField]
    private int behindTowerSortingOrder = 4;

    [SerializeField]
    private int inFrontOfTowerSortingOrder = 6;

    [SerializeField]
    private GameObject deadAnim;

    [SerializeField]
    private LocalLightController[] localLights;
    
    public AnimationEventHandler handler;

    public EnemyType enemyNumber;

    [Tooltip("Destroy this enemy after its animation event deals damage to the tower.")]
    public bool destroyAfterAttack;

    [HideInInspector]
    public int enemyEntity;

    private static readonly HashSet<EnemyView> ActiveViews = new HashSet<EnemyView>();
    private bool _deathVfxSpawned;
    private EcsWorld _world;
    private EcsPackedEntity _packedEntity;

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
        _world = null;
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

    public void Configure(EcsWorld world, int entity)
    {
        _world = world;
        _packedEntity = world.PackEntity(entity);
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

        ApplyTowerDepthSorting();
    }

    private void ApplyTowerDepthSorting()
    {
        if (!sortModelRelativeToTower || model == null)
            return;

        int sortingOrder = transform.position.y < 0f
            ? inFrontOfTowerSortingOrder
            : behindTowerSortingOrder;

        foreach (SpriteRenderer spriteRenderer in model.GetComponentsInChildren<SpriteRenderer>(true))
            spriteRenderer.sortingOrder = sortingOrder;
    }

    public bool TryGetEntity(EcsWorld expectedWorld, out int entity)
    {
        entity = -1;
        return _world == expectedWorld && _packedEntity.Unpack(expectedWorld, out entity);
    }

    public void SetDayNightController(DayNightController dayNightController)
    {
        if (localLights == null)
            return;

        foreach (LocalLightController localLight in localLights)
        {
            if (localLight != null)
                localLight.SetDayNightController(dayNightController);
        }
    }
}

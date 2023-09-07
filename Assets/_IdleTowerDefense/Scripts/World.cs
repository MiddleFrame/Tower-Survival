using Leopotam.EcsLite;
using Nomnom.EcsLiteDebugger;
using UnityEngine;

public class World : MonoBehaviour
{
    

    [SerializeField]
    private Transform _spawnTowerPoint;
    [SerializeField]
    private HealthBar _healthBar;

    [SerializeField]
    private AudioSource _wordSound;
    public EcsWorld _world;
    EcsSystems _systems;

    void Awake()
    {

        _world = new EcsWorld();
        GameManager.Instance.World = _world;

        SharedData sharedData = InitData.sharedData;
        
        _systems = new EcsSystems(_world, sharedData).Add(new TowerSpawnSystem(_spawnTowerPoint,_healthBar))
            .Add(new TowerUpgradeLoadingSystem())
            .Add(new TowerTargetingSystem())
            .Add(new TowerFiringSystem(sharedData.Settings.TowerView.shootingSound,_wordSound))
            .Add(new EnemySpawnSystem())
            .Add(new EnemyDamageSystem())
            .Add(new HealthRegenerationSystem())
            .Add(new DestroySystem())
            .Add(new DestroySystem())
            .Add(new WorldDebugSystem("Main World"))
            .Add(new MovementSystem());

        Init();
    }

    public void Init()
    {
        _systems.Init();
    }

    void Update()
    {
        if (!GameManager.Instance.Paused)
        {
            _systems?.Run();
        }
    }

    void OnDestroy()
    {
        _world?.Destroy();
        _systems?.Destroy();
    }
}
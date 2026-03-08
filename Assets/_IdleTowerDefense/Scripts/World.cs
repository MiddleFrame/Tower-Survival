using Leopotam.EcsLite;
using UnityEngine;
using UnityEngine.UI;

public class World : MonoBehaviour
{
    

    [SerializeField]
    private Transform _spawnTowerPoint;

    [SerializeField]
    private Image _healthBar;
    [SerializeField]
    private Slider _healthBarValue;
    [SerializeField]
    private AudioSource _wordSound;

    [SerializeField]
    private GameplayViewPools _viewPools;
    
    private EcsWorld _world;
    public IEcsSystems System => _systems;
    private IEcsSystems _systems;

    void Awake()
    {

        _world = new EcsWorld();

        SharedData sharedData = InitData.sharedData;
        if (_viewPools == null)
        {
            var poolsGo = new GameObject("GameplayViewPools");
            _viewPools = poolsGo.AddComponent<GameplayViewPools>();
        }
        sharedData.SetViewPools(_viewPools);
        
        _systems = new EcsSystems(_world, sharedData).Add(new TowerSpawnSystem(_spawnTowerPoint,_healthBar,_healthBarValue))
            .Add(new TowerUpgradeLoadingSystem())
            .Add(new EnemyAttackSystem())
            .Add(new HealthBarUISystem())
            .Add(new TowerTargetingSystem())
            .Add(new TowerFiringSystem(sharedData.Settings.shootingSound,_wordSound))
            .Add(new EnemySpawnSystem())
            .Add(new EnemyDamageSystem())
            .Add(new HealthRegenerationSystem())
            .Add(new DestroySystem())
            .Add(new DestroySystem())
            .Add(new MovementSystem());

        Init();
    }

    private void Init()
    {
        _systems.Init();
    }

    void Update()
    {
        if (!DataController.Instance.Paused)
        {
            _systems?.Run();
        }
    }

    void OnDestroy()
    {
        if (_systems != null) {
            _systems.Destroy ();
            _systems = null;
        }
        if (_world != null) {
            _world.Destroy ();
            _world = null;
        }
    }
}

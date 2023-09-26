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

    private EcsWorld _world;
    private IEcsSystems _systems;

    void Awake()
    {

        _world = new EcsWorld();
        DataController.Instance.World = _world;

        SharedData sharedData = InitData.sharedData;
        
        _systems = new EcsSystems(_world, sharedData).Add(new TowerSpawnSystem(_spawnTowerPoint,_healthBar,_healthBarValue))
            .Add(new TowerUpgradeLoadingSystem())
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
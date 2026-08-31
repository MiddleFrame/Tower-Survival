using System.Collections.Generic;
using Leopotam.EcsLite;
using UnityEngine;

public sealed class TutorialRunController : MonoBehaviour
{
    public static TutorialRunController Instance { get; private set; }

    [Header("Scene references")]
    [SerializeField] private TutorialOverlayView _overlay;
    [SerializeField] private CombatSpellHudView _spellHud;
    [SerializeField] private GameObject _surrenderButton;
    [SerializeField] private HorizontalSelector _speedSelector;
    [SerializeField] private Camera _worldCamera;

    [Header("Tutorial balance")]
    [SerializeField, Range(0.1f, 1f)] private float _spawnDelayMultiplier = 0.55f;
    [SerializeField, Range(0f, 1f)] private float _healthGrowthStrength = 0.3f;
    [SerializeField, Min(0)] private int _additionalEnemiesPerWave = 1;
    [SerializeField, Min(0.1f)] private float _invulnerabilityDuration = 10f;
    [SerializeField, Min(0f)] private float _introDelaySeconds = 5f;
    [SerializeField, Min(0.1f)] private float _introEnemyDistance = 4.5f;

    private CombatSpellController _spells;
    private EcsWorld _world;
    private EcsFilter _towerFilter;
    private EcsPool<Health> _healthPool;
    private int _spawnedEnemies;
    private int _lethalGate;
    private int _expectedSpellSlot = -1;
    private bool _introShown;
    private bool _waitingForSpell;
    private bool _ordinaryPassiveHintQueued;
    private EnemyView _firstEnemy;
    private readonly List<EnemyView> _spawnedEnemyViews = new();
    private float _tutorialElapsed;

    public bool IsTutorialMatch => TutorialProgress.IsTutorialRun;
    public bool LocksGameSpeed => IsTutorialMatch;
    public float SpawnDelayMultiplier => IsTutorialMatch ? _spawnDelayMultiplier : 1f;
    public float HealthGrowthStrength => IsTutorialMatch ? _healthGrowthStrength : 1f;
    public int AdditionalEnemiesPerWave => IsTutorialMatch ? _additionalEnemiesPerWave : 0;
    public float InvulnerabilityDuration => _invulnerabilityDuration;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        _overlay?.Hide();
        if (_worldCamera == null)
            _worldCamera = Camera.main;

        if (!TutorialProgress.IsCompleted && !TutorialProgress.IsTutorialRun)
            TutorialProgress.BeginFirstRun();

        ApplyTutorialSceneRestrictions();
    }

    private void OnDestroy()
    {
        if (Instance == this)
            Instance = null;
    }

    private void Update()
    {
        if (!IsTutorialMatch || _introShown || DataController.IsGameplayEnding)
            return;

        _tutorialElapsed += Time.deltaTime;
        if (_tutorialElapsed < _introDelaySeconds || _spawnedEnemies < 3)
            return;

        TryShowIntro();
    }

    public void Bind(CombatSpellController spells, CombatSpellHudView hud, EcsWorld world)
    {
        _spells = spells;
        if (hud != null)
            _spellHud = hud;
        _world = world;
        _towerFilter = world.Filter<Tower>().Inc<Health>().End();
        _healthPool = world.GetPool<Health>();

        if (IsTutorialMatch)
            _spellHud?.SetTutorialActiveSlot(-1);
        else
            QueueOrdinaryPassiveHint();
    }

    public void NotifyEnemySpawned(EnemyView enemy, int totalSpawned)
    {
        _spawnedEnemies = Mathf.Max(_spawnedEnemies, totalSpawned);
        if (_firstEnemy == null)
            _firstEnemy = enemy;
        if (enemy != null)
            _spawnedEnemyViews.Add(enemy);

        if (!IsTutorialMatch && _ordinaryPassiveHintQueued)
            ShowOrdinaryPassiveHint();
    }

    private void TryShowIntro()
    {
        Transform tower = InitData.sharedData?.towerView != null
            ? InitData.sharedData.towerView.transform
            : null;
        if (tower == null)
            return;

        float triggerDistanceSqr = _introEnemyDistance * _introEnemyDistance;
        bool enemyIsClose = false;
        for (int i = _spawnedEnemyViews.Count - 1; i >= 0; i--)
        {
            EnemyView enemy = _spawnedEnemyViews[i];
            if (enemy == null || !enemy.gameObject.activeInHierarchy)
            {
                _spawnedEnemyViews.RemoveAt(i);
                continue;
            }

            if ((enemy.transform.position - tower.position).sqrMagnitude <= triggerDistanceSqr)
            {
                enemyIsClose = true;
                break;
            }
        }

        if (!enemyIsClose)
            return;

        _introShown = true;
        PauseCombat();
        _overlay?.ShowWorld("tutorial.tap_screen", tower, _worldCamera, true, ResumeFromIntro);
        TutorialProgress.MarkPassiveHintSeen(_spells?.PassiveSpell?.SpellId);
    }

    public bool TryInterceptLethalDamage(ref Health health)
    {
        if (!IsTutorialMatch || _lethalGate >= 2 || DataController.IsGameplayEnding)
            return false;

        health.CurrentHealth = 0f;
        if (_waitingForSpell)
            return true;

        _waitingForSpell = true;
        _expectedSpellSlot = _lethalGate == 0
            ? _spells.FindActiveSlot(ActiveSpellEffect.TowerInvulnerability)
            : _spells.FindActiveSlot(ActiveSpellEffect.PurgeBattlefield);
        PauseCombat();
        _spellHud?.SetTutorialActiveSlot(_expectedSpellSlot);
        RectTransform target = _spellHud?.GetActiveButtonRect(_expectedSpellSlot);
        string key = _lethalGate == 0 ? "tutorial.cast_invulnerability" : "tutorial.cast_purge";
        _overlay?.ShowUi(key, target, false);
        return true;
    }

    public bool CanCastActive(int slotIndex)
    {
        return !IsTutorialMatch || (_waitingForSpell && slotIndex == _expectedSpellSlot);
    }

    public void NotifyActiveCast(int slotIndex)
    {
        if (!IsTutorialMatch || !_waitingForSpell || slotIndex != _expectedSpellSlot)
            return;

        RestoreTowerToOneHealth();
        _waitingForSpell = false;
        _expectedSpellSlot = -1;
        _lethalGate++;
        _overlay?.Hide();
        _spellHud?.SetTutorialActiveSlot(-1);
        ResumeCombat();

    }

    private void ApplyTutorialSceneRestrictions()
    {
        if (!IsTutorialMatch)
            return;

        if (_surrenderButton != null)
            _surrenderButton.SetActive(false);
        if (_speedSelector != null)
            _speedSelector.SetTutorialLocked(true);
        Time.timeScale = 1f;
    }

    private void ResumeFromIntro()
    {
        ResumeCombat();
        _spells?.TryTriggerPassiveTap();
    }

    private void PauseCombat()
    {
        Time.timeScale = 0f;
        if (DataController.Instance != null)
            DataController.Instance.Paused = true;
    }

    private void ResumeCombat()
    {
        Time.timeScale = 1f;
        if (DataController.Instance != null)
            DataController.Instance.Paused = false;
    }

    private void RestoreTowerToOneHealth()
    {
        if (_world == null || _healthPool == null)
            return;

        foreach (int tower in _towerFilter)
        {
            ref Health health = ref _healthPool.Get(tower);
            health.CurrentHealth = Mathf.Min(1f, health.MaxHealth);
            health.OnDamaged?.Invoke();
            break;
        }
    }

    private void QueueOrdinaryPassiveHint()
    {
        CombatSpellDefinition passive = _spells?.PassiveSpell;
        _ordinaryPassiveHintQueued = passive != null
                                     && !string.IsNullOrEmpty(passive.TutorialHintKey)
                                     && !TutorialProgress.HasSeenPassiveHint(passive.SpellId);
    }

    private void ShowOrdinaryPassiveHint()
    {
        CombatSpellDefinition passive = _spells?.PassiveSpell;
        if (passive == null || string.IsNullOrEmpty(passive.TutorialHintKey))
            return;

        _ordinaryPassiveHintQueued = false;
        PauseCombat();
        switch (passive.TutorialTarget)
        {
            case PassiveTutorialTarget.Enemy when _firstEnemy != null:
                _overlay?.ShowWorld(passive.TutorialHintKey, _firstEnemy.transform, _worldCamera, true,
                    ResumeCombat);
                break;
            case PassiveTutorialTarget.Tower when InitData.sharedData?.towerView != null:
                _overlay?.ShowWorld(passive.TutorialHintKey, InitData.sharedData.towerView.transform,
                    _worldCamera, true, ResumeCombat);
                break;
            default:
                _overlay?.ShowScreen(passive.TutorialHintKey,
                    new Vector2(Screen.width * 0.72f, Screen.height * 0.52f), true, ResumeCombat);
                break;
        }
        TutorialProgress.MarkPassiveHintSeen(passive.SpellId);
    }
}

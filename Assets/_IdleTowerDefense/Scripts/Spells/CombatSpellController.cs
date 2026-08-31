using System.Collections;
using System.Collections.Generic;
using Guirao.UltimateTextDamage;
using Leopotam.EcsLite;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public sealed class CombatSpellController : MonoBehaviour
{
    [SerializeField] private CombatSpellLoadout _loadout;
    [SerializeField] private CombatSpellHudView _hud;
    [SerializeField] private MetaCurrencyDropView _metaDropPrefab;
    [SerializeField] private Transform _metaDropRoot;
    [SerializeField] private Camera _worldCamera;
    [SerializeField, Range(0f, 1f)] private float _baseMetaDropChance = 0.2f;
    [SerializeField, Min(1f)] private float _metaDropLifetime = 15f;
    [SerializeField, Min(0f)] private float _enemyTapRadius = 0.45f;
    [Header("Tutorial and impact presentation")]
    [SerializeField] private CombatSpellDefinition _tutorialPassiveSpell;
    [SerializeField] private FallingDaggerEffect _randomStrikeEffectPrefab;
    [SerializeField] private Image _towerInvulnerabilityIndicator;
    [SerializeField] private Material _towerInvulnerabilityMaterial;
    [SerializeField] private PurgeBattlefieldEffect _purgeEffectPrefab;
    [SerializeField, Range(0.05f, 0.5f)] private float _purgeSlowMotionScale = 0.15f;

    private EcsWorld _world;
    private EcsFilter _enemyFilter;
    private EcsFilter _projectileFilter;
    private EcsFilter _towerWeaponFilter;
    private EcsPool<Enemy> _enemyPool;
    private EcsPool<Projectile> _projectilePool;
    private EcsPool<Health> _healthPool;
    private EcsPool<TowerWeapon> _towerWeaponPool;
    private EcsPool<CurrencyDrop> _currencyDropPool;
    private EcsPool<ClickBounty> _clickBountyPool;
    private EcsPool<Destroy> _destroyPool;
    private CurrencyDisplayElement _crystalDisplay;
    private CombatSpellUseState[] _activeStates = System.Array.Empty<CombatSpellUseState>();
    private float _invulnerabilityRemaining;
    private float _metaDropSurgeRemaining;
    private float _metaDropSurgeMultiplier = 1f;
    private float _passiveCooldownRemaining;
    private bool _invulnerabilityPresented;
    private bool _purgeSequenceActive;
    private float _purgeRestoreTimeScale = 1f;
    private PurgeBattlefieldEffect _activePurgeEffect;

    public CombatSpellDefinition[] ActiveSpells => _loadout != null && _loadout.ActiveSpells != null
        ? _loadout.ActiveSpells
        : System.Array.Empty<CombatSpellDefinition>();
    public CombatSpellDefinition PassiveSpell => TutorialProgress.IsTutorialRun && _tutorialPassiveSpell != null
        ? _tutorialPassiveSpell
        : _loadout != null ? _loadout.PassiveSpell : null;
    public bool IsTowerInvulnerable => _invulnerabilityRemaining > 0f;
    public float PassiveCooldownRemaining => _passiveCooldownRemaining;

    public void Bind(EcsWorld world)
    {
        _world = world;
        _enemyFilter = world.Filter<Enemy>().Inc<Health>().End();
        _projectileFilter = world.Filter<Projectile>().End();
        _towerWeaponFilter = world.Filter<Tower>().Inc<TowerWeapon>().End();
        _enemyPool = world.GetPool<Enemy>();
        _projectilePool = world.GetPool<Projectile>();
        _healthPool = world.GetPool<Health>();
        _towerWeaponPool = world.GetPool<TowerWeapon>();
        _currencyDropPool = world.GetPool<CurrencyDrop>();
        _clickBountyPool = world.GetPool<ClickBounty>();
        _destroyPool = world.GetPool<Destroy>();

        CombatSpellDefinition[] spells = ActiveSpells;
        _activeStates = new CombatSpellUseState[spells.Length];
        for (int i = 0; i < spells.Length; i++)
            _activeStates[i] = new CombatSpellUseState(spells[i] != null ? spells[i].BaseUses : 0);

        if (_worldCamera == null)
            _worldCamera = Camera.main;
        CacheCrystalDisplay();
        _hud?.Bind(this);
        InitData.sharedData?.Tutorial?.Bind(this, _hud, _world);
        if (_towerInvulnerabilityIndicator != null)
            _towerInvulnerabilityIndicator.gameObject.SetActive(false);
        UpdateInvulnerabilityPresentation();
    }

    private void Update()
    {
        if (_world == null || DataController.IsGameplayEnding)
            return;

        float combatDelta = Time.deltaTime;
        _invulnerabilityRemaining = Mathf.Max(0f, _invulnerabilityRemaining - combatDelta);
        _metaDropSurgeRemaining = Mathf.Max(0f, _metaDropSurgeRemaining - combatDelta);
        _passiveCooldownRemaining = Mathf.Max(0f, _passiveCooldownRemaining - combatDelta);
        if (_metaDropSurgeRemaining <= 0f)
            _metaDropSurgeMultiplier = 1f;

        UpdateInvulnerabilityPresentation();

        HandlePointerInput();
        _hud?.RefreshRuntime();
    }

    public int GetRemainingUses(int slotIndex)
    {
        return slotIndex >= 0 && slotIndex < _activeStates.Length
            ? _activeStates[slotIndex].RemainingUses
            : 0;
    }

    public float GetActiveDurationRemaining(int slotIndex)
    {
        CombatSpellDefinition[] spells = ActiveSpells;
        if (slotIndex < 0 || slotIndex >= spells.Length || spells[slotIndex] == null)
            return 0f;

        return spells[slotIndex].ActiveEffect switch
        {
            ActiveSpellEffect.TowerInvulnerability => _invulnerabilityRemaining,
            ActiveSpellEffect.MetaDropSurge => _metaDropSurgeRemaining,
            _ => 0f
        };
    }

    public float GetConfiguredDuration(int slotIndex)
    {
        CombatSpellDefinition[] spells = ActiveSpells;
        if (slotIndex < 0 || slotIndex >= spells.Length || spells[slotIndex] == null)
            return 0f;

        if (spells[slotIndex].ActiveEffect == ActiveSpellEffect.TowerInvulnerability
            && TutorialRunController.Instance != null
            && TutorialRunController.Instance.IsTutorialMatch)
            return TutorialRunController.Instance.InvulnerabilityDuration;
        return spells[slotIndex].DurationSeconds;
    }

    public float GetPassiveResolvedDamage()
    {
        CombatSpellDefinition passive = PassiveSpell;
        if (passive == null)
            return 0f;

        return passive.PassiveEffect switch
        {
            PassiveSpellEffect.TowerStrike => Mathf.Max(1f, GetTowerDamage() * passive.Magnitude),
            PassiveSpellEffect.ArcaneEcho => Mathf.Max(1f, GetBaseTowerDamage() * passive.Magnitude),
            _ => 0f
        };
    }

    public bool TryCastActive(int slotIndex)
    {
        CombatSpellDefinition[] spells = ActiveSpells;
        if (slotIndex < 0 || slotIndex >= spells.Length || spells[slotIndex] == null)
            return false;

        if (TutorialRunController.Instance != null
            && !TutorialRunController.Instance.CanCastActive(slotIndex))
            return false;

        CombatSpellDefinition definition = spells[slotIndex];
        if (definition.Category != CombatSpellCategory.Active || !_activeStates[slotIndex].TryUse())
            return false;

        switch (definition.ActiveEffect)
        {
            case ActiveSpellEffect.TowerInvulnerability:
                float duration = TutorialRunController.Instance != null
                                 && TutorialRunController.Instance.IsTutorialMatch
                    ? TutorialRunController.Instance.InvulnerabilityDuration
                    : definition.DurationSeconds;
                _invulnerabilityRemaining = Mathf.Max(_invulnerabilityRemaining, duration);
                break;
            case ActiveSpellEffect.MetaDropSurge:
                _metaDropSurgeRemaining = Mathf.Max(_metaDropSurgeRemaining, definition.DurationSeconds);
                _metaDropSurgeMultiplier = Mathf.Max(_metaDropSurgeMultiplier, definition.Magnitude);
                break;
            case ActiveSpellEffect.PurgeBattlefield:
                BeginPurgeBattlefield(slotIndex);
                _hud?.RefreshRuntime();
                return true;
            default:
                return false;
        }

        UpdateInvulnerabilityPresentation();
        TutorialRunController.Instance?.NotifyActiveCast(slotIndex);
        _hud?.RefreshRuntime();
        return true;
    }

    public bool TrySpawnMetaDrop(Vector2 position, int baseAmount, float bountyMultiplier)
    {
        if (TutorialProgress.IsTutorialRun
            || _metaDropPrefab == null
            || baseAmount <= 0
            || DataController.IsGameplayEnding)
            return false;

        float chance = CombatSpellRules.ResolveMetaDropChance(
            _baseMetaDropChance,
            _metaDropSurgeMultiplier,
            bountyMultiplier);
        if (Random.value > chance)
            return false;

        int amount = CombatSpellRules.ResolveRewardAmount(baseAmount, bountyMultiplier);
        MetaCurrencyDropView drop = Instantiate(_metaDropPrefab, position, Quaternion.identity, _metaDropRoot);
        drop.Initialize(amount, _metaDropLifetime, _crystalDisplay, _worldCamera, CollectMetaCurrency);
        return true;
    }

    private void HandlePointerInput()
    {
        if (!Input.GetMouseButtonDown(0) || _worldCamera == null)
            return;
        if (EventSystem.current != null && EventSystem.current.IsPointerOverGameObject())
            return;

        Vector2 worldPosition = _worldCamera.ScreenToWorldPoint(Input.mousePosition);
        Collider2D[] pointHits = Physics2D.OverlapPointAll(worldPosition);
        foreach (Collider2D hit in pointHits)
        {
            if (hit.TryGetComponent(out MetaCurrencyDropView drop))
            {
                drop.Collect();
                return;
            }
        }

        Collider2D[] enemyHits = _enemyTapRadius > 0f
            ? Physics2D.OverlapCircleAll(worldPosition, _enemyTapRadius)
            : pointHits;
        foreach (Collider2D hit in enemyHits)
        {
            EnemyView enemyView = hit.GetComponentInParent<EnemyView>();
            if (enemyView != null && TryApplyPassive(enemyView))
                return;
        }

        TryTriggerPassiveTap();
    }

    internal bool TryTriggerPassiveTap()
    {
        CombatSpellDefinition passive = PassiveSpell;
        if (passive == null
            || passive.PassiveEffect != PassiveSpellEffect.ArcaneEcho
            || _passiveCooldownRemaining > 0f
            || !TryDamageRandomEnemy(passive.Magnitude))
            return false;

        _passiveCooldownRemaining = passive.CooldownSeconds;
        return true;
    }

    private bool TryApplyPassive(EnemyView enemyView)
    {
        CombatSpellDefinition passive = PassiveSpell;
        if (passive == null || passive.Category != CombatSpellCategory.Passive)
            return false;
        if (_passiveCooldownRemaining > 0f)
            return false;

        bool applied = passive.PassiveEffect switch
        {
            PassiveSpellEffect.TowerStrike => TryDamageEnemy(enemyView, passive.Magnitude),
            PassiveSpellEffect.BountyMark => TryMarkBounty(enemyView, passive.Magnitude),
            _ => false
        };

        if (applied)
            _passiveCooldownRemaining = passive.CooldownSeconds;
        return applied;
    }

    private bool TryDamageEnemy(EnemyView enemyView, float multiplier, bool useBaseDamage = false)
    {
        if (!enemyView.TryGetEntity(_world, out int entity)
            || !_healthPool.Has(entity)
            || _destroyPool.Has(entity))
            return false;

        float towerDamage = useBaseDamage ? GetBaseTowerDamage() : GetTowerDamage();
        float damage = Mathf.Max(1f, towerDamage * Mathf.Max(0f, multiplier));
        ref Health health = ref _healthPool.Get(entity);
        health.CurrentHealth -= damage;
        health.OnDamaged?.Invoke();
        if (UltimateTextDamageManager.Instance != null)
            UltimateTextDamageManager.Instance.Add(damage.ToString("N0"), enemyView.transform);

        if (health.CurrentHealth > 0f)
            return true;

        health.CurrentHealth = 0f;
        health.OnKilled?.Invoke();
        enemyView.SpawnDeathVfx();
        _destroyPool.Add(entity);
        return true;
    }

    private bool TryDamageRandomEnemy(float multiplier)
    {
        var candidates = new List<int>();
        foreach (int entity in _enemyFilter)
        {
            if (!_destroyPool.Has(entity))
                candidates.Add(entity);
        }
        if (candidates.Count == 0)
            return false;

        int selected = candidates[Random.Range(0, candidates.Count)];
        EnemyView view = _enemyPool.Get(selected).view;
        if (view == null)
            return false;

        if (_randomStrikeEffectPrefab == null)
            return TryDamageEnemy(view, multiplier, true);

        FallingDaggerEffect effect = Instantiate(_randomStrikeEffectPrefab, view.transform.position,
            Quaternion.identity);
        effect.Play(view.transform, () =>
        {
            if (view != null)
                TryDamageEnemy(view, multiplier, true);
        });
        return true;
    }

    private bool TryMarkBounty(EnemyView enemyView, float multiplier)
    {
        if (!enemyView.TryGetEntity(_world, out int entity)
            || _destroyPool.Has(entity)
            || _clickBountyPool.Has(entity))
            return false;

        ref ClickBounty bounty = ref _clickBountyPool.Add(entity);
        bounty.RewardMultiplier = Mathf.Max(1f, multiplier);
        return true;
    }

    private float GetTowerDamage()
    {
        foreach (int tower in _towerWeaponFilter)
            return Mathf.Max(1f, _towerWeaponPool.Get(tower).AttackDamage);
        return 1f;
    }

    private static float GetBaseTowerDamage()
    {
        return Mathf.Max(1f, InitData.sharedData?.Settings != null
            ? InitData.sharedData.Settings.TowerStartingAttackDamage
            : 1f);
    }

    private void PurgeBattlefield()
    {
        foreach (int entity in _enemyFilter)
        {
            if (_destroyPool.Has(entity))
                continue;

            ref Health health = ref _healthPool.Get(entity);
            health.CurrentHealth = 0f;
            health.OnKilled?.Invoke();
            EnemyView view = _enemyPool.Get(entity).view;
            if (view != null)
                view.SpawnDeathVfx();
            _destroyPool.Add(entity);
        }

        foreach (int entity in _projectileFilter)
        {
            if (!_destroyPool.Has(entity))
                _destroyPool.Add(entity);
        }
    }

    private void BeginPurgeBattlefield(int slotIndex)
    {
        TutorialRunController.Instance?.NotifyActiveCast(slotIndex);

        _purgeRestoreTimeScale = Mathf.Max(0.01f, Time.timeScale);
        Time.timeScale = Mathf.Max(0.01f, _purgeRestoreTimeScale * _purgeSlowMotionScale);
        _purgeSequenceActive = true;

        Transform tower = InitData.sharedData?.towerView != null
            ? InitData.sharedData.towerView.transform
            : null;
        if (_purgeEffectPrefab != null && tower != null)
        {
            _activePurgeEffect = Instantiate(_purgeEffectPrefab);
            _activePurgeEffect.Play(tower, _worldCamera, CompletePurgeBattlefield);
            return;
        }

        StartCoroutine(CompletePurgeAfterDelay());
    }

    private IEnumerator CompletePurgeAfterDelay()
    {
        yield return new WaitForSecondsRealtime(0.5f);
        CompletePurgeBattlefield();
    }

    private void CompletePurgeBattlefield()
    {
        if (!_purgeSequenceActive)
            return;

        PurgeBattlefield();
        Time.timeScale = _purgeRestoreTimeScale;
        _purgeSequenceActive = false;
        _activePurgeEffect = null;
    }

    private void CacheCrystalDisplay()
    {
        CurrencyDisplayElement[] displays = FindObjectsByType<CurrencyDisplayElement>(
            FindObjectsInactive.Include, FindObjectsSortMode.None);
        foreach (CurrencyDisplayElement display in displays)
        {
            if (display.CurrencyType != CurrencyTypes.Crystals)
                continue;

            _crystalDisplay = display;
            return;
        }
    }

    private void CollectMetaCurrency(int amount)
    {
        if (amount <= 0 || !DataController.Currency.ContainsKey(CurrencyTypes.Crystals))
            return;

        DataController.Currency.AddValues(
            new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Crystals, amount));
        ES3.Save(SaveKeys.Crystals, DataController.Currency[CurrencyTypes.Crystals].value);
        if (DataController.Instance != null)
            DataController.Instance.EarnedCrystals += amount;
        _crystalDisplay?.ShowGain(amount);
    }

    public int FindActiveSlot(ActiveSpellEffect effect)
    {
        CombatSpellDefinition[] spells = ActiveSpells;
        for (int i = 0; i < spells.Length; i++)
        {
            if (spells[i] != null && spells[i].ActiveEffect == effect)
                return i;
        }
        return -1;
    }

    private void UpdateInvulnerabilityPresentation()
    {
        bool active = IsTowerInvulnerable;
        if (_invulnerabilityPresented == active)
            return;

        _invulnerabilityPresented = active;
        InitData.sharedData?.towerView?.SetInvulnerable(active, _towerInvulnerabilityMaterial);
        if (_towerInvulnerabilityIndicator != null)
            _towerInvulnerabilityIndicator.gameObject.SetActive(false);
    }

    private void OnDisable()
    {
        if (_invulnerabilityPresented)
        {
            _invulnerabilityPresented = false;
            InitData.sharedData?.towerView?.SetInvulnerable(false, _towerInvulnerabilityMaterial);
        }
        if (_towerInvulnerabilityIndicator != null)
            _towerInvulnerabilityIndicator.gameObject.SetActive(false);

        if (_purgeSequenceActive)
        {
            Time.timeScale = _purgeRestoreTimeScale;
            _purgeSequenceActive = false;
        }
        if (_activePurgeEffect != null)
            Destroy(_activePurgeEffect.gameObject);
    }
}

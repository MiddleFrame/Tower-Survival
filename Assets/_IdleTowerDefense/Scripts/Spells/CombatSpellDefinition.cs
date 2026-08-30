using UnityEngine;

public enum CombatSpellCategory
{
    Active,
    Passive
}

public enum ActiveSpellEffect
{
    None,
    TowerInvulnerability,
    MetaDropSurge,
    PurgeBattlefield
}

public enum PassiveSpellEffect
{
    None,
    TowerStrike,
    BountyMark,
    ArcaneEcho
}

public enum PassiveTutorialTarget
{
    EmptyArea,
    Enemy,
    Tower
}

[CreateAssetMenu(fileName = "New Combat Spell", menuName = "Idle Tower Defense/Spells/Combat Spell")]
public sealed class CombatSpellDefinition : ScriptableObject
{
    [SerializeField] private string _spellId;
    [SerializeField] private CombatSpellCategory _category;
    [SerializeField] private ActiveSpellEffect _activeEffect;
    [SerializeField] private PassiveSpellEffect _passiveEffect;
    [SerializeField] private string _titleKey;
    [SerializeField] private string _descriptionKey;
    [SerializeField] private Sprite _icon;
    [SerializeField, Min(1)] private int _baseUses = 1;
    [SerializeField, Min(0f)] private float _durationSeconds;
    [SerializeField, Min(0f)] private float _magnitude = 1f;
    [SerializeField, Min(0f)] private float _cooldownSeconds;
    [Header("First-use tutorial")]
    [SerializeField] private string _tutorialHintKey;
    [SerializeField] private PassiveTutorialTarget _tutorialTarget;

    public string SpellId => _spellId;
    public CombatSpellCategory Category => _category;
    public ActiveSpellEffect ActiveEffect => _activeEffect;
    public PassiveSpellEffect PassiveEffect => _passiveEffect;
    public string TitleKey => _titleKey;
    public string DescriptionKey => _descriptionKey;
    public Sprite Icon => _icon;
    public int BaseUses => Mathf.Max(1, _baseUses);
    public float DurationSeconds => Mathf.Max(0f, _durationSeconds);
    public float Magnitude => Mathf.Max(0f, _magnitude);
    public float CooldownSeconds => Mathf.Max(0f, _cooldownSeconds);
    public string TutorialHintKey => _tutorialHintKey;
    public PassiveTutorialTarget TutorialTarget => _tutorialTarget;
}

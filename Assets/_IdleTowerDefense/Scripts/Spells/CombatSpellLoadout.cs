using UnityEngine;

[CreateAssetMenu(fileName = "Combat Spell Loadout", menuName = "Idle Tower Defense/Spells/Loadout")]
public sealed class CombatSpellLoadout : ScriptableObject
{
    public const int MaxActiveSlots = 3;

    [SerializeField] private CombatSpellDefinition[] _activeSpells = new CombatSpellDefinition[MaxActiveSlots];
    [SerializeField] private CombatSpellDefinition _passiveSpell;

    public CombatSpellDefinition[] ActiveSpells => _activeSpells;
    public CombatSpellDefinition PassiveSpell => _passiveSpell;

    private void OnValidate()
    {
        if (_activeSpells == null)
        {
            _activeSpells = new CombatSpellDefinition[MaxActiveSlots];
            return;
        }

        if (_activeSpells.Length <= MaxActiveSlots)
            return;

        var trimmed = new CombatSpellDefinition[MaxActiveSlots];
        System.Array.Copy(_activeSpells, trimmed, MaxActiveSlots);
        _activeSpells = trimmed;
    }
}

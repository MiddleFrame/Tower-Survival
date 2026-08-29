using System.Collections.Generic;
using TMPro;
using UnityEngine;

public sealed class CombatSpellHudView : MonoBehaviour
{
    [SerializeField] private TMP_Text _heading;
    [SerializeField] private RectTransform _activeContainer;
    [SerializeField] private CombatSpellButtonView _activeButtonPrefab;
    [SerializeField] private PassiveSpellBadgeView _passiveBadge;

    private readonly List<CombatSpellButtonView> _activeButtons = new();
    private CombatSpellController _controller;

    public void Bind(CombatSpellController controller)
    {
        _controller = controller;
        LightweightLocalization.Bind(_heading, "game.spells");

        foreach (CombatSpellButtonView button in _activeButtons)
        {
            if (button != null)
                Destroy(button.gameObject);
        }
        _activeButtons.Clear();

        CombatSpellDefinition[] definitions = controller.ActiveSpells;
        for (int i = 0; i < definitions.Length; i++)
        {
            if (definitions[i] == null)
                continue;

            CombatSpellButtonView button = Instantiate(_activeButtonPrefab, _activeContainer);
            button.Bind(controller, i, definitions[i]);
            _activeButtons.Add(button);
        }

        _passiveBadge.Bind(controller, controller.PassiveSpell);
        RefreshRuntime();
    }

    public void RefreshRuntime()
    {
        foreach (CombatSpellButtonView button in _activeButtons)
            button.Refresh();
        _passiveBadge.Refresh();
    }
}

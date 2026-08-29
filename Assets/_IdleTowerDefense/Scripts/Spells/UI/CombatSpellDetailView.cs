using TMPro;
using UnityEngine;
using UnityEngine.UI;

public sealed class CombatSpellDetailView : MonoBehaviour
{
    [SerializeField] private Image _icon;
    [SerializeField] private TMP_Text _title;
    [SerializeField] private TMP_Text _description;
    [SerializeField] private TMP_Text _status;

    private CombatSpellController _controller;
    private CombatSpellDefinition _definition;
    private int _slotIndex;
    private bool _isPassive;

    public void Bind(CombatSpellController controller, CombatSpellDefinition definition,
        int slotIndex, bool isPassive)
    {
        _controller = controller;
        _definition = definition;
        _slotIndex = slotIndex;
        _isPassive = isPassive;

        bool hasDefinition = definition != null;
        gameObject.SetActive(hasDefinition);
        if (!hasDefinition)
            return;

        _icon.sprite = definition.Icon;
        _icon.enabled = definition.Icon != null;
        LightweightLocalization.Bind(_title, definition.TitleKey);
        LightweightLocalization.Bind(_description, definition.DescriptionKey);
        Refresh();
    }

    public void Refresh()
    {
        if (_controller == null || _definition == null)
            return;

        if (_isPassive)
        {
            float cooldown = _controller.PassiveCooldownRemaining;
            if (cooldown > 0f)
                LightweightLocalization.Bind(_status, "spell.cooldown", cooldown.ToString("0.0"));
            else
                LightweightLocalization.Bind(_status, "spell.ready");
            return;
        }

        int remaining = _controller.GetRemainingUses(_slotIndex);
        if (remaining > 0)
            LightweightLocalization.Bind(_status, "spell.uses", remaining);
        else
            LightweightLocalization.Bind(_status, "spell.used");
    }
}

using TMPro;
using UnityEngine;
using UnityEngine.UI;

public sealed class PassiveSpellBadgeView : MonoBehaviour
{
    [SerializeField] private Button _button;
    [SerializeField] private Image _icon;
    [SerializeField] private TMP_Text _shortTitle;
    [SerializeField] private GameObject _detailsPanel;
    [SerializeField] private TMP_Text _detailsTitle;
    [SerializeField] private TMP_Text _detailsDescription;
    [SerializeField] private TMP_Text _status;

    private CombatSpellController _controller;
    private CombatSpellDefinition _definition;

    public void Bind(CombatSpellController controller, CombatSpellDefinition definition)
    {
        _controller = controller;
        _definition = definition;
        _button.onClick.RemoveListener(ToggleDetails);
        _button.onClick.AddListener(ToggleDetails);

        bool hasDefinition = definition != null;
        gameObject.SetActive(hasDefinition);
        if (!hasDefinition)
            return;

        _icon.sprite = definition.Icon;
        _icon.enabled = definition.Icon != null;
        LightweightLocalization.Bind(_shortTitle, definition.TitleKey);
        LightweightLocalization.Bind(_detailsTitle, definition.TitleKey);
        LightweightLocalization.Bind(_detailsDescription, definition.DescriptionKey);
        _detailsPanel.SetActive(false);
        Refresh();
    }

    public void Refresh()
    {
        if (_controller == null || _definition == null)
            return;

        float cooldown = _controller.PassiveCooldownRemaining;
        if (cooldown > 0f)
            LightweightLocalization.Bind(_status, "spell.cooldown", cooldown.ToString("0.0"));
        else
            LightweightLocalization.Bind(_status, "spell.ready");
    }

    private void ToggleDetails()
    {
        _detailsPanel.SetActive(!_detailsPanel.activeSelf);
    }
}

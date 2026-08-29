using System;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public sealed class PassiveSpellBadgeView : MonoBehaviour
{
    [SerializeField] private Button _button;
    [SerializeField] private Image _icon;
    [FormerlySerializedAs("_shortTitle")]
    [SerializeField] private TMP_Text _status;

    private CombatSpellController _controller;
    private CombatSpellDefinition _definition;
    private Action _onPressed;

    public void Bind(CombatSpellController controller, CombatSpellDefinition definition, Action onPressed)
    {
        _controller = controller;
        _definition = definition;
        _onPressed = onPressed;
        _button.onClick.RemoveListener(HandlePressed);
        _button.onClick.AddListener(HandlePressed);

        bool hasDefinition = definition != null;
        gameObject.SetActive(hasDefinition);
        if (!hasDefinition)
            return;

        _icon.sprite = definition.Icon;
        _icon.enabled = definition.Icon != null;
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

    private void HandlePressed()
    {
        _onPressed?.Invoke();
    }
}

using TMPro;
using UnityEngine;
using UnityEngine.UI;

public sealed class CombatSpellButtonView : MonoBehaviour
{
    [SerializeField] private Button _button;
    [SerializeField] private Image _background;
    [SerializeField] private Image _icon;
    [SerializeField] private TMP_Text _title;
    [SerializeField] private TMP_Text _uses;
    [SerializeField] private GameObject _durationBadge;
    [SerializeField] private TMP_Text _duration;
    [SerializeField] private GameObject _usedOverlay;

    private static readonly Color ReadyBackground = Color.white;
    private static readonly Color ActiveBackground = new(0.82f, 0.96f, 1f, 1f);
    private static readonly Color UsedBackground = new(0.62f, 0.70f, 0.70f, 1f);
    private static readonly Color ReadyContent = Color.white;
    private static readonly Color UsedIcon = new(0.55f, 0.62f, 0.62f, 1f);
    private static readonly Color ReadyText = new(1f, 0.94f, 0.55f, 1f);
    private static readonly Color ActiveText = new(1f, 0.94f, 0.55f, 1f);
    private static readonly Color UsedText = new(0.25f, 0.31f, 0.30f, 1f);

    private CombatSpellController _controller;
    private CombatSpellDefinition _definition;
    private int _slotIndex;
    public int SlotIndex => _slotIndex;
    public RectTransform TargetRect => (RectTransform)transform;

    public void Bind(CombatSpellController controller, int slotIndex, CombatSpellDefinition definition)
    {
        _controller = controller;
        _definition = definition;
        _slotIndex = slotIndex;
        _button.onClick.RemoveListener(Cast);
        _button.onClick.AddListener(Cast);
        NormalizeButtonColors();
        _icon.sprite = definition != null ? definition.Icon : null;
        _icon.enabled = definition != null && definition.Icon != null;

        if (definition != null)
            LightweightLocalization.Bind(_title, definition.TitleKey);
        if (_title != null)
            _title.gameObject.SetActive(false);

        gameObject.SetActive(definition != null);
        Refresh();
    }

    public void Refresh()
    {
        if (_controller == null || !gameObject.activeSelf)
            return;

        int remaining = _controller.GetRemainingUses(_slotIndex);
        LightweightLocalization.Bind(_uses, "spell.uses", remaining);
        float activeDuration = _controller.GetActiveDurationRemaining(_slotIndex);
        bool isActive = activeDuration > 0.01f;
        bool isUsed = remaining <= 0 && !isActive;
        float configuredDuration = _controller.GetConfiguredDuration(_slotIndex);
        bool showDuration = _definition != null && configuredDuration > 0f
                            && (remaining > 0 || isActive);

        _button.interactable = remaining > 0;
        if (_background != null)
            _background.color = isActive ? ActiveBackground : isUsed ? UsedBackground : ReadyBackground;
        if (_icon != null)
            _icon.color = isUsed ? UsedIcon : ReadyContent;
        if (_title != null)
            _title.color = isActive ? ActiveText : isUsed ? UsedText : ReadyText;
        if (_uses != null)
        {
            _uses.gameObject.SetActive(remaining > 0);
            _uses.color = ReadyText;
        }
        if (_durationBadge != null)
            _durationBadge.SetActive(showDuration);
        if (_duration != null && showDuration)
        {
            float displayedDuration = isActive ? activeDuration : configuredDuration;
            string format = isActive && displayedDuration < 10f ? "0.0" : "0";
            LightweightLocalization.Bind(_duration, "spell.cooldown", displayedDuration.ToString(format));
            _duration.color = isActive ? ActiveText : ReadyText;
        }
        if (_usedOverlay != null)
            _usedOverlay.SetActive(isUsed);
    }

    private void Cast()
    {
        _controller?.TryCastActive(_slotIndex);
    }

    private void NormalizeButtonColors()
    {
        ColorBlock colors = _button.colors;
        colors.normalColor = Color.white;
        colors.highlightedColor = new Color(1f, 0.96f, 0.82f, 1f);
        colors.pressedColor = new Color(0.72f, 0.90f, 0.96f, 1f);
        colors.selectedColor = colors.highlightedColor;
        colors.disabledColor = Color.white;
        colors.fadeDuration = 0.08f;
        _button.colors = colors;
        _button.transition = Selectable.Transition.ColorTint;
    }
}

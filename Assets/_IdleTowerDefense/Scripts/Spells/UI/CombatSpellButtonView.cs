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
    [SerializeField] private GameObject _usedOverlay;

    private static readonly Color ReadyBackground = Color.white;
    private static readonly Color UsedBackground = new(0.62f, 0.70f, 0.70f, 1f);
    private static readonly Color ReadyContent = Color.white;
    private static readonly Color UsedIcon = new(0.55f, 0.62f, 0.62f, 1f);
    private static readonly Color ReadyText = new(0.12f, 0.08f, 0.05f, 1f);
    private static readonly Color UsedText = new(0.25f, 0.31f, 0.30f, 1f);

    private CombatSpellController _controller;
    private int _slotIndex;

    public void Bind(CombatSpellController controller, int slotIndex, CombatSpellDefinition definition)
    {
        _controller = controller;
        _slotIndex = slotIndex;
        _button.onClick.RemoveListener(Cast);
        _button.onClick.AddListener(Cast);
        NormalizeButtonColors();
        _icon.sprite = definition != null ? definition.Icon : null;
        _icon.enabled = definition != null && definition.Icon != null;

        if (definition != null)
            LightweightLocalization.Bind(_title, definition.TitleKey);

        gameObject.SetActive(definition != null);
        Refresh();
    }

    public void Refresh()
    {
        if (_controller == null || !gameObject.activeSelf)
            return;

        int remaining = _controller.GetRemainingUses(_slotIndex);
        LightweightLocalization.Bind(_uses, "spell.uses", remaining);
        bool isUsed = remaining <= 0;
        _button.interactable = !isUsed;
        if (_background != null)
            _background.color = isUsed ? UsedBackground : ReadyBackground;
        if (_icon != null)
            _icon.color = isUsed ? UsedIcon : ReadyContent;
        if (_title != null)
            _title.color = isUsed ? UsedText : ReadyText;
        if (_uses != null)
            _uses.color = isUsed ? UsedText : ReadyText;
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

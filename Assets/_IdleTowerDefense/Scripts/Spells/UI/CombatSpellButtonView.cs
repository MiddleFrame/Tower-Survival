using TMPro;
using UnityEngine;
using UnityEngine.UI;

public sealed class CombatSpellButtonView : MonoBehaviour
{
    [SerializeField] private Button _button;
    [SerializeField] private Image _icon;
    [SerializeField] private TMP_Text _title;
    [SerializeField] private TMP_Text _uses;
    [SerializeField] private GameObject _usedOverlay;

    private CombatSpellController _controller;
    private int _slotIndex;

    public void Bind(CombatSpellController controller, int slotIndex, CombatSpellDefinition definition)
    {
        _controller = controller;
        _slotIndex = slotIndex;
        _button.onClick.RemoveListener(Cast);
        _button.onClick.AddListener(Cast);
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
        _button.interactable = remaining > 0;
        if (_usedOverlay != null)
            _usedOverlay.SetActive(remaining <= 0);
    }

    private void Cast()
    {
        _controller?.TryCastActive(_slotIndex);
    }
}

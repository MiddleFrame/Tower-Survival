using TMPro;
using UnityEngine;

[DisallowMultipleComponent]
public sealed class LocalizedTextBinding : MonoBehaviour
{
    [SerializeField] private TMP_Text _target;
    [SerializeField] private string _key;
    private object[] _arguments;
    [SerializeField] private bool _uppercase;

    public void Bind(TMP_Text target, string key, bool uppercase, params object[] arguments)
    {
        _target = target;
        _key = key;
        _uppercase = uppercase;
        _arguments = arguments;
        Refresh();
    }

    private void OnEnable()
    {
        LightweightLocalization.LanguageChanged += Refresh;
        Refresh();
    }

    private void OnDisable()
    {
        LightweightLocalization.LanguageChanged -= Refresh;
    }

    private void Refresh()
    {
        if (_target == null)
            _target = GetComponent<TMP_Text>();

        if (_target != null && !string.IsNullOrEmpty(_key))
        {
            string value = LightweightLocalization.Get(_key, _arguments);
            _target.text = _uppercase ? LightweightLocalization.ToUpper(value) : value;
        }
    }

    public void RefreshNow()
    {
        Refresh();
    }
}

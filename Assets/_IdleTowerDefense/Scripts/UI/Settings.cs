using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Settings : MonoBehaviour
{
    [SerializeField]
    private Slider _music;

    [SerializeField]
    private SaveOnUpHandler _saveMusic;

    [SerializeField]
    private Slider _sound;

    [SerializeField]
    private SaveOnUpHandler _saveSound;

    [SerializeField]
    private Toggle _damageShow;

    [SerializeField]
    private AudioSource _musicSource;

    [SerializeField]
    private AudioSource[] _soundSource;

    private TMP_Text _languageTitle;
    private TMP_Dropdown _languageDropdown;

    public static bool isDamageShow = true;

    private string _discordLinc = "https://discord.gg/5YMYWCcsAv";
    private string _ggolePlayLink = "https://play.google.com/store/apps/details?id=com.MiddleFrame.TowerSurvival";

    private void Awake()
    {
        float sound = ES3.Load(SaveKeys.Sound, 1f);
        float music = ES3.Load(SaveKeys.Music, 1f);
        _music.value = music;
        _sound.value = sound;
        ChangeMusicVolume(music);
        ChangeSoundVolume(sound);
        if (!ValidateReferences())
            return;

        _saveSound.EndDrag += (value) =>
        {
            Debug.Log("Change sound");
            ES3.Save(SaveKeys.Sound, value);
        }; 
        _saveMusic.EndDrag += (value) =>
        {
            Debug.Log("Change music");
            ES3.Save(SaveKeys.Music, value);
        };
        _music.onValueChanged.AddListener(ChangeMusicVolume);
        _sound.onValueChanged.AddListener(ChangeSoundVolume);
        isDamageShow = ES3.Load(SaveKeys.DamageShow, true);
        _damageShow.isOn = isDamageShow;
        InitializeLanguageSetting();
    }

    private void ChangeMusicVolume(float volume)
    {
        _musicSource.volume = volume;
    }

    private void ChangeSoundVolume(float volume)
    {
        foreach (var source in _soundSource)
        {
            source.volume = volume;
        }
    }

    public void OpenDiscord()
    {
        Application.OpenURL(_discordLinc);
    }
    public void OpenGooglePlay()
    {
        Application.OpenURL(_ggolePlayLink);
    }

    public void DamageShowToggle(bool toggle)
    {
        isDamageShow = toggle;
        ES3.Save(SaveKeys.DamageShow, toggle);
    }
    
    public void SetPromo(string promo)
    {
        if (promo.ToUpper() == "GOLD10" && !ES3.Load("Promo1", false))
        {
            DataController.Currency.AddValues(new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold, 10));
            ES3.Save(SaveKeys.Gold, DataController.Currency[CurrencyTypes.Gold].value);
            ES3.Save("Promo1", true);
        }
        if (promo.ToUpper() == "BIGGOLDBUG" && !ES3.Load("Promo2", false))
        {
            DataController.Currency.AddValues(new KeyValuePair<CurrencyTypes, int>(CurrencyTypes.Gold, 5000));
            ES3.Save(SaveKeys.Gold, DataController.Currency[CurrencyTypes.Gold].value);
            ES3.Save("Promo2", true);
        }
    }

    private void InitializeLanguageSetting()
    {
        LightweightLocalization.Initialize();

        Transform content = _damageShow.transform.parent;
        Transform languageRow = content.Find("Language");
        if (languageRow == null)
        {
            Debug.LogError("The Settings prefab has no Language row.", this);
            return;
        }

        _languageTitle = languageRow.Find("Title")?.GetComponent<TMP_Text>();
        _languageDropdown = languageRow.GetComponentInChildren<TMP_Dropdown>(true);
        if (_languageTitle == null || _languageDropdown == null)
        {
            Debug.LogError("The Language row is missing its title or TMP_Dropdown reference.", this);
            return;
        }

        _languageDropdown.onValueChanged.RemoveListener(SetLanguage);
        _languageDropdown.SetValueWithoutNotify((int)LightweightLocalization.CurrentLanguage);
        _languageDropdown.RefreshShownValue();
        _languageDropdown.onValueChanged.AddListener(SetLanguage);

        LightweightLocalization.LanguageChanged -= UpdateLanguageSetting;
        LightweightLocalization.LanguageChanged += UpdateLanguageSetting;
        UpdateLanguageSetting();
    }

    private void SetLanguage(int languageIndex)
    {
        GameLanguage language = System.Enum.IsDefined(typeof(GameLanguage), languageIndex)
            ? (GameLanguage)languageIndex
            : GameLanguage.English;
        LightweightLocalization.SetLanguage(language);
    }

    private void UpdateLanguageSetting()
    {
        if (_languageTitle != null)
            _languageTitle.text = LightweightLocalization.Get("settings.language");

        if (_languageDropdown != null)
        {
            _languageDropdown.SetValueWithoutNotify((int)LightweightLocalization.CurrentLanguage);
            _languageDropdown.RefreshShownValue();
        }
    }

    private void OnDestroy()
    {
        LightweightLocalization.LanguageChanged -= UpdateLanguageSetting;
    }

    private bool ValidateReferences()
    {
        bool isValid = true;

        if (_saveMusic == null)
        {
            Debug.LogError($"{nameof(Settings)} on {name} has no music save handler reference.", this);
            isValid = false;
        }

        if (_saveSound == null)
        {
            Debug.LogError($"{nameof(Settings)} on {name} has no sound save handler reference.", this);
            isValid = false;
        }

        return isValid;
    }
}

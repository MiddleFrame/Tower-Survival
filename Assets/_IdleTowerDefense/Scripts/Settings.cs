using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Settings : MonoBehaviour
{
    [SerializeField]
    private Slider _music;

    private SaveOnUpHandler _saveMusic;
    [SerializeField]
    private Slider _sound;

    private SaveOnUpHandler _saveSound;

    [SerializeField]
    private Toggle _damageShow;

    [SerializeField]
    private AudioSource _musicSource;

    [SerializeField]
    private AudioSource[] _soundSource;

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
        _saveMusic= _music.GetComponent<SaveOnUpHandler>();
        _saveSound=_sound.GetComponent<SaveOnUpHandler>();
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
            ES3.Save("Promo1", true);
        }
    }
}
using UnityEngine;
using UnityEngine.UI;

public class Settings : MonoBehaviour
{
    [SerializeField]
    private Slider _music;

    [SerializeField]
    private Slider _sound;
    [SerializeField]
    private Toggle _damageShow;

    [SerializeField]
    private AudioSource _musicSource;
    [SerializeField]
    private AudioSource _soundSource;

    public static bool isDamageShow=true;

    private string _discordLinc ="https://discord.gg/5YMYWCcsAv";
    private void Awake()
    {
        GameAudioSettings settings = ES3.Load(SaveKeys.Audio, new GameAudioSettings());
        _music.value = settings.music;
        _sound.value = settings.sound;
        ChangeMusicVolume( settings.music);
        ChangeSoundVolume(settings.sound);
        _music.onValueChanged.AddListener(ChangeMusicVolume);
        _sound.onValueChanged.AddListener(ChangeSoundVolume);
        isDamageShow=ES3.Load(SaveKeys.DamageShow, true);
        _damageShow.isOn = isDamageShow;
    }

    private void ChangeMusicVolume(float volume)
    {
        _musicSource.volume = volume;
    }  
    private void ChangeSoundVolume(float volume)
    {
        _soundSource.volume = volume;
    }

    public void OpenDiscord()
    {
         Application.OpenURL(_discordLinc);  
    }

    public void DamageShowToggle(bool toggle)
    {
        isDamageShow = toggle;
        ES3.Save(SaveKeys.DamageShow, toggle);
    }
}
using System;
using UnityEngine;
using UnityEngine.UI;

public class MenuWindowController : MonoBehaviour
{
    [SerializeField]
    private Animator _menu;
    [SerializeField]
    private Animator _shop;
    [SerializeField]
    private Animator _grades;
    [SerializeField]
    private Animator _settings;

    [SerializeField]
    private Button _playButton;
   // [SerializeField]
   // private GameStarter _worldOne;

    [SerializeField]
    private Button _upgradesButton;

    [SerializeField]
    private Button _villageButton;
    [SerializeField]
    private Button _futureButton;
    [SerializeField]
    private Button _settingsButton;

    [SerializeField]
    private GameObject _closePopup;

    [SerializeField]
    private CameraMotion _cameraMotion;

    private void Start()
    {
        //_worldOne.Init(OpenMenu);
        _playButton.onClick.AddListener(GoToMain);
        _playButton.onClick.AddListener(OpenMenu);
        _upgradesButton.onClick.AddListener(OpenGrades);
        _villageButton.onClick.AddListener(GoToVillage);
        _futureButton.onClick.AddListener(InDevelopment);
        _settingsButton.onClick.AddListener(OpenSetting);
    }
    
    public void OpenMenu()
    {
        if (_menu.gameObject.activeSelf)
        {
            _menu.gameObject.SetActive(false);
            return;
        }
        if(_shop.gameObject.activeSelf) 
            _shop.gameObject.SetActive(false);
        if(_grades.gameObject.activeSelf) 
            _grades.gameObject.SetActive(false);
        if(_settings.gameObject.activeSelf) 
            _settings.gameObject.SetActive(false);
        
        _menu.gameObject.SetActive(true);
        _menu.Play("Fade In");
    }

    private void GoToMain()
    {
        StartCoroutine(_cameraMotion.GoToMain());
    }

    private void GoToVillage()
    {
        
        StartCoroutine(_cameraMotion.GoToVillage());
    }
    private void CloseWindow(string text)
    {
        _closePopup.SetActive(true);
    }
    private void InDevelopment()
    {
        _closePopup.SetActive(true);
    }
    public void OpenShop()
    {
        if (_shop.gameObject.activeSelf)
        {
            _shop.gameObject.SetActive(false);
            return;
        }
        if(_menu.gameObject.activeSelf) 
            _menu.gameObject.SetActive(false);
        if(_grades.gameObject.activeSelf) 
            _grades.gameObject.SetActive(false);
        if(_settings.gameObject.activeSelf) 
            _settings.gameObject.SetActive(false);
        
        _shop.gameObject.SetActive(true);
        _shop.Play("Fade In");
    }
    public void OpenGrades()
    {
        if (_grades.gameObject.activeSelf)
        {
            _grades.gameObject.SetActive(false);
            return;
        }
        if(_shop.gameObject.activeSelf) 
            _shop.gameObject.SetActive(false);
        if(_menu.gameObject.activeSelf) 
            _menu.gameObject.SetActive(false);
        if(_settings.gameObject.activeSelf) 
            _settings.gameObject.SetActive(false);
        
        _grades.gameObject.SetActive(true);
        _grades.Play("Fade In");
    }
    public void OpenSetting()
    {
        if (_settings.gameObject.activeSelf)
        {
            _settings.gameObject.SetActive(false);
            return;
        }
        if(_shop.gameObject.activeSelf) 
            _shop.gameObject.SetActive(false);
        if(_grades.gameObject.activeSelf) 
            _grades.gameObject.SetActive(false);
        if(_menu.gameObject.activeSelf) 
            _menu.gameObject.SetActive(false);
        
        _settings.gameObject.SetActive(true);
        _settings.Play("Fade In");
    }
    
    
}

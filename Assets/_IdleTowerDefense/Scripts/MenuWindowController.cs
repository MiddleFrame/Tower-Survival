using UnityEngine;

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

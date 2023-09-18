using TMPro;
using UnityEngine;

public class CurrencyDrops : MonoBehaviour
{
    [SerializeField]
    private GameObject _ore;

    [SerializeField]
    private TMP_Text _expText;
    [SerializeField]
    private TMP_Text _oreText;

    [SerializeField]
    private float speed;

    private Vector3 navigate;

    private float timer;

    public Transform Construct(float exp, float ore)
    {
        if(ore <=0)
            _ore.SetActive(false);
        _expText.text = exp.ToString("N0");
        _oreText.text = ore.ToString("N0");
        navigate = Vector3.up*speed;
        timer = 0.5f;
        return transform;
    }
    
    void Update()
    {
        timer -= Time.deltaTime;
        if(timer<=0)
            Destroy(gameObject);
        transform.position += navigate*Time.deltaTime;
    }
}

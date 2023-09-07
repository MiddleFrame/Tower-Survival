using System.Collections;
using System.Collections.Generic;
using Leopotam.EcsLite;
using UnityEngine;
using UnityEngine.UI;

public class HealthBar : MonoBehaviour
{
    [SerializeField]
    private Slider _healthBar;
    [SerializeField]
    private Image _healthImage;
    
    public EcsPackedEntity PackedEntity;

    // Update is called once per frame
    void Update()
    {
        if (!PackedEntity.Unpack(GameManager.Instance.World, out int unpackedTower))
        {
            Debug.Log($"{nameof(TowerView)}.{nameof(Update)}() - Attempted to get an invalid packed entity!");
            return;
        }
        EcsPool<Health> healthPool = GameManager.Instance.World.GetPool<Health>();
        ref Health towerHealth = ref healthPool.Get(unpackedTower);

        _healthBar.value = towerHealth.CurrentHealth / towerHealth.MaxHealth;
        _healthImage.color = Color.Lerp(new Color32(0x95,0x43,0x50,0xFF), new Color32(0x58,0x95,0x43,0xFF), towerHealth.CurrentHealth / towerHealth.MaxHealth);
    }
}

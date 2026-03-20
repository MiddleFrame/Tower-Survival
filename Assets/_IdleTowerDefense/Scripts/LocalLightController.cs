using UnityEngine;
using UnityEngine.Rendering.Universal;

[RequireComponent(typeof(Light2D))]
public class LocalLightController : MonoBehaviour
{
    public float baseIntensity = 0f;

    private Light2D light2D;
    private DayNightController dayNightController;
    private float currentMultiplier = 1f;

    private void Awake()
    {
        light2D = GetComponent<Light2D>();
        
        if (baseIntensity <= 0f)
        {
            baseIntensity = light2D.intensity;
        }
    }

    private void Start()
    {
        dayNightController = FindFirstObjectByType<DayNightController>();
        
        if (dayNightController != null)
        {
            dayNightController.OnLocalLightsMultiplierChanged += UpdateMultiplier;
            
            UpdateMultiplier(dayNightController.GetCurrentLocalMultiplier());
        }
        else
        {
            Debug.LogWarning("Начальника, DayNightController на сцену добавь, ебланом не будь");
        }
    }

    private void UpdateMultiplier(float multiplier)
    {
        currentMultiplier = multiplier;
        if (light2D != null)
        {
            light2D.intensity = baseIntensity * currentMultiplier;
        }
    }

    private void OnDestroy()
    {
        if (dayNightController != null)
        {
            dayNightController.OnLocalLightsMultiplierChanged -= UpdateMultiplier;
        }
    }

    public void SetBaseIntensity(float newBaseIntensity)
    {
        baseIntensity = newBaseIntensity;
        if (dayNightController != null)
        {
            light2D.intensity = baseIntensity * currentMultiplier;
        }
    }
}
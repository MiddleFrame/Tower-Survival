using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(EnemySpawnSettings))]
public class EnemySpawnSettingsEditor : Editor  
{
    public override void OnInspectorGUI()
    {
        DrawDefaultInspector();
        EnemySpawnSettings settings = (EnemySpawnSettings)target;
        if (GUILayout.Button("Normalize"))
        {
            settings.stages[0].enemiesKilledToStartStage = 0;
            foreach (var chance in settings.stages)
            {
                chance.NormalizeEntries();
            }
        }
    }
}

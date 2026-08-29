using UnityEngine;
using UnityEditor;

namespace Guirao.UltimateTextDamage
{
    public class UltimateTextDamageEditor : EditorWindow
    {
        // Added to window menu
        [MenuItem( "Window/UltimateTextDamage/Open preferences" )]
        public static void OpenPreferences( )
        {
            UTDWindow window = (UTDWindow)EditorWindow.GetWindow<UTDWindow>( "UTD Preferences" );
            window.Show( );
        }
    }

    public class UTDWindow : EditorWindow
    {
        void OnGUI( )
        {
            GUILayout.Label( "Ultimate Text Damage" , EditorStyles.helpBox );
            GUILayout.Label( "Preferences" , EditorStyles.largeLabel );

            GUILayout.Label( "Text renderer" , EditorStyles.boldLabel );
            EditorGUILayout.HelpBox(
                "This project uses the TextMesh Pro renderer directly. The legacy renderer toggle is no longer required.",
                MessageType.Info );
        }
    }
}

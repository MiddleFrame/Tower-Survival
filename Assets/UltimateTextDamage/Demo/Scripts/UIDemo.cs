using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace Guirao.UltimateTextDamage
{
    public class UIDemo : MonoBehaviour
    {
        public Text labelText;
        
        // Use this for initialization
        void Start( )
        {

            if( labelText != null )
                labelText.enabled = false;
        }
    }
}

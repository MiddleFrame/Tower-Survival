using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Guirao.UltimateTextDamage
{
    public class TextDamageStackClicker : MonoBehaviour
    {
        public UltimateTextDamageManager textManager;
        public Transform overrideTransform;
        public float minValue = 450;
        public float maxValue = 2000;

        public bool autoclicker = false;
        public float clickRate = 1;

        float lastTimeClick;
        int numberOfClicks;

        int nextNumberOfClicks;

        private void Start( )
        {
            nextNumberOfClicks = UnityEngine.Random.Range( 2 , 10 );
        }

        private void AddDamage( )
        {
            float value = Random.Range( minValue , maxValue );

            string stackKey = "normal";

            if( UnityEngine.Random.value <= 0.1f )
            {
                stackKey = "critical";
                value *= 2;
            }
            textManager.AddStack( value , overrideTransform != null ? overrideTransform : transform , stackKey );
        }

#if UNITY_EDITOR
        private void OnMouseUpAsButton( ) => AddDamage( );
#endif
      
        private void Update( )
        {
            if( !autoclicker )
                return;

            if( numberOfClicks > nextNumberOfClicks )
            {
                lastTimeClick = Time.time + UnityEngine.Random.Range( 0.3f , 1.5f );
                numberOfClicks = 0;
                nextNumberOfClicks = UnityEngine.Random.Range( 2 , 10 );
            }

            if( Time.time - lastTimeClick >= 1f / clickRate )
            {
                lastTimeClick = Time.time;
                AddDamage( );
                numberOfClicks++;
            }
        }
    }
}

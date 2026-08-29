using UnityEngine;
using System.Collections.Generic;

namespace Guirao.UltimateTextDamage
{
    [System.Serializable]
    public class TextDamageType
    {
        public string keyType;
        public int poolCount = 20;
        public UITextDamage prefab;
    }

    public class UltimateTextDamageManager : MonoBehaviour
    {
        public Canvas canvas;

        public GameObject dropPrefab;
        public Transform _uI;
        public bool convertToCamera = true;
        public Camera theCamera;
        public static UltimateTextDamageManager Instance;
        public bool autoFaceToCamera = false;
        public bool overlaping = true;
        public bool followsTarget = false;
        public float offsetUnits = 100; // This is if no overlaping
        public float damping = 20; // This is if no overlaping

        public List < TextDamageType > textTypes;

        private Dictionary< string , List< UITextDamage > > m_dTextTypes;
        private Dictionary< Transform , List< UITextDamage > > m_instancesInScreen;
        private readonly List< GameObject > m_tempObjects = new( );

        private void Awake( )
        {
            Instance = this;
        }
        
        /// <summary>
        /// Start Monobehaviours, initializes the manager with the pools
        /// </summary>
        private void Start( )
        {
            if( ( convertToCamera || autoFaceToCamera ) && theCamera == null )
                theCamera = Camera.main;

            // Allocate memory for our dictionaries
            m_instancesInScreen = new Dictionary<Transform , List<UITextDamage>>( );
            m_dTextTypes = new Dictionary<string , List<UITextDamage>>( );

            // Initialize all text types with a pool
            if( textTypes == null )
            {
                Debug.LogError( "Ultimate Text Damage has no text type list.", this );
                return;
            }

            foreach( TextDamageType text in textTypes )
            {
                Initialize( text );
            }

        }

        /// <summary>
        /// Adds stack damage and shows the text.
        /// </summary>
        /// <param name="value">The value to stack and accumulate.</param>
        /// <param name="transform">Transform in world space where the text will be positioned.</param>
        /// <param name="stackKey">The stack key that can be used within the same item for different visual effects.</param>
        /// <param name="key">Key type.</param> 
        public void AddStack( float value , Transform target , string stackKey = "normal" , string key = "default" )
        {
            if (!Settings.isDamageShow || target == null) return;
            UITextDamage uiToUse = null;

            if( !m_instancesInScreen.ContainsKey( target ) )
                m_instancesInScreen.Add( target , new List<UITextDamage>( ) );

            foreach( UITextDamage currentActive in m_instancesInScreen[ target ] )
            {
                if( currentActive != null && currentActive.IsStackReusable )
                {
                    bool isSameKey = false;
                    foreach( UITextDamage text in m_dTextTypes[ key ] )
                    {
                        if( text == currentActive )
                        {
                            isSameKey = true;
                            break;
                        }
                    }

                    if( isSameKey )
                    {
                        uiToUse = currentActive;
                        break;
                    }
                }
            }

            if( uiToUse == null )
            {
                uiToUse = GetAvailableText( key );
                if( uiToUse == null ) return;
                m_instancesInScreen[ target ].Add( uiToUse );
            }

            // Subscribe to animation end event
            uiToUse.eventOnEnd -= Label_eventOnEnd;
            uiToUse.eventOnEnd += Label_eventOnEnd;

            // Inject the transform
            uiToUse.currentTransformFollow = target;

            uiToUse.Cam = theCamera;

            // Show and set the text
            uiToUse.AddStackAndShow( value , target , stackKey );
        }

        /// <summary>
        /// Shows a desired text.
        /// </summary>
        /// <param name="text">Text to show as string</param>
        /// <param name="target">Transform for the text position to show</param>
        /// <param name="key">Key type</param>
        public void Add( string text , Transform target , string key = "default" )
        {            
            if (!Settings.isDamageShow || target == null) return;

            // Get available text instance to use
            UITextDamage uiToUse = GetAvailableText( key );
            if( uiToUse == null ) return;

            if( !m_instancesInScreen.ContainsKey( target ) )
                m_instancesInScreen.Add( target , new List<UITextDamage>( ) );

            m_instancesInScreen[ target ].Add( uiToUse );

            // Subscribe to animation end event
            uiToUse.eventOnEnd -= Label_eventOnEnd;
            uiToUse.eventOnEnd += Label_eventOnEnd;

            // Inject the transform
            uiToUse.currentTransformFollow = target;

            uiToUse.Cam = theCamera;

            // Show and set the text
            uiToUse.Show( text , target );
        }


        /// <summary>
        /// Shows a desired text.
        /// </summary>
        /// <param name="text">Text to show as string</param>
        /// <param name="position">Position for the text to show. Note: No overlaping and follow target won't work using this method</param>
        /// <param name="key">Key type</param>
        public void Add( string text , Vector3 position , string key = "default" )
        {           
            if (!Settings.isDamageShow) return;

            GameObject temp = GetTempObject( );
            temp.SetActive( true );
            temp.transform.position = position;

            Add( text , temp.transform , key );
        }

        /// <summary>
        /// Instantiates one text object of the desired type
        /// </summary>
        /// <param name="text">damage type</param>
        /// <returns></returns>
        private UITextDamage AllocateOneInstance( TextDamageType text )
        {
            if( text == null )
                return null;

            if( text?.prefab == null )
                return null;

            UITextDamage td = Instantiate( text.prefab, transform, false );
            Transform instanceTransform = td.transform;
            instanceTransform.localPosition = Vector3.zero;
            instanceTransform.localRotation = Quaternion.identity;
            instanceTransform.localScale = Vector3.one;
            td.Canvas = this.canvas;
            td.autoFaceCameraWorldSpace = autoFaceToCamera;
            td.Cam = theCamera;
            td.followsTarget = followsTarget;
            td.gameObject.SetActive( false );

            return td;
        }

        /// <summary>
        /// Initializes a pool of objects
        /// </summary>
        /// <param name="text">damage type</param>
        private void Initialize( TextDamageType text )
        {
            if( text == null || string.IsNullOrWhiteSpace( text.keyType ) || text.prefab == null )
            {
                Debug.LogError( "Ultimate Text Damage contains an invalid text type.", this );
                return;
            }

            if( m_dTextTypes.ContainsKey( text.keyType ) )
            {
                Debug.LogError( "Ultimate Text Damage contains a duplicate key: " + text.keyType, this );
                return;
            }

            m_dTextTypes.Add( text.keyType , new List<UITextDamage>( ) );
            List< UITextDamage > container = m_dTextTypes[ text.keyType ];

            for( int i = 0 ; i < text.poolCount ; i++ )
            {
                UITextDamage instance = AllocateOneInstance( text );
                if( instance != null )
                    container.Add( instance );
            }

            // If original prefab is in the scene, disable
            if( text.prefab.gameObject.scene == UnityEngine.SceneManagement.SceneManager.GetActiveScene( ) )
                text.prefab.gameObject.SetActive( false );
        }

        private void LateUpdate( )
        {
            if( overlaping ) return;

            if( m_instancesInScreen != null )
            {
                foreach( var keypair in m_instancesInScreen )
                {
                    int i = keypair.Value.Count;
                    foreach( UITextDamage text in keypair.Value )
                    {
                        text.Offset = Mathf.Lerp( text.Offset , ( i ) * offsetUnits , Time.deltaTime * damping );
                        i--;
                    }
                }
            }
        }

        private void Label_eventOnEnd( UITextDamage obj , Transform transformFollow )
        {
            obj.eventOnEnd -= Label_eventOnEnd;

            if( !ReferenceEquals( transformFollow, null ) &&
                m_instancesInScreen.TryGetValue( transformFollow, out List<UITextDamage> instances ) )
            {
                instances.Remove( obj );
                if( instances.Count == 0 )
                    m_instancesInScreen.Remove( transformFollow );

                if( transformFollow && m_tempObjects.Contains( transformFollow.gameObject ) )
                    transformFollow.gameObject.SetActive( false );
            }
        }

        private UITextDamage GetAvailableText( string keyType )
        {            

            if( !m_dTextTypes.TryGetValue( keyType, out List<UITextDamage> candidates ) )
            {
                Debug.LogError( "Text Damage -> Cannot find keyType " + keyType + " on  manager " + gameObject.name );
                return null;
            }

            for( int i = 0 ; i < candidates.Count ; i++ )
            {
                if( candidates[ i ].gameObject.activeSelf ) continue;
                if( candidates[ i ].UsedLabel != null )
                {
                    candidates[ i ].UsedLabel.transform.localPosition = Vector3.zero;
                }
                candidates[ i ].transform.localScale = Vector3.one;
                return candidates[ i ];
            }

            // Instantiate new
            UITextDamage newInstance = AllocateOneInstance( textTypes.Find( t => t.keyType == keyType ) );
            if( newInstance != null )
                candidates.Add( newInstance );

            return newInstance;
        }

        private GameObject GetTempObject( )
        {
            GameObject temp = null;
            for( int i = 0; i < m_tempObjects.Count; i++ )
            {
                if( !m_tempObjects[ i ].activeSelf )
                {
                    temp = m_tempObjects[ i ];
                    break;
                }
            }
            if( temp == null )
            {
                temp = new GameObject( "TEMP OBJECT" + m_tempObjects.Count );
                temp.transform.SetParent( transform );
                temp.hideFlags = HideFlags.HideInHierarchy;
                temp.SetActive( false );
                m_tempObjects.Add( temp );
            }

            return temp;
        }

        private void OnDestroy( )
        {
            if( Instance == this )
                Instance = null;
        }
    }
}

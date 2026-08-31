Shader "IdleTowerDefense/PurgeRadialFlash"
{
    Properties
    {
        [PerRendererData] _MainTex ("Texture", 2D) = "white" {}
        _InnerColor ("Inner Color", Color) = (0.94, 1, 0.86, 1)
        _OuterColor ("Outer Color", Color) = (0.34, 0.9, 0.82, 1)
        _Origin ("Origin", Vector) = (0.5, 0.5, 0, 0)
        _Aspect ("Aspect", Float) = 1
        _Progress ("Progress", Range(0, 1)) = 0
        _Charge ("Charge", Range(0, 1)) = 0
    }

    SubShader
    {
        Tags
        {
            "Queue"="Transparent+100"
            "RenderType"="Transparent"
            "RenderPipeline"="UniversalPipeline"
        }

        Cull Off
        ZWrite Off
        ZTest Always
        Blend SrcAlpha One

        Pass
        {
            HLSLPROGRAM
            #pragma vertex Vert
            #pragma fragment Frag
            #include "Packages/com.unity.render-pipelines.universal/ShaderLibrary/Core.hlsl"

            struct Attributes
            {
                float4 positionOS : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct Varyings
            {
                float4 positionHCS : SV_POSITION;
                float2 uv : TEXCOORD0;
            };

            float4 _InnerColor;
            float4 _OuterColor;
            float2 _Origin;
            float _Aspect;
            float _Progress;
            float _Charge;

            Varyings Vert(Attributes input)
            {
                Varyings output;
                output.positionHCS = TransformObjectToHClip(input.positionOS.xyz);
                output.uv = input.uv;
                return output;
            }

            half4 Frag(Varyings input) : SV_Target
            {
                float2 delta = input.uv - _Origin;
                delta.x *= _Aspect;
                float distanceFromOrigin = length(delta);

                float chargeRadius = lerp(0.025, 0.09, _Charge);
                float chargeGlow = saturate(1.0 - distanceFromOrigin / chargeRadius) * (1.0 - _Progress);

                float radius = lerp(0.02, 1.25, _Progress);
                float ringWidth = lerp(0.055, 0.018, _Progress);
                float ring = 1.0 - smoothstep(0.0, ringWidth, abs(distanceFromOrigin - radius));
                float innerFlash = saturate(1.0 - distanceFromOrigin / max(radius, 0.001))
                    * saturate(1.0 - _Progress * 1.35);

                float alpha = saturate(chargeGlow * 0.55 + ring * (1.0 - _Progress) * 0.9 + innerFlash * 0.32);
                half3 color = lerp(_InnerColor.rgb, _OuterColor.rgb, saturate(distanceFromOrigin / max(radius, 0.001)));
                return half4(color, alpha);
            }
            ENDHLSL
        }
    }
}

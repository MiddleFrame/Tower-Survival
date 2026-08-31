Shader "IdleTowerDefense/SpriteDiamondShimmer"
{
    Properties
    {
        [PerRendererData] _MainTex ("Sprite Texture", 2D) = "white" {}
        _Tint ("Diamond Tint", Color) = (0.56, 0.86, 0.84, 1)
        _ShimmerColor ("Shimmer Color", Color) = (0.86, 1, 0.96, 1)
        _ShimmerSpeed ("Shimmer Speed", Range(0.1, 4)) = 1.15
        _ShimmerWidth ("Shimmer Width", Range(0.02, 0.3)) = 0.1
        _ShimmerIntensity ("Shimmer Intensity", Range(0, 1.5)) = 0.72
        _PixelBlockSize ("Effect Pixel Block Size", Range(1, 12)) = 8
        _AnimationFps ("Effect Animation FPS", Range(4, 24)) = 12
    }

    SubShader
    {
        Tags
        {
            "Queue"="Transparent"
            "RenderType"="Transparent"
            "RenderPipeline"="UniversalPipeline"
            "IgnoreProjector"="True"
            "CanUseSpriteAtlas"="True"
        }

        Cull Off
        ZWrite Off
        Blend SrcAlpha OneMinusSrcAlpha

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
                float4 color : COLOR;
            };

            struct Varyings
            {
                float4 positionHCS : SV_POSITION;
                float2 uv : TEXCOORD0;
                float4 color : COLOR;
            };

            TEXTURE2D(_MainTex);
            SAMPLER(sampler_MainTex);
            float4 _MainTex_TexelSize;
            float4 _Tint;
            float4 _ShimmerColor;
            float _ShimmerSpeed;
            float _ShimmerWidth;
            float _ShimmerIntensity;
            float _PixelBlockSize;
            float _AnimationFps;

            Varyings Vert(Attributes input)
            {
                Varyings output;
                output.positionHCS = TransformObjectToHClip(input.positionOS.xyz);
                output.uv = input.uv;
                output.color = input.color;
                return output;
            }

            half4 Frag(Varyings input) : SV_Target
            {
                half4 sprite = SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, input.uv) * input.color;
                clip(sprite.a - 0.001h);

                float2 textureSize = max(_MainTex_TexelSize.zw, 1.0);
                float blockSize = max(_PixelBlockSize, 1.0);
                float2 pixelCell = floor(input.uv * textureSize / blockSize);
                float2 pixelUv = (pixelCell * blockSize + blockSize * 0.5) / textureSize;
                float steppedTime = floor(_Time.y * _AnimationFps) / _AnimationFps;

                float sweep = frac(pixelUv.x + pixelUv.y * 0.55 - steppedTime * _ShimmerSpeed);
                float distanceToBand = abs(sweep - 0.5);
                float band = step(distanceToBand, _ShimmerWidth);

                half3 tinted = lerp(sprite.rgb, sprite.rgb * _Tint.rgb, 0.18h);
                tinted += _ShimmerColor.rgb * band * _ShimmerIntensity * sprite.a;
                return half4(tinted, sprite.a);
            }
            ENDHLSL
        }
    }
}

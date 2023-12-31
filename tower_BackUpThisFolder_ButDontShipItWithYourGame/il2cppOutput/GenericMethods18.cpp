﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// ES3Internal.ES3Member[]
struct ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// ES3Reader
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B;
// ES3Settings
struct ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2;
// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE;
// ES3Types.ES3Type_Light
struct ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B;
// ES3Types.ES3Type_LightsModule
struct ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017;
// ES3Types.ES3Type_LimitVelocityOverLifetimeModule
struct ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF;
// UnityEngine.Flare
struct Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A;

IL2CPP_EXTERN_C RuntimeClass* ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0328E4C169674B568EFB792EBE915956BAD34591;
IL2CPP_EXTERN_C String_t* _stringLiteral05CAACB43AE60632DFAEDD8AFD98A0C279C2A0F7;
IL2CPP_EXTERN_C String_t* _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581;
IL2CPP_EXTERN_C String_t* _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D;
IL2CPP_EXTERN_C String_t* _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5;
IL2CPP_EXTERN_C String_t* _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6;
IL2CPP_EXTERN_C String_t* _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9;
IL2CPP_EXTERN_C String_t* _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7;
IL2CPP_EXTERN_C String_t* _stringLiteral2AC7F98E5022908E09788532C95599452352D34A;
IL2CPP_EXTERN_C String_t* _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45;
IL2CPP_EXTERN_C String_t* _stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4;
IL2CPP_EXTERN_C String_t* _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62;
IL2CPP_EXTERN_C String_t* _stringLiteral4845015737DC41475709911228278216EE4DC3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954;
IL2CPP_EXTERN_C String_t* _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A;
IL2CPP_EXTERN_C String_t* _stringLiteral5828D05DE5A70D7EFBBA4D58EC00343F3E9A6AB8;
IL2CPP_EXTERN_C String_t* _stringLiteral5C72E9556FB79F24E1412FC01F0728F363348949;
IL2CPP_EXTERN_C String_t* _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A;
IL2CPP_EXTERN_C String_t* _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6;
IL2CPP_EXTERN_C String_t* _stringLiteral629998EE8A4BEB3AD2F947D3D95862F0F22227B2;
IL2CPP_EXTERN_C String_t* _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4;
IL2CPP_EXTERN_C String_t* _stringLiteral74755E5875E97ED362B5BF8BC9FA5F7F3F45080C;
IL2CPP_EXTERN_C String_t* _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F;
IL2CPP_EXTERN_C String_t* _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914;
IL2CPP_EXTERN_C String_t* _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8;
IL2CPP_EXTERN_C String_t* _stringLiteralA5C933C3A8FFEEDCA056E433AD8C52F89A0D82D2;
IL2CPP_EXTERN_C String_t* _stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910;
IL2CPP_EXTERN_C String_t* _stringLiteralC54638A97A3D6853F9D015A20E04AE7EEE96CE3C;
IL2CPP_EXTERN_C String_t* _stringLiteralC960A835F875EC8DC4DAE61D11CE089EF2BF8416;
IL2CPP_EXTERN_C String_t* _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D;
IL2CPP_EXTERN_C String_t* _stringLiteralD7365A084921FB0EE98C5197247132620727BAD9;
IL2CPP_EXTERN_C String_t* _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D;
IL2CPP_EXTERN_C String_t* _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956;
IL2CPP_EXTERN_C String_t* _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2;
IL2CPP_EXTERN_C String_t* _stringLiteralEFE5CC21BFBE09498A868CDF341E3DD037864F0B;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B;
IL2CPP_EXTERN_C String_t* _stringLiteralFF1FCA243EC6560E19277456101964385EA36D01;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisFlare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8_m8C498CB0040FB51CA7F6DD590C0778B1A378F6C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_mAD145C79A94F1FF793F1788ECCFDAD436FAAF5B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightRenderMode_t0F9C52310E682C737C48976769C0E84BADBD97EB_m1102A36106A3E935C6CC558241F1B22FF0EB1E35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightShadowResolution_tA4E88BF65D850F34CC01860E921817FA81ADB268_mED37458C3F3CCD387CD7AAC9CE8D143204F3F874_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightShadows_t5A3719FE33F8D536E5785AC42B4DF6E6F19666EA_m15E2C7075324CCCC8617D8853C37A9DA8FA96711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLightType_t2D4D43054E7473EECEB54493C0055AE074780234_mD0056976EE36AF4D5E1689A74AD7A2ADB08D2172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_mBD1E6E8D27E20974F0FBAD1F0D11A8313AB9106E_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ES3Reader
struct ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B  : public RuntimeObject
{
	// ES3Settings ES3Reader::settings
	ES3Settings_t65AC4582C03C21A9D3090FE498071C470A130BF2* ___settings_0;
	// System.Int32 ES3Reader::serializationDepth
	int32_t ___serializationDepth_1;
	// System.String ES3Reader::overridePropertiesName
	String_t* ___overridePropertiesName_2;
};

// ES3Types.ES3Type
struct ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE  : public RuntimeObject
{
	// ES3Internal.ES3Member[] ES3Types.ES3Type::members
	ES3MemberU5BU5D_t5320E3A904B7810CCE7F613C15284E403EAEF8DC* ___members_1;
	// System.Type ES3Types.ES3Type::type
	Type_t* ___type_2;
	// System.Boolean ES3Types.ES3Type::isPrimitive
	bool ___isPrimitive_3;
	// System.Boolean ES3Types.ES3Type::isValueType
	bool ___isValueType_4;
	// System.Boolean ES3Types.ES3Type::isCollection
	bool ___isCollection_5;
	// System.Boolean ES3Types.ES3Type::isDictionary
	bool ___isDictionary_6;
	// System.Boolean ES3Types.ES3Type::isES3TypeUnityObject
	bool ___isES3TypeUnityObject_7;
	// System.Boolean ES3Types.ES3Type::isReflectedType
	bool ___isReflectedType_8;
	// System.Boolean ES3Types.ES3Type::isUnsupported
	bool ___isUnsupported_9;
	// System.Int32 ES3Types.ES3Type::priority
	int32_t ___priority_10;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// ES3Reader/ES3ReaderPropertyEnumerator
struct ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A  : public RuntimeObject
{
	// ES3Reader ES3Reader/ES3ReaderPropertyEnumerator::reader
	ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// ES3Types.ES3ObjectType
struct ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

// ES3Types.ES3Type_Color
struct ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Color::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_11;
};

// ES3Types.ES3Type_LightsModule
struct ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_LightsModule::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_11;
};

// ES3Types.ES3Type_LimitVelocityOverLifetimeModule
struct ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_11;
};

// ES3Types.ES3Type_MinMaxCurve
struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_MinMaxCurve::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_11;
};

// ES3Types.ES3Type_bool
struct ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_bool::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_11;
};

// ES3Types.ES3Type_float
struct ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_float::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_11;
};

// ES3Types.ES3Type_int
struct ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24  : public ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE
{
};

struct ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_int::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.ParticleSystem/LightsModule
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/LightsModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/LightsModule
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/LightsModule
struct LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
struct LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
struct LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule
struct LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/MinMaxCurve
struct MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 
{
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;
};

// ES3Types.ES3UnityObjectType
struct ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6  : public ES3ObjectType_tED2C85C0990B4C915D41A74652D5396676911EB6
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ES3Types.ES3ComponentType
struct ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0  : public ES3UnityObjectType_t90799BAE6E6A8C07FDA0BC9DD339D71C31C5ADB6
{
};

// UnityEngine.Flare
struct Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ES3Types.ES3Type_Light
struct ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B  : public ES3ComponentType_t426927F5E0B9C7305FEF235C02C4FADD592255F0
{
};

struct ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields
{
	// ES3Types.ES3Type ES3Types.ES3Type_Light::Instance
	ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* ___Instance_12;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Collections.IEnumerator ES3Reader/ES3ReaderPropertyEnumerator::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F (ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_type(UnityEngine.LightType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_type_m9DF0E6AC528391B1D35FA06583B9A72EAB686C43 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_bounceIntensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_bounceIntensity_m832ED3103EA600319F6227EDE55E5D6EBD272DB1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadows(UnityEngine.LightShadows)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadows_mDA4D1D1958387649BD35A79D83F50549898A74CB (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowStrength(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowStrength_mA17F6ABA91CE032E008149D5D53FCD9B00497A4F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowResolution(UnityEngine.Rendering.LightShadowResolution)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowResolution_mB1ED5718DCCA40E1AD231D145264B454543CBF07 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowCustomResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowCustomResolution_mEB39F5DB4F4BEBB2ACC2273E28C651CE578E3502 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowBias_m04C4B35A017357A5C6A26BE7098EC1CE1E1E5420 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowNormalBias(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowNormalBias_m855EC8B5B849E8EA60A1F2BCE09357CE4B0D755A (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_shadowNearPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_shadowNearPlane_m9105DBBC92CBB4F45401EDEA50B1DF14C9C3F01C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_range(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_range_mBAF8E5380ECAD89A2BF43B7DA9C2DE8FA0C2FDEF (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_spotAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_spotAngle_mB27C0667B5C07771750AF66E36F2CA02D272C61B (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_cookieSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_cookieSize_m40AC9D2279340DDB66290B9C76203D6061593DD4 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_cookie(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_cookie_m42EC6CBDB1149EA8D49E36D21FDA0AD220C2C6CD (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_flare(UnityEngine.Flare)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_flare_m751C28EF5BA14643F57ECA60924D1C344F00385C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_renderMode(UnityEngine.LightRenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_renderMode_m31F714D8EAD8B90E9E38E3864403CD9379D9DE58 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_cullingMask(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_cullingMask_mC714832A1E2B73C72C188F9F44B50C449831C4B1 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_ratio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_useRandomDistribution(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_light(UnityEngine.Light)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_useParticleColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_sizeAffectsRange(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_alphaAffectsIntensity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_range(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_rangeMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_intensity(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_intensityMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8 (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LightsModule::set_maxLights(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC (LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitX(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitXMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitY(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitYMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitZ(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitZMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limit(UnityEngine.ParticleSystem/MinMaxCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_limitMultiplier(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_dampen(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_separateAxes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule::set_space(UnityEngine.ParticleSystemSimulationSpace)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5 (LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void ES3Types.ES3Type_Light::ReadComponent<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_Light_ReadComponent_TisRuntimeObject_mA640F8737AE5067760D7BBE4245724B470064BAD_gshared (ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisFlare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8_m8C498CB0040FB51CA7F6DD590C0778B1A378F6C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_mAD145C79A94F1FF793F1788ECCFDAD436FAAF5B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightRenderMode_t0F9C52310E682C737C48976769C0E84BADBD97EB_m1102A36106A3E935C6CC558241F1B22FF0EB1E35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightShadowResolution_tA4E88BF65D850F34CC01860E921817FA81ADB268_mED37458C3F3CCD387CD7AAC9CE8D143204F3F874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightShadows_t5A3719FE33F8D536E5785AC42B4DF6E6F19666EA_m15E2C7075324CCCC8617D8853C37A9DA8FA96711_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLightType_t2D4D43054E7473EECEB54493C0055AE074780234_mD0056976EE36AF4D5E1689A74AD7A2ADB08D2172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_mBD1E6E8D27E20974F0FBAD1F0D11A8313AB9106E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0328E4C169674B568EFB792EBE915956BAD34591);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05CAACB43AE60632DFAEDD8AFD98A0C279C2A0F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5828D05DE5A70D7EFBBA4D58EC00343F3E9A6AB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C72E9556FB79F24E1412FC01F0728F363348949);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral629998EE8A4BEB3AD2F947D3D95862F0F22227B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74755E5875E97ED362B5BF8BC9FA5F7F3F45080C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5C933C3A8FFEEDCA056E433AD8C52F89A0D82D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54638A97A3D6853F9D015A20E04AE7EEE96CE3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC960A835F875EC8DC4DAE61D11CE089EF2BF8416);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7365A084921FB0EE98C5197247132620727BAD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFE5CC21BFBE09498A868CDF341E3DD037864F0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF1FCA243EC6560E19277456101964385EA36D01);
		s_Il2CppMethodInitialized = true;
	}
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	uint32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		// var instance = (UnityEngine.Light)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*)CastclassSealed((RuntimeObject*)L_0, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var));
		// foreach(string propertyName in reader.Properties)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_1 = ___reader0;
		NullCheck(L_1);
		ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* L_2;
		L_2 = VirtualFuncInvoker0< ES3ReaderPropertyEnumerator_tF9A132CC74810289A45CB0F31DFD50B506CED09A* >::Invoke(39 /* ES3Reader/ES3ReaderPropertyEnumerator ES3Reader::get_Properties() */, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ES3ReaderPropertyEnumerator_GetEnumerator_mB165F4C7E1D6CD13B2FD9BF8D8FD1094242E5A7F(L_2, NULL);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_049b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_5 = V_4;
					if (!L_5)
					{
						goto IL_04ae;
					}
				}
				{
					RuntimeObject* L_6 = V_4;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_04ae:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_048e_1;
			}

IL_0018_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
				String_t* L_9 = V_2;
				uint32_t L_10;
				L_10 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_9, NULL);
				V_3 = L_10;
				uint32_t L_11 = V_3;
				if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)1823281443)))))
				{
					goto IL_00d0_1;
				}
			}
			{
				uint32_t L_12 = V_3;
				if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)1308376928)))))
				{
					goto IL_0087_1;
				}
			}
			{
				uint32_t L_13 = V_3;
				if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)214491439)))))
				{
					goto IL_0061_1;
				}
			}
			{
				uint32_t L_14 = V_3;
				if ((((int32_t)L_14) == ((int32_t)((int32_t)49525662))))
				{
					goto IL_02e1_1;
				}
			}
			{
				uint32_t L_15 = V_3;
				if ((((int32_t)L_15) == ((int32_t)((int32_t)214491439))))
				{
					goto IL_02cc_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0061_1:
			{
				uint32_t L_16 = V_3;
				if ((((int32_t)L_16) == ((int32_t)((int32_t)593295258))))
				{
					goto IL_02b7_1;
				}
			}
			{
				uint32_t L_17 = V_3;
				if ((((int32_t)L_17) == ((int32_t)((int32_t)1031692888))))
				{
					goto IL_017c_1;
				}
			}
			{
				uint32_t L_18 = V_3;
				if ((((int32_t)L_18) == ((int32_t)((int32_t)1308376928))))
				{
					goto IL_01fa_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0087_1:
			{
				uint32_t L_19 = V_3;
				if ((!(((uint32_t)L_19) <= ((uint32_t)((int32_t)1361572173)))))
				{
					goto IL_00aa_1;
				}
			}
			{
				uint32_t L_20 = V_3;
				if ((((int32_t)L_20) == ((int32_t)((int32_t)1361188592))))
				{
					goto IL_020f_1;
				}
			}
			{
				uint32_t L_21 = V_3;
				if ((((int32_t)L_21) == ((int32_t)((int32_t)1361572173))))
				{
					goto IL_0167_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_00aa_1:
			{
				uint32_t L_22 = V_3;
				if ((((int32_t)L_22) == ((int32_t)((int32_t)1538595811))))
				{
					goto IL_0239_1;
				}
			}
			{
				uint32_t L_23 = V_3;
				if ((((int32_t)L_23) == ((int32_t)((int32_t)1621849184))))
				{
					goto IL_0263_1;
				}
			}
			{
				uint32_t L_24 = V_3;
				if ((((int32_t)L_24) == ((int32_t)((int32_t)1823281443))))
				{
					goto IL_0224_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_00d0_1:
			{
				uint32_t L_25 = V_3;
				if ((!(((uint32_t)L_25) <= ((uint32_t)((int32_t)-1848572957)))))
				{
					goto IL_0121_1;
				}
			}
			{
				uint32_t L_26 = V_3;
				if ((!(((uint32_t)L_26) <= ((uint32_t)((int32_t)-2079361660)))))
				{
					goto IL_00fb_1;
				}
			}
			{
				uint32_t L_27 = V_3;
				if ((((int32_t)L_27) == ((int32_t)((int32_t)2007449791))))
				{
					goto IL_028d_1;
				}
			}
			{
				uint32_t L_28 = V_3;
				if ((((int32_t)L_28) == ((int32_t)((int32_t)-2079361660))))
				{
					goto IL_01d0_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_00fb_1:
			{
				uint32_t L_29 = V_3;
				if ((((int32_t)L_29) == ((int32_t)((int32_t)-2057050870))))
				{
					goto IL_0191_1;
				}
			}
			{
				uint32_t L_30 = V_3;
				if ((((int32_t)L_30) == ((int32_t)((int32_t)-1890496478))))
				{
					goto IL_01a6_1;
				}
			}
			{
				uint32_t L_31 = V_3;
				if ((((int32_t)L_31) == ((int32_t)((int32_t)-1848572957))))
				{
					goto IL_01e5_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0121_1:
			{
				uint32_t L_32 = V_3;
				if ((!(((uint32_t)L_32) <= ((uint32_t)((int32_t)-894485674)))))
				{
					goto IL_0141_1;
				}
			}
			{
				uint32_t L_33 = V_3;
				if ((((int32_t)L_33) == ((int32_t)((int32_t)-1769781449))))
				{
					goto IL_02a2_1;
				}
			}
			{
				uint32_t L_34 = V_3;
				if ((((int32_t)L_34) == ((int32_t)((int32_t)-894485674))))
				{
					goto IL_01bb_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0141_1:
			{
				uint32_t L_35 = V_3;
				if ((((int32_t)L_35) == ((int32_t)((int32_t)-350400524))))
				{
					goto IL_02f6_1;
				}
			}
			{
				uint32_t L_36 = V_3;
				if ((((int32_t)L_36) == ((int32_t)((int32_t)-266691594))))
				{
					goto IL_0278_1;
				}
			}
			{
				uint32_t L_37 = V_3;
				if ((((int32_t)L_37) == ((int32_t)((int32_t)-86242094))))
				{
					goto IL_024e_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0167_1:
			{
				String_t* L_38 = V_2;
				bool L_39;
				L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7, NULL);
				if (L_39)
				{
					goto IL_030b_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_017c_1:
			{
				String_t* L_40 = V_2;
				bool L_41;
				L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralDD0F04E0A3F0BA1F904E0E27720F367F4228C69D, NULL);
				if (L_41)
				{
					goto IL_031c_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0191_1:
			{
				String_t* L_42 = V_2;
				bool L_43;
				L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
				if (L_43)
				{
					goto IL_0332_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01a6_1:
			{
				String_t* L_44 = V_2;
				bool L_45;
				L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteral629998EE8A4BEB3AD2F947D3D95862F0F22227B2, NULL);
				if (L_45)
				{
					goto IL_0348_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01bb_1:
			{
				String_t* L_46 = V_2;
				bool L_47;
				L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteral0328E4C169674B568EFB792EBE915956BAD34591, NULL);
				if (L_47)
				{
					goto IL_035e_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01d0_1:
			{
				String_t* L_48 = V_2;
				bool L_49;
				L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteralFF1FCA243EC6560E19277456101964385EA36D01, NULL);
				if (L_49)
				{
					goto IL_036f_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01e5_1:
			{
				String_t* L_50 = V_2;
				bool L_51;
				L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral74755E5875E97ED362B5BF8BC9FA5F7F3F45080C, NULL);
				if (L_51)
				{
					goto IL_0385_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_01fa_1:
			{
				String_t* L_52 = V_2;
				bool L_53;
				L_53 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_52, _stringLiteralC960A835F875EC8DC4DAE61D11CE089EF2BF8416, NULL);
				if (L_53)
				{
					goto IL_0396_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_020f_1:
			{
				String_t* L_54 = V_2;
				bool L_55;
				L_55 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, _stringLiteralEFE5CC21BFBE09498A868CDF341E3DD037864F0B, NULL);
				if (L_55)
				{
					goto IL_03ac_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0224_1:
			{
				String_t* L_56 = V_2;
				bool L_57;
				L_57 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, _stringLiteral5C72E9556FB79F24E1412FC01F0728F363348949, NULL);
				if (L_57)
				{
					goto IL_03c2_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0239_1:
			{
				String_t* L_58 = V_2;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteralD7365A084921FB0EE98C5197247132620727BAD9, NULL);
				if (L_59)
				{
					goto IL_03d8_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_024e_1:
			{
				String_t* L_60 = V_2;
				bool L_61;
				L_61 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_60, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
				if (L_61)
				{
					goto IL_03ee_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0263_1:
			{
				String_t* L_62 = V_2;
				bool L_63;
				L_63 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_62, _stringLiteralA5C933C3A8FFEEDCA056E433AD8C52F89A0D82D2, NULL);
				if (L_63)
				{
					goto IL_0404_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_0278_1:
			{
				String_t* L_64 = V_2;
				bool L_65;
				L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_64, _stringLiteral5828D05DE5A70D7EFBBA4D58EC00343F3E9A6AB8, NULL);
				if (L_65)
				{
					goto IL_0417_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_028d_1:
			{
				String_t* L_66 = V_2;
				bool L_67;
				L_67 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_66, _stringLiteral44B679A4FEA54FC0DBB1CECD512FC3FCFFE445F4, NULL);
				if (L_67)
				{
					goto IL_042a_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02a2_1:
			{
				String_t* L_68 = V_2;
				bool L_69;
				L_69 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, _stringLiteralC54638A97A3D6853F9D015A20E04AE7EEE96CE3C, NULL);
				if (L_69)
				{
					goto IL_0438_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02b7_1:
			{
				String_t* L_70 = V_2;
				bool L_71;
				L_71 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_70, _stringLiteral05CAACB43AE60632DFAEDD8AFD98A0C279C2A0F7, NULL);
				if (L_71)
				{
					goto IL_0446_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02cc_1:
			{
				String_t* L_72 = V_2;
				bool L_73;
				L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, _stringLiteralD3DAE436D34E1BFB3B81BD5C319049A2E9F9BF3D, NULL);
				if (L_73)
				{
					goto IL_0454_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02e1_1:
			{
				String_t* L_74 = V_2;
				bool L_75;
				L_75 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_74, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
				if (L_75)
				{
					goto IL_0467_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_02f6_1:
			{
				String_t* L_76 = V_2;
				bool L_77;
				L_77 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_76, _stringLiteralC220E5ABB03B498FA9E8AE08256C71E0C463D910, NULL);
				if (L_77)
				{
					goto IL_047a_1;
				}
			}
			{
				goto IL_0488_1;
			}

IL_030b_1:
			{
				// instance.type = reader.Read<UnityEngine.LightType>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_78 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
				NullCheck(L_79);
				int32_t L_80;
				L_80 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightType_t2D4D43054E7473EECEB54493C0055AE074780234_mD0056976EE36AF4D5E1689A74AD7A2ADB08D2172_RuntimeMethod_var, L_79);
				NullCheck(L_78);
				Light_set_type_m9DF0E6AC528391B1D35FA06583B9A72EAB686C43(L_78, L_80, NULL);
				// break;
				goto IL_048e_1;
			}

IL_031c_1:
			{
				// instance.color = reader.Read<UnityEngine.Color>(ES3Type_Color.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_81 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_82 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_83 = ((ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Color_t60CD5EDAC4EDBF16914820CB856E256A44B01E41_il2cpp_TypeInfo_var))->___Instance_11;
				NullCheck(L_82);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84;
				L_84 = GenericVirtualFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m4F0C804BD0F5FA42269F9DBFA1860A6F17E8E780_RuntimeMethod_var, L_82, L_83);
				NullCheck(L_81);
				Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C(L_81, L_84, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0332_1:
			{
				// instance.intensity = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_85 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_86 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_87 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
				NullCheck(L_86);
				float L_88;
				L_88 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_86, L_87);
				NullCheck(L_85);
				Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_85, L_88, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0348_1:
			{
				// instance.bounceIntensity = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_89 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_90 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_91 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
				NullCheck(L_90);
				float L_92;
				L_92 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_90, L_91);
				NullCheck(L_89);
				Light_set_bounceIntensity_m832ED3103EA600319F6227EDE55E5D6EBD272DB1(L_89, L_92, NULL);
				// break;
				goto IL_048e_1;
			}

IL_035e_1:
			{
				// instance.shadows = reader.Read<UnityEngine.LightShadows>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_93 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_94 = ___reader0;
				NullCheck(L_94);
				int32_t L_95;
				L_95 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightShadows_t5A3719FE33F8D536E5785AC42B4DF6E6F19666EA_m15E2C7075324CCCC8617D8853C37A9DA8FA96711_RuntimeMethod_var, L_94);
				NullCheck(L_93);
				Light_set_shadows_mDA4D1D1958387649BD35A79D83F50549898A74CB(L_93, L_95, NULL);
				// break;
				goto IL_048e_1;
			}

IL_036f_1:
			{
				// instance.shadowStrength = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_96 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_97 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_98 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
				NullCheck(L_97);
				float L_99;
				L_99 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_97, L_98);
				NullCheck(L_96);
				Light_set_shadowStrength_mA17F6ABA91CE032E008149D5D53FCD9B00497A4F(L_96, L_99, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0385_1:
			{
				// instance.shadowResolution = reader.Read<UnityEngine.Rendering.LightShadowResolution>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_100 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_101 = ___reader0;
				NullCheck(L_101);
				int32_t L_102;
				L_102 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightShadowResolution_tA4E88BF65D850F34CC01860E921817FA81ADB268_mED37458C3F3CCD387CD7AAC9CE8D143204F3F874_RuntimeMethod_var, L_101);
				NullCheck(L_100);
				Light_set_shadowResolution_mB1ED5718DCCA40E1AD231D145264B454543CBF07(L_100, L_102, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0396_1:
			{
				// instance.shadowCustomResolution = reader.Read<System.Int32>(ES3Type_int.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_103 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_104 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_105 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
				NullCheck(L_104);
				int32_t L_106;
				L_106 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_104, L_105);
				NullCheck(L_103);
				Light_set_shadowCustomResolution_mEB39F5DB4F4BEBB2ACC2273E28C651CE578E3502(L_103, L_106, NULL);
				// break;
				goto IL_048e_1;
			}

IL_03ac_1:
			{
				// instance.shadowBias = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_107 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_108 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_109 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
				NullCheck(L_108);
				float L_110;
				L_110 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_108, L_109);
				NullCheck(L_107);
				Light_set_shadowBias_m04C4B35A017357A5C6A26BE7098EC1CE1E1E5420(L_107, L_110, NULL);
				// break;
				goto IL_048e_1;
			}

IL_03c2_1:
			{
				// instance.shadowNormalBias = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_111 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_112 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_113 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
				NullCheck(L_112);
				float L_114;
				L_114 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_112, L_113);
				NullCheck(L_111);
				Light_set_shadowNormalBias_m855EC8B5B849E8EA60A1F2BCE09357CE4B0D755A(L_111, L_114, NULL);
				// break;
				goto IL_048e_1;
			}

IL_03d8_1:
			{
				// instance.shadowNearPlane = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_115 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_116 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_117 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
				NullCheck(L_116);
				float L_118;
				L_118 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_116, L_117);
				NullCheck(L_115);
				Light_set_shadowNearPlane_m9105DBBC92CBB4F45401EDEA50B1DF14C9C3F01C(L_115, L_118, NULL);
				// break;
				goto IL_048e_1;
			}

IL_03ee_1:
			{
				// instance.range = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_119 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_120 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_121 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
				NullCheck(L_120);
				float L_122;
				L_122 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_120, L_121);
				NullCheck(L_119);
				Light_set_range_mBAF8E5380ECAD89A2BF43B7DA9C2DE8FA0C2FDEF(L_119, L_122, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0404_1:
			{
				// instance.spotAngle = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_123 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_124 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_125 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
				NullCheck(L_124);
				float L_126;
				L_126 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_124, L_125);
				NullCheck(L_123);
				Light_set_spotAngle_mB27C0667B5C07771750AF66E36F2CA02D272C61B(L_123, L_126, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0417_1:
			{
				// instance.cookieSize = reader.Read<System.Single>(ES3Type_float.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_127 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_128 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_129 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
				NullCheck(L_128);
				float L_130;
				L_130 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_128, L_129);
				NullCheck(L_127);
				Light_set_cookieSize_m40AC9D2279340DDB66290B9C76203D6061593DD4(L_127, L_130, NULL);
				// break;
				goto IL_048e_1;
			}

IL_042a_1:
			{
				// instance.cookie = reader.Read<UnityEngine.Texture>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_131 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_132 = ___reader0;
				NullCheck(L_132);
				Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_133;
				L_133 = GenericVirtualFuncInvoker0< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* >::Invoke(ES3Reader_Read_TisTexture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_mBD1E6E8D27E20974F0FBAD1F0D11A8313AB9106E_RuntimeMethod_var, L_132);
				NullCheck(L_131);
				Light_set_cookie_m42EC6CBDB1149EA8D49E36D21FDA0AD220C2C6CD(L_131, L_133, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0438_1:
			{
				// instance.flare = reader.Read<UnityEngine.Flare>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_134 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_135 = ___reader0;
				NullCheck(L_135);
				Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8* L_136;
				L_136 = GenericVirtualFuncInvoker0< Flare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8* >::Invoke(ES3Reader_Read_TisFlare_t9DCE15756AD8F104B1D9024509B30E46FEF124C8_m8C498CB0040FB51CA7F6DD590C0778B1A378F6C3_RuntimeMethod_var, L_135);
				NullCheck(L_134);
				Light_set_flare_m751C28EF5BA14643F57ECA60924D1C344F00385C(L_134, L_136, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0446_1:
			{
				// instance.renderMode = reader.Read<UnityEngine.LightRenderMode>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_137 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_138 = ___reader0;
				NullCheck(L_138);
				int32_t L_139;
				L_139 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisLightRenderMode_t0F9C52310E682C737C48976769C0E84BADBD97EB_m1102A36106A3E935C6CC558241F1B22FF0EB1E35_RuntimeMethod_var, L_138);
				NullCheck(L_137);
				Light_set_renderMode_m31F714D8EAD8B90E9E38E3864403CD9379D9DE58(L_137, L_139, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0454_1:
			{
				// instance.cullingMask = reader.Read<System.Int32>(ES3Type_int.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_140 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_141 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_142 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
				NullCheck(L_141);
				int32_t L_143;
				L_143 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_141, L_142);
				NullCheck(L_140);
				Light_set_cullingMask_mC714832A1E2B73C72C188F9F44B50C449831C4B1(L_140, L_143, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0467_1:
			{
				// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_144 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_145 = ___reader0;
				ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_146 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
				NullCheck(L_145);
				bool L_147;
				L_147 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_145, L_146);
				NullCheck((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_144);
				Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)L_144, L_147, NULL);
				// break;
				goto IL_048e_1;
			}

IL_047a_1:
			{
				// instance.hideFlags = reader.Read<UnityEngine.HideFlags>();
				Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_148 = V_0;
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_149 = ___reader0;
				NullCheck(L_149);
				int32_t L_150;
				L_150 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisHideFlags_tC514182ACEFD3B847988C45D5DB812FF6DB1BF4A_mAD145C79A94F1FF793F1788ECCFDAD436FAAF5B1_RuntimeMethod_var, L_149);
				NullCheck((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_148);
				Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_148, L_150, NULL);
				// break;
				goto IL_048e_1;
			}

IL_0488_1:
			{
				// reader.Skip();
				ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_151 = ___reader0;
				NullCheck(L_151);
				VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_151);
			}

IL_048e_1:
			{
				// foreach(string propertyName in reader.Properties)
				RuntimeObject* L_152 = V_1;
				NullCheck(L_152);
				bool L_153;
				L_153 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_152);
				if (L_153)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_04af;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_04af:
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m37A39560FC09C153019DCE1DB50CE1FE578EDF99_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA3FED3D074B3449877936F73B32FDB3EA729820D_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF7368B8C2E7708BCCD9E2C5EC4A7BB64B8136F56_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mAA7DF33D4B3C9EF818DAC0A6D1CD8088F70CB767_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.DateTime>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m30B16C1B16ADE5DC9668F93F0785B83C3A24CEFB_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mEEC42B661DBF94E267A20ECA560794918B2BAE1A_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mE031AD464DACFB6A585E9D8D252FA0C6C729EF24_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD1737F0D551AD9656D015A8BBD3F75BA72FD8779_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m36FC66808160927976FE12D35C4D7F563B950207_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9409FB748A55063D08836D0C617142241283098D_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisRuntimeObject_m592103F8EBA65BDE9911FB02C3B49B040923E8C6_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m998EBCBD373524F5B5A40C24180FBD55B737641F_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m4026B64FEBA1982AE4BCCCBBD1825DAD5F6A0F99_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m03C333756A3C90745CE557AB76F7947637181F79_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m6D3C1017FFC398647C9563C7CDE8BD774670F09B_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m74EED22D1D2690CE0C1D0CBC7C4D34C3F119E829_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2DFBF206B681C3943531DF1E7B5B1489A221115A_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mC59B71361E2E033C6191BF0940AE14EF5735B353_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LightsModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LightsModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_mCB4C5C683CAFA159958C1DE6FD59035C69F97EA9_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LightsModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_1 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_2 = L_1;
		RuntimeObject* L_3 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_4 = V_0;
		LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E L_5 = L_4;
		RuntimeObject* L_6 = Box(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisRuntimeObject_m7156488B88A1EF1E81F7F8E88ED4D81C4DAFE06A_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_m3A9F36253581206714F8BACED3738A47E368C803_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m63EC0D7FDFC2B46E9D9345D7CFC8F505B4E87381_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m34AE377E73CF7B4F9EC2F02A9026F202576CCF63_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m79EA3D10002904EF8BD1050BECFC533797388EED_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mFC75414AC5905369D44B38A1FA0F0FF95BB1EA8B_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_m22789139D8F5E8CC7FC9BDAB64816028F298E545_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m92532EB0C610E26BE3BC05EF809A6183A41F4026_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_mB5773F1A9FF00753AAA0E29619CDDD46CA5E9198_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_m167AC8B9F441A6A2D405BF1EC8787865AB784C16_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m6603253827848AD5CBEFE6495E0573D000C6CAEC_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_mF81467761CCF931C073AF0A68273B47F563FA0BD_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_mD9F3AA2605EFC7504207AF6D47BE6F510A3B3921_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_mF8648E646C252AABD6B65BA092BAD0EC3D0B676C_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_m124017DAD14A78994AD2292116B889AF8C169420_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/TextureSheetAnimationModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisTextureSheetAnimationModule_tB53F451F252E24ACC3EF80D770DB4FBE1A13D1F6_m1AAF86981B8C22F0665D8D07A2C71D68B0E3DA57_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/TrailModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisTrailModule_tC466413E68A674741F1CEAE0CFD7317631E8040D_m81BC549A7F422D2D26B9CCAC42141FCA0B9F3511_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/TriggerModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisTriggerModule_tDEE844919206259DA831ADCA3B1B2D915CB767B1_m0FA3831C82AF1AC6C80182473A50CE45846EA557_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LightsModule::ReadInto<UnityEngine.ParticleSystem/VelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LightsModule_ReadInto_TisVelocityOverLifetimeModule_tB4A3291E3D2E850257EE3F8344AAEDA06D7FCE56_m9F623DA3F7FAB9A5C6819C95188F1C99BADC180A_gshared (ES3Type_LightsModule_t6C4B2237386396F333FAE9A74A25FBF42F8F9017* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AC7F98E5022908E09788532C95599452352D34A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4845015737DC41475709911228278216EE4DC3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D353FB908B8123B513952855EB88F081A1A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93C208E83E88E77020CE91612101CB879A8EE914);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LightsModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)((LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)(LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E*)UnBox(L_0, LightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_il2cpp_TypeInfo_var))));
		goto IL_02bb;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)-1604400485)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)680602789)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00ba;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)258704408))))
		{
			goto IL_0138;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)680602789))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)2057398597))))
		{
			goto IL_0162;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)-2057050870))))
		{
			goto IL_0177;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)-1604400485))))
		{
			goto IL_0123;
		}
	}
	{
		goto IL_02b5;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)-667110935)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)-1055777148))))
		{
			goto IL_00cf;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)-796669776))))
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-667110935))))
		{
			goto IL_010e;
		}
	}
	{
		goto IL_02b5;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)-493019601))))
		{
			goto IL_00f9;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-86242094))))
		{
			goto IL_014d;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-24986963))))
		{
			goto IL_018c;
		}
	}
	{
		goto IL_02b5;
	}

IL_00ba:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b6;
		}
	}
	{
		goto IL_02b5;
	}

IL_00cf:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral60126327537B7B8E6EE33C43FE0C5CA8BCC3A06A, NULL);
		if (L_21)
		{
			goto IL_01cd;
		}
	}
	{
		goto IL_02b5;
	}

IL_00e4:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral509D57D2D3AC4C6FAE8D21D19FF2B9D787C81954, NULL);
		if (L_23)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_02b5;
	}

IL_00f9:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral1057AAF5EE3CDF423CF6BCC588476E559687CDE6, NULL);
		if (L_25)
		{
			goto IL_01fb;
		}
	}
	{
		goto IL_02b5;
	}

IL_010e:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral2AC7F98E5022908E09788532C95599452352D34A, NULL);
		if (L_27)
		{
			goto IL_0212;
		}
	}
	{
		goto IL_02b5;
	}

IL_0123:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral93C208E83E88E77020CE91612101CB879A8EE914, NULL);
		if (L_29)
		{
			goto IL_0229;
		}
	}
	{
		goto IL_02b5;
	}

IL_0138:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral072FD16FCD5FDEE6DF9288BBCA5AFBFA16B04581, NULL);
		if (L_31)
		{
			goto IL_023d;
		}
	}
	{
		goto IL_02b5;
	}

IL_014d:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteral4845015737DC41475709911228278216EE4DC3AF, NULL);
		if (L_33)
		{
			goto IL_0251;
		}
	}
	{
		goto IL_02b5;
	}

IL_0162:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralA2DB56FF90ECEEEC49C5E8C66FCD72DF2771D010, NULL);
		if (L_35)
		{
			goto IL_0265;
		}
	}
	{
		goto IL_02b5;
	}

IL_0177:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral40B9968876DFBA959A505AA3EC0E9D9D26C14E45, NULL);
		if (L_37)
		{
			goto IL_0279;
		}
	}
	{
		goto IL_02b5;
	}

IL_018c:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral77682CE598EDE490DCDE276E250422EA9BEA739F, NULL);
		if (L_39)
		{
			goto IL_028d;
		}
	}
	{
		goto IL_02b5;
	}

IL_01a1:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral52D353FB908B8123B513952855EB88F081A1A06A, NULL);
		if (L_41)
		{
			goto IL_02a1;
		}
	}
	{
		goto IL_02b5;
	}

IL_01b6:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LightsModule_set_enabled_mCA61408EE4B83423BB92B032567BA63005379DCE((&V_0), L_44, NULL);
		// break;
		goto IL_02bb;
	}

IL_01cd:
	{
		// instance.ratio = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		float L_47;
		L_47 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_45, L_46);
		LightsModule_set_ratio_mE1B9F5C45EB2E0822BF47F28F0510B5ECF2C87FC((&V_0), L_47, NULL);
		// break;
		goto IL_02bb;
	}

IL_01e4:
	{
		// instance.useRandomDistribution = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		bool L_50;
		L_50 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_48, L_49);
		LightsModule_set_useRandomDistribution_mB5EEC3EE5E510F2F27C779C25FD584B6FEA879D9((&V_0), L_50, NULL);
		// break;
		goto IL_02bb;
	}

IL_01fb:
	{
		// instance.light = reader.Read<UnityEngine.Light>(ES3Type_Light.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_Light_t461A9229D8AC8F81B7F65C98EAA1DD013077191B_il2cpp_TypeInfo_var))->___Instance_12;
		NullCheck(L_51);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_53;
		L_53 = GenericVirtualFuncInvoker1< Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m53DDA5E20E75C27589D5A9F6B39BD7CA7C61AD1F_RuntimeMethod_var, L_51, L_52);
		LightsModule_set_light_m54F655151E83BA1CF8ECDF92B8D18F06463B2D59((&V_0), L_53, NULL);
		// break;
		goto IL_02bb;
	}

IL_0212:
	{
		// instance.useParticleColor = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		bool L_56;
		L_56 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_54, L_55);
		LightsModule_set_useParticleColor_mC91DC556C20A786D4E8190842094B557204C74B0((&V_0), L_56, NULL);
		// break;
		goto IL_02bb;
	}

IL_0229:
	{
		// instance.sizeAffectsRange = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		bool L_59;
		L_59 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_57, L_58);
		LightsModule_set_sizeAffectsRange_mBAAE49AC54AE79237649DD0AA715F43B0510356A((&V_0), L_59, NULL);
		// break;
		goto IL_02bb;
	}

IL_023d:
	{
		// instance.alphaAffectsIntensity = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		bool L_62;
		L_62 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_60, L_61);
		LightsModule_set_alphaAffectsIntensity_m79B804EA7C98543C733F3E0355DB01B8E1845995((&V_0), L_62, NULL);
		// break;
		goto IL_02bb;
	}

IL_0251:
	{
		// instance.range = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LightsModule_set_range_m3DA6A5EE3021CB5A4787AEAE4DCA675E3050C5E4((&V_0), L_65, NULL);
		// break;
		goto IL_02bb;
	}

IL_0265:
	{
		// instance.rangeMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LightsModule_set_rangeMultiplier_m881D705C505C908F9F05F24EFBFC61DD2F01B23F((&V_0), L_68, NULL);
		// break;
		goto IL_02bb;
	}

IL_0279:
	{
		// instance.intensity = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_71;
		L_71 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_69, L_70);
		LightsModule_set_intensity_mD1D7564D1ADD14C5755043F1146A8D56C228A519((&V_0), L_71, NULL);
		// break;
		goto IL_02bb;
	}

IL_028d:
	{
		// instance.intensityMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		float L_74;
		L_74 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_72, L_73);
		LightsModule_set_intensityMultiplier_m79E9E71E14F02B6BE7C4EB6C5B3BA8921D1B29F8((&V_0), L_74, NULL);
		// break;
		goto IL_02bb;
	}

IL_02a1:
	{
		// instance.maxLights = reader.Read<System.Int32>(ES3Type_int.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_76 = ((ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_int_tF162EC158F9804A932A1C53DBFDF1D16EBD94C24_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_75);
		int32_t L_77;
		L_77 = GenericVirtualFuncInvoker1< int32_t, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m08D298C3E1EAE20F03BD82E6186AE9BD49E6DBC1_RuntimeMethod_var, L_75, L_76);
		LightsModule_set_maxLights_mC423F1C129DAB69F2F145F6AA8160DEE8176F4EC((&V_0), L_77, NULL);
		// break;
		goto IL_02bb;
	}

IL_02b5:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_78);
	}

IL_02bb:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_79 = ___reader0;
		NullCheck(L_79);
		String_t* L_80;
		L_80 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_79);
		String_t* L_81 = L_80;
		V_1 = L_81;
		if (L_81)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Boolean>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mD0C9774947B0E9A8BDE32B5602A48EE07C792006_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Bounds>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m6F2B9426F3522C4EB1818F7A3013D5D50C1D0C44_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Byte>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD1895EA5DC7B1614DFADE99153B1AD1FD16D2814_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Color>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m1115D5794C8CF922CCC45DDF491E15DC1A8117E8_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.DateTime>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m2D65DB2249E0F03887F6BAFCE534F9072EDE1540_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Int32>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF10EE5C0813FAC9E3D46F3512B5EE4EA70294826_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Int32Enum>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA77681147E38220C0505288DEB15F3532E320749_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Int64>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE79FA15D1029702F55A550538F25A3AD2FF1B73_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.LayerMask>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_mF3B7D16E6AA3B371D8FE10447A22B91E1970EFAC_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Matrix4x4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mF91A41B32B51EF8B8E32D2371689F9FEBE84195D_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Object>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisRuntimeObject_m52F81BC946279E91BA9037C3835044DCA8BA0203_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Quaternion>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m6383BEC5DF20CD22FCEDA7F4434B226113E4F662_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Rect>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m93F81F84F45697BDF6BF8F3A61E19A26D66902B2_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<System.Single>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m73C4F0297DF1F7B77B18909FFF46B887F22E3CD9_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Vector2>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB2B597063ECD22A60FF1436C37338ABD2C6FC6F2_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Vector3>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5D25B7B71B86E7D45BC4E489FCB9B56CE71F5E0D_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.Vector4>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m1205AFFE249DA89D3E44DB5D4C2AB1B5A81199BF_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxCurve>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_m3E1445887370D5A6FA0CE65511825AE704F2B170_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Object ES3Types.ES3Type_LimitVelocityOverLifetimeModule::Read<UnityEngine.ParticleSystem/MinMaxGradient>(ES3Reader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ES3Type_LimitVelocityOverLifetimeModule_Read_TisMinMaxGradient_tFF31B8EC2855D0074AB86E8B37BEA6609070AC69_m7EACBE2427C878A877EE304B75BBA01DB581799E_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var instance = new UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule();
		il2cpp_codegen_initobj((&V_0), sizeof(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1));
		// ReadInto<T>(reader, instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_0 = ___reader0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_1 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_2 = L_1;
		RuntimeObject* L_3 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_2);
		NullCheck((ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this);
		GenericVirtualActionInvoker2< ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), (ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE*)__this, L_0, L_3);
		// return instance;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_4 = V_0;
		LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 L_5 = L_4;
		RuntimeObject* L_6 = Box(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<System.Object>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisRuntimeObject_m6009BEEC185DC698AFEDD70A1E1204EC90A989B5_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/CollisionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisCollisionModule_tEE4892D4872C2907164A66DC424F1CFA1D527083_mC5B84615F8C104E1DD02120E0B39820FE4D33935_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisColorBySpeedModule_t808C4CC668431DDE51D5AD98A81C78DDB944948B_m7E82C57DA995A4A64017FECE03B34BC1DF76E887_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ColorOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisColorOverLifetimeModule_t758EC8315B6C19D78C418D942CD1F94FE7EEE9D9_m454578EB9E0AE5E9B35BC1E5D61C79B9C071B9E1_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/EmissionModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisEmissionModule_t0F469FA4A08003F6D9C610D2F716A9DFDB9A3678_m0DFDD6A5D66ED5B4443F91678E2AE4B1E11A1D33_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ExternalForcesModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisExternalForcesModule_t4494E21ECF96F072432EF4DDC5F84BAF84912FC7_mBB5A1D27B960E484332A82B2B83D98756DE8627C_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/ForceOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisForceOverLifetimeModule_t4859776EAF945AEA86044CAB63CA7A8AC8C14976_mAD8C39637F3CA6021C1228E5E50242D4C9205379_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/InheritVelocityModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisInheritVelocityModule_tB71B2EDCAF328647DDB6BC79541D7C5E76C19562_m3BD09CBB586ADAAFD5EFE21AA99BF366EF8842D7_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/LightsModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisLightsModule_t720242ED070FD6C55E59B7536322829A22884C7E_m14292A9AB7F8875BB4936F3AFC1ABF1BFF8FBC60_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/LimitVelocityOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisLimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_mF4E7EB46E28CB41D9A065A68C249C61142582B9C_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/MainModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisMainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_m3FC089A72997B8ECAD1B452193FA0EF7D55C4F39_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/NoiseModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisNoiseModule_tF8D6CB544A887C0C93D05A228B65E41DBD1F3AE0_m9E98A950613460FD59C641FFCB3C9846450049E0_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/RotationBySpeedModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisRotationBySpeedModule_tBCB7E7C1B402D1492310016D5F8FBBA4C15C26A6_m9C358F2954BF41A21DFA40D255B88F38B38ADC5D_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/RotationOverLifetimeModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisRotationOverLifetimeModule_tEE08858451167B6DDE6DD36FDCF11E74C77D79E6_m2DE6D39B24AA50304D08C4903DD76D647DDE7EC2_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ES3Types.ES3Type_LimitVelocityOverLifetimeModule::ReadInto<UnityEngine.ParticleSystem/SubEmittersModule>(ES3Reader,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ES3Type_LimitVelocityOverLifetimeModule_ReadInto_TisSubEmittersModule_t94F5AD231EAFB50A16E697186A630B07BF8B949B_mB4F35982D1E47BA44652C17C6E57E14AF5C689CE_gshared (ES3Type_LimitVelocityOverLifetimeModule_t0DD663DF8DE86F74EB55D3AD6559BC4C1915B2DF* __this, ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* ___reader0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B);
		s_Il2CppMethodInitialized = true;
	}
	LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	uint32_t V_2 = 0;
	{
		// var instance = (UnityEngine.ParticleSystem.LimitVelocityOverLifetimeModule)obj;
		RuntimeObject* L_0 = ___obj1;
		V_0 = ((*(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)((LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)(LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1*)UnBox(L_0, LimitVelocityOverLifetimeModule_tC52CF1434E2639EE5D81DD6BA269FF38CA17D8B1_il2cpp_TypeInfo_var))));
		goto IL_02b9;
	}

IL_000c:
	{
		String_t* L_1 = V_1;
		uint32_t L_2;
		L_2 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_mB4C632184660364C404321BFCA05E1ECF45A5047(L_1, NULL);
		V_2 = L_2;
		uint32_t L_3 = V_2;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)1319695307)))))
		{
			goto IL_006f;
		}
	}
	{
		uint32_t L_4 = V_2;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)691593499)))))
		{
			goto IL_0049;
		}
	}
	{
		uint32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)49525662))))
		{
			goto IL_00bd;
		}
	}
	{
		uint32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)572581548))))
		{
			goto IL_0111;
		}
	}
	{
		uint32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)691593499))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_0049:
	{
		uint32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)853203252))))
		{
			goto IL_0150;
		}
	}
	{
		uint32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)894689925))))
		{
			goto IL_01a4;
		}
	}
	{
		uint32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)1319695307))))
		{
			goto IL_0165;
		}
	}
	{
		goto IL_02b3;
	}

IL_006f:
	{
		uint32_t L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)2072266391)))))
		{
			goto IL_0097;
		}
	}
	{
		uint32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)1479031685))))
		{
			goto IL_018f;
		}
	}
	{
		uint32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)2055488772))))
		{
			goto IL_00d2;
		}
	}
	{
		uint32_t L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)2072266391))))
		{
			goto IL_00fc;
		}
	}
	{
		goto IL_02b3;
	}

IL_0097:
	{
		uint32_t L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)2089044010))))
		{
			goto IL_0126;
		}
	}
	{
		uint32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1976734835))))
		{
			goto IL_013b;
		}
	}
	{
		uint32_t L_17 = V_2;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-1124873996))))
		{
			goto IL_017a;
		}
	}
	{
		goto IL_02b3;
	}

IL_00bd:
	{
		String_t* L_18 = V_1;
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralF9D225733E1D10F9344C755C4A9C0870CD1DE97B, NULL);
		if (L_19)
		{
			goto IL_01b9;
		}
	}
	{
		goto IL_02b3;
	}

IL_00d2:
	{
		String_t* L_20 = V_1;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral46FADEB9E998225AA96BA7F96F3C6FE519B52F62, NULL);
		if (L_21)
		{
			goto IL_01d0;
		}
	}
	{
		goto IL_02b3;
	}

IL_00e7:
	{
		String_t* L_22 = V_1;
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_22, _stringLiteral744761D527F44F04E435DEFCA1E21E179B60B0E4, NULL);
		if (L_23)
		{
			goto IL_01e7;
		}
	}
	{
		goto IL_02b3;
	}

IL_00fc:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_24, _stringLiteral60D92E37F6F99139C65CA6248F17911C762F4DD6, NULL);
		if (L_25)
		{
			goto IL_01fe;
		}
	}
	{
		goto IL_02b3;
	}

IL_0111:
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral0FC0575E5B3BFD69FE0E6DACB4257E1AB52484B5, NULL);
		if (L_27)
		{
			goto IL_0215;
		}
	}
	{
		goto IL_02b3;
	}

IL_0126:
	{
		String_t* L_28 = V_1;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralD18A8AB8F50A606429410D3C3F543B352E7D6033, NULL);
		if (L_29)
		{
			goto IL_022c;
		}
	}
	{
		goto IL_02b3;
	}

IL_013b:
	{
		String_t* L_30 = V_1;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteral21CEBAC0172EB4FB67A8A2698C7F35355100D5F7, NULL);
		if (L_31)
		{
			goto IL_0240;
		}
	}
	{
		goto IL_02b3;
	}

IL_0150:
	{
		String_t* L_32 = V_1;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralA3C8F2A441D7C8A8A2D967375934EFA74D7FE1E8, NULL);
		if (L_33)
		{
			goto IL_0254;
		}
	}
	{
		goto IL_02b3;
	}

IL_0165:
	{
		String_t* L_34 = V_1;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteralE0F9D9926B214819D0D0E8B1814BCF46C90D0956, NULL);
		if (L_35)
		{
			goto IL_0268;
		}
	}
	{
		goto IL_02b3;
	}

IL_017a:
	{
		String_t* L_36 = V_1;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteral0EA7F3FF9751D1C0670732BE07C84116AD963E2D, NULL);
		if (L_37)
		{
			goto IL_027c;
		}
	}
	{
		goto IL_02b3;
	}

IL_018f:
	{
		String_t* L_38 = V_1;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral1B024D537329B86AB0DF96B2A714180F442F53E9, NULL);
		if (L_39)
		{
			goto IL_0290;
		}
	}
	{
		goto IL_02b3;
	}

IL_01a4:
	{
		String_t* L_40 = V_1;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (L_41)
		{
			goto IL_02a4;
		}
	}
	{
		goto IL_02b3;
	}

IL_01b9:
	{
		// instance.enabled = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_42 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_43 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_42);
		bool L_44;
		L_44 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_42, L_43);
		LimitVelocityOverLifetimeModule_set_enabled_m0C4AC7078A4009C764CDD6C852747161626030F8((&V_0), L_44, NULL);
		// break;
		goto IL_02b9;
	}

IL_01d0:
	{
		// instance.limitX = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_45 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_46 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_45);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_47;
		L_47 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_45, L_46);
		LimitVelocityOverLifetimeModule_set_limitX_m453163A173E91BD1FA92A85FFFB1377922264E88((&V_0), L_47, NULL);
		// break;
		goto IL_02b9;
	}

IL_01e7:
	{
		// instance.limitXMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_48 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_49 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_48);
		float L_50;
		L_50 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_48, L_49);
		LimitVelocityOverLifetimeModule_set_limitXMultiplier_m69A35DBE2A96DB94E1C5857C1AEA7700F315FB69((&V_0), L_50, NULL);
		// break;
		goto IL_02b9;
	}

IL_01fe:
	{
		// instance.limitY = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_51 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_52 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_51);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_53;
		L_53 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_51, L_52);
		LimitVelocityOverLifetimeModule_set_limitY_m5C4FA3E4199843D17B358EAE552BC1530944C6ED((&V_0), L_53, NULL);
		// break;
		goto IL_02b9;
	}

IL_0215:
	{
		// instance.limitYMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_54 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_55 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_54);
		float L_56;
		L_56 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_54, L_55);
		LimitVelocityOverLifetimeModule_set_limitYMultiplier_mCB16226776AA3FD95FCBFEF08939CDFCDEAD1FD7((&V_0), L_56, NULL);
		// break;
		goto IL_02b9;
	}

IL_022c:
	{
		// instance.limitZ = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_57 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_58 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_57);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_59;
		L_59 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_57, L_58);
		LimitVelocityOverLifetimeModule_set_limitZ_mA7AA3F6C6EB9C1E2199DE5EDBFDFCD891E66A06C((&V_0), L_59, NULL);
		// break;
		goto IL_02b9;
	}

IL_0240:
	{
		// instance.limitZMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_60 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_61 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_60);
		float L_62;
		L_62 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_60, L_61);
		LimitVelocityOverLifetimeModule_set_limitZMultiplier_mF8318B3E8798E9778CD356C773A9567EBCC414DF((&V_0), L_62, NULL);
		// break;
		goto IL_02b9;
	}

IL_0254:
	{
		// instance.limit = reader.Read<UnityEngine.ParticleSystem.MinMaxCurve>(ES3Type_MinMaxCurve.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_63 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_64 = ((ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_MinMaxCurve_t46EA458CABE82AABDDFB4CA64BEB72718ABD10A2_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_63);
		MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23 L_65;
		L_65 = GenericVirtualFuncInvoker1< MinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisMinMaxCurve_t812D571297EED6498776CC58949A42B172E60E23_mDE155EADAD2AF04ADBCFBD8333B8BDC21CCD4B3B_RuntimeMethod_var, L_63, L_64);
		LimitVelocityOverLifetimeModule_set_limit_m4714D5E0B04EAE01A49552690E9CC206AC5C7685((&V_0), L_65, NULL);
		// break;
		goto IL_02b9;
	}

IL_0268:
	{
		// instance.limitMultiplier = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_66 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_67 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_66);
		float L_68;
		L_68 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_66, L_67);
		LimitVelocityOverLifetimeModule_set_limitMultiplier_m520C77C943C30BFE63EF0E4BEA9593D251187B28((&V_0), L_68, NULL);
		// break;
		goto IL_02b9;
	}

IL_027c:
	{
		// instance.dampen = reader.Read<System.Single>(ES3Type_float.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_69 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_70 = ((ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_float_t20465061009CB845AF69C15BA7E279EE9EE6DEDB_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_69);
		float L_71;
		L_71 = GenericVirtualFuncInvoker1< float, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m82389A988E440B10B0D4B846EAD361D5DB450E37_RuntimeMethod_var, L_69, L_70);
		LimitVelocityOverLifetimeModule_set_dampen_mE8A893ECFE936519C3F68D440C3C6BD11065E288((&V_0), L_71, NULL);
		// break;
		goto IL_02b9;
	}

IL_0290:
	{
		// instance.separateAxes = reader.Read<System.Boolean>(ES3Type_bool.Instance);
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_72 = ___reader0;
		ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* L_73 = ((ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_StaticFields*)il2cpp_codegen_static_fields_for(ES3Type_bool_t994D7EB833640C4A25C4E318B2622CEA7F87C750_il2cpp_TypeInfo_var))->___Instance_11;
		NullCheck(L_72);
		bool L_74;
		L_74 = GenericVirtualFuncInvoker1< bool, ES3Type_tBCC2A6E84E9F0AA990B09B9751DEB7E3F07171FE* >::Invoke(ES3Reader_Read_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m23F3EAA3E7E6547B57DF708EA50643BD46C9D99D_RuntimeMethod_var, L_72, L_73);
		LimitVelocityOverLifetimeModule_set_separateAxes_m3E1D0590D45FE0D6657D99685DA4E5A231229EF0((&V_0), L_74, NULL);
		// break;
		goto IL_02b9;
	}

IL_02a4:
	{
		// instance.space = reader.Read<UnityEngine.ParticleSystemSimulationSpace>();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_75 = ___reader0;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = GenericVirtualFuncInvoker0< int32_t >::Invoke(ES3Reader_Read_TisParticleSystemSimulationSpace_tB3693D8A3C0FCE63D060546071006AC4ABC60B05_m053F1F4CA188B1945189ACC22015EDAB6E2C89E3_RuntimeMethod_var, L_75);
		LimitVelocityOverLifetimeModule_set_space_m54D13D862FCB1606F37A3F053138437DEBF773D5((&V_0), L_76, NULL);
		// break;
		goto IL_02b9;
	}

IL_02b3:
	{
		// reader.Skip();
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_77 = ___reader0;
		NullCheck(L_77);
		VirtualActionInvoker0::Invoke(41 /* System.Void ES3Reader::Skip() */, L_77);
	}

IL_02b9:
	{
		// while((propertyName = reader.ReadPropertyName()) != null)
		ES3Reader_t565FA63DEAB412997A1CA67A38C21BA843DABE0B* L_78 = ___reader0;
		NullCheck(L_78);
		String_t* L_79;
		L_79 = VirtualFuncInvoker0< String_t* >::Invoke(21 /* System.String ES3Reader::ReadPropertyName() */, L_78);
		String_t* L_80 = L_79;
		V_1 = L_80;
		if (L_80)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}

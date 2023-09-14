#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.EcsLite.EcsFilter>
struct Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Leopotam.EcsLite.EcsWorld>
struct Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344;
// System.Collections.Generic.Dictionary`2<System.Type,Leopotam.EcsLite.IEcsPool>
struct Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Leopotam.EcsLite.EcsFilter>
struct KeyCollection_t0B0E887D7E9959865C950658E689C2F7F0FBBDD0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Leopotam.EcsLite.EcsWorld>
struct KeyCollection_t717FFA0C9761CCCED3FBB8AB885705BA67DA4D4D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Leopotam.EcsLite.IEcsPool>
struct KeyCollection_tF613F10992E0F789A06BE563F2CFB40E4CF8000D;
// System.Collections.Generic.List`1<Leopotam.EcsLite.EcsFilter>
struct List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4;
// System.Collections.Generic.List`1<Leopotam.EcsLite.IEcsSystem>
struct List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Leopotam.EcsLite.EcsFilter>
struct ValueCollection_tF6051B5BF3DD6ED74B696E6D2DF9E671411E3955;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Leopotam.EcsLite.EcsWorld>
struct ValueCollection_tE05E9BD3DEE6A69672F861D24080AB9A67EAF95F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Leopotam.EcsLite.IEcsPool>
struct ValueCollection_t45F6F0B44FD9D3CDF7A7DD17AC2EAA649CACE9AD;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Leopotam.EcsLite.EcsFilter>[]
struct EntryU5BU5D_t609BFE5FE23FDD3F216111A0CE228C0F3E34AC97;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Leopotam.EcsLite.EcsWorld>[]
struct EntryU5BU5D_t2C4A06973F7AE0FFE8E27522008901E186B4321A;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Leopotam.EcsLite.IEcsPool>[]
struct EntryU5BU5D_t8A70717DF93327FA952C00899E3F8BDF7DF34705;
// System.Collections.Generic.List`1<Leopotam.EcsLite.EcsFilter>[]
struct List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179;
// Leopotam.EcsLite.EcsFilter[]
struct EcsFilterU5BU5D_t8D681AD759BBA4A30D0A8F4585E5935783F74410;
// Leopotam.EcsLite.IEcsPool[]
struct IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680;
// Leopotam.EcsLite.IEcsRunSystem[]
struct IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F;
// Leopotam.EcsLite.IEcsSystem[]
struct IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Leopotam.EcsLite.EcsFilter/DelayedOp[]
struct DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37;
// Leopotam.EcsLite.EcsWorld/EntityData[]
struct EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF;
// Leopotam.EcsLite.EcsWorld/Mask[]
struct MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Leopotam.EcsLite.EcsFilter
struct EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674;
// Leopotam.EcsLite.EcsSystems
struct EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714;
// Leopotam.EcsLite.EcsWorld
struct EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B;
// Leopotam.EcsLite.IEcsPool
struct IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD;
// Leopotam.EcsLite.IEcsRunSystem
struct IEcsRunSystem_t076149FFF62903116286404C4DF07E099CF95FF8;
// Leopotam.EcsLite.IEcsSystem
struct IEcsSystem_t2B32E0B0D43096F909D7B3025881AB6052A62476;
// Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute
struct Il2CppSetOptionAttribute_t9B5BD63E2D30C78D94F081D7ACFAF884288131D8;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Leopotam.EcsLite.EcsWorld/Mask
struct Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833;

IL2CPP_EXTERN_C RuntimeClass* DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsDestroySystem_t065697FCC8BD31982486981216BBF3FEE5E99DFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsInitSystem_t429EEC9C73064C4323C1AEEBAB607B4478C4EED9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsPostDestroySystem_tA04D22D72FA158B6C2076F80FCEAF63ED64E842B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsPreInitSystem_tD132122B975D44E8823464A2CDFA2AF95F4D7C44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsRunSystem_t076149FFF62903116286404C4DF07E099CF95FF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisIEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_mEED2260BE09E4A2B2DB041D550495CE03237022A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisList_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4_m2408459E5E9704124B3228F6B34FFEC0402D920E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisDelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_m7707AF899B745F050DCE2DE7B93AA2E7F89EACED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisEntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB_mEDD428C2576AC2689227D9D099E9173C7666038D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisMask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833_m835DA3073C6DF3FED6C9C03F023976EAD94721E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m93946BB1F3FECB53174BA941B1B14FB5AEC9A504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m75D3E3E31796BD980E426F2D8FF49E84D26CF9AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m7EF865FE2253D3B0E9F171930FF38F55AE073925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m05736317E3E25ABDCA4E61CC58220219ED687288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4E3B4DF231581954C3997EE71320D63A03A080A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mECB4B1D0DF02481376E2890ED0325BA48A5577B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAF995DF6C029B1E7F83563EF91D08331D7D60FD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD610F43ED9B1308270CAB93A89D3045B1AD1D3CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mDF0A926F0D51C5DA192D7D0B2A410A3A8635BACA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m127AF7635ECCCFF7E5AEE228C87BEC2DBE98E07E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7E336C7E2AD67F497206D0E8AC807C3EF958D864_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m35DCEB6D1D94B4824BF0586B447BAEC4DB01B21C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF71DF2AAEA86EE21D6E5D179984271BD7C662E55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0A512A101C0B4D253FBBDFE3B51567994ECD397E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4BEC90B8846625FB8E92BB93B88B131E7FD17BB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB775C181ED70E9AA806C9B5E87C2D902EA72998D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF0FAC41E6460876E8432BDAE13CBA873793491FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0C067D78EBE69E00D4E586ED526617307022CB48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4A3930CF5EDE34133207F05248C6E7221DC699CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m17E35D506E994A553518A81DD2AFF416CE3A2980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m897D6360DCF2F65825884842C6BD8B159B059221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD721ED022E71CBC9C33F993D4A4E6F29F6215310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDE72BA1367D2C5389BC86F89B1CE42D2E81903CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m076CE29B797FFCC7D1AA4652E5D8855437165D80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4E6E7C83A634DB8DC5EA20392758AC5B0BBD628A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_m8AD1218390E01311923E350D0F6A65E9665DAAE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2865A118A85D0086B4ADE0B443A2CE815642E39C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE88A90FCDBCF7246D3E7BD021593F6A4B36BEFFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m803DC2B2694F43913CE5820E497706CCFC154B18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m93A86C04C8424A0175B11D7A719CE981323AD9C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mF9C89F5B4CD15C64A0CC9246468AC8D4C4391FBB_RuntimeMethod_var;

struct List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179;
struct IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680;
struct IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F;
struct IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37;
struct EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF;
struct MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t561E68A203ADBDEDCF237AA9C9A529119F93071B 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.EcsLite.EcsFilter>
struct Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t609BFE5FE23FDD3F216111A0CE228C0F3E34AC97* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t0B0E887D7E9959865C950658E689C2F7F0FBBDD0* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tF6051B5BF3DD6ED74B696E6D2DF9E671411E3955* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Leopotam.EcsLite.EcsWorld>
struct Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2C4A06973F7AE0FFE8E27522008901E186B4321A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t717FFA0C9761CCCED3FBB8AB885705BA67DA4D4D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE05E9BD3DEE6A69672F861D24080AB9A67EAF95F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,Leopotam.EcsLite.IEcsPool>
struct Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8A70717DF93327FA952C00899E3F8BDF7DF34705* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tF613F10992E0F789A06BE563F2CFB40E4CF8000D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t45F6F0B44FD9D3CDF7A7DD17AC2EAA649CACE9AD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<Leopotam.EcsLite.EcsFilter>
struct List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	EcsFilterU5BU5D_t8D681AD759BBA4A30D0A8F4585E5935783F74410* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	EcsFilterU5BU5D_t8D681AD759BBA4A30D0A8F4585E5935783F74410* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Leopotam.EcsLite.IEcsSystem>
struct List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Leopotam.EcsLite.EcsEntityExtensions
struct EcsEntityExtensions_t825190C52002B655C8ADD04A02D945F7DE7AE152  : public RuntimeObject
{
};

// Leopotam.EcsLite.EcsFilter
struct EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674  : public RuntimeObject
{
	// Leopotam.EcsLite.EcsWorld Leopotam.EcsLite.EcsFilter::_world
	EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ____world_0;
	// Leopotam.EcsLite.EcsWorld/Mask Leopotam.EcsLite.EcsFilter::_mask
	Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* ____mask_1;
	// System.Int32[] Leopotam.EcsLite.EcsFilter::_denseEntities
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____denseEntities_2;
	// System.Int32 Leopotam.EcsLite.EcsFilter::_entitiesCount
	int32_t ____entitiesCount_3;
	// System.Int32[] Leopotam.EcsLite.EcsFilter::SparseEntities
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___SparseEntities_4;
	// System.Int32 Leopotam.EcsLite.EcsFilter::_lockCount
	int32_t ____lockCount_5;
	// Leopotam.EcsLite.EcsFilter/DelayedOp[] Leopotam.EcsLite.EcsFilter::_delayedOps
	DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37* ____delayedOps_6;
	// System.Int32 Leopotam.EcsLite.EcsFilter::_delayedOpsCount
	int32_t ____delayedOpsCount_7;
};

// Leopotam.EcsLite.EcsSystems
struct EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714  : public RuntimeObject
{
	// Leopotam.EcsLite.EcsWorld Leopotam.EcsLite.EcsSystems::_defaultWorld
	EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ____defaultWorld_0;
	// System.Collections.Generic.Dictionary`2<System.String,Leopotam.EcsLite.EcsWorld> Leopotam.EcsLite.EcsSystems::_worlds
	Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344* ____worlds_1;
	// System.Collections.Generic.List`1<Leopotam.EcsLite.IEcsSystem> Leopotam.EcsLite.EcsSystems::_allSystems
	List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* ____allSystems_2;
	// System.Object Leopotam.EcsLite.EcsSystems::_shared
	RuntimeObject* ____shared_3;
	// Leopotam.EcsLite.IEcsRunSystem[] Leopotam.EcsLite.EcsSystems::_runSystems
	IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F* ____runSystems_4;
	// System.Int32 Leopotam.EcsLite.EcsSystems::_runSystemsCount
	int32_t ____runSystemsCount_5;
};

// Leopotam.EcsLite.EcsWorld
struct EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B  : public RuntimeObject
{
	// Leopotam.EcsLite.EcsWorld/EntityData[] Leopotam.EcsLite.EcsWorld::Entities
	EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* ___Entities_0;
	// System.Int32 Leopotam.EcsLite.EcsWorld::_entitiesCount
	int32_t ____entitiesCount_1;
	// System.Int32[] Leopotam.EcsLite.EcsWorld::_recycledEntities
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____recycledEntities_2;
	// System.Int32 Leopotam.EcsLite.EcsWorld::_recycledEntitiesCount
	int32_t ____recycledEntitiesCount_3;
	// Leopotam.EcsLite.IEcsPool[] Leopotam.EcsLite.EcsWorld::_pools
	IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* ____pools_4;
	// System.Int32 Leopotam.EcsLite.EcsWorld::_poolsCount
	int32_t ____poolsCount_5;
	// System.Int32 Leopotam.EcsLite.EcsWorld::_poolDenseSize
	int32_t ____poolDenseSize_6;
	// System.Int32 Leopotam.EcsLite.EcsWorld::_poolRecycledSize
	int32_t ____poolRecycledSize_7;
	// System.Collections.Generic.Dictionary`2<System.Type,Leopotam.EcsLite.IEcsPool> Leopotam.EcsLite.EcsWorld::_poolHashes
	Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4* ____poolHashes_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.EcsLite.EcsFilter> Leopotam.EcsLite.EcsWorld::_hashedFilters
	Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969* ____hashedFilters_9;
	// System.Collections.Generic.List`1<Leopotam.EcsLite.EcsFilter> Leopotam.EcsLite.EcsWorld::_allFilters
	List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* ____allFilters_10;
	// System.Collections.Generic.List`1<Leopotam.EcsLite.EcsFilter>[] Leopotam.EcsLite.EcsWorld::_filtersByIncludedComponents
	List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179* ____filtersByIncludedComponents_11;
	// System.Collections.Generic.List`1<Leopotam.EcsLite.EcsFilter>[] Leopotam.EcsLite.EcsWorld::_filtersByExcludedComponents
	List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179* ____filtersByExcludedComponents_12;
	// Leopotam.EcsLite.EcsWorld/Mask[] Leopotam.EcsLite.EcsWorld::_masks
	MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD* ____masks_13;
	// System.Int32 Leopotam.EcsLite.EcsWorld::_masksCount
	int32_t ____masksCount_14;
	// System.Boolean Leopotam.EcsLite.EcsWorld::_destroyed
	bool ____destroyed_15;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// Leopotam.EcsLite.EcsWorld/Mask
struct Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833  : public RuntimeObject
{
	// Leopotam.EcsLite.EcsWorld Leopotam.EcsLite.EcsWorld/Mask::_world
	EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ____world_0;
	// System.Int32[] Leopotam.EcsLite.EcsWorld/Mask::Include
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Include_1;
	// System.Int32[] Leopotam.EcsLite.EcsWorld/Mask::Exclude
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Exclude_2;
	// System.Int32 Leopotam.EcsLite.EcsWorld/Mask::IncludeCount
	int32_t ___IncludeCount_3;
	// System.Int32 Leopotam.EcsLite.EcsWorld/Mask::ExcludeCount
	int32_t ___ExcludeCount_4;
	// System.Int32 Leopotam.EcsLite.EcsWorld/Mask::Hash
	int32_t ___Hash_5;
};

// System.Collections.Generic.List`1/Enumerator<Leopotam.EcsLite.EcsFilter>
struct Enumerator_tD8DF6963A7ACFB282D7E458CBD093030F5C67031 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Leopotam.EcsLite.IEcsSystem>
struct Enumerator_t90B5B4B49C529053CAEF0FD058393DAF43CB305F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.ValueTuple`2<Leopotam.EcsLite.EcsFilter,System.Boolean>
struct ValueTuple_2_t972AEAACBD9358E43822A00097D383437EE273F7 
{
	// T1 System.ValueTuple`2::Item1
	EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	bool ___Item2_1;
};

// System.ValueTuple`2<System.Object,System.Boolean>
struct ValueTuple_2_tBAB581C4F7C7A850493D1F133E22C5683F495DC8 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	bool ___Item2_1;
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

// Leopotam.EcsLite.EcsPackedEntity
struct EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483 
{
	// System.Int32 Leopotam.EcsLite.EcsPackedEntity::Id
	int32_t ___Id_0;
	// System.Int32 Leopotam.EcsLite.EcsPackedEntity::Gen
	int32_t ___Gen_1;
};

// Leopotam.EcsLite.EcsPackedEntityWithWorld
struct EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76 
{
	// System.Int32 Leopotam.EcsLite.EcsPackedEntityWithWorld::Id
	int32_t ___Id_0;
	// System.Int32 Leopotam.EcsLite.EcsPackedEntityWithWorld::Gen
	int32_t ___Gen_1;
	// Leopotam.EcsLite.EcsWorld Leopotam.EcsLite.EcsPackedEntityWithWorld::World
	EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ___World_2;
};
// Native definition for P/Invoke marshalling of Leopotam.EcsLite.EcsPackedEntityWithWorld
struct EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76_marshaled_pinvoke
{
	int32_t ___Id_0;
	int32_t ___Gen_1;
	EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ___World_2;
};
// Native definition for COM marshalling of Leopotam.EcsLite.EcsPackedEntityWithWorld
struct EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76_marshaled_com
{
	int32_t ___Id_0;
	int32_t ___Gen_1;
	EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ___World_2;
};

// Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute
struct Il2CppSetOptionAttribute_t9B5BD63E2D30C78D94F081D7ACFAF884288131D8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// Unity.IL2CPP.CompilerServices.Option Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::<Option>k__BackingField
	int32_t ___U3COptionU3Ek__BackingField_0;
	// System.Object Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// Leopotam.EcsLite.EcsFilter/DelayedOp
struct DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1 
{
	// System.Boolean Leopotam.EcsLite.EcsFilter/DelayedOp::Added
	bool ___Added_0;
	// System.Int32 Leopotam.EcsLite.EcsFilter/DelayedOp::Entity
	int32_t ___Entity_1;
};
// Native definition for P/Invoke marshalling of Leopotam.EcsLite.EcsFilter/DelayedOp
struct DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_marshaled_pinvoke
{
	int32_t ___Added_0;
	int32_t ___Entity_1;
};
// Native definition for COM marshalling of Leopotam.EcsLite.EcsFilter/DelayedOp
struct DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_marshaled_com
{
	int32_t ___Added_0;
	int32_t ___Entity_1;
};

// Leopotam.EcsLite.EcsFilter/Enumerator
struct Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22 
{
	// Leopotam.EcsLite.EcsFilter Leopotam.EcsLite.EcsFilter/Enumerator::_filter
	EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* ____filter_0;
	// System.Int32[] Leopotam.EcsLite.EcsFilter/Enumerator::_entities
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____entities_1;
	// System.Int32 Leopotam.EcsLite.EcsFilter/Enumerator::_count
	int32_t ____count_2;
	// System.Int32 Leopotam.EcsLite.EcsFilter/Enumerator::_idx
	int32_t ____idx_3;
};
// Native definition for P/Invoke marshalling of Leopotam.EcsLite.EcsFilter/Enumerator
struct Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22_marshaled_pinvoke
{
	EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* ____filter_0;
	Il2CppSafeArray/*NONE*/* ____entities_1;
	int32_t ____count_2;
	int32_t ____idx_3;
};
// Native definition for COM marshalling of Leopotam.EcsLite.EcsFilter/Enumerator
struct Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22_marshaled_com
{
	EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* ____filter_0;
	Il2CppSafeArray/*NONE*/* ____entities_1;
	int32_t ____count_2;
	int32_t ____idx_3;
};

// Leopotam.EcsLite.EcsWorld/Config
struct Config_t866F2FFC961F38760E3894C39804C96C1217F0E6 
{
	// System.Int32 Leopotam.EcsLite.EcsWorld/Config::Entities
	int32_t ___Entities_0;
	// System.Int32 Leopotam.EcsLite.EcsWorld/Config::RecycledEntities
	int32_t ___RecycledEntities_1;
	// System.Int32 Leopotam.EcsLite.EcsWorld/Config::Pools
	int32_t ___Pools_2;
	// System.Int32 Leopotam.EcsLite.EcsWorld/Config::Filters
	int32_t ___Filters_3;
	// System.Int32 Leopotam.EcsLite.EcsWorld/Config::PoolDenseSize
	int32_t ___PoolDenseSize_4;
	// System.Int32 Leopotam.EcsLite.EcsWorld/Config::PoolRecycledSize
	int32_t ___PoolRecycledSize_5;
};

// Leopotam.EcsLite.EcsWorld/EntityData
struct EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB 
{
	// System.Int16 Leopotam.EcsLite.EcsWorld/EntityData::Gen
	int16_t ___Gen_0;
	// System.Int16 Leopotam.EcsLite.EcsWorld/EntityData::ComponentsCount
	int16_t ___ComponentsCount_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Leopotam.EcsLite.EcsFilter/DelayedOp[]
struct DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37  : public RuntimeArray
{
	ALIGN_FIELD (8) DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1 m_Items[1];

	inline DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1 value)
	{
		m_Items[index] = value;
	}
};
// Leopotam.EcsLite.IEcsSystem[]
struct IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Leopotam.EcsLite.IEcsRunSystem[]
struct IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Leopotam.EcsLite.EcsWorld/EntityData[]
struct EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF  : public RuntimeArray
{
	ALIGN_FIELD (8) EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB m_Items[1];

	inline EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB value)
	{
		m_Items[index] = value;
	}
};
// Leopotam.EcsLite.IEcsPool[]
struct IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.List`1<Leopotam.EcsLite.EcsFilter>[]
struct List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179  : public RuntimeArray
{
	ALIGN_FIELD (8) List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* m_Items[1];

	inline List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Leopotam.EcsLite.EcsWorld/Mask[]
struct MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD  : public RuntimeArray
{
	ALIGN_FIELD (8) Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* m_Items[1];

	inline Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Array::Resize<System.Int32>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<Leopotam.EcsLite.EcsFilter/DelayedOp>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisDelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_m7707AF899B745F050DCE2DE7B93AA2E7F89EACED_gshared (DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mF05ADA0EC0B9CC71EDE6D06F6A33A50705EEA32D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<Leopotam.EcsLite.EcsWorld/EntityData>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisEntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB_mEDD428C2576AC2689227D9D099E9173C7666038D_gshared (EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Object,System.Boolean>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m9880D07FACAFFFC99440E1BCC59DA9667125FBB9_gshared (ValueTuple_2_tBAB581C4F7C7A850493D1F133E22C5683F495DC8* __this, RuntimeObject* ___item10, bool ___item21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<System.Int32>(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m93946BB1F3FECB53174BA941B1B14FB5AEC9A504_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Object>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Option(Unity.IL2CPP.CompilerServices.Option)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m2387F7D65F7E690DAFAB1B7249CC50249ABD34D3_inline (Il2CppSetOptionAttribute_t9B5BD63E2D30C78D94F081D7ACFAF884288131D8* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Value(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_m5CBF1336F47FC01805841C469F9422D61C5EF917_inline (Il2CppSetOptionAttribute_t9B5BD63E2D30C78D94F081D7ACFAF884288131D8* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int16 Leopotam.EcsLite.EcsWorld::GetEntityGen(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t EcsWorld_GetEntityGen_mC9299B247AA0A98DAB7EAA7746294FF3235F7865_inline (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, int32_t ___entity0, const RuntimeMethod* method) ;
// System.Boolean Leopotam.EcsLite.EcsWorld::IsAlive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_m472254CACC426012B9752E8BC5CD9854902643E3_inline (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, const RuntimeMethod* method) ;
// System.Boolean Leopotam.EcsLite.EcsWorld::IsEntityAliveInternal(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsEntityAliveInternal_m63BEB4232F1783D82B6B7D4CFFBBCCF61967A4CE_inline (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, int32_t ___entity0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.EcsLite.EcsFilter/Enumerator::.ctor(Leopotam.EcsLite.EcsFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m89E4B407DC2C572390A4036AF2AD5F671B113F8B (Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* __this, EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* ___filter0, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Int32>(T[]&,System.Int32)
inline void Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_gshared)(___array0, ___newSize1, method);
}
// System.Boolean Leopotam.EcsLite.EcsFilter::AddDelayedOp(System.Boolean,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsFilter_AddDelayedOp_mF63A62AC2ECCAE12E7D397FD1B64386F49D2DD3D_inline (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, bool ___added0, int32_t ___entity1, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<Leopotam.EcsLite.EcsFilter/DelayedOp>(T[]&,System.Int32)
inline void Array_Resize_TisDelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_m7707AF899B745F050DCE2DE7B93AA2E7F89EACED (DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37**, int32_t, const RuntimeMethod*))Array_Resize_TisDelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_m7707AF899B745F050DCE2DE7B93AA2E7F89EACED_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.EcsLite.EcsFilter::AddEntity(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_AddEntity_mC850B7002B9DC3317146681F84A68B07BCB211FE_inline (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, int32_t ___entity0, const RuntimeMethod* method) ;
// System.Void Leopotam.EcsLite.EcsFilter::RemoveEntity(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_RemoveEntity_m1E3A4F32C1E1A758502F4054DC5C347CBCA8D1DB_inline (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, int32_t ___entity0, const RuntimeMethod* method) ;
// System.Int32 Leopotam.EcsLite.EcsFilter/Enumerator::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m37684DB8B7FF280C519E3058DF38A2EC380FF318_inline (Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* __this, const RuntimeMethod* method) ;
// System.Boolean Leopotam.EcsLite.EcsFilter/Enumerator::MoveNext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m037CD2BCD8256D5E20CA46B1E0ED5996C57E4DDB_inline (Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.EcsLite.EcsFilter::Unlock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Unlock_mD634DB952334A12F1FDABB887890292715495912_inline (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, const RuntimeMethod* method) ;
// System.Void Leopotam.EcsLite.EcsFilter/Enumerator::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5943B62B2855A133CE2DE4433E3473312A73A7CD_inline (Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Leopotam.EcsLite.EcsWorld>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mD610F43ED9B1308270CAB93A89D3045B1AD1D3CB (Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Leopotam.EcsLite.IEcsSystem>::.ctor(System.Int32)
inline void List_1__ctor_m4E6E7C83A634DB8DC5EA20392758AC5B0BBD628A (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Int32 System.Collections.Generic.List`1<Leopotam.EcsLite.IEcsSystem>::get_Count()
inline int32_t List_1_get_Count_m2865A118A85D0086B4ADE0B443A2CE815642E39C_inline (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<Leopotam.EcsLite.IEcsSystem>::get_Capacity()
inline int32_t List_1_get_Capacity_m8AD1218390E01311923E350D0F6A65E9665DAAE2 (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762*, const RuntimeMethod*))List_1_get_Capacity_mF05ADA0EC0B9CC71EDE6D06F6A33A50705EEA32D_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Leopotam.EcsLite.IEcsSystem>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m803DC2B2694F43913CE5820E497706CCFC154B18 (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Leopotam.EcsLite.EcsWorld>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mECB4B1D0DF02481376E2890ED0325BA48A5577B1 (Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344* __this, String_t* ___key0, EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344*, String_t*, EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<Leopotam.EcsLite.IEcsSystem>::Clear()
inline void List_1_Clear_m897D6360DCF2F65825884842C6BD8B159B059221_inline (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Leopotam.EcsLite.EcsWorld>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m127AF7635ECCCFF7E5AEE228C87BEC2DBE98E07E (Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344* __this, String_t* ___key0, EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344*, String_t*, EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<Leopotam.EcsLite.IEcsSystem>::Add(T)
inline void List_1_Add_m0C067D78EBE69E00D4E586ED526617307022CB48_inline (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Leopotam.EcsLite.IEcsSystem>::GetEnumerator()
inline Enumerator_t90B5B4B49C529053CAEF0FD058393DAF43CB305F List_1_GetEnumerator_mD721ED022E71CBC9C33F993D4A4E6F29F6215310 (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t90B5B4B49C529053CAEF0FD058393DAF43CB305F (*) (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Leopotam.EcsLite.IEcsSystem>::Dispose()
inline void Enumerator_Dispose_m35DCEB6D1D94B4824BF0586B447BAEC4DB01B21C (Enumerator_t90B5B4B49C529053CAEF0FD058393DAF43CB305F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t90B5B4B49C529053CAEF0FD058393DAF43CB305F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Leopotam.EcsLite.IEcsSystem>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mF0FAC41E6460876E8432BDAE13CBA873793491FF_inline (Enumerator_t90B5B4B49C529053CAEF0FD058393DAF43CB305F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t90B5B4B49C529053CAEF0FD058393DAF43CB305F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Leopotam.EcsLite.IEcsSystem>::MoveNext()
inline bool Enumerator_MoveNext_m0A512A101C0B4D253FBBDFE3B51567994ECD397E (Enumerator_t90B5B4B49C529053CAEF0FD058393DAF43CB305F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t90B5B4B49C529053CAEF0FD058393DAF43CB305F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Leopotam.EcsLite.IEcsPool>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mAF995DF6C029B1E7F83563EF91D08331D7D60FD0 (Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.EcsLite.EcsFilter>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mDF0A926F0D51C5DA192D7D0B2A410A3A8635BACA (Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m2E996E8E97DFC188B4E8854C11A9C82B16EDD2CE_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Leopotam.EcsLite.EcsFilter>::.ctor(System.Int32)
inline void List_1__ctor_m076CE29B797FFCC7D1AA4652E5D8855437165D80 (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void Leopotam.EcsLite.EcsWorld::DelEntity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_DelEntity_m07714BFC5026BA247543D97A84C43C17CA6C9F2B (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, int32_t ___entity0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Leopotam.EcsLite.IEcsPool>()
inline IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* Array_Empty_TisIEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_mEED2260BE09E4A2B2DB041D550495CE03237022A_inline (const RuntimeMethod* method)
{
	return ((  IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Leopotam.EcsLite.IEcsPool>::Clear()
inline void Dictionary_2_Clear_m75D3E3E31796BD980E426F2D8FF49E84D26CF9AA (Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.EcsLite.EcsFilter>::Clear()
inline void Dictionary_2_Clear_m7EF865FE2253D3B0E9F171930FF38F55AE073925 (Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Leopotam.EcsLite.EcsFilter>::Clear()
inline void List_1_Clear_m17E35D506E994A553518A81DD2AFF416CE3A2980_inline (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T[] System.Array::Empty<System.Collections.Generic.List`1<Leopotam.EcsLite.EcsFilter>>()
inline List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179* Array_Empty_TisList_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4_m2408459E5E9704124B3228F6B34FFEC0402D920E_inline (const RuntimeMethod* method)
{
	return ((  List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void System.Array::Resize<Leopotam.EcsLite.EcsWorld/EntityData>(T[]&,System.Int32)
inline void Array_Resize_TisEntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB_mEDD428C2576AC2689227D9D099E9173C7666038D (EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF**, int32_t, const RuntimeMethod*))Array_Resize_TisEntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB_mEDD428C2576AC2689227D9D099E9173C7666038D_gshared)(___array0, ___newSize1, method);
}
// System.Int32 System.Collections.Generic.List`1<Leopotam.EcsLite.EcsFilter>::get_Count()
inline int32_t List_1_get_Count_mE88A90FCDBCF7246D3E7BD021593F6A4B36BEFFF_inline (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Leopotam.EcsLite.EcsFilter>::get_Item(System.Int32)
inline EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* List_1_get_Item_m93A86C04C8424A0175B11D7A719CE981323AD9C5 (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* (*) (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Leopotam.EcsLite.EcsFilter::ResizeSparseIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_ResizeSparseIndex_mC01D2DC5C40388E65F707A7DA5B9CBF0E6367405_inline (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Leopotam.EcsLite.IEcsPool>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m05736317E3E25ABDCA4E61CC58220219ED687288 (Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4* __this, Type_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4*, Type_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.EcsLite.EcsFilter>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m4E3B4DF231581954C3997EE71320D63A03A080A0 (Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969* __this, int32_t ___key0, EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969*, int32_t, EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ValueTuple`2<Leopotam.EcsLite.EcsFilter,System.Boolean>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_mF9C89F5B4CD15C64A0CC9246468AC8D4C4391FBB (ValueTuple_2_t972AEAACBD9358E43822A00097D383437EE273F7* __this, EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* ___item10, bool ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t972AEAACBD9358E43822A00097D383437EE273F7*, EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674*, bool, const RuntimeMethod*))ValueTuple_2__ctor_m9880D07FACAFFFC99440E1BCC59DA9667125FBB9_gshared)(__this, ___item10, ___item21, method);
}
// System.Void Leopotam.EcsLite.EcsFilter::.ctor(Leopotam.EcsLite.EcsWorld,Leopotam.EcsLite.EcsWorld/Mask,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter__ctor_m7BE83D78D86D53D0C4392BA2526B5CA14A2B4EBD (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ___world0, Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* ___mask1, int32_t ___denseCapacity2, int32_t ___sparseCapacity3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.EcsLite.EcsFilter>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7E336C7E2AD67F497206D0E8AC807C3EF958D864 (Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969* __this, int32_t ___key0, EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969*, int32_t, EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<Leopotam.EcsLite.EcsFilter>::Add(T)
inline void List_1_Add_m4A3930CF5EDE34133207F05248C6E7221DC699CC_inline (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* __this, EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4*, EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean Leopotam.EcsLite.EcsWorld::IsMaskCompatible(Leopotam.EcsLite.EcsWorld/Mask,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsMaskCompatible_mEAF2DADCBE03B0E3D3EA6830BF72043EF3EEF353_inline (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* ___filterMask0, int32_t ___entity1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Leopotam.EcsLite.EcsFilter>::GetEnumerator()
inline Enumerator_tD8DF6963A7ACFB282D7E458CBD093030F5C67031 List_1_GetEnumerator_mDE72BA1367D2C5389BC86F89B1CE42D2E81903CC (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD8DF6963A7ACFB282D7E458CBD093030F5C67031 (*) (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Leopotam.EcsLite.EcsFilter>::Dispose()
inline void Enumerator_Dispose_mF71DF2AAEA86EE21D6E5D179984271BD7C662E55 (Enumerator_tD8DF6963A7ACFB282D7E458CBD093030F5C67031* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD8DF6963A7ACFB282D7E458CBD093030F5C67031*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Leopotam.EcsLite.EcsFilter>::get_Current()
inline EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* Enumerator_get_Current_mB775C181ED70E9AA806C9B5E87C2D902EA72998D_inline (Enumerator_tD8DF6963A7ACFB282D7E458CBD093030F5C67031* __this, const RuntimeMethod* method)
{
	return ((  EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* (*) (Enumerator_tD8DF6963A7ACFB282D7E458CBD093030F5C67031*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// Leopotam.EcsLite.EcsWorld/Mask Leopotam.EcsLite.EcsFilter::GetMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* EcsFilter_GetMask_m99665072F3F09FE4739AADF4DC764C2336B071DC_inline (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Leopotam.EcsLite.EcsFilter>::MoveNext()
inline bool Enumerator_MoveNext_m4BEC90B8846625FB8E92BB93B88B131E7FD17BB8 (Enumerator_tD8DF6963A7ACFB282D7E458CBD093030F5C67031* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD8DF6963A7ACFB282D7E458CBD093030F5C67031*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean Leopotam.EcsLite.EcsWorld::IsMaskCompatibleWithout(Leopotam.EcsLite.EcsWorld/Mask,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsMaskCompatibleWithout_m50112AD1ADA33A6C3F2197A3B66D28F3CA4DE97E_inline (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* ___filterMask0, int32_t ___entity1, int32_t ___componentId2, const RuntimeMethod* method) ;
// System.Void Leopotam.EcsLite.EcsWorld/Mask::Reset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mask_Reset_m7B4E91E82B7C71199B0848ADF261158A249ADDF9_inline (Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<System.Int32>(T[],System.Int32,System.Int32)
inline void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m93946BB1F3FECB53174BA941B1B14FB5AEC9A504 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m93946BB1F3FECB53174BA941B1B14FB5AEC9A504_gshared)(___array0, ___index1, ___length2, method);
}
// System.ValueTuple`2<Leopotam.EcsLite.EcsFilter,System.Boolean> Leopotam.EcsLite.EcsWorld::GetFilterInternal(Leopotam.EcsLite.EcsWorld/Mask,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t972AEAACBD9358E43822A00097D383437EE273F7 EcsWorld_GetFilterInternal_m9A07F5A8A04F5DFF953377FF5E448096E860EB43 (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* ___mask0, int32_t ___capacity1, const RuntimeMethod* method) ;
// System.Void Leopotam.EcsLite.EcsWorld/Mask::Recycle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mask_Recycle_m9A47E102ED6A7A6C607530F4BB0274D353624B46_inline (Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<Leopotam.EcsLite.EcsWorld/Mask>(T[]&,System.Int32)
inline void Array_Resize_TisMask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833_m835DA3073C6DF3FED6C9C03F023976EAD94721E4 (MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared)(___array0, ___newSize1, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.IL2CPP.CompilerServices.Option Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::get_Option()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Il2CppSetOptionAttribute_get_Option_m63242081A83F75FA94B4BD9B78D53506EDE588BD (Il2CppSetOptionAttribute_t9B5BD63E2D30C78D94F081D7ACFAF884288131D8* __this, const RuntimeMethod* method) 
{
	{
		// public Option Option { get; private set; }
		int32_t L_0 = __this->___U3COptionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Option(Unity.IL2CPP.CompilerServices.Option)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m2387F7D65F7E690DAFAB1B7249CC50249ABD34D3 (Il2CppSetOptionAttribute_t9B5BD63E2D30C78D94F081D7ACFAF884288131D8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Option Option { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3COptionU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Object Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Il2CppSetOptionAttribute_get_Value_m1BCF190748FBBAD8570FE93507009283CC4D5D59 (Il2CppSetOptionAttribute_t9B5BD63E2D30C78D94F081D7ACFAF884288131D8* __this, const RuntimeMethod* method) 
{
	{
		// public object Value { get; private set; }
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Value(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_m5CBF1336F47FC01805841C469F9422D61C5EF917 (Il2CppSetOptionAttribute_t9B5BD63E2D30C78D94F081D7ACFAF884288131D8* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Value { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::.ctor(Unity.IL2CPP.CompilerServices.Option,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute__ctor_mFE2453BE11A4E1BAB4F74CD29A7F8CFCAB7C9116 (Il2CppSetOptionAttribute_t9B5BD63E2D30C78D94F081D7ACFAF884288131D8* __this, int32_t ___option0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		int32_t L_0 = ___option0;
		Il2CppSetOptionAttribute_set_Option_m2387F7D65F7E690DAFAB1B7249CC50249ABD34D3_inline(__this, L_0, NULL);
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		RuntimeObject* L_1 = ___value1;
		Il2CppSetOptionAttribute_set_Value_m5CBF1336F47FC01805841C469F9422D61C5EF917_inline(__this, L_1, NULL);
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Leopotam.EcsLite.EcsPackedEntityWithWorld
IL2CPP_EXTERN_C void EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76_marshal_pinvoke(const EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76& unmarshaled, EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76_marshaled_pinvoke& marshaled)
{
	Exception_t* ___World_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'World' of type 'EcsPackedEntityWithWorld': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___World_2Exception, NULL);
}
IL2CPP_EXTERN_C void EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76_marshal_pinvoke_back(const EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76_marshaled_pinvoke& marshaled, EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76& unmarshaled)
{
	Exception_t* ___World_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'World' of type 'EcsPackedEntityWithWorld': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___World_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.EcsLite.EcsPackedEntityWithWorld
IL2CPP_EXTERN_C void EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76_marshal_pinvoke_cleanup(EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Leopotam.EcsLite.EcsPackedEntityWithWorld
IL2CPP_EXTERN_C void EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76_marshal_com(const EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76& unmarshaled, EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76_marshaled_com& marshaled)
{
	Exception_t* ___World_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'World' of type 'EcsPackedEntityWithWorld': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___World_2Exception, NULL);
}
IL2CPP_EXTERN_C void EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76_marshal_com_back(const EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76_marshaled_com& marshaled, EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76& unmarshaled)
{
	Exception_t* ___World_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'World' of type 'EcsPackedEntityWithWorld': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___World_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.EcsLite.EcsPackedEntityWithWorld
IL2CPP_EXTERN_C void EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76_marshal_com_cleanup(EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Leopotam.EcsLite.EcsPackedEntity Leopotam.EcsLite.EcsEntityExtensions::PackEntity(Leopotam.EcsLite.EcsWorld,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483 EcsEntityExtensions_PackEntity_mF24CE772C5D3B3025FC74AC77E5FFB9843B32761 (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ___world0, int32_t ___entity1, const RuntimeMethod* method) 
{
	EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// packed.Id = entity;
		int32_t L_0 = ___entity1;
		(&V_0)->___Id_0 = L_0;
		// packed.Gen = world.GetEntityGen (entity);
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_1 = ___world0;
		int32_t L_2 = ___entity1;
		int16_t L_3;
		L_3 = EcsWorld_GetEntityGen_mC9299B247AA0A98DAB7EAA7746294FF3235F7865_inline(L_1, L_2, NULL);
		(&V_0)->___Gen_1 = L_3;
		// return packed;
		EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483 L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Leopotam.EcsLite.EcsEntityExtensions::Unpack(Leopotam.EcsLite.EcsPackedEntity&,Leopotam.EcsLite.EcsWorld,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_Unpack_m30C91FC9E3CB18B92BC393274F3E8443ADDCE637 (EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483* ___packed0, EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ___world1, int32_t* ___entity2, const RuntimeMethod* method) 
{
	{
		// if (!world.IsAlive () || !world.IsEntityAliveInternal (packed.Id) || world.GetEntityGen (packed.Id) != packed.Gen) {
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_0 = ___world1;
		bool L_1;
		L_1 = EcsWorld_IsAlive_m472254CACC426012B9752E8BC5CD9854902643E3_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_2 = ___world1;
		EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483* L_3 = ___packed0;
		int32_t L_4 = L_3->___Id_0;
		bool L_5;
		L_5 = EcsWorld_IsEntityAliveInternal_m63BEB4232F1783D82B6B7D4CFFBBCCF61967A4CE_inline(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_6 = ___world1;
		EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483* L_7 = ___packed0;
		int32_t L_8 = L_7->___Id_0;
		int16_t L_9;
		L_9 = EcsWorld_GetEntityGen_mC9299B247AA0A98DAB7EAA7746294FF3235F7865_inline(L_6, L_8, NULL);
		EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483* L_10 = ___packed0;
		int32_t L_11 = L_10->___Gen_1;
		if ((((int32_t)L_9) == ((int32_t)L_11)))
		{
			goto IL_002f;
		}
	}

IL_002a:
	{
		// entity = -1;
		int32_t* L_12 = ___entity2;
		*((int32_t*)L_12) = (int32_t)(-1);
		// return false;
		return (bool)0;
	}

IL_002f:
	{
		// entity = packed.Id;
		int32_t* L_13 = ___entity2;
		EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483* L_14 = ___packed0;
		int32_t L_15 = L_14->___Id_0;
		*((int32_t*)L_13) = (int32_t)L_15;
		// return true;
		return (bool)1;
	}
}
// System.Boolean Leopotam.EcsLite.EcsEntityExtensions::EqualsTo(Leopotam.EcsLite.EcsPackedEntity&,Leopotam.EcsLite.EcsPackedEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_EqualsTo_m0B75FA9C41821AB3C90AAB0318E2544082EE323E (EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483* ___a0, EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483* ___b1, const RuntimeMethod* method) 
{
	{
		// return a.Id == b.Id && a.Gen == b.Gen;
		EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483* L_0 = ___a0;
		int32_t L_1 = L_0->___Id_0;
		EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483* L_2 = ___b1;
		int32_t L_3 = L_2->___Id_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483* L_4 = ___a0;
		int32_t L_5 = L_4->___Gen_1;
		EcsPackedEntity_t950BE928C343773BE196C78BB5EFB3D66C84F483* L_6 = ___b1;
		int32_t L_7 = L_6->___Gen_1;
		return (bool)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// Leopotam.EcsLite.EcsPackedEntityWithWorld Leopotam.EcsLite.EcsEntityExtensions::PackEntityWithWorld(Leopotam.EcsLite.EcsWorld,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76 EcsEntityExtensions_PackEntityWithWorld_mDA5B67E363FE0D87C2E672D52A693C08F660A296 (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ___world0, int32_t ___entity1, const RuntimeMethod* method) 
{
	EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// packedEntity.World = world;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_0 = ___world0;
		(&V_0)->___World_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___World_2), (void*)L_0);
		// packedEntity.Id = entity;
		int32_t L_1 = ___entity1;
		(&V_0)->___Id_0 = L_1;
		// packedEntity.Gen = world.GetEntityGen (entity);
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_2 = ___world0;
		int32_t L_3 = ___entity1;
		int16_t L_4;
		L_4 = EcsWorld_GetEntityGen_mC9299B247AA0A98DAB7EAA7746294FF3235F7865_inline(L_2, L_3, NULL);
		(&V_0)->___Gen_1 = L_4;
		// return packedEntity;
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76 L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Leopotam.EcsLite.EcsEntityExtensions::Unpack(Leopotam.EcsLite.EcsPackedEntityWithWorld&,Leopotam.EcsLite.EcsWorld&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_Unpack_m2C4FAEAD3EB77F7BD06F92BC48FCB4BB9286C272 (EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* ___packedEntity0, EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B** ___world1, int32_t* ___entity2, const RuntimeMethod* method) 
{
	{
		// if (packedEntity.World == null || !packedEntity.World.IsAlive () || !packedEntity.World.IsEntityAliveInternal (packedEntity.Id) || packedEntity.World.GetEntityGen (packedEntity.Id) != packedEntity.Gen) {
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_0 = ___packedEntity0;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_1 = L_0->___World_2;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_2 = ___packedEntity0;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_3 = L_2->___World_2;
		bool L_4;
		L_4 = EcsWorld_IsAlive_m472254CACC426012B9752E8BC5CD9854902643E3_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_5 = ___packedEntity0;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_6 = L_5->___World_2;
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_7 = ___packedEntity0;
		int32_t L_8 = L_7->___Id_0;
		bool L_9;
		L_9 = EcsWorld_IsEntityAliveInternal_m63BEB4232F1783D82B6B7D4CFFBBCCF61967A4CE_inline(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_10 = ___packedEntity0;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_11 = L_10->___World_2;
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_12 = ___packedEntity0;
		int32_t L_13 = L_12->___Id_0;
		int16_t L_14;
		L_14 = EcsWorld_GetEntityGen_mC9299B247AA0A98DAB7EAA7746294FF3235F7865_inline(L_11, L_13, NULL);
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_15 = ___packedEntity0;
		int32_t L_16 = L_15->___Gen_1;
		if ((((int32_t)L_14) == ((int32_t)L_16)))
		{
			goto IL_0049;
		}
	}

IL_0041:
	{
		// world = null;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B** L_17 = ___world1;
		*((RuntimeObject**)L_17) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)NULL);
		// entity = -1;
		int32_t* L_18 = ___entity2;
		*((int32_t*)L_18) = (int32_t)(-1);
		// return false;
		return (bool)0;
	}

IL_0049:
	{
		// world = packedEntity.World;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B** L_19 = ___world1;
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_20 = ___packedEntity0;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_21 = L_20->___World_2;
		*((RuntimeObject**)L_19) = (RuntimeObject*)L_21;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)(RuntimeObject*)L_21);
		// entity = packedEntity.Id;
		int32_t* L_22 = ___entity2;
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_23 = ___packedEntity0;
		int32_t L_24 = L_23->___Id_0;
		*((int32_t*)L_22) = (int32_t)L_24;
		// return true;
		return (bool)1;
	}
}
// System.Boolean Leopotam.EcsLite.EcsEntityExtensions::EqualsTo(Leopotam.EcsLite.EcsPackedEntityWithWorld&,Leopotam.EcsLite.EcsPackedEntityWithWorld&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_EqualsTo_m38F30AE753F1734F1916F35E20F29B3ECEA87E11 (EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* ___a0, EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* ___b1, const RuntimeMethod* method) 
{
	{
		// return a.Id == b.Id && a.Gen == b.Gen && a.World == b.World;
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_0 = ___a0;
		int32_t L_1 = L_0->___Id_0;
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_2 = ___b1;
		int32_t L_3 = L_2->___Id_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_002b;
		}
	}
	{
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_4 = ___a0;
		int32_t L_5 = L_4->___Gen_1;
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_6 = ___b1;
		int32_t L_7 = L_6->___Gen_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_002b;
		}
	}
	{
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_8 = ___a0;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_9 = L_8->___World_2;
		EcsPackedEntityWithWorld_tA54C196D11B0A950F6F813D3E82B6D3687AA7A76* L_10 = ___b1;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_11 = L_10->___World_2;
		return (bool)((((RuntimeObject*)(EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B*)L_9) == ((RuntimeObject*)(EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B*)L_11))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leopotam.EcsLite.EcsFilter::.ctor(Leopotam.EcsLite.EcsWorld,Leopotam.EcsLite.EcsWorld/Mask,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter__ctor_m7BE83D78D86D53D0C4392BA2526B5CA14A2B4EBD (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ___world0, Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* ___mask1, int32_t ___denseCapacity2, int32_t ___sparseCapacity3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal EcsFilter (EcsWorld world, EcsWorld.Mask mask, int denseCapacity, int sparseCapacity) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _world = world;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_0 = ___world0;
		__this->____world_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____world_0), (void*)L_0);
		// _mask = mask;
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_1 = ___mask1;
		__this->____mask_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mask_1), (void*)L_1);
		// _denseEntities = new int[denseCapacity];
		int32_t L_2 = ___denseCapacity2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____denseEntities_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____denseEntities_2), (void*)L_3);
		// SparseEntities = new int[sparseCapacity];
		int32_t L_4 = ___sparseCapacity3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___SparseEntities_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SparseEntities_4), (void*)L_5);
		// _entitiesCount = 0;
		__this->____entitiesCount_3 = 0;
		// _delayedOps = new DelayedOp[512];
		DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37* L_6 = (DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37*)(DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37*)SZArrayNew(DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		__this->____delayedOps_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____delayedOps_6), (void*)L_6);
		// _delayedOpsCount = 0;
		__this->____delayedOpsCount_7 = 0;
		// _lockCount = 0;
		__this->____lockCount_5 = 0;
		// }
		return;
	}
}
// Leopotam.EcsLite.EcsWorld Leopotam.EcsLite.EcsFilter::GetWorld()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* EcsFilter_GetWorld_mF9771A6593C6883A5CA4253559A9B4AFDF39CA95 (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, const RuntimeMethod* method) 
{
	{
		// return _world;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_0 = __this->____world_0;
		return L_0;
	}
}
// System.Int32 Leopotam.EcsLite.EcsFilter::GetEntitiesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsFilter_GetEntitiesCount_mC0DCBB4F73AC5052681E4BFDEDFC4AF83F6152B1 (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, const RuntimeMethod* method) 
{
	{
		// return _entitiesCount;
		int32_t L_0 = __this->____entitiesCount_3;
		return L_0;
	}
}
// System.Int32[] Leopotam.EcsLite.EcsFilter::GetRawEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EcsFilter_GetRawEntities_m9951A156C00001D3601CCD8685525D3F70F72DE9 (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, const RuntimeMethod* method) 
{
	{
		// return _denseEntities;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____denseEntities_2;
		return L_0;
	}
}
// System.Int32[] Leopotam.EcsLite.EcsFilter::GetSparseIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* EcsFilter_GetSparseIndex_mF05D6997F13C502D02DBF0957E7900F0FEF9723D (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, const RuntimeMethod* method) 
{
	{
		// return SparseEntities;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___SparseEntities_4;
		return L_0;
	}
}
// Leopotam.EcsLite.EcsFilter/Enumerator Leopotam.EcsLite.EcsFilter::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22 EcsFilter_GetEnumerator_m08F8EA979895A06FA9394DF0E1CE1FB021FE27CB (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, const RuntimeMethod* method) 
{
	{
		// _lockCount++;
		int32_t L_0 = __this->____lockCount_5;
		__this->____lockCount_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// return new Enumerator (this);
		Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Enumerator__ctor_m89E4B407DC2C572390A4036AF2AD5F671B113F8B((&L_1), __this, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Leopotam.EcsLite.EcsFilter::ResizeSparseIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter_ResizeSparseIndex_mC01D2DC5C40388E65F707A7DA5B9CBF0E6367405 (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Array.Resize (ref SparseEntities, capacity);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_0 = (&__this->___SparseEntities_4);
		int32_t L_1 = ___capacity0;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916(L_0, L_1, Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		// }
		return;
	}
}
// Leopotam.EcsLite.EcsWorld/Mask Leopotam.EcsLite.EcsFilter::GetMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* EcsFilter_GetMask_m99665072F3F09FE4739AADF4DC764C2336B071DC (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, const RuntimeMethod* method) 
{
	{
		// return _mask;
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_0 = __this->____mask_1;
		return L_0;
	}
}
// System.Void Leopotam.EcsLite.EcsFilter::AddEntity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter_AddEntity_mC850B7002B9DC3317146681F84A68B07BCB211FE (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, int32_t ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (AddDelayedOp (true, entity)) { return; }
		int32_t L_0 = ___entity0;
		bool L_1;
		L_1 = EcsFilter_AddDelayedOp_mF63A62AC2ECCAE12E7D397FD1B64386F49D2DD3D_inline(__this, (bool)1, L_0, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (AddDelayedOp (true, entity)) { return; }
		return;
	}

IL_000b:
	{
		// if (_entitiesCount == _denseEntities.Length) {
		int32_t L_2 = __this->____entitiesCount_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____denseEntities_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		// Array.Resize (ref _denseEntities, _entitiesCount << 1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_4 = (&__this->____denseEntities_2);
		int32_t L_5 = __this->____entitiesCount_3;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916(L_4, ((int32_t)(L_5<<1)), Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
	}

IL_002e:
	{
		// _denseEntities[_entitiesCount++] = entity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____denseEntities_2;
		int32_t L_7 = __this->____entitiesCount_3;
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->____entitiesCount_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		int32_t L_10 = ___entity0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (int32_t)L_10);
		// SparseEntities[entity] = _entitiesCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___SparseEntities_4;
		int32_t L_12 = ___entity0;
		int32_t L_13 = __this->____entitiesCount_3;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (int32_t)L_13);
		// }
		return;
	}
}
// System.Void Leopotam.EcsLite.EcsFilter::RemoveEntity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter_RemoveEntity_m1E3A4F32C1E1A758502F4054DC5C347CBCA8D1DB (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, int32_t ___entity0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (AddDelayedOp (false, entity)) { return; }
		int32_t L_0 = ___entity0;
		bool L_1;
		L_1 = EcsFilter_AddDelayedOp_mF63A62AC2ECCAE12E7D397FD1B64386F49D2DD3D_inline(__this, (bool)0, L_0, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (AddDelayedOp (false, entity)) { return; }
		return;
	}

IL_000b:
	{
		// var idx = SparseEntities[entity] - 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___SparseEntities_4;
		int32_t L_3 = ___entity0;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		// SparseEntities[entity] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___SparseEntities_4;
		int32_t L_7 = ___entity0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (int32_t)0);
		// _entitiesCount--;
		int32_t L_8 = __this->____entitiesCount_3;
		__this->____entitiesCount_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		// if (idx < _entitiesCount) {
		int32_t L_9 = V_0;
		int32_t L_10 = __this->____entitiesCount_3;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_005d;
		}
	}
	{
		// _denseEntities[idx] = _denseEntities[_entitiesCount];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____denseEntities_2;
		int32_t L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____denseEntities_2;
		int32_t L_14 = __this->____entitiesCount_3;
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (int32_t)L_16);
		// SparseEntities[_denseEntities[idx]] = idx + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___SparseEntities_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->____denseEntities_2;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		int32_t L_22 = V_0;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21), (int32_t)((int32_t)il2cpp_codegen_add(L_22, 1)));
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Boolean Leopotam.EcsLite.EcsFilter::AddDelayedOp(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_AddDelayedOp_mF63A62AC2ECCAE12E7D397FD1B64386F49D2DD3D (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, bool ___added0, int32_t ___entity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisDelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_m7707AF899B745F050DCE2DE7B93AA2E7F89EACED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_lockCount <= 0) { return false; }
		int32_t L_0 = __this->____lockCount_5;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// if (_lockCount <= 0) { return false; }
		return (bool)0;
	}

IL_000b:
	{
		// if (_delayedOpsCount == _delayedOps.Length) {
		int32_t L_1 = __this->____delayedOpsCount_7;
		DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37* L_2 = __this->____delayedOps_6;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		// Array.Resize (ref _delayedOps, _delayedOpsCount << 1);
		DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37** L_3 = (&__this->____delayedOps_6);
		int32_t L_4 = __this->____delayedOpsCount_7;
		Array_Resize_TisDelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_m7707AF899B745F050DCE2DE7B93AA2E7F89EACED(L_3, ((int32_t)(L_4<<1)), Array_Resize_TisDelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_m7707AF899B745F050DCE2DE7B93AA2E7F89EACED_RuntimeMethod_var);
	}

IL_002e:
	{
		// ref var op = ref _delayedOps[_delayedOpsCount++];
		DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37* L_5 = __this->____delayedOps_6;
		int32_t L_6 = __this->____delayedOpsCount_7;
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->____delayedOpsCount_7 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		// op.Added = added;
		DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1* L_9 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)));
		bool L_10 = ___added0;
		L_9->___Added_0 = L_10;
		// op.Entity = entity;
		int32_t L_11 = ___entity1;
		L_9->___Entity_1 = L_11;
		// return true;
		return (bool)1;
	}
}
// System.Void Leopotam.EcsLite.EcsFilter::Unlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter_Unlock_mD634DB952334A12F1FDABB887890292715495912 (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1* V_2 = NULL;
	{
		// _lockCount--;
		int32_t L_0 = __this->____lockCount_5;
		__this->____lockCount_5 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (_lockCount == 0 && _delayedOpsCount > 0) {
		int32_t L_1 = __this->____lockCount_5;
		if (L_1)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_2 = __this->____delayedOpsCount_7;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_3 = __this->____delayedOpsCount_7;
		V_1 = L_3;
		goto IL_005d;
	}

IL_002a:
	{
		// ref var op = ref _delayedOps[i];
		DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37* L_4 = __this->____delayedOps_6;
		int32_t L_5 = V_0;
		V_2 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)));
		// if (op.Added) {
		DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1* L_6 = V_2;
		bool L_7 = L_6->___Added_0;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		// AddEntity (op.Entity);
		DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1* L_8 = V_2;
		int32_t L_9 = L_8->___Entity_1;
		EcsFilter_AddEntity_mC850B7002B9DC3317146681F84A68B07BCB211FE_inline(__this, L_9, NULL);
		goto IL_0059;
	}

IL_004d:
	{
		// RemoveEntity (op.Entity);
		DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1* L_10 = V_2;
		int32_t L_11 = L_10->___Entity_1;
		EcsFilter_RemoveEntity_m1E3A4F32C1E1A758502F4054DC5C347CBCA8D1DB_inline(__this, L_11, NULL);
	}

IL_0059:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_005d:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_002a;
		}
	}
	{
		// _delayedOpsCount = 0;
		__this->____delayedOpsCount_7 = 0;
	}

IL_0068:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Leopotam.EcsLite.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22_marshal_pinvoke(const Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22& unmarshaled, Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22_marshaled_pinvoke& marshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22_marshal_pinvoke_back(const Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22_marshaled_pinvoke& marshaled, Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22& unmarshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.EcsLite.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22_marshal_pinvoke_cleanup(Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Leopotam.EcsLite.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22_marshal_com(const Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22& unmarshaled, Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22_marshaled_com& marshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22_marshal_com_back(const Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22_marshaled_com& marshaled, Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22& unmarshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.EcsLite.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22_marshal_com_cleanup(Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22_marshaled_com& marshaled)
{
}
// System.Void Leopotam.EcsLite.EcsFilter/Enumerator::.ctor(Leopotam.EcsLite.EcsFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m89E4B407DC2C572390A4036AF2AD5F671B113F8B (Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* __this, EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* ___filter0, const RuntimeMethod* method) 
{
	{
		// _filter = filter;
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_0 = ___filter0;
		__this->____filter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filter_0), (void*)L_0);
		// _entities = filter._denseEntities;
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_1 = ___filter0;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1->____denseEntities_2;
		__this->____entities_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entities_1), (void*)L_2);
		// _count = filter._entitiesCount;
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_3 = ___filter0;
		NullCheck(L_3);
		int32_t L_4 = L_3->____entitiesCount_3;
		__this->____count_2 = L_4;
		// _idx = -1;
		__this->____idx_3 = (-1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m89E4B407DC2C572390A4036AF2AD5F671B113F8B_AdjustorThunk (RuntimeObject* __this, EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* ___filter0, const RuntimeMethod* method)
{
	Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22*>(__this + _offset);
	Enumerator__ctor_m89E4B407DC2C572390A4036AF2AD5F671B113F8B(_thisAdjusted, ___filter0, method);
}
// System.Int32 Leopotam.EcsLite.EcsFilter/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m37684DB8B7FF280C519E3058DF38A2EC380FF318 (Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* __this, const RuntimeMethod* method) 
{
	{
		// get => _entities[_idx];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____entities_1;
		int32_t L_1 = __this->____idx_3;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t Enumerator_get_Current_m37684DB8B7FF280C519E3058DF38A2EC380FF318_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Enumerator_get_Current_m37684DB8B7FF280C519E3058DF38A2EC380FF318_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Leopotam.EcsLite.EcsFilter/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m037CD2BCD8256D5E20CA46B1E0ED5996C57E4DDB (Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return ++_idx < _count;
		int32_t L_0 = __this->____idx_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->____idx_3 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count_2;
		return (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m037CD2BCD8256D5E20CA46B1E0ED5996C57E4DDB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22*>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m037CD2BCD8256D5E20CA46B1E0ED5996C57E4DDB_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Leopotam.EcsLite.EcsFilter/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5943B62B2855A133CE2DE4433E3473312A73A7CD (Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* __this, const RuntimeMethod* method) 
{
	{
		// _filter.Unlock ();
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_0 = __this->____filter_0;
		NullCheck(L_0);
		EcsFilter_Unlock_mD634DB952334A12F1FDABB887890292715495912_inline(L_0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m5943B62B2855A133CE2DE4433E3473312A73A7CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22*>(__this + _offset);
	Enumerator_Dispose_m5943B62B2855A133CE2DE4433E3473312A73A7CD_inline(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Leopotam.EcsLite.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_marshal_pinvoke(const DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1& unmarshaled, DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_marshaled_pinvoke& marshaled)
{
	marshaled.___Added_0 = static_cast<int32_t>(unmarshaled.___Added_0);
	marshaled.___Entity_1 = unmarshaled.___Entity_1;
}
IL2CPP_EXTERN_C void DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_marshal_pinvoke_back(const DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_marshaled_pinvoke& marshaled, DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1& unmarshaled)
{
	bool unmarshaledAdded_temp_0 = false;
	unmarshaledAdded_temp_0 = static_cast<bool>(marshaled.___Added_0);
	unmarshaled.___Added_0 = unmarshaledAdded_temp_0;
	int32_t unmarshaledEntity_temp_1 = 0;
	unmarshaledEntity_temp_1 = marshaled.___Entity_1;
	unmarshaled.___Entity_1 = unmarshaledEntity_temp_1;
}
// Conversion method for clean up from marshalling of: Leopotam.EcsLite.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_marshal_pinvoke_cleanup(DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Leopotam.EcsLite.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_marshal_com(const DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1& unmarshaled, DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_marshaled_com& marshaled)
{
	marshaled.___Added_0 = static_cast<int32_t>(unmarshaled.___Added_0);
	marshaled.___Entity_1 = unmarshaled.___Entity_1;
}
IL2CPP_EXTERN_C void DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_marshal_com_back(const DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_marshaled_com& marshaled, DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1& unmarshaled)
{
	bool unmarshaledAdded_temp_0 = false;
	unmarshaledAdded_temp_0 = static_cast<bool>(marshaled.___Added_0);
	unmarshaled.___Added_0 = unmarshaledAdded_temp_0;
	int32_t unmarshaledEntity_temp_1 = 0;
	unmarshaledEntity_temp_1 = marshaled.___Entity_1;
	unmarshaled.___Entity_1 = unmarshaledEntity_temp_1;
}
// Conversion method for clean up from marshalling of: Leopotam.EcsLite.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_marshal_com_cleanup(DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leopotam.EcsLite.EcsSystems::.ctor(Leopotam.EcsLite.EcsWorld,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems__ctor_m0874E30C1BB7C1658897168E10C69C0C658E9C67 (EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* __this, EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ___defaultWorld0, RuntimeObject* ___shared1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD610F43ED9B1308270CAB93A89D3045B1AD1D3CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4E6E7C83A634DB8DC5EA20392758AC5B0BBD628A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public EcsSystems (EcsWorld defaultWorld, object shared = null) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _defaultWorld = defaultWorld;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_0 = ___defaultWorld0;
		__this->____defaultWorld_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____defaultWorld_0), (void*)L_0);
		// _shared = shared;
		RuntimeObject* L_1 = ___shared1;
		__this->____shared_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____shared_3), (void*)L_1);
		// _worlds = new Dictionary<string, EcsWorld> (32);
		Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344* L_2 = (Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344*)il2cpp_codegen_object_new(Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD610F43ED9B1308270CAB93A89D3045B1AD1D3CB(L_2, ((int32_t)32), Dictionary_2__ctor_mD610F43ED9B1308270CAB93A89D3045B1AD1D3CB_RuntimeMethod_var);
		__this->____worlds_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____worlds_1), (void*)L_2);
		// _allSystems = new List<IEcsSystem> (128);
		List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* L_3 = (List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762*)il2cpp_codegen_object_new(List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762_il2cpp_TypeInfo_var);
		List_1__ctor_m4E6E7C83A634DB8DC5EA20392758AC5B0BBD628A(L_3, ((int32_t)128), List_1__ctor_m4E6E7C83A634DB8DC5EA20392758AC5B0BBD628A_RuntimeMethod_var);
		__this->____allSystems_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allSystems_2), (void*)L_3);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,Leopotam.EcsLite.EcsWorld> Leopotam.EcsLite.EcsSystems::GetAllNamedWorlds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344* EcsSystems_GetAllNamedWorlds_m14955C505C96AD3487B27DECA2B2F634808E662B (EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* __this, const RuntimeMethod* method) 
{
	{
		// return _worlds;
		Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344* L_0 = __this->____worlds_1;
		return L_0;
	}
}
// System.Int32 Leopotam.EcsLite.EcsSystems::GetAllSystems(Leopotam.EcsLite.IEcsSystem[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsSystems_GetAllSystems_m9C1CB1FCE9BBA7E9C3A1720BB92F870ACF488C89 (EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* __this, IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6** ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Capacity_m8AD1218390E01311923E350D0F6A65E9665DAAE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2865A118A85D0086B4ADE0B443A2CE815642E39C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m803DC2B2694F43913CE5820E497706CCFC154B18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// var itemsCount = _allSystems.Count;
		List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* L_0 = __this->____allSystems_2;
		int32_t L_1;
		L_1 = List_1_get_Count_m2865A118A85D0086B4ADE0B443A2CE815642E39C_inline(L_0, List_1_get_Count_m2865A118A85D0086B4ADE0B443A2CE815642E39C_RuntimeMethod_var);
		V_0 = L_1;
		// if (itemsCount == 0) { return 0; }
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// if (itemsCount == 0) { return 0; }
		return 0;
	}

IL_0011:
	{
		// if (list == null || list.Length < itemsCount) {
		IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6** L_3 = ___list0;
		IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6* L_4 = *((IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6**)L_3);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6** L_5 = ___list0;
		IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6* L_6 = *((IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6**)L_5);
		int32_t L_7 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) >= ((int32_t)L_7)))
		{
			goto IL_002e;
		}
	}

IL_001c:
	{
		// list = new IEcsSystem[_allSystems.Capacity];
		IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6** L_8 = ___list0;
		List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* L_9 = __this->____allSystems_2;
		int32_t L_10;
		L_10 = List_1_get_Capacity_m8AD1218390E01311923E350D0F6A65E9665DAAE2(L_9, List_1_get_Capacity_m8AD1218390E01311923E350D0F6A65E9665DAAE2_RuntimeMethod_var);
		IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6* L_11 = (IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6*)(IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6*)SZArrayNew(IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6_il2cpp_TypeInfo_var, (uint32_t)L_10);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_11);
	}

IL_002e:
	{
		// for (int i = 0, iMax = itemsCount; i < iMax; i++) {
		V_1 = 0;
		// for (int i = 0, iMax = itemsCount; i < iMax; i++) {
		int32_t L_12 = V_0;
		V_2 = L_12;
		goto IL_0048;
	}

IL_0034:
	{
		// list[i] = _allSystems[i];
		IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6** L_13 = ___list0;
		IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6* L_14 = *((IEcsSystemU5BU5D_tE355C0C2A049F7A2F374E7CD64F98FD5386194F6**)L_13);
		int32_t L_15 = V_1;
		List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* L_16 = __this->____allSystems_2;
		int32_t L_17 = V_1;
		RuntimeObject* L_18;
		L_18 = List_1_get_Item_m803DC2B2694F43913CE5820E497706CCFC154B18(L_16, L_17, List_1_get_Item_m803DC2B2694F43913CE5820E497706CCFC154B18_RuntimeMethod_var);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject*)L_18);
		// for (int i = 0, iMax = itemsCount; i < iMax; i++) {
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0048:
	{
		// for (int i = 0, iMax = itemsCount; i < iMax; i++) {
		int32_t L_20 = V_1;
		int32_t L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0034;
		}
	}
	{
		// return itemsCount;
		int32_t L_22 = V_0;
		return L_22;
	}
}
// System.Int32 Leopotam.EcsLite.EcsSystems::GetRunSystems(Leopotam.EcsLite.IEcsRunSystem[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsSystems_GetRunSystems_m7B7721D16C9E01EEDCA78F4D303FA2D1DAB7AF44 (EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* __this, IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F** ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// var itemsCount = _runSystemsCount;
		int32_t L_0 = __this->____runSystemsCount_5;
		V_0 = L_0;
		// if (itemsCount == 0) { return 0; }
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (itemsCount == 0) { return 0; }
		return 0;
	}

IL_000c:
	{
		// if (list == null || list.Length < itemsCount) {
		IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F** L_2 = ___list0;
		IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F* L_3 = *((IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F**)L_2);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F** L_4 = ___list0;
		IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F* L_5 = *((IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F**)L_4);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) >= ((int32_t)L_6)))
		{
			goto IL_0026;
		}
	}

IL_0017:
	{
		// list = new IEcsRunSystem[_runSystems.Length];
		IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F** L_7 = ___list0;
		IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F* L_8 = __this->____runSystems_4;
		IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F* L_9 = (IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F*)(IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F*)SZArrayNew(IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)));
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_9);
	}

IL_0026:
	{
		// for (int i = 0, iMax = itemsCount; i < iMax; i++) {
		V_1 = 0;
		// for (int i = 0, iMax = itemsCount; i < iMax; i++) {
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_003c;
	}

IL_002c:
	{
		// list[i] = _runSystems[i];
		IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F** L_11 = ___list0;
		IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F* L_12 = *((IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F**)L_11);
		int32_t L_13 = V_1;
		IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F* L_14 = __this->____runSystems_4;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		ArrayElementTypeCheck (L_12, L_17);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (RuntimeObject*)L_17);
		// for (int i = 0, iMax = itemsCount; i < iMax; i++) {
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_003c:
	{
		// for (int i = 0, iMax = itemsCount; i < iMax; i++) {
		int32_t L_19 = V_1;
		int32_t L_20 = V_2;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_002c;
		}
	}
	{
		// return itemsCount;
		int32_t L_21 = V_0;
		return L_21;
	}
}
// Leopotam.EcsLite.EcsWorld Leopotam.EcsLite.EcsSystems::GetWorld(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* EcsSystems_GetWorld_mCF3CE1172A6955E8CBCA2C8688BEF1EC4544A971 (EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mECB4B1D0DF02481376E2890ED0325BA48A5577B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* V_0 = NULL;
	{
		// if (name == null) {
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return _defaultWorld;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_1 = __this->____defaultWorld_0;
		return L_1;
	}

IL_000a:
	{
		// _worlds.TryGetValue (name, out var world);
		Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344* L_2 = __this->____worlds_1;
		String_t* L_3 = ___name0;
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mECB4B1D0DF02481376E2890ED0325BA48A5577B1(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_mECB4B1D0DF02481376E2890ED0325BA48A5577B1_RuntimeMethod_var);
		// return world;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_5 = V_0;
		return L_5;
	}
}
// System.Void Leopotam.EcsLite.EcsSystems::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Destroy_mF5C3DD2E196B8F0336B6F383A9EC7C38BF77759E (EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsDestroySystem_t065697FCC8BD31982486981216BBF3FEE5E99DFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPostDestroySystem_tA04D22D72FA158B6C2076F80FCEAF63ED64E842B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m897D6360DCF2F65825884842C6BD8B159B059221_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2865A118A85D0086B4ADE0B443A2CE815642E39C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m803DC2B2694F43913CE5820E497706CCFC154B18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* L_0 = __this->____allSystems_2;
		int32_t L_1;
		L_1 = List_1_get_Count_m2865A118A85D0086B4ADE0B443A2CE815642E39C_inline(L_0, List_1_get_Count_m2865A118A85D0086B4ADE0B443A2CE815642E39C_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0030;
	}

IL_0010:
	{
		// if (_allSystems[i] is IEcsDestroySystem destroySystem) {
		List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* L_2 = __this->____allSystems_2;
		int32_t L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = List_1_get_Item_m803DC2B2694F43913CE5820E497706CCFC154B18(L_2, L_3, List_1_get_Item_m803DC2B2694F43913CE5820E497706CCFC154B18_RuntimeMethod_var);
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IEcsDestroySystem_t065697FCC8BD31982486981216BBF3FEE5E99DFD_il2cpp_TypeInfo_var));
		RuntimeObject* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		// destroySystem.Destroy (this);
		RuntimeObject* L_6 = V_1;
		InterfaceActionInvoker1< EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* >::Invoke(0 /* System.Void Leopotam.EcsLite.IEcsDestroySystem::Destroy(Leopotam.EcsLite.EcsSystems) */, IEcsDestroySystem_t065697FCC8BD31982486981216BBF3FEE5E99DFD_il2cpp_TypeInfo_var, L_6, __this);
	}

IL_002c:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_0030:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* L_9 = __this->____allSystems_2;
		int32_t L_10;
		L_10 = List_1_get_Count_m2865A118A85D0086B4ADE0B443A2CE815642E39C_inline(L_9, List_1_get_Count_m2865A118A85D0086B4ADE0B443A2CE815642E39C_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_0064;
	}

IL_0044:
	{
		// if (_allSystems[i] is IEcsPostDestroySystem postDestroySystem) {
		List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* L_11 = __this->____allSystems_2;
		int32_t L_12 = V_2;
		RuntimeObject* L_13;
		L_13 = List_1_get_Item_m803DC2B2694F43913CE5820E497706CCFC154B18(L_11, L_12, List_1_get_Item_m803DC2B2694F43913CE5820E497706CCFC154B18_RuntimeMethod_var);
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IEcsPostDestroySystem_tA04D22D72FA158B6C2076F80FCEAF63ED64E842B_il2cpp_TypeInfo_var));
		RuntimeObject* L_14 = V_3;
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		// postDestroySystem.PostDestroy (this);
		RuntimeObject* L_15 = V_3;
		InterfaceActionInvoker1< EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* >::Invoke(0 /* System.Void Leopotam.EcsLite.IEcsPostDestroySystem::PostDestroy(Leopotam.EcsLite.EcsSystems) */, IEcsPostDestroySystem_tA04D22D72FA158B6C2076F80FCEAF63ED64E842B_il2cpp_TypeInfo_var, L_15, __this);
	}

IL_0060:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0064:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		// _allSystems.Clear ();
		List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* L_18 = __this->____allSystems_2;
		List_1_Clear_m897D6360DCF2F65825884842C6BD8B159B059221_inline(L_18, List_1_Clear_m897D6360DCF2F65825884842C6BD8B159B059221_RuntimeMethod_var);
		// _runSystems = null;
		__this->____runSystems_4 = (IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runSystems_4), (void*)(IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F*)NULL);
		// }
		return;
	}
}
// Leopotam.EcsLite.EcsSystems Leopotam.EcsLite.EcsSystems::AddWorld(Leopotam.EcsLite.EcsWorld,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* EcsSystems_AddWorld_mBF1BDEB9556734241E818D344F6D479CECB6EEB4 (EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* __this, EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ___world0, String_t* ___name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m127AF7635ECCCFF7E5AEE228C87BEC2DBE98E07E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _worlds[name] = world;
		Dictionary_2_tC0779765EFA5B313BD5A2F32E614ED43FF902344* L_0 = __this->____worlds_1;
		String_t* L_1 = ___name1;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_2 = ___world0;
		Dictionary_2_set_Item_m127AF7635ECCCFF7E5AEE228C87BEC2DBE98E07E(L_0, L_1, L_2, Dictionary_2_set_Item_m127AF7635ECCCFF7E5AEE228C87BEC2DBE98E07E_RuntimeMethod_var);
		// return this;
		return __this;
	}
}
// Leopotam.EcsLite.EcsSystems Leopotam.EcsLite.EcsSystems::Add(Leopotam.EcsLite.IEcsSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* EcsSystems_Add_mF558F64A6F641EAB49604FC79C0F131A9C029915 (EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* __this, RuntimeObject* ___system0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsRunSystem_t076149FFF62903116286404C4DF07E099CF95FF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0C067D78EBE69E00D4E586ED526617307022CB48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _allSystems.Add (system);
		List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* L_0 = __this->____allSystems_2;
		RuntimeObject* L_1 = ___system0;
		List_1_Add_m0C067D78EBE69E00D4E586ED526617307022CB48_inline(L_0, L_1, List_1_Add_m0C067D78EBE69E00D4E586ED526617307022CB48_RuntimeMethod_var);
		// if (system is IEcsRunSystem) {
		RuntimeObject* L_2 = ___system0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, IEcsRunSystem_t076149FFF62903116286404C4DF07E099CF95FF8_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		// _runSystemsCount++;
		int32_t L_3 = __this->____runSystemsCount_5;
		__this->____runSystemsCount_5 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0022:
	{
		// return this;
		return __this;
	}
}
// System.Void Leopotam.EcsLite.EcsSystems::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Init_m29CA4FEF695205BD94B5C51F9A727A866515A7F7 (EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m35DCEB6D1D94B4824BF0586B447BAEC4DB01B21C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0A512A101C0B4D253FBBDFE3B51567994ECD397E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF0FAC41E6460876E8432BDAE13CBA873793491FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsInitSystem_t429EEC9C73064C4323C1AEEBAB607B4478C4EED9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPreInitSystem_tD132122B975D44E8823464A2CDFA2AF95F4D7C44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsRunSystem_t076149FFF62903116286404C4DF07E099CF95FF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD721ED022E71CBC9C33F993D4A4E6F29F6215310_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t90B5B4B49C529053CAEF0FD058393DAF43CB305F V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		// if (_runSystemsCount > 0) {
		int32_t L_0 = __this->____runSystemsCount_5;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// _runSystems = new IEcsRunSystem[_runSystemsCount];
		int32_t L_1 = __this->____runSystemsCount_5;
		IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F* L_2 = (IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F*)(IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F*)SZArrayNew(IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->____runSystems_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runSystems_4), (void*)L_2);
	}

IL_001a:
	{
		// foreach (var system in _allSystems) {
		List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* L_3 = __this->____allSystems_2;
		Enumerator_t90B5B4B49C529053CAEF0FD058393DAF43CB305F L_4;
		L_4 = List_1_GetEnumerator_mD721ED022E71CBC9C33F993D4A4E6F29F6215310(L_3, List_1_GetEnumerator_mD721ED022E71CBC9C33F993D4A4E6F29F6215310_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m35DCEB6D1D94B4824BF0586B447BAEC4DB01B21C((&V_1), Enumerator_Dispose_m35DCEB6D1D94B4824BF0586B447BAEC4DB01B21C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003f_1;
			}

IL_0028_1:
			{
				// foreach (var system in _allSystems) {
				RuntimeObject* L_5;
				L_5 = Enumerator_get_Current_mF0FAC41E6460876E8432BDAE13CBA873793491FF_inline((&V_1), Enumerator_get_Current_mF0FAC41E6460876E8432BDAE13CBA873793491FF_RuntimeMethod_var);
				// if (system is IEcsPreInitSystem initSystem) {
				V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IEcsPreInitSystem_tD132122B975D44E8823464A2CDFA2AF95F4D7C44_il2cpp_TypeInfo_var));
				RuntimeObject* L_6 = V_2;
				if (!L_6)
				{
					goto IL_003f_1;
				}
			}
			{
				// initSystem.PreInit (this);
				RuntimeObject* L_7 = V_2;
				InterfaceActionInvoker1< EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* >::Invoke(0 /* System.Void Leopotam.EcsLite.IEcsPreInitSystem::PreInit(Leopotam.EcsLite.EcsSystems) */, IEcsPreInitSystem_tD132122B975D44E8823464A2CDFA2AF95F4D7C44_il2cpp_TypeInfo_var, L_7, __this);
			}

IL_003f_1:
			{
				// foreach (var system in _allSystems) {
				bool L_8;
				L_8 = Enumerator_MoveNext_m0A512A101C0B4D253FBBDFE3B51567994ECD397E((&V_1), Enumerator_MoveNext_m0A512A101C0B4D253FBBDFE3B51567994ECD397E_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_0058;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0058:
	{
		// var runIdx = 0;
		V_0 = 0;
		// foreach (var system in _allSystems) {
		List_1_t63F79B6EB8755788B130A8E219ACAE61AFC96762* L_9 = __this->____allSystems_2;
		Enumerator_t90B5B4B49C529053CAEF0FD058393DAF43CB305F L_10;
		L_10 = List_1_GetEnumerator_mD721ED022E71CBC9C33F993D4A4E6F29F6215310(L_9, List_1_GetEnumerator_mD721ED022E71CBC9C33F993D4A4E6F29F6215310_RuntimeMethod_var);
		V_1 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m35DCEB6D1D94B4824BF0586B447BAEC4DB01B21C((&V_1), Enumerator_Dispose_m35DCEB6D1D94B4824BF0586B447BAEC4DB01B21C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0099_1;
			}

IL_0068_1:
			{
				// foreach (var system in _allSystems) {
				RuntimeObject* L_11;
				L_11 = Enumerator_get_Current_mF0FAC41E6460876E8432BDAE13CBA873793491FF_inline((&V_1), Enumerator_get_Current_mF0FAC41E6460876E8432BDAE13CBA873793491FF_RuntimeMethod_var);
				// if (system is IEcsInitSystem initSystem) {
				RuntimeObject* L_12 = L_11;
				V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IEcsInitSystem_t429EEC9C73064C4323C1AEEBAB607B4478C4EED9_il2cpp_TypeInfo_var));
				RuntimeObject* L_13 = V_3;
				G_B12_0 = L_12;
				if (!L_13)
				{
					G_B13_0 = L_12;
					goto IL_0080_1;
				}
			}
			{
				// initSystem.Init (this);
				RuntimeObject* L_14 = V_3;
				InterfaceActionInvoker1< EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* >::Invoke(0 /* System.Void Leopotam.EcsLite.IEcsInitSystem::Init(Leopotam.EcsLite.EcsSystems) */, IEcsInitSystem_t429EEC9C73064C4323C1AEEBAB607B4478C4EED9_il2cpp_TypeInfo_var, L_14, __this);
				G_B13_0 = G_B12_0;
			}

IL_0080_1:
			{
				// if (system is IEcsRunSystem runSystem) {
				V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)G_B13_0, IEcsRunSystem_t076149FFF62903116286404C4DF07E099CF95FF8_il2cpp_TypeInfo_var));
				RuntimeObject* L_15 = V_4;
				if (!L_15)
				{
					goto IL_0099_1;
				}
			}
			{
				// _runSystems[runIdx++] = runSystem;
				IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F* L_16 = __this->____runSystems_4;
				int32_t L_17 = V_0;
				int32_t L_18 = L_17;
				V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
				RuntimeObject* L_19 = V_4;
				ArrayElementTypeCheck (L_16, L_19);
				(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (RuntimeObject*)L_19);
			}

IL_0099_1:
			{
				// foreach (var system in _allSystems) {
				bool L_20;
				L_20 = Enumerator_MoveNext_m0A512A101C0B4D253FBBDFE3B51567994ECD397E((&V_1), Enumerator_MoveNext_m0A512A101C0B4D253FBBDFE3B51567994ECD397E_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0068_1;
				}
			}
			{
				goto IL_00b2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void Leopotam.EcsLite.EcsSystems::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Run_mC2EDE180CFE13DC8B20AADDDC4464C929A330783 (EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsRunSystem_t076149FFF62903116286404C4DF07E099CF95FF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0, iMax = _runSystemsCount; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = _runSystemsCount; i < iMax; i++) {
		int32_t L_0 = __this->____runSystemsCount_5;
		V_1 = L_0;
		goto IL_001d;
	}

IL_000b:
	{
		// _runSystems[i].Run (this);
		IEcsRunSystemU5BU5D_tC11CFC483F345551FFDD0BD366B057527592287F* L_1 = __this->____runSystems_4;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		InterfaceActionInvoker1< EcsSystems_t2A9F92C8EFF57D939054FD1C0D689A37CE4C2714* >::Invoke(0 /* System.Void Leopotam.EcsLite.IEcsRunSystem::Run(Leopotam.EcsLite.EcsSystems) */, IEcsRunSystem_t076149FFF62903116286404C4DF07E099CF95FF8_il2cpp_TypeInfo_var, L_4, __this);
		// for (int i = 0, iMax = _runSystemsCount; i < iMax; i++) {
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001d:
	{
		// for (int i = 0, iMax = _runSystemsCount; i < iMax; i++) {
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leopotam.EcsLite.EcsWorld::.ctor(Leopotam.EcsLite.EcsWorld/Config&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld__ctor_m325C88A4116F479663242271BF50BE428FE879BB (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, Config_t866F2FFC961F38760E3894C39804C96C1217F0E6* ___cfg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAF995DF6C029B1E7F83563EF91D08331D7D60FD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mDF0A926F0D51C5DA192D7D0B2A410A3A8635BACA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m076CE29B797FFCC7D1AA4652E5D8855437165D80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* G_B11_0 = NULL;
	EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* G_B12_1 = NULL;
	EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* G_B14_0 = NULL;
	EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* G_B15_1 = NULL;
	int32_t G_B18_0 = 0;
	{
		// public EcsWorld (in Config cfg = default) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var capacity = cfg.Entities > 0 ? cfg.Entities : Config.EntitiesDefault;
		Config_t866F2FFC961F38760E3894C39804C96C1217F0E6* L_0 = ___cfg0;
		int32_t L_1 = L_0->___Entities_0;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((int32_t)512);
		goto IL_001c;
	}

IL_0016:
	{
		Config_t866F2FFC961F38760E3894C39804C96C1217F0E6* L_2 = ___cfg0;
		int32_t L_3 = L_2->___Entities_0;
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		// Entities = new EntityData[capacity];
		int32_t L_4 = V_0;
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_5 = (EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF*)(EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF*)SZArrayNew(EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___Entities_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Entities_0), (void*)L_5);
		// capacity = cfg.RecycledEntities > 0 ? cfg.RecycledEntities : Config.RecycledEntitiesDefault;
		Config_t866F2FFC961F38760E3894C39804C96C1217F0E6* L_6 = ___cfg0;
		int32_t L_7 = L_6->___RecycledEntities_1;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		G_B6_0 = ((int32_t)512);
		goto IL_003f;
	}

IL_0039:
	{
		Config_t866F2FFC961F38760E3894C39804C96C1217F0E6* L_8 = ___cfg0;
		int32_t L_9 = L_8->___RecycledEntities_1;
		G_B6_0 = L_9;
	}

IL_003f:
	{
		V_0 = G_B6_0;
		// _recycledEntities = new int[capacity];
		int32_t L_10 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->____recycledEntities_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____recycledEntities_2), (void*)L_11);
		// _entitiesCount = 0;
		__this->____entitiesCount_1 = 0;
		// _recycledEntitiesCount = 0;
		__this->____recycledEntitiesCount_3 = 0;
		// capacity = cfg.Pools > 0 ? cfg.Pools : Config.PoolsDefault;
		Config_t866F2FFC961F38760E3894C39804C96C1217F0E6* L_12 = ___cfg0;
		int32_t L_13 = L_12->___Pools_2;
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		G_B9_0 = ((int32_t)512);
		goto IL_0070;
	}

IL_006a:
	{
		Config_t866F2FFC961F38760E3894C39804C96C1217F0E6* L_14 = ___cfg0;
		int32_t L_15 = L_14->___Pools_2;
		G_B9_0 = L_15;
	}

IL_0070:
	{
		V_0 = G_B9_0;
		// _pools = new IEcsPool[capacity];
		int32_t L_16 = V_0;
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_17 = (IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680*)(IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680*)SZArrayNew(IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680_il2cpp_TypeInfo_var, (uint32_t)L_16);
		__this->____pools_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pools_4), (void*)L_17);
		// _poolHashes = new Dictionary<Type, IEcsPool> (capacity);
		int32_t L_18 = V_0;
		Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4* L_19 = (Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4*)il2cpp_codegen_object_new(Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mAF995DF6C029B1E7F83563EF91D08331D7D60FD0(L_19, L_18, Dictionary_2__ctor_mAF995DF6C029B1E7F83563EF91D08331D7D60FD0_RuntimeMethod_var);
		__this->____poolHashes_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____poolHashes_8), (void*)L_19);
		// _filtersByIncludedComponents = new List<EcsFilter>[capacity];
		int32_t L_20 = V_0;
		List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179* L_21 = (List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179*)(List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179*)SZArrayNew(List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179_il2cpp_TypeInfo_var, (uint32_t)L_20);
		__this->____filtersByIncludedComponents_11 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filtersByIncludedComponents_11), (void*)L_21);
		// _filtersByExcludedComponents = new List<EcsFilter>[capacity];
		int32_t L_22 = V_0;
		List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179* L_23 = (List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179*)(List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179*)SZArrayNew(List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179_il2cpp_TypeInfo_var, (uint32_t)L_22);
		__this->____filtersByExcludedComponents_12 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filtersByExcludedComponents_12), (void*)L_23);
		// _poolDenseSize = cfg.PoolDenseSize > 0 ? cfg.PoolDenseSize : Config.PoolDenseSizeDefault;
		Config_t866F2FFC961F38760E3894C39804C96C1217F0E6* L_24 = ___cfg0;
		int32_t L_25 = L_24->___PoolDenseSize_4;
		G_B10_0 = __this;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			G_B11_0 = __this;
			goto IL_00b2;
		}
	}
	{
		G_B12_0 = ((int32_t)512);
		G_B12_1 = G_B10_0;
		goto IL_00b8;
	}

IL_00b2:
	{
		Config_t866F2FFC961F38760E3894C39804C96C1217F0E6* L_26 = ___cfg0;
		int32_t L_27 = L_26->___PoolDenseSize_4;
		G_B12_0 = L_27;
		G_B12_1 = G_B11_0;
	}

IL_00b8:
	{
		G_B12_1->____poolDenseSize_6 = G_B12_0;
		// _poolRecycledSize = cfg.PoolRecycledSize > 0 ? cfg.PoolRecycledSize : Config.PoolRecycledSizeDefault;
		Config_t866F2FFC961F38760E3894C39804C96C1217F0E6* L_28 = ___cfg0;
		int32_t L_29 = L_28->___PoolRecycledSize_5;
		G_B13_0 = __this;
		if ((((int32_t)L_29) > ((int32_t)0)))
		{
			G_B14_0 = __this;
			goto IL_00ce;
		}
	}
	{
		G_B15_0 = ((int32_t)512);
		G_B15_1 = G_B13_0;
		goto IL_00d4;
	}

IL_00ce:
	{
		Config_t866F2FFC961F38760E3894C39804C96C1217F0E6* L_30 = ___cfg0;
		int32_t L_31 = L_30->___PoolRecycledSize_5;
		G_B15_0 = L_31;
		G_B15_1 = G_B14_0;
	}

IL_00d4:
	{
		G_B15_1->____poolRecycledSize_7 = G_B15_0;
		// _poolsCount = 0;
		__this->____poolsCount_5 = 0;
		// capacity = cfg.Filters > 0 ? cfg.Filters : Config.FiltersDefault;
		Config_t866F2FFC961F38760E3894C39804C96C1217F0E6* L_32 = ___cfg0;
		int32_t L_33 = L_32->___Filters_3;
		if ((((int32_t)L_33) > ((int32_t)0)))
		{
			goto IL_00f0;
		}
	}
	{
		G_B18_0 = ((int32_t)512);
		goto IL_00f6;
	}

IL_00f0:
	{
		Config_t866F2FFC961F38760E3894C39804C96C1217F0E6* L_34 = ___cfg0;
		int32_t L_35 = L_34->___Filters_3;
		G_B18_0 = L_35;
	}

IL_00f6:
	{
		V_0 = G_B18_0;
		// _hashedFilters = new Dictionary<int, EcsFilter> (capacity);
		int32_t L_36 = V_0;
		Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969* L_37 = (Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969*)il2cpp_codegen_object_new(Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mDF0A926F0D51C5DA192D7D0B2A410A3A8635BACA(L_37, L_36, Dictionary_2__ctor_mDF0A926F0D51C5DA192D7D0B2A410A3A8635BACA_RuntimeMethod_var);
		__this->____hashedFilters_9 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hashedFilters_9), (void*)L_37);
		// _allFilters = new List<EcsFilter> (capacity);
		int32_t L_38 = V_0;
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_39 = (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4*)il2cpp_codegen_object_new(List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4_il2cpp_TypeInfo_var);
		List_1__ctor_m076CE29B797FFCC7D1AA4652E5D8855437165D80(L_39, L_38, List_1__ctor_m076CE29B797FFCC7D1AA4652E5D8855437165D80_RuntimeMethod_var);
		__this->____allFilters_10 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allFilters_10), (void*)L_39);
		// _masks = new Mask[64];
		MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD* L_40 = (MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD*)(MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD*)SZArrayNew(MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->____masks_13 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____masks_13), (void*)L_40);
		// _masksCount = 0;
		__this->____masksCount_14 = 0;
		// _destroyed = false;
		__this->____destroyed_15 = (bool)0;
		// }
		return;
	}
}
// System.Void Leopotam.EcsLite.EcsWorld::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_Destroy_mC1C76638516D9D0BD85EA2F525E6D6964817DC61 (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisIEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_mEED2260BE09E4A2B2DB041D550495CE03237022A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisList_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4_m2408459E5E9704124B3228F6B34FFEC0402D920E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m75D3E3E31796BD980E426F2D8FF49E84D26CF9AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m7EF865FE2253D3B0E9F171930FF38F55AE073925_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m17E35D506E994A553518A81DD2AFF416CE3A2980_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// _destroyed = true;
		__this->____destroyed_15 = (bool)1;
		// for (var i = _entitiesCount - 1; i >= 0; i--) {
		int32_t L_0 = __this->____entitiesCount_1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0031;
	}

IL_0012:
	{
		// ref var entityData = ref Entities[i];
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_1 = __this->___Entities_0;
		int32_t L_2 = V_0;
		// if (entityData.ComponentsCount > 0) {
		int16_t L_3 = ((L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2)))->___ComponentsCount_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002d;
		}
	}
	{
		// DelEntity (i);
		int32_t L_4 = V_0;
		EcsWorld_DelEntity_m07714BFC5026BA247543D97A84C43C17CA6C9F2B(__this, L_4, NULL);
	}

IL_002d:
	{
		// for (var i = _entitiesCount - 1; i >= 0; i--) {
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_0031:
	{
		// for (var i = _entitiesCount - 1; i >= 0; i--) {
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		// _pools = Array.Empty<IEcsPool> ();
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_7;
		L_7 = Array_Empty_TisIEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_mEED2260BE09E4A2B2DB041D550495CE03237022A_inline(Array_Empty_TisIEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_mEED2260BE09E4A2B2DB041D550495CE03237022A_RuntimeMethod_var);
		__this->____pools_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pools_4), (void*)L_7);
		// _poolHashes.Clear ();
		Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4* L_8 = __this->____poolHashes_8;
		Dictionary_2_Clear_m75D3E3E31796BD980E426F2D8FF49E84D26CF9AA(L_8, Dictionary_2_Clear_m75D3E3E31796BD980E426F2D8FF49E84D26CF9AA_RuntimeMethod_var);
		// _hashedFilters.Clear ();
		Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969* L_9 = __this->____hashedFilters_9;
		Dictionary_2_Clear_m7EF865FE2253D3B0E9F171930FF38F55AE073925(L_9, Dictionary_2_Clear_m7EF865FE2253D3B0E9F171930FF38F55AE073925_RuntimeMethod_var);
		// _allFilters.Clear ();
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_10 = __this->____allFilters_10;
		List_1_Clear_m17E35D506E994A553518A81DD2AFF416CE3A2980_inline(L_10, List_1_Clear_m17E35D506E994A553518A81DD2AFF416CE3A2980_RuntimeMethod_var);
		// _filtersByIncludedComponents = Array.Empty<List<EcsFilter>> ();
		List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179* L_11;
		L_11 = Array_Empty_TisList_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4_m2408459E5E9704124B3228F6B34FFEC0402D920E_inline(Array_Empty_TisList_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4_m2408459E5E9704124B3228F6B34FFEC0402D920E_RuntimeMethod_var);
		__this->____filtersByIncludedComponents_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filtersByIncludedComponents_11), (void*)L_11);
		// _filtersByExcludedComponents = Array.Empty<List<EcsFilter>> ();
		List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179* L_12;
		L_12 = Array_Empty_TisList_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4_m2408459E5E9704124B3228F6B34FFEC0402D920E_inline(Array_Empty_TisList_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4_m2408459E5E9704124B3228F6B34FFEC0402D920E_RuntimeMethod_var);
		__this->____filtersByExcludedComponents_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____filtersByExcludedComponents_12), (void*)L_12);
		// }
		return;
	}
}
// System.Boolean Leopotam.EcsLite.EcsWorld::IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_m472254CACC426012B9752E8BC5CD9854902643E3 (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, const RuntimeMethod* method) 
{
	{
		// return !_destroyed;
		bool L_0 = __this->____destroyed_15;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 Leopotam.EcsLite.EcsWorld::NewEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsWorld_NewEntity_mE899290D60E27A18CDF0A859FEF0334150759586 (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisEntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB_mEDD428C2576AC2689227D9D099E9173C7666038D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE88A90FCDBCF7246D3E7BD021593F6A4B36BEFFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m93A86C04C8424A0175B11D7A719CE981323AD9C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// if (_recycledEntitiesCount > 0) {
		int32_t L_0 = __this->____recycledEntitiesCount_3;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// entity = _recycledEntities[--_recycledEntitiesCount];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____recycledEntities_2;
		int32_t L_2 = __this->____recycledEntitiesCount_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____recycledEntitiesCount_3 = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		int32_t L_6 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		// ref var entityData = ref Entities[entity];
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_7 = __this->___Entities_0;
		int32_t L_8 = V_0;
		// entityData.Gen = (short) -entityData.Gen;
		EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* L_9 = ((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)));
		int16_t L_10 = L_9->___Gen_0;
		L_9->___Gen_0 = ((int16_t)((-L_10)));
		goto IL_00dd;
	}

IL_0040:
	{
		// if (_entitiesCount == Entities.Length) {
		int32_t L_11 = __this->____entitiesCount_1;
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_12 = __this->___Entities_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_00b9;
		}
	}
	{
		// var newSize = _entitiesCount << 1;
		int32_t L_13 = __this->____entitiesCount_1;
		V_2 = ((int32_t)(L_13<<1));
		// Array.Resize (ref Entities, newSize);
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF** L_14 = (&__this->___Entities_0);
		int32_t L_15 = V_2;
		Array_Resize_TisEntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB_mEDD428C2576AC2689227D9D099E9173C7666038D(L_14, L_15, Array_Resize_TisEntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB_mEDD428C2576AC2689227D9D099E9173C7666038D_RuntimeMethod_var);
		// for (int i = 0, iMax = _poolsCount; i < iMax; i++) {
		V_3 = 0;
		// for (int i = 0, iMax = _poolsCount; i < iMax; i++) {
		int32_t L_16 = __this->____poolsCount_5;
		V_4 = L_16;
		goto IL_0083;
	}

IL_0071:
	{
		// _pools[i].Resize (newSize);
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_17 = __this->____pools_4;
		int32_t L_18 = V_3;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = V_2;
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void Leopotam.EcsLite.IEcsPool::Resize(System.Int32) */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_20, L_21);
		// for (int i = 0, iMax = _poolsCount; i < iMax; i++) {
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0083:
	{
		// for (int i = 0, iMax = _poolsCount; i < iMax; i++) {
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0071;
		}
	}
	{
		// for (int i = 0, iMax = _allFilters.Count; i < iMax; i++) {
		V_5 = 0;
		// for (int i = 0, iMax = _allFilters.Count; i < iMax; i++) {
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_25 = __this->____allFilters_10;
		int32_t L_26;
		L_26 = List_1_get_Count_mE88A90FCDBCF7246D3E7BD021593F6A4B36BEFFF_inline(L_25, List_1_get_Count_mE88A90FCDBCF7246D3E7BD021593F6A4B36BEFFF_RuntimeMethod_var);
		V_6 = L_26;
		goto IL_00b3;
	}

IL_009a:
	{
		// _allFilters[i].ResizeSparseIndex (newSize);
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_27 = __this->____allFilters_10;
		int32_t L_28 = V_5;
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_29;
		L_29 = List_1_get_Item_m93A86C04C8424A0175B11D7A719CE981323AD9C5(L_27, L_28, List_1_get_Item_m93A86C04C8424A0175B11D7A719CE981323AD9C5_RuntimeMethod_var);
		int32_t L_30 = V_2;
		EcsFilter_ResizeSparseIndex_mC01D2DC5C40388E65F707A7DA5B9CBF0E6367405_inline(L_29, L_30, NULL);
		// for (int i = 0, iMax = _allFilters.Count; i < iMax; i++) {
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00b3:
	{
		// for (int i = 0, iMax = _allFilters.Count; i < iMax; i++) {
		int32_t L_32 = V_5;
		int32_t L_33 = V_6;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_009a;
		}
	}

IL_00b9:
	{
		// entity = _entitiesCount++;
		int32_t L_34 = __this->____entitiesCount_1;
		V_1 = L_34;
		int32_t L_35 = V_1;
		__this->____entitiesCount_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_1;
		V_0 = L_36;
		// Entities[entity].Gen = 1;
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_37 = __this->___Entities_0;
		int32_t L_38 = V_0;
		((L_37)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_38)))->___Gen_0 = (int16_t)1;
	}

IL_00dd:
	{
		// return entity;
		int32_t L_39 = V_0;
		return L_39;
	}
}
// System.Void Leopotam.EcsLite.EcsWorld::DelEntity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_DelEntity_m07714BFC5026BA247543D97A84C43C17CA6C9F2B (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, int32_t ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* G_B13_0 = NULL;
	EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* G_B14_1 = NULL;
	{
		// ref var entityData = ref Entities[entity];
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_0 = __this->___Entities_0;
		int32_t L_1 = ___entity0;
		V_0 = ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_1)));
		// if (entityData.Gen < 0) {
		EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* L_2 = V_0;
		int16_t L_3 = L_2->___Gen_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// if (entityData.ComponentsCount > 0) {
		EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* L_4 = V_0;
		int16_t L_5 = L_4->___ComponentsCount_1;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// var idx = 0;
		V_1 = 0;
		goto IL_0055;
	}

IL_0024:
	{
		// if (_pools[idx].Has (entity)) {
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_6 = __this->____pools_4;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = ___entity0;
		bool L_11;
		L_11 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Leopotam.EcsLite.IEcsPool::Has(System.Int32) */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_9, L_10);
		if (!L_11)
		{
			goto IL_0048;
		}
	}
	{
		// _pools[idx++].Del (entity);
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_12 = __this->____pools_4;
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = ___entity0;
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Leopotam.EcsLite.IEcsPool::Del(System.Int32) */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_16, L_17);
		// break;
		goto IL_0055;
	}

IL_0048:
	{
		// for (; idx < _poolsCount; idx++) {
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004c:
	{
		// for (; idx < _poolsCount; idx++) {
		int32_t L_19 = V_1;
		int32_t L_20 = __this->____poolsCount_5;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0024;
		}
	}

IL_0055:
	{
		// while (entityData.ComponentsCount > 0 && idx < _poolsCount) {
		EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* L_21 = V_0;
		int16_t L_22 = L_21->___ComponentsCount_1;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->____poolsCount_5;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_004c;
		}
	}

IL_0067:
	{
		// return;
		return;
	}

IL_0068:
	{
		// entityData.Gen = (short) (entityData.Gen == short.MaxValue ? -1 : -(entityData.Gen + 1));
		EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* L_25 = V_0;
		EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* L_26 = V_0;
		int16_t L_27 = L_26->___Gen_0;
		G_B12_0 = L_25;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)32767))))
		{
			G_B13_0 = L_25;
			goto IL_0081;
		}
	}
	{
		EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* L_28 = V_0;
		int16_t L_29 = L_28->___Gen_0;
		G_B14_0 = ((-((int32_t)il2cpp_codegen_add((int32_t)L_29, 1))));
		G_B14_1 = G_B12_0;
		goto IL_0082;
	}

IL_0081:
	{
		G_B14_0 = (-1);
		G_B14_1 = G_B13_0;
	}

IL_0082:
	{
		G_B14_1->___Gen_0 = ((int16_t)G_B14_0);
		// if (_recycledEntitiesCount == _recycledEntities.Length) {
		int32_t L_30 = __this->____recycledEntitiesCount_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____recycledEntities_2;
		if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))))))
		{
			goto IL_00ab;
		}
	}
	{
		// Array.Resize (ref _recycledEntities, _recycledEntitiesCount << 1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_32 = (&__this->____recycledEntities_2);
		int32_t L_33 = __this->____recycledEntitiesCount_3;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916(L_32, ((int32_t)(L_33<<1)), Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
	}

IL_00ab:
	{
		// _recycledEntities[_recycledEntitiesCount++] = entity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->____recycledEntities_2;
		int32_t L_35 = __this->____recycledEntitiesCount_3;
		V_2 = L_35;
		int32_t L_36 = V_2;
		__this->____recycledEntitiesCount_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_2;
		int32_t L_38 = ___entity0;
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37), (int32_t)L_38);
		// }
		return;
	}
}
// System.Int32 Leopotam.EcsLite.EcsWorld::GetComponentsCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsWorld_GetComponentsCount_m072B656E03D638F1B3174160AAF78C82CA3325BE (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, int32_t ___entity0, const RuntimeMethod* method) 
{
	{
		// return Entities[entity].ComponentsCount;
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_0 = __this->___Entities_0;
		int32_t L_1 = ___entity0;
		int16_t L_2 = ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_1)))->___ComponentsCount_1;
		return L_2;
	}
}
// System.Int16 Leopotam.EcsLite.EcsWorld::GetEntityGen(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t EcsWorld_GetEntityGen_mC9299B247AA0A98DAB7EAA7746294FF3235F7865 (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, int32_t ___entity0, const RuntimeMethod* method) 
{
	{
		// return Entities[entity].Gen;
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_0 = __this->___Entities_0;
		int32_t L_1 = ___entity0;
		int16_t L_2 = ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_1)))->___Gen_0;
		return L_2;
	}
}
// System.Int32 Leopotam.EcsLite.EcsWorld::GetAllocatedEntitiesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsWorld_GetAllocatedEntitiesCount_m583C1D716533CCA868F16630E5ACF0DFCC35B720 (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, const RuntimeMethod* method) 
{
	{
		// return _entitiesCount;
		int32_t L_0 = __this->____entitiesCount_1;
		return L_0;
	}
}
// System.Int32 Leopotam.EcsLite.EcsWorld::GetWorldSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsWorld_GetWorldSize_mB2840EDDF3AF90B9429B2FB8FF50936BD9D1928D (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, const RuntimeMethod* method) 
{
	{
		// return Entities.Length;
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_0 = __this->___Entities_0;
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// Leopotam.EcsLite.EcsWorld/EntityData[] Leopotam.EcsLite.EcsWorld::GetRawEntities()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* EcsWorld_GetRawEntities_m4B9DB760491DB10AAD7861A51BC68A4B993393FA (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, const RuntimeMethod* method) 
{
	{
		// return Entities;
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_0 = __this->___Entities_0;
		return L_0;
	}
}
// Leopotam.EcsLite.IEcsPool Leopotam.EcsLite.EcsWorld::GetPoolById(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EcsWorld_GetPoolById_m458B609999CA51A1903541161B9ECC76F08FFC02 (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, int32_t ___typeId0, const RuntimeMethod* method) 
{
	{
		// return typeId >= 0 && typeId < _poolsCount ? _pools[typeId] : null;
		int32_t L_0 = ___typeId0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___typeId0;
		int32_t L_2 = __this->____poolsCount_5;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_000f;
		}
	}

IL_000d:
	{
		return (RuntimeObject*)NULL;
	}

IL_000f:
	{
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_3 = __this->____pools_4;
		int32_t L_4 = ___typeId0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// Leopotam.EcsLite.IEcsPool Leopotam.EcsLite.EcsWorld::GetPoolByType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EcsWorld_GetPoolByType_m690F7E8541377DBF9F8C8189C9049CE42B3693EA (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m05736317E3E25ABDCA4E61CC58220219ED687288_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return _poolHashes.TryGetValue (type, out var pool) ? pool : null;
		Dictionary_2_t678C2ED0BF362834859B8828B842E84D72C28DA4* L_0 = __this->____poolHashes_8;
		Type_t* L_1 = ___type0;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m05736317E3E25ABDCA4E61CC58220219ED687288(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m05736317E3E25ABDCA4E61CC58220219ED687288_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0012:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Int32 Leopotam.EcsLite.EcsWorld::GetAllEntities(System.Int32[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsWorld_GetAllEntities_m7B8BCC2D272D60B4E6D814615AB4EEE19444919E (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___entities0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* V_4 = NULL;
	{
		// var count = _entitiesCount - _recycledEntitiesCount;
		int32_t L_0 = __this->____entitiesCount_1;
		int32_t L_1 = __this->____recycledEntitiesCount_3;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// if (entities == null || entities.Length < count) {
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_2 = ___entities0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = *((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)L_2);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_4 = ___entities0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = *((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)L_4);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) >= ((int32_t)L_6)))
		{
			goto IL_0021;
		}
	}

IL_0019:
	{
		// entities = new int[count];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_7 = ___entities0;
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_9);
	}

IL_0021:
	{
		// var id = 0;
		V_1 = 0;
		// for (int i = 0, iMax = _entitiesCount; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, iMax = _entitiesCount; i < iMax; i++) {
		int32_t L_10 = __this->____entitiesCount_1;
		V_3 = L_10;
		goto IL_005d;
	}

IL_002e:
	{
		// ref var entityData = ref Entities[i];
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_11 = __this->___Entities_0;
		int32_t L_12 = V_2;
		V_4 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)));
		// if (entityData.Gen > 0 && entityData.ComponentsCount >= 0) {
		EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* L_13 = V_4;
		int16_t L_14 = L_13->___Gen_0;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		EntityData_t949C80CEE5F793420853B2F24E4CA75A7E53EEDB* L_15 = V_4;
		int16_t L_16 = L_15->___ComponentsCount_1;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		// entities[id++] = i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_17 = ___entities0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = *((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C**)L_17);
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_2;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20), (int32_t)L_21);
	}

IL_0059:
	{
		// for (int i = 0, iMax = _entitiesCount; i < iMax; i++) {
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_005d:
	{
		// for (int i = 0, iMax = _entitiesCount; i < iMax; i++) {
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_002e;
		}
	}
	{
		// return count;
		int32_t L_25 = V_0;
		return L_25;
	}
}
// System.Int32 Leopotam.EcsLite.EcsWorld::GetAllPools(Leopotam.EcsLite.IEcsPool[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsWorld_GetAllPools_m355DCEA4D42D35F62198FECF16CBCBB04FFF14CF (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680** ___pools0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var count = _poolsCount;
		int32_t L_0 = __this->____poolsCount_5;
		V_0 = L_0;
		// if (pools == null || pools.Length < count) {
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680** L_1 = ___pools0;
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_2 = *((IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680**)L_1);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680** L_3 = ___pools0;
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_4 = *((IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680**)L_3);
		int32_t L_5 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) >= ((int32_t)L_5)))
		{
			goto IL_001a;
		}
	}

IL_0012:
	{
		// pools = new IEcsPool[count];
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680** L_6 = ___pools0;
		int32_t L_7 = V_0;
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_8 = (IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680*)(IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680*)SZArrayNew(IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680_il2cpp_TypeInfo_var, (uint32_t)L_7);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_8);
	}

IL_001a:
	{
		// Array.Copy (_pools, 0, pools, 0, _poolsCount);
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_9 = __this->____pools_4;
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680** L_10 = ___pools0;
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_11 = *((IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680**)L_10);
		int32_t L_12 = __this->____poolsCount_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_11, 0, L_12, NULL);
		// return _poolsCount;
		int32_t L_13 = __this->____poolsCount_5;
		return L_13;
	}
}
// System.Int32 Leopotam.EcsLite.EcsWorld::GetComponents(System.Int32,System.Object[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsWorld_GetComponents_mD5E4F1CA338ABDF07C25CCFE7577452734C1BFCE (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, int32_t ___entity0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___list1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var itemsCount = Entities[entity].ComponentsCount;
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_0 = __this->___Entities_0;
		int32_t L_1 = ___entity0;
		int16_t L_2 = ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_1)))->___ComponentsCount_1;
		V_0 = L_2;
		// if (itemsCount == 0) { return 0; }
		int16_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		// if (itemsCount == 0) { return 0; }
		return 0;
	}

IL_0017:
	{
		// if (list == null || list.Length < itemsCount) {
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_4 = ___list1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_4);
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_6 = ___list1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_6);
		int16_t L_8 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) >= ((int32_t)L_8)))
		{
			goto IL_0031;
		}
	}

IL_0022:
	{
		// list = new object[_pools.Length];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_9 = ___list1;
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_10 = __this->____pools_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		*((RuntimeObject**)L_9) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)L_11);
	}

IL_0031:
	{
		// for (int i = 0, j = 0, iMax = _poolsCount; i < iMax; i++) {
		V_1 = 0;
		// for (int i = 0, j = 0, iMax = _poolsCount; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, j = 0, iMax = _poolsCount; i < iMax; i++) {
		int32_t L_12 = __this->____poolsCount_5;
		V_3 = L_12;
		goto IL_0068;
	}

IL_003e:
	{
		// if (_pools[i].Has (entity)) {
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_13 = __this->____pools_4;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = ___entity0;
		bool L_18;
		L_18 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Leopotam.EcsLite.IEcsPool::Has(System.Int32) */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_16, L_17);
		if (!L_18)
		{
			goto IL_0064;
		}
	}
	{
		// list[j++] = _pools[i].GetRaw (entity);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_19 = ___list1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_19);
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_23 = __this->____pools_4;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = ___entity0;
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(4 /* System.Object Leopotam.EcsLite.IEcsPool::GetRaw(System.Int32) */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_26, L_27);
		ArrayElementTypeCheck (L_20, L_28);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22), (RuntimeObject*)L_28);
	}

IL_0064:
	{
		// for (int i = 0, j = 0, iMax = _poolsCount; i < iMax; i++) {
		int32_t L_29 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0068:
	{
		// for (int i = 0, j = 0, iMax = _poolsCount; i < iMax; i++) {
		int32_t L_30 = V_1;
		int32_t L_31 = V_3;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_003e;
		}
	}
	{
		// return itemsCount;
		int16_t L_32 = V_0;
		return L_32;
	}
}
// System.Int32 Leopotam.EcsLite.EcsWorld::GetComponentTypes(System.Int32,System.Type[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsWorld_GetComponentTypes_m4D7FE1F14A858B3EDA95BB8AA4A9404B8FB1D70D (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, int32_t ___entity0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** ___list1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var itemsCount = Entities[entity].ComponentsCount;
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_0 = __this->___Entities_0;
		int32_t L_1 = ___entity0;
		int16_t L_2 = ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_1)))->___ComponentsCount_1;
		V_0 = L_2;
		// if (itemsCount == 0) { return 0; }
		int16_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		// if (itemsCount == 0) { return 0; }
		return 0;
	}

IL_0017:
	{
		// if (list == null || list.Length < itemsCount) {
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_4 = ___list1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = *((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB**)L_4);
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_6 = ___list1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = *((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB**)L_6);
		int16_t L_8 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) >= ((int32_t)L_8)))
		{
			goto IL_0031;
		}
	}

IL_0022:
	{
		// list = new Type[_pools.Length];
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_9 = ___list1;
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_10 = __this->____pools_4;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		*((RuntimeObject**)L_9) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)L_11);
	}

IL_0031:
	{
		// for (int i = 0, j = 0, iMax = _poolsCount; i < iMax; i++) {
		V_1 = 0;
		// for (int i = 0, j = 0, iMax = _poolsCount; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, j = 0, iMax = _poolsCount; i < iMax; i++) {
		int32_t L_12 = __this->____poolsCount_5;
		V_3 = L_12;
		goto IL_0067;
	}

IL_003e:
	{
		// if (_pools[i].Has (entity)) {
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_13 = __this->____pools_4;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = ___entity0;
		bool L_18;
		L_18 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Leopotam.EcsLite.IEcsPool::Has(System.Int32) */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_16, L_17);
		if (!L_18)
		{
			goto IL_0063;
		}
	}
	{
		// list[j++] = _pools[i].GetComponentType ();
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB** L_19 = ___list1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_20 = *((TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB**)L_19);
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_23 = __this->____pools_4;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		Type_t* L_27;
		L_27 = InterfaceFuncInvoker0< Type_t* >::Invoke(7 /* System.Type Leopotam.EcsLite.IEcsPool::GetComponentType() */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_26);
		ArrayElementTypeCheck (L_20, L_27);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22), (Type_t*)L_27);
	}

IL_0063:
	{
		// for (int i = 0, j = 0, iMax = _poolsCount; i < iMax; i++) {
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0067:
	{
		// for (int i = 0, j = 0, iMax = _poolsCount; i < iMax; i++) {
		int32_t L_29 = V_1;
		int32_t L_30 = V_3;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_003e;
		}
	}
	{
		// return itemsCount;
		int16_t L_31 = V_0;
		return L_31;
	}
}
// System.Boolean Leopotam.EcsLite.EcsWorld::IsEntityAliveInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsWorld_IsEntityAliveInternal_m63BEB4232F1783D82B6B7D4CFFBBCCF61967A4CE (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, int32_t ___entity0, const RuntimeMethod* method) 
{
	{
		// return entity >= 0 && entity < _entitiesCount && Entities[entity].Gen > 0;
		int32_t L_0 = ___entity0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = ___entity0;
		int32_t L_2 = __this->____entitiesCount_1;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_3 = __this->___Entities_0;
		int32_t L_4 = ___entity0;
		int16_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___Gen_0;
		return (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.ValueTuple`2<Leopotam.EcsLite.EcsFilter,System.Boolean> Leopotam.EcsLite.EcsWorld::GetFilterInternal(Leopotam.EcsLite.EcsWorld/Mask,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t972AEAACBD9358E43822A00097D383437EE273F7 EcsWorld_GetFilterInternal_m9A07F5A8A04F5DFF953377FF5E448096E860EB43 (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* ___mask0, int32_t ___capacity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4E3B4DF231581954C3997EE71320D63A03A080A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7E336C7E2AD67F497206D0E8AC807C3EF958D864_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4A3930CF5EDE34133207F05248C6E7221DC699CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m076CE29B797FFCC7D1AA4652E5D8855437165D80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF9C89F5B4CD15C64A0CC9246468AC8D4C4391FBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// var hash = mask.Hash;
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_0 = ___mask0;
		int32_t L_1 = L_0->___Hash_5;
		V_0 = L_1;
		// var exists = _hashedFilters.TryGetValue (hash, out var filter);
		Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969* L_2 = __this->____hashedFilters_9;
		int32_t L_3 = V_0;
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m4E3B4DF231581954C3997EE71320D63A03A080A0(L_2, L_3, (&V_1), Dictionary_2_TryGetValue_m4E3B4DF231581954C3997EE71320D63A03A080A0_RuntimeMethod_var);
		// if (exists) { return (filter, false); }
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		// if (exists) { return (filter, false); }
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_5 = V_1;
		ValueTuple_2_t972AEAACBD9358E43822A00097D383437EE273F7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ValueTuple_2__ctor_mF9C89F5B4CD15C64A0CC9246468AC8D4C4391FBB((&L_6), L_5, (bool)0, /*hidden argument*/ValueTuple_2__ctor_mF9C89F5B4CD15C64A0CC9246468AC8D4C4391FBB_RuntimeMethod_var);
		return L_6;
	}

IL_001f:
	{
		// filter = new EcsFilter (this, mask, capacity, Entities.Length);
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_7 = ___mask0;
		int32_t L_8 = ___capacity1;
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_9 = __this->___Entities_0;
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_10 = (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674*)il2cpp_codegen_object_new(EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674_il2cpp_TypeInfo_var);
		EcsFilter__ctor_m7BE83D78D86D53D0C4392BA2526B5CA14A2B4EBD(L_10, __this, L_7, L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		V_1 = L_10;
		// _hashedFilters[hash] = filter;
		Dictionary_2_tC9ED08B999E9EA028F1FFC15E3EDF2D659ED0969* L_11 = __this->____hashedFilters_9;
		int32_t L_12 = V_0;
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_13 = V_1;
		Dictionary_2_set_Item_m7E336C7E2AD67F497206D0E8AC807C3EF958D864(L_11, L_12, L_13, Dictionary_2_set_Item_m7E336C7E2AD67F497206D0E8AC807C3EF958D864_RuntimeMethod_var);
		// _allFilters.Add (filter);
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_14 = __this->____allFilters_10;
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_15 = V_1;
		List_1_Add_m4A3930CF5EDE34133207F05248C6E7221DC699CC_inline(L_14, L_15, List_1_Add_m4A3930CF5EDE34133207F05248C6E7221DC699CC_RuntimeMethod_var);
		// for (int i = 0, iMax = mask.IncludeCount; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, iMax = mask.IncludeCount; i < iMax; i++) {
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_16 = ___mask0;
		int32_t L_17 = L_16->___IncludeCount_3;
		V_3 = L_17;
		goto IL_008e;
	}

IL_0054:
	{
		// var list = _filtersByIncludedComponents[mask.Include[i]];
		List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179* L_18 = __this->____filtersByIncludedComponents_11;
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_19 = ___mask0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_19->___Include_1;
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		int32_t L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = L_23;
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_25 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		V_4 = L_25;
		// if (list == null) {
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_26 = V_4;
		if (L_26)
		{
			goto IL_0082;
		}
	}
	{
		// list = new List<EcsFilter> (8);
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_27 = (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4*)il2cpp_codegen_object_new(List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4_il2cpp_TypeInfo_var);
		List_1__ctor_m076CE29B797FFCC7D1AA4652E5D8855437165D80(L_27, 8, List_1__ctor_m076CE29B797FFCC7D1AA4652E5D8855437165D80_RuntimeMethod_var);
		V_4 = L_27;
		// _filtersByIncludedComponents[mask.Include[i]] = list;
		List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179* L_28 = __this->____filtersByIncludedComponents_11;
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_29 = ___mask0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = L_29->___Include_1;
		int32_t L_31 = V_2;
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_34 = V_4;
		ArrayElementTypeCheck (L_28, L_34);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33), (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4*)L_34);
	}

IL_0082:
	{
		// list.Add (filter);
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_35 = V_4;
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_36 = V_1;
		List_1_Add_m4A3930CF5EDE34133207F05248C6E7221DC699CC_inline(L_35, L_36, List_1_Add_m4A3930CF5EDE34133207F05248C6E7221DC699CC_RuntimeMethod_var);
		// for (int i = 0, iMax = mask.IncludeCount; i < iMax; i++) {
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_008e:
	{
		// for (int i = 0, iMax = mask.IncludeCount; i < iMax; i++) {
		int32_t L_38 = V_2;
		int32_t L_39 = V_3;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0054;
		}
	}
	{
		// for (int i = 0, iMax = mask.ExcludeCount; i < iMax; i++) {
		V_5 = 0;
		// for (int i = 0, iMax = mask.ExcludeCount; i < iMax; i++) {
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_40 = ___mask0;
		int32_t L_41 = L_40->___ExcludeCount_4;
		V_6 = L_41;
		goto IL_00dd;
	}

IL_009f:
	{
		// var list = _filtersByExcludedComponents[mask.Exclude[i]];
		List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179* L_42 = __this->____filtersByExcludedComponents_12;
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_43 = ___mask0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = L_43->___Exclude_2;
		int32_t L_45 = V_5;
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = L_47;
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_49 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		V_7 = L_49;
		// if (list == null) {
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_50 = V_7;
		if (L_50)
		{
			goto IL_00cf;
		}
	}
	{
		// list = new List<EcsFilter> (8);
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_51 = (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4*)il2cpp_codegen_object_new(List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4_il2cpp_TypeInfo_var);
		List_1__ctor_m076CE29B797FFCC7D1AA4652E5D8855437165D80(L_51, 8, List_1__ctor_m076CE29B797FFCC7D1AA4652E5D8855437165D80_RuntimeMethod_var);
		V_7 = L_51;
		// _filtersByExcludedComponents[mask.Exclude[i]] = list;
		List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179* L_52 = __this->____filtersByExcludedComponents_12;
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_53 = ___mask0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = L_53->___Exclude_2;
		int32_t L_55 = V_5;
		int32_t L_56 = L_55;
		int32_t L_57 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_58 = V_7;
		ArrayElementTypeCheck (L_52, L_58);
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57), (List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4*)L_58);
	}

IL_00cf:
	{
		// list.Add (filter);
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_59 = V_7;
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_60 = V_1;
		List_1_Add_m4A3930CF5EDE34133207F05248C6E7221DC699CC_inline(L_59, L_60, List_1_Add_m4A3930CF5EDE34133207F05248C6E7221DC699CC_RuntimeMethod_var);
		// for (int i = 0, iMax = mask.ExcludeCount; i < iMax; i++) {
		int32_t L_61 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_00dd:
	{
		// for (int i = 0, iMax = mask.ExcludeCount; i < iMax; i++) {
		int32_t L_62 = V_5;
		int32_t L_63 = V_6;
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_009f;
		}
	}
	{
		// for (int i = 0, iMax = _entitiesCount; i < iMax; i++) {
		V_8 = 0;
		// for (int i = 0, iMax = _entitiesCount; i < iMax; i++) {
		int32_t L_64 = __this->____entitiesCount_1;
		V_9 = L_64;
		goto IL_011e;
	}

IL_00f0:
	{
		// ref var entityData = ref Entities[i];
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_65 = __this->___Entities_0;
		int32_t L_66 = V_8;
		// if (entityData.ComponentsCount > 0 && IsMaskCompatible (mask, i)) {
		int16_t L_67 = ((L_65)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_66)))->___ComponentsCount_1;
		if ((((int32_t)L_67) <= ((int32_t)0)))
		{
			goto IL_0118;
		}
	}
	{
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_68 = ___mask0;
		int32_t L_69 = V_8;
		bool L_70;
		L_70 = EcsWorld_IsMaskCompatible_mEAF2DADCBE03B0E3D3EA6830BF72043EF3EEF353_inline(__this, L_68, L_69, NULL);
		if (!L_70)
		{
			goto IL_0118;
		}
	}
	{
		// filter.AddEntity (i);
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_71 = V_1;
		int32_t L_72 = V_8;
		EcsFilter_AddEntity_mC850B7002B9DC3317146681F84A68B07BCB211FE_inline(L_71, L_72, NULL);
	}

IL_0118:
	{
		// for (int i = 0, iMax = _entitiesCount; i < iMax; i++) {
		int32_t L_73 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_011e:
	{
		// for (int i = 0, iMax = _entitiesCount; i < iMax; i++) {
		int32_t L_74 = V_8;
		int32_t L_75 = V_9;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_00f0;
		}
	}
	{
		// return (filter, true);
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_76 = V_1;
		ValueTuple_2_t972AEAACBD9358E43822A00097D383437EE273F7 L_77;
		memset((&L_77), 0, sizeof(L_77));
		ValueTuple_2__ctor_mF9C89F5B4CD15C64A0CC9246468AC8D4C4391FBB((&L_77), L_76, (bool)1, /*hidden argument*/ValueTuple_2__ctor_mF9C89F5B4CD15C64A0CC9246468AC8D4C4391FBB_RuntimeMethod_var);
		return L_77;
	}
}
// System.Void Leopotam.EcsLite.EcsWorld::OnEntityChangeInternal(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_OnEntityChangeInternal_m8EBEA03F35D0F08C31E3933FC4106F19C5C86ECF (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, int32_t ___entity0, int32_t ___componentType1, bool ___added2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF71DF2AAEA86EE21D6E5D179984271BD7C662E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4BEC90B8846625FB8E92BB93B88B131E7FD17BB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB775C181ED70E9AA806C9B5E87C2D902EA72998D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDE72BA1367D2C5389BC86F89B1CE42D2E81903CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* V_0 = NULL;
	List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* V_1 = NULL;
	Enumerator_tD8DF6963A7ACFB282D7E458CBD093030F5C67031 V_2;
	memset((&V_2), 0, sizeof(V_2));
	EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* V_3 = NULL;
	EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* V_4 = NULL;
	EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* V_5 = NULL;
	EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* V_6 = NULL;
	{
		// var includeList = _filtersByIncludedComponents[componentType];
		List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179* L_0 = __this->____filtersByIncludedComponents_11;
		int32_t L_1 = ___componentType1;
		int32_t L_2 = L_1;
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// var excludeList = _filtersByExcludedComponents[componentType];
		List_1U5BU5D_t6B1DE4E121725903259FFD4E7FD3319AF5202179* L_4 = __this->____filtersByExcludedComponents_12;
		int32_t L_5 = ___componentType1;
		int32_t L_6 = L_5;
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		// if (added) {
		bool L_8 = ___added2;
		if (!L_8)
		{
			goto IL_00a8;
		}
	}
	{
		// if (includeList != null) {
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_9 = V_0;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		// foreach (var filter in includeList) {
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_10 = V_0;
		Enumerator_tD8DF6963A7ACFB282D7E458CBD093030F5C67031 L_11;
		L_11 = List_1_GetEnumerator_mDE72BA1367D2C5389BC86F89B1CE42D2E81903CC(L_10, List_1_GetEnumerator_mDE72BA1367D2C5389BC86F89B1CE42D2E81903CC_RuntimeMethod_var);
		V_2 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF71DF2AAEA86EE21D6E5D179984271BD7C662E55((&V_2), Enumerator_Dispose_mF71DF2AAEA86EE21D6E5D179984271BD7C662E55_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_0024_1:
			{
				// foreach (var filter in includeList) {
				EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_12;
				L_12 = Enumerator_get_Current_mB775C181ED70E9AA806C9B5E87C2D902EA72998D_inline((&V_2), Enumerator_get_Current_mB775C181ED70E9AA806C9B5E87C2D902EA72998D_RuntimeMethod_var);
				V_3 = L_12;
				// if (IsMaskCompatible (filter.GetMask (), entity)) {
				EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_13 = V_3;
				Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_14;
				L_14 = EcsFilter_GetMask_m99665072F3F09FE4739AADF4DC764C2336B071DC_inline(L_13, NULL);
				int32_t L_15 = ___entity0;
				bool L_16;
				L_16 = EcsWorld_IsMaskCompatible_mEAF2DADCBE03B0E3D3EA6830BF72043EF3EEF353_inline(__this, L_14, L_15, NULL);
				if (!L_16)
				{
					goto IL_0042_1;
				}
			}
			{
				// filter.AddEntity (entity);
				EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_17 = V_3;
				int32_t L_18 = ___entity0;
				EcsFilter_AddEntity_mC850B7002B9DC3317146681F84A68B07BCB211FE_inline(L_17, L_18, NULL);
			}

IL_0042_1:
			{
				// foreach (var filter in includeList) {
				bool L_19;
				L_19 = Enumerator_MoveNext_m4BEC90B8846625FB8E92BB93B88B131E7FD17BB8((&V_2), Enumerator_MoveNext_m4BEC90B8846625FB8E92BB93B88B131E7FD17BB8_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0024_1;
				}
			}
			{
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// if (excludeList != null) {
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_20 = V_1;
		if (!L_20)
		{
			goto IL_0135;
		}
	}
	{
		// foreach (var filter in excludeList) {
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_21 = V_1;
		Enumerator_tD8DF6963A7ACFB282D7E458CBD093030F5C67031 L_22;
		L_22 = List_1_GetEnumerator_mDE72BA1367D2C5389BC86F89B1CE42D2E81903CC(L_21, List_1_GetEnumerator_mDE72BA1367D2C5389BC86F89B1CE42D2E81903CC_RuntimeMethod_var);
		V_2 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF71DF2AAEA86EE21D6E5D179984271BD7C662E55((&V_2), Enumerator_Dispose_mF71DF2AAEA86EE21D6E5D179984271BD7C662E55_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008c_1;
			}

IL_006a_1:
			{
				// foreach (var filter in excludeList) {
				EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_23;
				L_23 = Enumerator_get_Current_mB775C181ED70E9AA806C9B5E87C2D902EA72998D_inline((&V_2), Enumerator_get_Current_mB775C181ED70E9AA806C9B5E87C2D902EA72998D_RuntimeMethod_var);
				V_4 = L_23;
				// if (IsMaskCompatibleWithout (filter.GetMask (), entity, componentType)) {
				EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_24 = V_4;
				Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_25;
				L_25 = EcsFilter_GetMask_m99665072F3F09FE4739AADF4DC764C2336B071DC_inline(L_24, NULL);
				int32_t L_26 = ___entity0;
				int32_t L_27 = ___componentType1;
				bool L_28;
				L_28 = EcsWorld_IsMaskCompatibleWithout_m50112AD1ADA33A6C3F2197A3B66D28F3CA4DE97E_inline(__this, L_25, L_26, L_27, NULL);
				if (!L_28)
				{
					goto IL_008c_1;
				}
			}
			{
				// filter.RemoveEntity (entity);
				EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_29 = V_4;
				int32_t L_30 = ___entity0;
				EcsFilter_RemoveEntity_m1E3A4F32C1E1A758502F4054DC5C347CBCA8D1DB_inline(L_29, L_30, NULL);
			}

IL_008c_1:
			{
				// foreach (var filter in excludeList) {
				bool L_31;
				L_31 = Enumerator_MoveNext_m4BEC90B8846625FB8E92BB93B88B131E7FD17BB8((&V_2), Enumerator_MoveNext_m4BEC90B8846625FB8E92BB93B88B131E7FD17BB8_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_006a_1;
				}
			}
			{
				goto IL_0135;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a8:
	{
		// if (includeList != null) {
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_32 = V_0;
		if (!L_32)
		{
			goto IL_00ee;
		}
	}
	{
		// foreach (var filter in includeList) {
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_33 = V_0;
		Enumerator_tD8DF6963A7ACFB282D7E458CBD093030F5C67031 L_34;
		L_34 = List_1_GetEnumerator_mDE72BA1367D2C5389BC86F89B1CE42D2E81903CC(L_33, List_1_GetEnumerator_mDE72BA1367D2C5389BC86F89B1CE42D2E81903CC_RuntimeMethod_var);
		V_2 = L_34;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF71DF2AAEA86EE21D6E5D179984271BD7C662E55((&V_2), Enumerator_Dispose_mF71DF2AAEA86EE21D6E5D179984271BD7C662E55_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d5_1;
			}

IL_00b4_1:
			{
				// foreach (var filter in includeList) {
				EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_35;
				L_35 = Enumerator_get_Current_mB775C181ED70E9AA806C9B5E87C2D902EA72998D_inline((&V_2), Enumerator_get_Current_mB775C181ED70E9AA806C9B5E87C2D902EA72998D_RuntimeMethod_var);
				V_5 = L_35;
				// if (IsMaskCompatible (filter.GetMask (), entity)) {
				EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_36 = V_5;
				Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_37;
				L_37 = EcsFilter_GetMask_m99665072F3F09FE4739AADF4DC764C2336B071DC_inline(L_36, NULL);
				int32_t L_38 = ___entity0;
				bool L_39;
				L_39 = EcsWorld_IsMaskCompatible_mEAF2DADCBE03B0E3D3EA6830BF72043EF3EEF353_inline(__this, L_37, L_38, NULL);
				if (!L_39)
				{
					goto IL_00d5_1;
				}
			}
			{
				// filter.RemoveEntity (entity);
				EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_40 = V_5;
				int32_t L_41 = ___entity0;
				EcsFilter_RemoveEntity_m1E3A4F32C1E1A758502F4054DC5C347CBCA8D1DB_inline(L_40, L_41, NULL);
			}

IL_00d5_1:
			{
				// foreach (var filter in includeList) {
				bool L_42;
				L_42 = Enumerator_MoveNext_m4BEC90B8846625FB8E92BB93B88B131E7FD17BB8((&V_2), Enumerator_MoveNext_m4BEC90B8846625FB8E92BB93B88B131E7FD17BB8_RuntimeMethod_var);
				if (L_42)
				{
					goto IL_00b4_1;
				}
			}
			{
				goto IL_00ee;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ee:
	{
		// if (excludeList != null) {
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_43 = V_1;
		if (!L_43)
		{
			goto IL_0135;
		}
	}
	{
		// foreach (var filter in excludeList) {
		List_1_t0FD0212DEF9A7230777E85E522957BA33D9EE2B4* L_44 = V_1;
		Enumerator_tD8DF6963A7ACFB282D7E458CBD093030F5C67031 L_45;
		L_45 = List_1_GetEnumerator_mDE72BA1367D2C5389BC86F89B1CE42D2E81903CC(L_44, List_1_GetEnumerator_mDE72BA1367D2C5389BC86F89B1CE42D2E81903CC_RuntimeMethod_var);
		V_2 = L_45;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0127:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF71DF2AAEA86EE21D6E5D179984271BD7C662E55((&V_2), Enumerator_Dispose_mF71DF2AAEA86EE21D6E5D179984271BD7C662E55_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_011c_1;
			}

IL_00fa_1:
			{
				// foreach (var filter in excludeList) {
				EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_46;
				L_46 = Enumerator_get_Current_mB775C181ED70E9AA806C9B5E87C2D902EA72998D_inline((&V_2), Enumerator_get_Current_mB775C181ED70E9AA806C9B5E87C2D902EA72998D_RuntimeMethod_var);
				V_6 = L_46;
				// if (IsMaskCompatibleWithout (filter.GetMask (), entity, componentType)) {
				EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_47 = V_6;
				Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_48;
				L_48 = EcsFilter_GetMask_m99665072F3F09FE4739AADF4DC764C2336B071DC_inline(L_47, NULL);
				int32_t L_49 = ___entity0;
				int32_t L_50 = ___componentType1;
				bool L_51;
				L_51 = EcsWorld_IsMaskCompatibleWithout_m50112AD1ADA33A6C3F2197A3B66D28F3CA4DE97E_inline(__this, L_48, L_49, L_50, NULL);
				if (!L_51)
				{
					goto IL_011c_1;
				}
			}
			{
				// filter.AddEntity (entity);
				EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_52 = V_6;
				int32_t L_53 = ___entity0;
				EcsFilter_AddEntity_mC850B7002B9DC3317146681F84A68B07BCB211FE_inline(L_52, L_53, NULL);
			}

IL_011c_1:
			{
				// foreach (var filter in excludeList) {
				bool L_54;
				L_54 = Enumerator_MoveNext_m4BEC90B8846625FB8E92BB93B88B131E7FD17BB8((&V_2), Enumerator_MoveNext_m4BEC90B8846625FB8E92BB93B88B131E7FD17BB8_RuntimeMethod_var);
				if (L_54)
				{
					goto IL_00fa_1;
				}
			}
			{
				goto IL_0135;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0135:
	{
		// }
		return;
	}
}
// System.Boolean Leopotam.EcsLite.EcsWorld::IsMaskCompatible(Leopotam.EcsLite.EcsWorld/Mask,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsWorld_IsMaskCompatible_mEAF2DADCBE03B0E3D3EA6830BF72043EF3EEF353 (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* ___filterMask0, int32_t ___entity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_0 = ___filterMask0;
		int32_t L_1 = L_0->___IncludeCount_3;
		V_1 = L_1;
		goto IL_0028;
	}

IL_000b:
	{
		// if (!_pools[filterMask.Include[i]].Has (entity)) {
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_2 = __this->____pools_4;
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_3 = ___filterMask0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___Include_1;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = ___entity1;
		bool L_11;
		L_11 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Leopotam.EcsLite.IEcsPool::Has(System.Int32) */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_9, L_10);
		if (L_11)
		{
			goto IL_0024;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0028:
	{
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000b;
		}
	}
	{
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_15 = ___filterMask0;
		int32_t L_16 = L_15->___ExcludeCount_4;
		V_3 = L_16;
		goto IL_0054;
	}

IL_0037:
	{
		// if (_pools[filterMask.Exclude[i]].Has (entity)) {
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_17 = __this->____pools_4;
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_18 = ___filterMask0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18->___Exclude_2;
		int32_t L_20 = V_2;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25 = ___entity1;
		bool L_26;
		L_26 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Leopotam.EcsLite.IEcsPool::Has(System.Int32) */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_24, L_25);
		if (!L_26)
		{
			goto IL_0050;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0050:
	{
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0054:
	{
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		int32_t L_28 = V_2;
		int32_t L_29 = V_3;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0037;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean Leopotam.EcsLite.EcsWorld::IsMaskCompatibleWithout(Leopotam.EcsLite.EcsWorld/Mask,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsWorld_IsMaskCompatibleWithout_m50112AD1ADA33A6C3F2197A3B66D28F3CA4DE97E (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* ___filterMask0, int32_t ___entity1, int32_t ___componentId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_0 = ___filterMask0;
		int32_t L_1 = L_0->___IncludeCount_3;
		V_1 = L_1;
		goto IL_002e;
	}

IL_000b:
	{
		// var typeId = filterMask.Include[i];
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_2 = ___filterMask0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___Include_1;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (typeId == componentId || !_pools[typeId].Has (entity)) {
		int32_t L_7 = V_2;
		int32_t L_8 = ___componentId2;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_0028;
		}
	}
	{
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_9 = __this->____pools_4;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = ___entity1;
		bool L_14;
		L_14 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Leopotam.EcsLite.IEcsPool::Has(System.Int32) */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_12, L_13);
		if (L_14)
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}

IL_002a:
	{
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_002e:
	{
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000b;
		}
	}
	{
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		V_3 = 0;
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_18 = ___filterMask0;
		int32_t L_19 = L_18->___ExcludeCount_4;
		V_4 = L_19;
		goto IL_0064;
	}

IL_003e:
	{
		// var typeId = filterMask.Exclude[i];
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_20 = ___filterMask0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20->___Exclude_2;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		V_5 = L_24;
		// if (typeId != componentId && _pools[typeId].Has (entity)) {
		int32_t L_25 = V_5;
		int32_t L_26 = ___componentId2;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_0060;
		}
	}
	{
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_27 = __this->____pools_4;
		int32_t L_28 = V_5;
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = ___entity1;
		bool L_32;
		L_32 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Leopotam.EcsLite.IEcsPool::Has(System.Int32) */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_30, L_31);
		if (!L_32)
		{
			goto IL_0060;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0060:
	{
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0064:
	{
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		int32_t L_34 = V_3;
		int32_t L_35 = V_4;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003e;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leopotam.EcsLite.EcsWorld/Mask::.ctor(Leopotam.EcsLite.EcsWorld)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mask__ctor_mD10B93C0DAAC92CF17B9B63F3370DB5CFB276A7A (Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* __this, EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* ___world0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal Mask (EcsWorld world) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _world = world;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_0 = ___world0;
		__this->____world_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____world_0), (void*)L_0);
		// Include = new int[8];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___Include_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Include_1), (void*)L_1);
		// Exclude = new int[2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___Exclude_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Exclude_2), (void*)L_2);
		// Reset ();
		Mask_Reset_m7B4E91E82B7C71199B0848ADF261158A249ADDF9_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void Leopotam.EcsLite.EcsWorld/Mask::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mask_Reset_m7B4E91E82B7C71199B0848ADF261158A249ADDF9 (Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* __this, const RuntimeMethod* method) 
{
	{
		// IncludeCount = 0;
		__this->___IncludeCount_3 = 0;
		// ExcludeCount = 0;
		__this->___ExcludeCount_4 = 0;
		// Hash = 0;
		__this->___Hash_5 = 0;
		// }
		return;
	}
}
// Leopotam.EcsLite.EcsFilter Leopotam.EcsLite.EcsWorld/Mask::End(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* Mask_End_mDDA49CEF14E3BFEBC01CDFA326541C171BA03B09 (Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m93946BB1F3FECB53174BA941B1B14FB5AEC9A504_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// Array.Sort (Include, 0, IncludeCount);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___Include_1;
		int32_t L_1 = __this->___IncludeCount_3;
		Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m93946BB1F3FECB53174BA941B1B14FB5AEC9A504(L_0, 0, L_1, Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m93946BB1F3FECB53174BA941B1B14FB5AEC9A504_RuntimeMethod_var);
		// Array.Sort (Exclude, 0, ExcludeCount);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___Exclude_2;
		int32_t L_3 = __this->___ExcludeCount_4;
		Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m93946BB1F3FECB53174BA941B1B14FB5AEC9A504(L_2, 0, L_3, Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m93946BB1F3FECB53174BA941B1B14FB5AEC9A504_RuntimeMethod_var);
		// Hash = IncludeCount + ExcludeCount;
		int32_t L_4 = __this->___IncludeCount_3;
		int32_t L_5 = __this->___ExcludeCount_4;
		__this->___Hash_5 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// for (int i = 0, iMax = IncludeCount; i < iMax; i++) {
		V_1 = 0;
		// for (int i = 0, iMax = IncludeCount; i < iMax; i++) {
		int32_t L_6 = __this->___IncludeCount_3;
		V_2 = L_6;
		goto IL_0061;
	}

IL_0042:
	{
		// Hash = unchecked (Hash * 314159 + Include[i]);
		int32_t L_7 = __this->___Hash_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___Include_1;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		__this->___Hash_5 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)314159))), L_11));
		// for (int i = 0, iMax = IncludeCount; i < iMax; i++) {
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0061:
	{
		// for (int i = 0, iMax = IncludeCount; i < iMax; i++) {
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0042;
		}
	}
	{
		// for (int i = 0, iMax = ExcludeCount; i < iMax; i++) {
		V_3 = 0;
		// for (int i = 0, iMax = ExcludeCount; i < iMax; i++) {
		int32_t L_15 = __this->___ExcludeCount_4;
		V_4 = L_15;
		goto IL_0090;
	}

IL_0071:
	{
		// Hash = unchecked (Hash * 314159 - Exclude[i]);
		int32_t L_16 = __this->___Hash_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___Exclude_2;
		int32_t L_18 = V_3;
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		__this->___Hash_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)314159))), L_20));
		// for (int i = 0, iMax = ExcludeCount; i < iMax; i++) {
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0090:
	{
		// for (int i = 0, iMax = ExcludeCount; i < iMax; i++) {
		int32_t L_22 = V_3;
		int32_t L_23 = V_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0071;
		}
	}
	{
		// var (filter, isNew) = _world.GetFilterInternal (this, capacity);
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_24 = __this->____world_0;
		int32_t L_25 = ___capacity0;
		ValueTuple_2_t972AEAACBD9358E43822A00097D383437EE273F7 L_26;
		L_26 = EcsWorld_GetFilterInternal_m9A07F5A8A04F5DFF953377FF5E448096E860EB43(L_24, __this, L_25, NULL);
		ValueTuple_2_t972AEAACBD9358E43822A00097D383437EE273F7 L_27 = L_26;
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_28 = L_27.___Item1_0;
		V_0 = L_28;
		bool L_29 = L_27.___Item2_1;
		// if (!isNew) { Recycle (); }
		if (L_29)
		{
			goto IL_00b6;
		}
	}
	{
		// if (!isNew) { Recycle (); }
		Mask_Recycle_m9A47E102ED6A7A6C607530F4BB0274D353624B46_inline(__this, NULL);
	}

IL_00b6:
	{
		// return filter;
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_30 = V_0;
		return L_30;
	}
}
// System.Void Leopotam.EcsLite.EcsWorld/Mask::Recycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mask_Recycle_m9A47E102ED6A7A6C607530F4BB0274D353624B46 (Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisMask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833_m835DA3073C6DF3FED6C9C03F023976EAD94721E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Reset ();
		Mask_Reset_m7B4E91E82B7C71199B0848ADF261158A249ADDF9_inline(__this, NULL);
		// if (_world._masksCount == _world._masks.Length) {
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_0 = __this->____world_0;
		int32_t L_1 = L_0->____masksCount_14;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_2 = __this->____world_0;
		MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD* L_3 = L_2->____masks_13;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003d;
		}
	}
	{
		// Array.Resize (ref _world._masks, _world._masksCount << 1);
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_4 = __this->____world_0;
		MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD** L_5 = (&L_4->____masks_13);
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_6 = __this->____world_0;
		int32_t L_7 = L_6->____masksCount_14;
		Array_Resize_TisMask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833_m835DA3073C6DF3FED6C9C03F023976EAD94721E4(L_5, ((int32_t)(L_7<<1)), Array_Resize_TisMask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833_m835DA3073C6DF3FED6C9C03F023976EAD94721E4_RuntimeMethod_var);
	}

IL_003d:
	{
		// _world._masks[_world._masksCount++] = this;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_8 = __this->____world_0;
		MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD* L_9 = L_8->____masks_13;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_10 = __this->____world_0;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_11 = L_10;
		int32_t L_12 = L_11->____masksCount_14;
		V_0 = L_12;
		int32_t L_13 = V_0;
		L_11->____masksCount_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_0;
		ArrayElementTypeCheck (L_9, __this);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833*)__this);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m2387F7D65F7E690DAFAB1B7249CC50249ABD34D3_inline (Il2CppSetOptionAttribute_t9B5BD63E2D30C78D94F081D7ACFAF884288131D8* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Option Option { get; private set; }
		int32_t L_0 = ___value0;
		__this->___U3COptionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_m5CBF1336F47FC01805841C469F9422D61C5EF917_inline (Il2CppSetOptionAttribute_t9B5BD63E2D30C78D94F081D7ACFAF884288131D8* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Value { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t EcsWorld_GetEntityGen_mC9299B247AA0A98DAB7EAA7746294FF3235F7865_inline (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, int32_t ___entity0, const RuntimeMethod* method) 
{
	{
		// return Entities[entity].Gen;
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_0 = __this->___Entities_0;
		int32_t L_1 = ___entity0;
		int16_t L_2 = ((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_1)))->___Gen_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_m472254CACC426012B9752E8BC5CD9854902643E3_inline (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, const RuntimeMethod* method) 
{
	{
		// return !_destroyed;
		bool L_0 = __this->____destroyed_15;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsEntityAliveInternal_m63BEB4232F1783D82B6B7D4CFFBBCCF61967A4CE_inline (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, int32_t ___entity0, const RuntimeMethod* method) 
{
	{
		// return entity >= 0 && entity < _entitiesCount && Entities[entity].Gen > 0;
		int32_t L_0 = ___entity0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = ___entity0;
		int32_t L_2 = __this->____entitiesCount_1;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0022;
		}
	}
	{
		EntityDataU5BU5D_tA7420C236436DA87D8F23C2246C26227FD0745FF* L_3 = __this->___Entities_0;
		int32_t L_4 = ___entity0;
		int16_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___Gen_0;
		return (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsFilter_AddDelayedOp_mF63A62AC2ECCAE12E7D397FD1B64386F49D2DD3D_inline (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, bool ___added0, int32_t ___entity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisDelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_m7707AF899B745F050DCE2DE7B93AA2E7F89EACED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_lockCount <= 0) { return false; }
		int32_t L_0 = __this->____lockCount_5;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		// if (_lockCount <= 0) { return false; }
		return (bool)0;
	}

IL_000b:
	{
		// if (_delayedOpsCount == _delayedOps.Length) {
		int32_t L_1 = __this->____delayedOpsCount_7;
		DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37* L_2 = __this->____delayedOps_6;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		// Array.Resize (ref _delayedOps, _delayedOpsCount << 1);
		DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37** L_3 = (&__this->____delayedOps_6);
		int32_t L_4 = __this->____delayedOpsCount_7;
		Array_Resize_TisDelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_m7707AF899B745F050DCE2DE7B93AA2E7F89EACED(L_3, ((int32_t)(L_4<<1)), Array_Resize_TisDelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1_m7707AF899B745F050DCE2DE7B93AA2E7F89EACED_RuntimeMethod_var);
	}

IL_002e:
	{
		// ref var op = ref _delayedOps[_delayedOpsCount++];
		DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37* L_5 = __this->____delayedOps_6;
		int32_t L_6 = __this->____delayedOpsCount_7;
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->____delayedOpsCount_7 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		// op.Added = added;
		DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1* L_9 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)));
		bool L_10 = ___added0;
		L_9->___Added_0 = L_10;
		// op.Entity = entity;
		int32_t L_11 = ___entity1;
		L_9->___Entity_1 = L_11;
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_AddEntity_mC850B7002B9DC3317146681F84A68B07BCB211FE_inline (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, int32_t ___entity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (AddDelayedOp (true, entity)) { return; }
		int32_t L_0 = ___entity0;
		bool L_1;
		L_1 = EcsFilter_AddDelayedOp_mF63A62AC2ECCAE12E7D397FD1B64386F49D2DD3D_inline(__this, (bool)1, L_0, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (AddDelayedOp (true, entity)) { return; }
		return;
	}

IL_000b:
	{
		// if (_entitiesCount == _denseEntities.Length) {
		int32_t L_2 = __this->____entitiesCount_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____denseEntities_2;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		// Array.Resize (ref _denseEntities, _entitiesCount << 1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_4 = (&__this->____denseEntities_2);
		int32_t L_5 = __this->____entitiesCount_3;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916(L_4, ((int32_t)(L_5<<1)), Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
	}

IL_002e:
	{
		// _denseEntities[_entitiesCount++] = entity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____denseEntities_2;
		int32_t L_7 = __this->____entitiesCount_3;
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->____entitiesCount_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		int32_t L_10 = ___entity0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (int32_t)L_10);
		// SparseEntities[entity] = _entitiesCount;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___SparseEntities_4;
		int32_t L_12 = ___entity0;
		int32_t L_13 = __this->____entitiesCount_3;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (int32_t)L_13);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_RemoveEntity_m1E3A4F32C1E1A758502F4054DC5C347CBCA8D1DB_inline (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, int32_t ___entity0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (AddDelayedOp (false, entity)) { return; }
		int32_t L_0 = ___entity0;
		bool L_1;
		L_1 = EcsFilter_AddDelayedOp_mF63A62AC2ECCAE12E7D397FD1B64386F49D2DD3D_inline(__this, (bool)0, L_0, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (AddDelayedOp (false, entity)) { return; }
		return;
	}

IL_000b:
	{
		// var idx = SparseEntities[entity] - 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___SparseEntities_4;
		int32_t L_3 = ___entity0;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		// SparseEntities[entity] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___SparseEntities_4;
		int32_t L_7 = ___entity0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (int32_t)0);
		// _entitiesCount--;
		int32_t L_8 = __this->____entitiesCount_3;
		__this->____entitiesCount_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		// if (idx < _entitiesCount) {
		int32_t L_9 = V_0;
		int32_t L_10 = __this->____entitiesCount_3;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_005d;
		}
	}
	{
		// _denseEntities[idx] = _denseEntities[_entitiesCount];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____denseEntities_2;
		int32_t L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____denseEntities_2;
		int32_t L_14 = __this->____entitiesCount_3;
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (int32_t)L_16);
		// SparseEntities[_denseEntities[idx]] = idx + 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->___SparseEntities_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->____denseEntities_2;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		int32_t L_22 = V_0;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21), (int32_t)((int32_t)il2cpp_codegen_add(L_22, 1)));
	}

IL_005d:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m37684DB8B7FF280C519E3058DF38A2EC380FF318_inline (Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* __this, const RuntimeMethod* method) 
{
	{
		// get => _entities[_idx];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____entities_1;
		int32_t L_1 = __this->____idx_3;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m037CD2BCD8256D5E20CA46B1E0ED5996C57E4DDB_inline (Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return ++_idx < _count;
		int32_t L_0 = __this->____idx_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->____idx_3 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count_2;
		return (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Unlock_mD634DB952334A12F1FDABB887890292715495912_inline (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1* V_2 = NULL;
	{
		// _lockCount--;
		int32_t L_0 = __this->____lockCount_5;
		__this->____lockCount_5 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (_lockCount == 0 && _delayedOpsCount > 0) {
		int32_t L_1 = __this->____lockCount_5;
		if (L_1)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_2 = __this->____delayedOpsCount_7;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_3 = __this->____delayedOpsCount_7;
		V_1 = L_3;
		goto IL_005d;
	}

IL_002a:
	{
		// ref var op = ref _delayedOps[i];
		DelayedOpU5BU5D_tD842E4F68D05231986BA6953A392B8638CF26F37* L_4 = __this->____delayedOps_6;
		int32_t L_5 = V_0;
		V_2 = ((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)));
		// if (op.Added) {
		DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1* L_6 = V_2;
		bool L_7 = L_6->___Added_0;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		// AddEntity (op.Entity);
		DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1* L_8 = V_2;
		int32_t L_9 = L_8->___Entity_1;
		EcsFilter_AddEntity_mC850B7002B9DC3317146681F84A68B07BCB211FE_inline(__this, L_9, NULL);
		goto IL_0059;
	}

IL_004d:
	{
		// RemoveEntity (op.Entity);
		DelayedOp_t106CFDB13C6F549E1468A8CCD9811AE7386BA3C1* L_10 = V_2;
		int32_t L_11 = L_10->___Entity_1;
		EcsFilter_RemoveEntity_m1E3A4F32C1E1A758502F4054DC5C347CBCA8D1DB_inline(__this, L_11, NULL);
	}

IL_0059:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_005d:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_002a;
		}
	}
	{
		// _delayedOpsCount = 0;
		__this->____delayedOpsCount_7 = 0;
	}

IL_0068:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5943B62B2855A133CE2DE4433E3473312A73A7CD_inline (Enumerator_tB900C20940316DFA85B2AE7A3A3831A136050B22* __this, const RuntimeMethod* method) 
{
	{
		// _filter.Unlock ();
		EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* L_0 = __this->____filter_0;
		NullCheck(L_0);
		EcsFilter_Unlock_mD634DB952334A12F1FDABB887890292715495912_inline(L_0, NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_ResizeSparseIndex_mC01D2DC5C40388E65F707A7DA5B9CBF0E6367405_inline (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Array.Resize (ref SparseEntities, capacity);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_0 = (&__this->___SparseEntities_4);
		int32_t L_1 = ___capacity0;
		Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916(L_0, L_1, Array_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6BAA7BD6F22421B894347B1476C37052FAC6C916_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsMaskCompatible_mEAF2DADCBE03B0E3D3EA6830BF72043EF3EEF353_inline (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* ___filterMask0, int32_t ___entity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_0 = ___filterMask0;
		int32_t L_1 = L_0->___IncludeCount_3;
		V_1 = L_1;
		goto IL_0028;
	}

IL_000b:
	{
		// if (!_pools[filterMask.Include[i]].Has (entity)) {
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_2 = __this->____pools_4;
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_3 = ___filterMask0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___Include_1;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = ___entity1;
		bool L_11;
		L_11 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Leopotam.EcsLite.IEcsPool::Has(System.Int32) */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_9, L_10);
		if (L_11)
		{
			goto IL_0024;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0028:
	{
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_000b;
		}
	}
	{
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_15 = ___filterMask0;
		int32_t L_16 = L_15->___ExcludeCount_4;
		V_3 = L_16;
		goto IL_0054;
	}

IL_0037:
	{
		// if (_pools[filterMask.Exclude[i]].Has (entity)) {
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_17 = __this->____pools_4;
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_18 = ___filterMask0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18->___Exclude_2;
		int32_t L_20 = V_2;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		int32_t L_25 = ___entity1;
		bool L_26;
		L_26 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Leopotam.EcsLite.IEcsPool::Has(System.Int32) */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_24, L_25);
		if (!L_26)
		{
			goto IL_0050;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0050:
	{
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0054:
	{
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		int32_t L_28 = V_2;
		int32_t L_29 = V_3;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0037;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* EcsFilter_GetMask_m99665072F3F09FE4739AADF4DC764C2336B071DC_inline (EcsFilter_t32382C91DB236256C4948761F8555E5ECF18B674* __this, const RuntimeMethod* method) 
{
	{
		// return _mask;
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_0 = __this->____mask_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsMaskCompatibleWithout_m50112AD1ADA33A6C3F2197A3B66D28F3CA4DE97E_inline (EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* __this, Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* ___filterMask0, int32_t ___entity1, int32_t ___componentId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		V_0 = 0;
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_0 = ___filterMask0;
		int32_t L_1 = L_0->___IncludeCount_3;
		V_1 = L_1;
		goto IL_002e;
	}

IL_000b:
	{
		// var typeId = filterMask.Include[i];
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_2 = ___filterMask0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___Include_1;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (typeId == componentId || !_pools[typeId].Has (entity)) {
		int32_t L_7 = V_2;
		int32_t L_8 = ___componentId2;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_0028;
		}
	}
	{
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_9 = __this->____pools_4;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = ___entity1;
		bool L_14;
		L_14 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Leopotam.EcsLite.IEcsPool::Has(System.Int32) */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_12, L_13);
		if (L_14)
		{
			goto IL_002a;
		}
	}

IL_0028:
	{
		// return false;
		return (bool)0;
	}

IL_002a:
	{
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_002e:
	{
		// for (int i = 0, iMax = filterMask.IncludeCount; i < iMax; i++) {
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000b;
		}
	}
	{
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		V_3 = 0;
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_18 = ___filterMask0;
		int32_t L_19 = L_18->___ExcludeCount_4;
		V_4 = L_19;
		goto IL_0064;
	}

IL_003e:
	{
		// var typeId = filterMask.Exclude[i];
		Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* L_20 = ___filterMask0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20->___Exclude_2;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		V_5 = L_24;
		// if (typeId != componentId && _pools[typeId].Has (entity)) {
		int32_t L_25 = V_5;
		int32_t L_26 = ___componentId2;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_0060;
		}
	}
	{
		IEcsPoolU5BU5D_t693467437367F75FFE0FEA637BDC46BA6A912680* L_27 = __this->____pools_4;
		int32_t L_28 = V_5;
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = ___entity1;
		bool L_32;
		L_32 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean Leopotam.EcsLite.IEcsPool::Has(System.Int32) */, IEcsPool_tAB33C190F9B5E3738E6B0E85C80EB275BE8C50BD_il2cpp_TypeInfo_var, L_30, L_31);
		if (!L_32)
		{
			goto IL_0060;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0060:
	{
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0064:
	{
		// for (int i = 0, iMax = filterMask.ExcludeCount; i < iMax; i++) {
		int32_t L_34 = V_3;
		int32_t L_35 = V_4;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_003e;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mask_Reset_m7B4E91E82B7C71199B0848ADF261158A249ADDF9_inline (Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* __this, const RuntimeMethod* method) 
{
	{
		// IncludeCount = 0;
		__this->___IncludeCount_3 = 0;
		// ExcludeCount = 0;
		__this->___ExcludeCount_4 = 0;
		// Hash = 0;
		__this->___Hash_5 = 0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mask_Recycle_m9A47E102ED6A7A6C607530F4BB0274D353624B46_inline (Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisMask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833_m835DA3073C6DF3FED6C9C03F023976EAD94721E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Reset ();
		Mask_Reset_m7B4E91E82B7C71199B0848ADF261158A249ADDF9_inline(__this, NULL);
		// if (_world._masksCount == _world._masks.Length) {
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_0 = __this->____world_0;
		int32_t L_1 = L_0->____masksCount_14;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_2 = __this->____world_0;
		MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD* L_3 = L_2->____masks_13;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_003d;
		}
	}
	{
		// Array.Resize (ref _world._masks, _world._masksCount << 1);
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_4 = __this->____world_0;
		MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD** L_5 = (&L_4->____masks_13);
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_6 = __this->____world_0;
		int32_t L_7 = L_6->____masksCount_14;
		Array_Resize_TisMask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833_m835DA3073C6DF3FED6C9C03F023976EAD94721E4(L_5, ((int32_t)(L_7<<1)), Array_Resize_TisMask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833_m835DA3073C6DF3FED6C9C03F023976EAD94721E4_RuntimeMethod_var);
	}

IL_003d:
	{
		// _world._masks[_world._masksCount++] = this;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_8 = __this->____world_0;
		MaskU5BU5D_t7D4A3AE1D2AD186B8957ED9600F87FC9D20CCABD* L_9 = L_8->____masks_13;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_10 = __this->____world_0;
		EcsWorld_tF46797847C1F22A893D79F3F08F5C857CFF90B0B* L_11 = L_10;
		int32_t L_12 = L_11->____masksCount_14;
		V_0 = L_12;
		int32_t L_13 = V_0;
		L_11->____masksCount_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_0;
		ArrayElementTypeCheck (L_9, __this);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (Mask_tE1C2DFFEF792A4E748AE1647EB4E3B2FD985D833*)__this);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}

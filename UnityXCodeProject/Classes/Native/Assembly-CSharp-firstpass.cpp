﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// DeviceCard
struct DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16;
// DeviceCard[]
struct DeviceCardU5BU5D_t8EAFCB0E66E919372690BE9EFB19C39B59E2C116;
// MetaWeariOSUnity
struct MetaWeariOSUnity_tE0EA63F75413E24C17D5204F83B18B6C1F58FC8D;
// MetaWeariOSUnity/MessageReceiver
struct MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954;
// MetaWeariOSUnity/MessageSubjects
struct MessageSubjects_t285C889FBD987EF10774ED1092003335ECC18556;
// Newtonsoft.Json.Linq.JArray
struct JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB;
// Newtonsoft.Json.Linq.JObject
struct JObject_t786AF07B1009334856B0362BBC48EEF68C81C585;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t013DFBF6A88616F3C011C00B60291F2EAB75483D;
// Newtonsoft.Json.Linq.JToken
struct JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t133B7916368C2F565BDFF2674430B992DB49577F;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_tA3DFFFD6133C0C5607FFA19B3E4E7395E872113C;
// System.Collections.Generic.List`1<DeviceCard>
struct List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_t29FF67BC2CD2EEBC234D6E03E125122CC8730B5C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t8081F1428D22013519901C16884C5ACE86A72A88;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_tEE60268216C5CB90375F55934CCCDEF654BA7EA3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// iOSMessageReceiver
struct iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654;

IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA3DFFFD6133C0C5607FFA19B3E4E7395E872113C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t786AF07B1009334856B0362BBC48EEF68C81C585_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetaWeariOSUnity_tE0EA63F75413E24C17D5204F83B18B6C1F58FC8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E1D9D8555B2C9C17AA8743D6F44E4703C874F1A;
IL2CPP_EXTERN_C String_t* _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C;
IL2CPP_EXTERN_C String_t* _stringLiteral6B05A59CAD7754B921DBD229F8E680EEA812F8C1;
IL2CPP_EXTERN_C String_t* _stringLiteral6CCCD026A25D8CB3E30F1BC64A73E86B4B10F6DC;
IL2CPP_EXTERN_C String_t* _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547;
IL2CPP_EXTERN_C String_t* _stringLiteral89222ECC0288C8C8BFA606DCD96270908B88FA42;
IL2CPP_EXTERN_C String_t* _stringLiteral9575EE8FCD40AB9ADD4D9F6679A75E5CFF463E2C;
IL2CPP_EXTERN_C String_t* _stringLiteral98AD5D23586C10E2597C734246CEA2660F96F7E8;
IL2CPP_EXTERN_C String_t* _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD;
IL2CPP_EXTERN_C String_t* _stringLiteralA4CD7B522EA818E01A99E31500EFFC64F6D31C15;
IL2CPP_EXTERN_C String_t* _stringLiteralB6EE8A01FA2130888D94B5FA1AF5BD2F1FD6FC6E;
IL2CPP_EXTERN_C String_t* _stringLiteralC32782643F86448DD0CF8F2A6E1B2A3F7AA0CCAB;
IL2CPP_EXTERN_C String_t* _stringLiteralD965050D70187FFF0BDFECDF3D67928DE5867AD7;
IL2CPP_EXTERN_C String_t* _stringLiteralDB59DC789C2C7496C9B078058316B55A8EB85A5D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2DD208E6EE19DB2DDC63FC676717375A20D7427;
IL2CPP_EXTERN_C String_t* _stringLiteralF0DB24E44F63002A7AF891222D783F3C0C9392BE;
IL2CPP_EXTERN_C String_t* _stringLiteralFCCFDDF7F7F122F2D295402F51497237C19F2917;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFDA0103FD7D2695561560B82EADA05C57D842AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_mD91A9B85F9FD8D044137D3187CB3530F9EB0F358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisiOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_m8B90E23F458A26FE94EBF513F7590DE8A17988BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m602D3DDCDE4D203D2F49632DFBF2C7E95C49E141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBC32F9E9D15C57CCB05B208CFCBB4C254BC9C3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetaWeariOSUnity_ProcessIosMessage_m70BA4887E6C603C8BD442CA1B21D63ED85E32AF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DeviceCard_fromIosSerialised_m6D17407CEE070BA9579EF91BAF320C36B66AA94D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MessageSubjects__ctor_m5E39EC85FF218317DCB48B348E8EFFC15D3FC9DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWeariOSUnity_ListFromJson_mB40B3B79A096839B1F2A8A9C9EA27A3C4352E2AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWeariOSUnity_ProcessIosMessage_m70BA4887E6C603C8BD442CA1B21D63ED85E32AF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWeariOSUnity_ScanForKnownDevices_m3996C5B38F5A4D017CB5E192793C94686871D290_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWeariOSUnity_ScanForNewDevices_m038D996FE97ABDF71F2DDC1CEA4ABC316707A231_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWeariOSUnity_StartFlashingDevice_m0DAF67A557CC36F0D0927DA67953E9E9C0EA01BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWeariOSUnity__cctor_m98ACD84C71D930ADD9BBDE6844189DBC1F9EED62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSMessageReceiver_Awake_m0E78739D5E9876B702D0219CD83179FF8C89889C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSMessageReceiver_get_instance_m68D3B5B648CE2B772D449B7B2C2EF6626F66F8F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t iOSMessageReceiver_onMessageFromiOS_m72A95A6FE316B9190907901DDC100B71A908911B_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF157A75827DFDE1F9E89CA3CBB54B07FA9E227FC 
{
public:

public:
};


// System.Object


// MetaWeariOSUnity_MessageSubjects
struct  MessageSubjects_t285C889FBD987EF10774ED1092003335ECC18556  : public RuntimeObject
{
public:
	// System.String MetaWeariOSUnity_MessageSubjects::acceleratorData
	String_t* ___acceleratorData_0;

public:
	inline static int32_t get_offset_of_acceleratorData_0() { return static_cast<int32_t>(offsetof(MessageSubjects_t285C889FBD987EF10774ED1092003335ECC18556, ___acceleratorData_0)); }
	inline String_t* get_acceleratorData_0() const { return ___acceleratorData_0; }
	inline String_t** get_address_of_acceleratorData_0() { return &___acceleratorData_0; }
	inline void set_acceleratorData_0(String_t* value)
	{
		___acceleratorData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___acceleratorData_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JToken
struct  JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02, ____parent_0)); }
	inline JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB * get__parent_0() const { return ____parent_0; }
	inline JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02, ____previous_1)); }
	inline JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * get__previous_1() const { return ____previous_1; }
	inline JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02, ____next_2)); }
	inline JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * get__next_2() const { return ____next_2; }
	inline JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___StringTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___GuidTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___TimeSpanTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___UriTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___CharTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___DateTimeTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* ___BytesTypes_12;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_6() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___StringTypes_6)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_StringTypes_6() const { return ___StringTypes_6; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_StringTypes_6() { return &___StringTypes_6; }
	inline void set_StringTypes_6(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___StringTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_7() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___GuidTypes_7)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_GuidTypes_7() const { return ___GuidTypes_7; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_GuidTypes_7() { return &___GuidTypes_7; }
	inline void set_GuidTypes_7(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___GuidTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_8() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___TimeSpanTypes_8)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_TimeSpanTypes_8() const { return ___TimeSpanTypes_8; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_TimeSpanTypes_8() { return &___TimeSpanTypes_8; }
	inline void set_TimeSpanTypes_8(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___TimeSpanTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_9() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___UriTypes_9)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_UriTypes_9() const { return ___UriTypes_9; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_UriTypes_9() { return &___UriTypes_9; }
	inline void set_UriTypes_9(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___UriTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_10() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___CharTypes_10)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_CharTypes_10() const { return ___CharTypes_10; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_CharTypes_10() { return &___CharTypes_10; }
	inline void set_CharTypes_10(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___CharTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_11() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___DateTimeTypes_11)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_DateTimeTypes_11() const { return ___DateTimeTypes_11; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_DateTimeTypes_11() { return &___DateTimeTypes_11; }
	inline void set_DateTimeTypes_11(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___DateTimeTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_12() { return static_cast<int32_t>(offsetof(JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02_StaticFields, ___BytesTypes_12)); }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* get_BytesTypes_12() const { return ___BytesTypes_12; }
	inline JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344** get_address_of_BytesTypes_12() { return &___BytesTypes_12; }
	inline void set_BytesTypes_12(JTokenTypeU5BU5D_t95EDBAB8E7D19E83A29F71593B6FEC1F54E17344* value)
	{
		___BytesTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_12), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<DeviceCard>
struct  List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DeviceCardU5BU5D_t8EAFCB0E66E919372690BE9EFB19C39B59E2C116* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244, ____items_1)); }
	inline DeviceCardU5BU5D_t8EAFCB0E66E919372690BE9EFB19C39B59E2C116* get__items_1() const { return ____items_1; }
	inline DeviceCardU5BU5D_t8EAFCB0E66E919372690BE9EFB19C39B59E2C116** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DeviceCardU5BU5D_t8EAFCB0E66E919372690BE9EFB19C39B59E2C116* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DeviceCardU5BU5D_t8EAFCB0E66E919372690BE9EFB19C39B59E2C116* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244_StaticFields, ____emptyArray_5)); }
	inline DeviceCardU5BU5D_t8EAFCB0E66E919372690BE9EFB19C39B59E2C116* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DeviceCardU5BU5D_t8EAFCB0E66E919372690BE9EFB19C39B59E2C116** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DeviceCardU5BU5D_t8EAFCB0E66E919372690BE9EFB19C39B59E2C116* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Newtonsoft.Json.Linq.JContainer
struct  JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB  : public JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t8081F1428D22013519901C16884C5ACE86A72A88 * ____listChanged_13;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_14;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_15;

public:
	inline static int32_t get_offset_of__listChanged_13() { return static_cast<int32_t>(offsetof(JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB, ____listChanged_13)); }
	inline ListChangedEventHandler_t8081F1428D22013519901C16884C5ACE86A72A88 * get__listChanged_13() const { return ____listChanged_13; }
	inline ListChangedEventHandler_t8081F1428D22013519901C16884C5ACE86A72A88 ** get_address_of__listChanged_13() { return &____listChanged_13; }
	inline void set__listChanged_13(ListChangedEventHandler_t8081F1428D22013519901C16884C5ACE86A72A88 * value)
	{
		____listChanged_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_13), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_14() { return static_cast<int32_t>(offsetof(JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB, ____syncRoot_14)); }
	inline RuntimeObject * get__syncRoot_14() const { return ____syncRoot_14; }
	inline RuntimeObject ** get_address_of__syncRoot_14() { return &____syncRoot_14; }
	inline void set__syncRoot_14(RuntimeObject * value)
	{
		____syncRoot_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_14), (void*)value);
	}

	inline static int32_t get_offset_of__busy_15() { return static_cast<int32_t>(offsetof(JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB, ____busy_15)); }
	inline bool get__busy_15() const { return ____busy_15; }
	inline bool* get_address_of__busy_15() { return &____busy_15; }
	inline void set__busy_15(bool value)
	{
		____busy_15 = value;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// DeviceCard
struct  DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16  : public RuntimeObject
{
public:
	// System.String DeviceCard::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.String DeviceCard::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_1;
	// System.Int32 DeviceCard::<signalStrength>k__BackingField
	int32_t ___U3CsignalStrengthU3Ek__BackingField_2;
	// System.DateTime DeviceCard::<signalTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CsignalTimeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16, ___U3CnameU3Ek__BackingField_1)); }
	inline String_t* get_U3CnameU3Ek__BackingField_1() const { return ___U3CnameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_1() { return &___U3CnameU3Ek__BackingField_1; }
	inline void set_U3CnameU3Ek__BackingField_1(String_t* value)
	{
		___U3CnameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsignalStrengthU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16, ___U3CsignalStrengthU3Ek__BackingField_2)); }
	inline int32_t get_U3CsignalStrengthU3Ek__BackingField_2() const { return ___U3CsignalStrengthU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CsignalStrengthU3Ek__BackingField_2() { return &___U3CsignalStrengthU3Ek__BackingField_2; }
	inline void set_U3CsignalStrengthU3Ek__BackingField_2(int32_t value)
	{
		___U3CsignalStrengthU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsignalTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16, ___U3CsignalTimeU3Ek__BackingField_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CsignalTimeU3Ek__BackingField_3() const { return ___U3CsignalTimeU3Ek__BackingField_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CsignalTimeU3Ek__BackingField_3() { return &___U3CsignalTimeU3Ek__BackingField_3; }
	inline void set_U3CsignalTimeU3Ek__BackingField_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CsignalTimeU3Ek__BackingField_3 = value;
	}
};


// Newtonsoft.Json.Linq.JArray
struct  JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11  : public JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::_values
	List_1_t29FF67BC2CD2EEBC234D6E03E125122CC8730B5C * ____values_16;

public:
	inline static int32_t get_offset_of__values_16() { return static_cast<int32_t>(offsetof(JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11, ____values_16)); }
	inline List_1_t29FF67BC2CD2EEBC234D6E03E125122CC8730B5C * get__values_16() const { return ____values_16; }
	inline List_1_t29FF67BC2CD2EEBC234D6E03E125122CC8730B5C ** get_address_of__values_16() { return &____values_16; }
	inline void set__values_16(List_1_t29FF67BC2CD2EEBC234D6E03E125122CC8730B5C * value)
	{
		____values_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_16), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JObject
struct  JObject_t786AF07B1009334856B0362BBC48EEF68C81C585  : public JContainer_tF4CD2E574503C709DEF18A04B79B264B83746DAB
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t013DFBF6A88616F3C011C00B60291F2EAB75483D * ____properties_16;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * ___PropertyChanged_17;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_tEE60268216C5CB90375F55934CCCDEF654BA7EA3 * ___PropertyChanging_18;

public:
	inline static int32_t get_offset_of__properties_16() { return static_cast<int32_t>(offsetof(JObject_t786AF07B1009334856B0362BBC48EEF68C81C585, ____properties_16)); }
	inline JPropertyKeyedCollection_t013DFBF6A88616F3C011C00B60291F2EAB75483D * get__properties_16() const { return ____properties_16; }
	inline JPropertyKeyedCollection_t013DFBF6A88616F3C011C00B60291F2EAB75483D ** get_address_of__properties_16() { return &____properties_16; }
	inline void set__properties_16(JPropertyKeyedCollection_t013DFBF6A88616F3C011C00B60291F2EAB75483D * value)
	{
		____properties_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_16), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_17() { return static_cast<int32_t>(offsetof(JObject_t786AF07B1009334856B0362BBC48EEF68C81C585, ___PropertyChanged_17)); }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * get_PropertyChanged_17() const { return ___PropertyChanged_17; }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 ** get_address_of_PropertyChanged_17() { return &___PropertyChanged_17; }
	inline void set_PropertyChanged_17(PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * value)
	{
		___PropertyChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_17), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_18() { return static_cast<int32_t>(offsetof(JObject_t786AF07B1009334856B0362BBC48EEF68C81C585, ___PropertyChanging_18)); }
	inline PropertyChangingEventHandler_tEE60268216C5CB90375F55934CCCDEF654BA7EA3 * get_PropertyChanging_18() const { return ___PropertyChanging_18; }
	inline PropertyChangingEventHandler_tEE60268216C5CB90375F55934CCCDEF654BA7EA3 ** get_address_of_PropertyChanging_18() { return &___PropertyChanging_18; }
	inline void set_PropertyChanging_18(PropertyChangingEventHandler_tEE60268216C5CB90375F55934CCCDEF654BA7EA3 * value)
	{
		___PropertyChanging_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_18), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// MetaWeariOSUnity_MessageReceiver
struct  MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// MetaWeariOSUnity
struct  MetaWeariOSUnity_tE0EA63F75413E24C17D5204F83B18B6C1F58FC8D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// iOSMessageReceiver
struct  iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_StaticFields
{
public:
	// iOSMessageReceiver iOSMessageReceiver::_instance
	iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654 * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_StaticFields, ____instance_4)); }
	inline iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654 * get__instance_4() const { return ____instance_4; }
	inline iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_m6654F8303765DC1E5F85838DF717F78591489B53_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_Value_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFDA0103FD7D2695561560B82EADA05C57D842AFB_gshared (RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// System.Void DeviceCard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCard__ctor_mB95AE5C5BFB661A4AEF8D725AEEAC0C3305E3182 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * JObject_get_Item_mF8AF0E8D461E4BFCC1A1D46F54A5E120A8744742 (JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_mD91A9B85F9FD8D044137D3187CB3530F9EB0F358 (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisRuntimeObject_m6654F8303765DC1E5F85838DF717F78591489B53_gshared)(p0, method);
}
// System.Void DeviceCard::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCard_set_id_m282E354CF4A4A0E3407F1EFDEBAD60046BD10037 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String DeviceCard::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeviceCard_get_id_m9AC5D3AB4ED36D0EDC7BD94A7ACDEF3595CCCA3F (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void DeviceCard::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCard_set_name_m65C2AD7E6F2AC88B85702FE2777F6BE22A34C798 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String DeviceCard::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeviceCard_get_name_m2AFA16EEAB98AD52727AB6715A20755CDB266273 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline int32_t Extensions_Value_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFDA0103FD7D2695561560B82EADA05C57D842AFB (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFDA0103FD7D2695561560B82EADA05C57D842AFB_gshared)(p0, method);
}
// System.Void DeviceCard::set_signalStrength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCard_set_signalStrength_m1020D38875C5B8ADC5FA4A95588EFCEB1232A7BB (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 DeviceCard::get_signalStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeviceCard_get_signalStrength_m135E549CDB0FFD60CA3D57204514632F837F2F49 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.Void DeviceCard::set_signalTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCard_set_signalTime_m1C1628C977CAF0FC3AA405D7FA888B2EA8EA80AE (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void MetaWeariOSUnity::ProcessIosMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_ProcessIosMessage_m70BA4887E6C603C8BD442CA1B21D63ED85E32AF0 (String_t* ___subject0, String_t* ___content1, const RuntimeMethod* method);
// System.Void MetaWeariOSUnity::ios_scanForNewDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_ios_scanForNewDevices_mA358E0B1966F02596FECA5D425282437A0B25287 (const RuntimeMethod* method);
// System.Void MetaWeariOSUnity::ios_scanForKnownDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_ios_scanForKnownDevices_m7F2E5FD900AD328C1C7A50AA574690D82428B703 (const RuntimeMethod* method);
// System.Void MetaWeariOSUnity::ios_startFlashingDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_ios_startFlashingDevice_mA72791C03DC9B62B755CB0F09ADE9428E85BFC0A (String_t* ___deviceId0, const RuntimeMethod* method);
// System.Void MetaWeariOSUnity/MessageReceiver::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceiver__ctor_m81331F60979C5940A551A168B1D6B522F431AF59 (MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MetaWeariOSUnity::ios_setCallbackReceiver(MetaWeariOSUnity/MessageReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_ios_setCallbackReceiver_mD2989FC753FAFFE4943AC29DA768EE2CD0D5F7E3 (MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954 * ___listener0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<DeviceCard>::.ctor()
inline void List_1__ctor_mBC32F9E9D15C57CCB05B208CFCBB4C254BC9C3C0 (List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * JObject_Parse_m77E4A7623A3E26AF750080CB1D186211386DFA48 (String_t* p0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JArray_GetEnumerator_mF5F5CACC1928A37D5551BFA2D8D6B7E805957822 (JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 * __this, const RuntimeMethod* method);
// DeviceCard DeviceCard::fromIosSerialised(Newtonsoft.Json.Linq.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * DeviceCard_fromIosSerialised_m6D17407CEE070BA9579EF91BAF320C36B66AA94D (JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * ___serialised0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<DeviceCard>::Add(!0)
inline void List_1_Add_m602D3DDCDE4D203D2F49632DFBF2C7E95C49E141 (List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * __this, DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 *, DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<iOSMessageReceiver>()
inline iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654 * GameObject_AddComponent_TisiOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_m8B90E23F458A26FE94EBF513F7590DE8A17988BB (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
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
// System.String DeviceCard::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeviceCard_get_id_m9AC5D3AB4ED36D0EDC7BD94A7ACDEF3595CCCA3F (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void DeviceCard::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCard_set_id_m282E354CF4A4A0E3407F1EFDEBAD60046BD10037 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String DeviceCard::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeviceCard_get_name_m2AFA16EEAB98AD52727AB6715A20755CDB266273 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CnameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void DeviceCard::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCard_set_name_m65C2AD7E6F2AC88B85702FE2777F6BE22A34C798 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CnameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 DeviceCard::get_signalStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeviceCard_get_signalStrength_m135E549CDB0FFD60CA3D57204514632F837F2F49 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CsignalStrengthU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void DeviceCard::set_signalStrength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCard_set_signalStrength_m1020D38875C5B8ADC5FA4A95588EFCEB1232A7BB (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CsignalStrengthU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.DateTime DeviceCard::get_signalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DeviceCard_get_signalTime_m2B05E0A3A2C7201820B958233D657AE2CEF86FC0 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_U3CsignalTimeU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void DeviceCard::set_signalTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCard_set_signalTime_m1C1628C977CAF0FC3AA405D7FA888B2EA8EA80AE (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = ___value0;
		__this->set_U3CsignalTimeU3Ek__BackingField_3(L_0);
		return;
	}
}
// DeviceCard DeviceCard::fromIosSerialised(Newtonsoft.Json.Linq.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * DeviceCard_fromIosSerialised_m6D17407CEE070BA9579EF91BAF320C36B66AA94D (JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * ___serialised0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeviceCard_fromIosSerialised_m6D17407CEE070BA9579EF91BAF320C36B66AA94D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * V_0 = NULL;
	{
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_0 = (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 *)il2cpp_codegen_object_new(DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16_il2cpp_TypeInfo_var);
		DeviceCard__ctor_mB95AE5C5BFB661A4AEF8D725AEEAC0C3305E3182(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_1 = V_0;
		JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_2 = ___serialised0;
		NullCheck(L_2);
		JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_3 = JObject_get_Item_mF8AF0E8D461E4BFCC1A1D46F54A5E120A8744742(L_2, _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547, /*hidden argument*/NULL);
		String_t* L_4 = Extensions_Value_TisString_t_mD91A9B85F9FD8D044137D3187CB3530F9EB0F358(L_3, /*hidden argument*/Extensions_Value_TisString_t_mD91A9B85F9FD8D044137D3187CB3530F9EB0F358_RuntimeMethod_var);
		NullCheck(L_1);
		DeviceCard_set_id_m282E354CF4A4A0E3407F1EFDEBAD60046BD10037(L_1, L_4, /*hidden argument*/NULL);
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = DeviceCard_get_id_m9AC5D3AB4ED36D0EDC7BD94A7ACDEF3595CCCA3F(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral1E1D9D8555B2C9C17AA8743D6F44E4703C874F1A, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_8 = V_0;
		JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_9 = ___serialised0;
		NullCheck(L_9);
		JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_10 = JObject_get_Item_mF8AF0E8D461E4BFCC1A1D46F54A5E120A8744742(L_9, _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, /*hidden argument*/NULL);
		String_t* L_11 = Extensions_Value_TisString_t_mD91A9B85F9FD8D044137D3187CB3530F9EB0F358(L_10, /*hidden argument*/Extensions_Value_TisString_t_mD91A9B85F9FD8D044137D3187CB3530F9EB0F358_RuntimeMethod_var);
		NullCheck(L_8);
		DeviceCard_set_name_m65C2AD7E6F2AC88B85702FE2777F6BE22A34C798(L_8, L_11, /*hidden argument*/NULL);
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = DeviceCard_get_name_m2AFA16EEAB98AD52727AB6715A20755CDB266273(L_12, /*hidden argument*/NULL);
		String_t* L_14 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralDB59DC789C2C7496C9B078058316B55A8EB85A5D, L_13, /*hidden argument*/NULL);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_14, /*hidden argument*/NULL);
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_15 = V_0;
		JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_16 = ___serialised0;
		NullCheck(L_16);
		JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_17 = JObject_get_Item_mF8AF0E8D461E4BFCC1A1D46F54A5E120A8744742(L_16, _stringLiteralE2DD208E6EE19DB2DDC63FC676717375A20D7427, /*hidden argument*/NULL);
		int32_t L_18 = Extensions_Value_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFDA0103FD7D2695561560B82EADA05C57D842AFB(L_17, /*hidden argument*/Extensions_Value_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFDA0103FD7D2695561560B82EADA05C57D842AFB_RuntimeMethod_var);
		NullCheck(L_15);
		DeviceCard_set_signalStrength_m1020D38875C5B8ADC5FA4A95588EFCEB1232A7BB(L_15, L_18, /*hidden argument*/NULL);
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = DeviceCard_get_signalStrength_m135E549CDB0FFD60CA3D57204514632F837F2F49(L_19, /*hidden argument*/NULL);
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralB6EE8A01FA2130888D94B5FA1AF5BD2F1FD6FC6E, L_22, /*hidden argument*/NULL);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_23, /*hidden argument*/NULL);
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_25 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		NullCheck(L_24);
		DeviceCard_set_signalTime_m1C1628C977CAF0FC3AA405D7FA888B2EA8EA80AE(L_24, L_25, /*hidden argument*/NULL);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral9575EE8FCD40AB9ADD4D9F6679A75E5CFF463E2C, /*hidden argument*/NULL);
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_26 = V_0;
		return L_26;
	}
}
// System.Void DeviceCard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCard__ctor_mB95AE5C5BFB661A4AEF8D725AEEAC0C3305E3182 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MetaWeariOSUnity_ProcessIosMessage_m70BA4887E6C603C8BD442CA1B21D63ED85E32AF0(char* ___subject0, char* ___content1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___subject0U27 to managed representation
	String_t* ____subject0_unmarshaled = NULL;
	____subject0_unmarshaled = il2cpp_codegen_marshal_string_result(___subject0);

	// Marshaling of parameter U27___content1U27 to managed representation
	String_t* ____content1_unmarshaled = NULL;
	____content1_unmarshaled = il2cpp_codegen_marshal_string_result(___content1);

	// Managed method invocation
	MetaWeariOSUnity_ProcessIosMessage_m70BA4887E6C603C8BD442CA1B21D63ED85E32AF0(____subject0_unmarshaled, ____content1_unmarshaled, NULL);

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ios_scanForNewDevices();
#endif
// System.Void MetaWeariOSUnity::ios_scanForNewDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_ios_scanForNewDevices_mA358E0B1966F02596FECA5D425282437A0B25287 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ios_scanForNewDevices)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ios_scanForKnownDevices();
#endif
// System.Void MetaWeariOSUnity::ios_scanForKnownDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_ios_scanForKnownDevices_m7F2E5FD900AD328C1C7A50AA574690D82428B703 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ios_scanForKnownDevices)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ios_startFlashingDevice(char*);
#endif
// System.Void MetaWeariOSUnity::ios_startFlashingDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_ios_startFlashingDevice_mA72791C03DC9B62B755CB0F09ADE9428E85BFC0A (String_t* ___deviceId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter U27___deviceId0U27 to native representation
	char* ____deviceId0_marshaled = NULL;
	____deviceId0_marshaled = il2cpp_codegen_marshal_string(___deviceId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ios_startFlashingDevice)(____deviceId0_marshaled);

	// Marshaling cleanup of parameter U27___deviceId0U27 native representation
	il2cpp_codegen_marshal_free(____deviceId0_marshaled);
	____deviceId0_marshaled = NULL;

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ios_setCallbackReceiver(Il2CppMethodPointer);
#endif
// System.Void MetaWeariOSUnity::ios_setCallbackReceiver(MetaWeariOSUnity_MessageReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_ios_setCallbackReceiver_mD2989FC753FAFFE4943AC29DA768EE2CD0D5F7E3 (MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954 * ___listener0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter U27___listener0U27 to native representation
	Il2CppMethodPointer ____listener0_marshaled = NULL;
	____listener0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___listener0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ios_setCallbackReceiver)(____listener0_marshaled);

}
// System.Void MetaWeariOSUnity::ScanForNewDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_ScanForNewDevices_m038D996FE97ABDF71F2DDC1CEA4ABC316707A231 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWeariOSUnity_ScanForNewDevices_m038D996FE97ABDF71F2DDC1CEA4ABC316707A231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MetaWeariOSUnity_tE0EA63F75413E24C17D5204F83B18B6C1F58FC8D_il2cpp_TypeInfo_var);
		MetaWeariOSUnity_ios_scanForNewDevices_mA358E0B1966F02596FECA5D425282437A0B25287(/*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWeariOSUnity::ScanForKnownDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_ScanForKnownDevices_m3996C5B38F5A4D017CB5E192793C94686871D290 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWeariOSUnity_ScanForKnownDevices_m3996C5B38F5A4D017CB5E192793C94686871D290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MetaWeariOSUnity_tE0EA63F75413E24C17D5204F83B18B6C1F58FC8D_il2cpp_TypeInfo_var);
		MetaWeariOSUnity_ios_scanForKnownDevices_m7F2E5FD900AD328C1C7A50AA574690D82428B703(/*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWeariOSUnity::StartFlashingDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_StartFlashingDevice_m0DAF67A557CC36F0D0927DA67953E9E9C0EA01BC (String_t* ___deviceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWeariOSUnity_StartFlashingDevice_m0DAF67A557CC36F0D0927DA67953E9E9C0EA01BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___deviceId0;
		IL2CPP_RUNTIME_CLASS_INIT(MetaWeariOSUnity_tE0EA63F75413E24C17D5204F83B18B6C1F58FC8D_il2cpp_TypeInfo_var);
		MetaWeariOSUnity_ios_startFlashingDevice_mA72791C03DC9B62B755CB0F09ADE9428E85BFC0A(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWeariOSUnity::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity__cctor_m98ACD84C71D930ADD9BBDE6844189DBC1F9EED62 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWeariOSUnity__cctor_m98ACD84C71D930ADD9BBDE6844189DBC1F9EED62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954 * L_0 = (MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954 *)il2cpp_codegen_object_new(MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954_il2cpp_TypeInfo_var);
		MessageReceiver__ctor_m81331F60979C5940A551A168B1D6B522F431AF59(L_0, NULL, (intptr_t)((intptr_t)MetaWeariOSUnity_ProcessIosMessage_m70BA4887E6C603C8BD442CA1B21D63ED85E32AF0_RuntimeMethod_var), /*hidden argument*/NULL);
		MetaWeariOSUnity_ios_setCallbackReceiver_mD2989FC753FAFFE4943AC29DA768EE2CD0D5F7E3(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWeariOSUnity::ProcessIosMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_ProcessIosMessage_m70BA4887E6C603C8BD442CA1B21D63ED85E32AF0 (String_t* ___subject0, String_t* ___content1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWeariOSUnity_ProcessIosMessage_m70BA4887E6C603C8BD442CA1B21D63ED85E32AF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * V_0 = NULL;
	JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 * V_1 = NULL;
	JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___subject0;
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteral6CCCD026A25D8CB3E30F1BC64A73E86B4B10F6DC, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_2 = ___subject0;
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteral6B05A59CAD7754B921DBD229F8E680EEA812F8C1, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 1;
	}

IL_001b:
	{
		if (!G_B3_0)
		{
			goto IL_00a7;
		}
	}
	{
		List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * L_4 = (List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 *)il2cpp_codegen_object_new(List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244_il2cpp_TypeInfo_var);
		List_1__ctor_mBC32F9E9D15C57CCB05B208CFCBB4C254BC9C3C0(L_4, /*hidden argument*/List_1__ctor_mBC32F9E9D15C57CCB05B208CFCBB4C254BC9C3C0_RuntimeMethod_var);
		V_0 = L_4;
		String_t* L_5 = ___content1;
		JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_6 = JObject_Parse_m77E4A7623A3E26AF750080CB1D186211386DFA48(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_7 = JObject_get_Item_mF8AF0E8D461E4BFCC1A1D46F54A5E120A8744742(L_6, _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD, /*hidden argument*/NULL);
		V_1 = ((JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 *)IsInstClass((RuntimeObject*)L_7, JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11_il2cpp_TypeInfo_var));
		JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 * L_8 = V_1;
		NullCheck(L_8);
		JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_9 = VirtFuncInvoker0< JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * >::Invoke(15 /* Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::get_First() */, L_8);
		V_2 = L_9;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralFCCFDDF7F7F122F2D295402F51497237C19F2917);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralFCCFDDF7F7F122F2D295402F51497237C19F2917);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_13 = V_2;
		NullCheck(L_13);
		Type_t * L_14 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral89222ECC0288C8C8BFA606DCD96270908B88FA42);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral89222ECC0288C8C8BFA606DCD96270908B88FA42);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_15;
		JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_17 = V_2;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_17);
		String_t* L_18 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_16, /*hidden argument*/NULL);
		MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774(L_18, /*hidden argument*/NULL);
		JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 * L_19 = V_1;
		NullCheck(L_19);
		RuntimeObject* L_20 = JArray_GetEnumerator_mF5F5CACC1928A37D5551BFA2D8D6B7E805957822(L_19, /*hidden argument*/NULL);
		V_3 = L_20;
	}

IL_0077:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0079:
		{
			RuntimeObject* L_21 = V_3;
			NullCheck(L_21);
			JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_22 = InterfaceFuncInvoker0< JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_tA3DFFFD6133C0C5607FFA19B3E4E7395E872113C_il2cpp_TypeInfo_var, L_21);
			V_4 = L_22;
			List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * L_23 = V_0;
			JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_24 = V_4;
			DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_25 = DeviceCard_fromIosSerialised_m6D17407CEE070BA9579EF91BAF320C36B66AA94D(((JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 *)IsInstClass((RuntimeObject*)L_24, JObject_t786AF07B1009334856B0362BBC48EEF68C81C585_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			NullCheck(L_23);
			List_1_Add_m602D3DDCDE4D203D2F49632DFBF2C7E95C49E141(L_23, L_25, /*hidden argument*/List_1_Add_m602D3DDCDE4D203D2F49632DFBF2C7E95C49E141_RuntimeMethod_var);
		}

IL_0093:
		{
			RuntimeObject* L_26 = V_3;
			NullCheck(L_26);
			bool L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_26);
			if (L_27)
			{
				goto IL_0079;
			}
		}

IL_009b:
		{
			IL2CPP_LEAVE(0xBD, FINALLY_009d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009d;
	}

FINALLY_009d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_28 = V_3;
			if (!L_28)
			{
				goto IL_00a6;
			}
		}

IL_00a0:
		{
			RuntimeObject* L_29 = V_3;
			NullCheck(L_29);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_29);
		}

IL_00a6:
		{
			IL2CPP_RESET_LEAVE(0xBD);
			IL2CPP_END_FINALLY(157)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(157)
	{
		IL2CPP_JUMP_TBL(0xBD, IL_00bd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a7:
	{
		String_t* L_30 = ___subject0;
		String_t* L_31 = ___content1;
		String_t* L_32 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteralF0DB24E44F63002A7AF891222D783F3C0C9392BE, L_30, _stringLiteralD965050D70187FFF0BDFECDF3D67928DE5867AD7, L_31, /*hidden argument*/NULL);
		MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774(L_32, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		return;
	}
}
// System.Collections.Generic.List`1<System.String> MetaWeariOSUnity::ListFromJson(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * MetaWeariOSUnity_ListFromJson_mB40B3B79A096839B1F2A8A9C9EA27A3C4352E2AF (String_t* ___data0, String_t* ___listFieldName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWeariOSUnity_ListFromJson_mB40B3B79A096839B1F2A8A9C9EA27A3C4352E2AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_0, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void MetaWeariOSUnity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity__ctor_m1448265D85BE85D22D429574E57FC0ED1647880C (MetaWeariOSUnity_tE0EA63F75413E24C17D5204F83B18B6C1F58FC8D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954 (MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954 * __this, String_t* ___topic0, String_t* ___message1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter U27___topic0U27 to native representation
	char* ____topic0_marshaled = NULL;
	____topic0_marshaled = il2cpp_codegen_marshal_string(___topic0);

	// Marshaling of parameter U27___message1U27 to native representation
	char* ____message1_marshaled = NULL;
	____message1_marshaled = il2cpp_codegen_marshal_string(___message1);

	// Native function invocation
	il2cppPInvokeFunc(____topic0_marshaled, ____message1_marshaled);

	// Marshaling cleanup of parameter U27___topic0U27 native representation
	il2cpp_codegen_marshal_free(____topic0_marshaled);
	____topic0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___message1U27 native representation
	il2cpp_codegen_marshal_free(____message1_marshaled);
	____message1_marshaled = NULL;

}
// System.Void MetaWeariOSUnity_MessageReceiver::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceiver__ctor_m81331F60979C5940A551A168B1D6B522F431AF59 (MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MetaWeariOSUnity_MessageReceiver::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceiver_Invoke_mE4E51823126288122D4A76D2AED853D71139CBD9 (MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954 * __this, String_t* ___topic0, String_t* ___message1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___topic0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___topic0, ___message1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___topic0, ___message1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___topic0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___topic0, ___message1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___topic0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___topic0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___topic0, ___message1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___topic0, ___message1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___topic0, ___message1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___topic0, ___message1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___topic0, ___message1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___topic0, ___message1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MetaWeariOSUnity_MessageReceiver::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageReceiver_BeginInvoke_mA421B1980C47A05CA054F5A29E706F4E80FBC08E (MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954 * __this, String_t* ___topic0, String_t* ___message1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___topic0;
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void MetaWeariOSUnity_MessageReceiver::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceiver_EndInvoke_mFE58B0C88B7312BC87E44C8B64C6D6DDF2121C62 (MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MetaWeariOSUnity_MessageSubjects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSubjects__ctor_m5E39EC85FF218317DCB48B348E8EFFC15D3FC9DE (MessageSubjects_t285C889FBD987EF10774ED1092003335ECC18556 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageSubjects__ctor_m5E39EC85FF218317DCB48B348E8EFFC15D3FC9DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_acceleratorData_0(_stringLiteralA4CD7B522EA818E01A99E31500EFFC64F6D31C15);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// iOSMessageReceiver iOSMessageReceiver::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654 * iOSMessageReceiver_get_instance_m68D3B5B648CE2B772D449B7B2C2EF6626F66F8F3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSMessageReceiver_get_instance_m68D3B5B648CE2B772D449B7B2C2EF6626F66F8F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654 * L_0 = ((iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_StaticFields*)il2cpp_codegen_static_fields_for(iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_2, _stringLiteralC32782643F86448DD0CF8F2A6E1B2A3F7AA0CCAB, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_AddComponent_TisiOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_m8B90E23F458A26FE94EBF513F7590DE8A17988BB(L_2, /*hidden argument*/GameObject_AddComponent_TisiOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_m8B90E23F458A26FE94EBF513F7590DE8A17988BB_RuntimeMethod_var);
	}

IL_001d:
	{
		iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654 * L_3 = ((iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_StaticFields*)il2cpp_codegen_static_fields_for(iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_il2cpp_TypeInfo_var))->get__instance_4();
		return L_3;
	}
}
// System.Void iOSMessageReceiver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSMessageReceiver_Awake_m0E78739D5E9876B702D0219CD83179FF8C89889C (iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSMessageReceiver_Awake_m0E78739D5E9876B702D0219CD83179FF8C89889C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654 * L_0 = ((iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_StaticFields*)il2cpp_codegen_static_fields_for(iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_il2cpp_TypeInfo_var))->get__instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		((iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_StaticFields*)il2cpp_codegen_static_fields_for(iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_il2cpp_TypeInfo_var))->set__instance_4(__this);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iOSMessageReceiver::onMessageFromiOS(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSMessageReceiver_onMessageFromiOS_m72A95A6FE316B9190907901DDC100B71A908911B (iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654 * __this, String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (iOSMessageReceiver_onMessageFromiOS_m72A95A6FE316B9190907901DDC100B71A908911B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json0;
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral98AD5D23586C10E2597C734246CEA2660F96F7E8, L_0, /*hidden argument*/NULL);
		MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void iOSMessageReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSMessageReceiver__ctor_m30A0E2119C4FE3F9C745996326AB491C80EF0BB8 (iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

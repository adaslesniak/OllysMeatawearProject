#include "il2cpp-config.h"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// DeviceCard
struct DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16;
// DeviceCard[]
struct DeviceCardU5BU5D_t8EAFCB0E66E919372690BE9EFB19C39B59E2C116;
// MetaWearNative
struct MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287;
// MetaWearNative/MessageReceiver
struct MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C;
// MetaWearNative/MessageSubjects
struct MessageSubjects_t91309CF9049FB8FFB0CE91067A46393662D25F18;
// MetaWearNative/VoidWithDeviceCards
struct VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE;
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
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;

IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA3DFFFD6133C0C5607FFA19B3E4E7395E872113C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t786AF07B1009334856B0362BBC48EEF68C81C585_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08978886DEFAF5ABA2F28E11E2378BDC5BE800E6;
IL2CPP_EXTERN_C String_t* _stringLiteral091385BE99B45F459A231582D583EC9F3FA3D194;
IL2CPP_EXTERN_C String_t* _stringLiteral4C10E261F4AFB978699EB377C823EB45CBEB0365;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9A82CE72CA2519F38D0AF0ABBB4CECB9FCECA9;
IL2CPP_EXTERN_C String_t* _stringLiteral4ED7EAAD395DD81505888EBCD0BD63416D407B38;
IL2CPP_EXTERN_C String_t* _stringLiteral66560884E0ED2078CBBE79F4EADCA71ADAE84723;
IL2CPP_EXTERN_C String_t* _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C;
IL2CPP_EXTERN_C String_t* _stringLiteral6B05A59CAD7754B921DBD229F8E680EEA812F8C1;
IL2CPP_EXTERN_C String_t* _stringLiteral6CCCD026A25D8CB3E30F1BC64A73E86B4B10F6DC;
IL2CPP_EXTERN_C String_t* _stringLiteral71F8E7976E4CBC4561C9D62FB283E7F788202ACB;
IL2CPP_EXTERN_C String_t* _stringLiteral78988010B890CE6F4D2136481F392787EC6D6106;
IL2CPP_EXTERN_C String_t* _stringLiteral7C537E5966C8BD26C48225C20935756C63AF5A3F;
IL2CPP_EXTERN_C String_t* _stringLiteral7DDD8F15567763EA0429A4B93B90D2A732DB7B45;
IL2CPP_EXTERN_C String_t* _stringLiteral8131D2FF239E771247C0577DF864163B749FF518;
IL2CPP_EXTERN_C String_t* _stringLiteral8732F91E94782290F8F85CF2814F082013C33C2E;
IL2CPP_EXTERN_C String_t* _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547;
IL2CPP_EXTERN_C String_t* _stringLiteralA05252FC2198C4CA4CC293F8318AAA9389B66EFE;
IL2CPP_EXTERN_C String_t* _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD;
IL2CPP_EXTERN_C String_t* _stringLiteralA4CD7B522EA818E01A99E31500EFFC64F6D31C15;
IL2CPP_EXTERN_C String_t* _stringLiteralB78DA89BD945BBBF7FE4233E0651B0354488EE87;
IL2CPP_EXTERN_C String_t* _stringLiteralBC74F4F071A5A33F00AB88A6D6385B5E6638B86C;
IL2CPP_EXTERN_C String_t* _stringLiteralD87C448044DEFB778F33158D8CCF94A20531D600;
IL2CPP_EXTERN_C String_t* _stringLiteralD965050D70187FFF0BDFECDF3D67928DE5867AD7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2DD208E6EE19DB2DDC63FC676717375A20D7427;
IL2CPP_EXTERN_C String_t* _stringLiteralF0DB24E44F63002A7AF891222D783F3C0C9392BE;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFDA0103FD7D2695561560B82EADA05C57D842AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_mD91A9B85F9FD8D044137D3187CB3530F9EB0F358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m602D3DDCDE4D203D2F49632DFBF2C7E95C49E141_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBC32F9E9D15C57CCB05B208CFCBB4C254BC9C3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m88CABD299715B67894E9CDDDDE1ADE364D10F8C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetaWearNative_ProcessIosMessage_m9E9D779D05DC91BAA4CA084E3AE91685E1C6F1BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DeviceCard_fromIosSerialised_m6D17407CEE070BA9579EF91BAF320C36B66AA94D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MessageSubjects__ctor_m41BFD80695A58503ACEA13D8156881399DB85AA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_DisconnectAllDevices_m8FD74C145E1E10095877823B41F1FBA9D29EB5D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_DisconnectDevice_m6A7446C039A549D13F8364BBAA706A18610C2776_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_ForgetAllRememberdDevices_m70CBC28D2E720921AF81436B768D71E0003BB46C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_LedColorCode_m8170EFAFA718EDB3D29C9E513F7AEFA99C4E9D3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_ProcessIosMessage_m9E9D779D05DC91BAA4CA084E3AE91685E1C6F1BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_RememberDevice_m2AFFF7C88CF5F29B4DCF783EAC482D3674B15C5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_ScanForKnownDevices_mE0BE23631DC7BFCF170A69DC808248B16E27C59D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_ScanForNewDevices_m59AB7E2569E777BC01002D2B46981034D0F4AE73_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_StartAccelerometerStream_m15F15B5595F92E06827CA7ED0C3ED7941EB85DE9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_StartDeviceLed_mAB0F6DB18C7A7B21FF0C5C49AE43652B0B404714_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_StartFlashingDevice_m8854A03FF6E556D5D2A6E6B2342BDAF5E06DFD2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_StartSensorFusionStream_m00B16A06845A318B4AA84F4AECA55D32E82A5D05_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_StopAccelerometerStream_m9347B74549BDCF4575FD6DB701B1C0E2B9341815_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_StopDeviceLeds_m38FD70457E7BE829F970756C3DD4683F2FCFBE44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_StopSensorFusionStream_mD2057F3A0EF213474491E71775E747940FB1D487_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative__cctor_mF7693C64EEE8281967AC8C2FD2E501D08762391A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_add_onKnowDevicesScaned_m5E2A35B679D39D00967C49426984EB5B092288AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_add_onNewDevicesScaned_m5658362A8D46052A7BBA10248ECA2FDB0DD7C3C6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_remove_onKnowDevicesScaned_m0EA89C39B1073EEDAD3E702F1B8D94AA02434DAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetaWearNative_remove_onNewDevicesScaned_m6D09CFDCD2EF7E356AA910024100E09541633D24_MetadataUsageId;
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


// MetaWearNative_MessageSubjects
struct  MessageSubjects_t91309CF9049FB8FFB0CE91067A46393662D25F18  : public RuntimeObject
{
public:
	// System.String MetaWearNative_MessageSubjects::acceleratorData
	String_t* ___acceleratorData_0;

public:
	inline static int32_t get_offset_of_acceleratorData_0() { return static_cast<int32_t>(offsetof(MessageSubjects_t91309CF9049FB8FFB0CE91067A46393662D25F18, ___acceleratorData_0)); }
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


// MetaWearNative_LedColors
struct  LedColors_t24F1D028387467BD74F559B2AF7E242C0D185A52 
{
public:
	// System.Int32 MetaWearNative_LedColors::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LedColors_t24F1D028387467BD74F559B2AF7E242C0D185A52, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.LogType
struct  LogType_t6B6C6234E8B44B73937581ACFBE15DE28227849D 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_t6B6C6234E8B44B73937581ACFBE15DE28227849D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.StackTraceLogType
struct  StackTraceLogType_t79D1449B0F10BC06A02E06EF9C63C7D1098A806E 
{
public:
	// System.Int32 UnityEngine.StackTraceLogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StackTraceLogType_t79D1449B0F10BC06A02E06EF9C63C7D1098A806E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// MetaWearNative_MessageReceiver
struct  MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C  : public MulticastDelegate_t
{
public:

public:
};


// MetaWearNative_VoidWithDeviceCards
struct  VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE  : public MulticastDelegate_t
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


// MetaWearNative
struct  MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_StaticFields
{
public:
	// MetaWearNative_VoidWithDeviceCards MetaWearNative::onNewDevicesScaned
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * ___onNewDevicesScaned_4;
	// MetaWearNative_VoidWithDeviceCards MetaWearNative::onKnowDevicesScaned
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * ___onKnowDevicesScaned_5;

public:
	inline static int32_t get_offset_of_onNewDevicesScaned_4() { return static_cast<int32_t>(offsetof(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_StaticFields, ___onNewDevicesScaned_4)); }
	inline VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * get_onNewDevicesScaned_4() const { return ___onNewDevicesScaned_4; }
	inline VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE ** get_address_of_onNewDevicesScaned_4() { return &___onNewDevicesScaned_4; }
	inline void set_onNewDevicesScaned_4(VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * value)
	{
		___onNewDevicesScaned_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onNewDevicesScaned_4), (void*)value);
	}

	inline static int32_t get_offset_of_onKnowDevicesScaned_5() { return static_cast<int32_t>(offsetof(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_StaticFields, ___onKnowDevicesScaned_5)); }
	inline VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * get_onKnowDevicesScaned_5() const { return ___onKnowDevicesScaned_5; }
	inline VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE ** get_address_of_onKnowDevicesScaned_5() { return &___onKnowDevicesScaned_5; }
	inline void set_onKnowDevicesScaned_5(VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * value)
	{
		___onKnowDevicesScaned_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onKnowDevicesScaned_5), (void*)value);
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
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);

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
// System.Void DeviceCard::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCard_set_name_m65C2AD7E6F2AC88B85702FE2777F6BE22A34C798 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline int32_t Extensions_Value_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFDA0103FD7D2695561560B82EADA05C57D842AFB (RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFDA0103FD7D2695561560B82EADA05C57D842AFB_gshared)(p0, method);
}
// System.Void DeviceCard::set_signalStrength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCard_set_signalStrength_m1020D38875C5B8ADC5FA4A95588EFCEB1232A7BB (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2 (const RuntimeMethod* method);
// System.Void DeviceCard::set_signalTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCard_set_signalTime_m1C1628C977CAF0FC3AA405D7FA888B2EA8EA80AE (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void MetaWearNative::ProcessIosMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ProcessIosMessage_m9E9D779D05DC91BAA4CA084E3AE91685E1C6F1BD (String_t* ___subject0, String_t* ___content1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void MetaWearNative::ios_scanForNewDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_scanForNewDevices_m85CC8AAA64D719917F2DD70369E020E809C2152A (const RuntimeMethod* method);
// System.Void MetaWearNative::ios_scanForKnownDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_scanForKnownDevices_m74B8FDFDF2F8121E4639D9E49CC26878FA020F94 (const RuntimeMethod* method);
// System.String DeviceCard::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeviceCard_get_id_m9AC5D3AB4ED36D0EDC7BD94A7ACDEF3595CCCA3F (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * __this, const RuntimeMethod* method);
// System.Void MetaWearNative::ios_startFlashingDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_startFlashingDevice_m747BE2E3233DAD47A33E98279C35D843F43880BA (String_t* ___deviceId0, const RuntimeMethod* method);
// System.String MetaWearNative::LedColorCode(MetaWearNative/LedColors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaWearNative_LedColorCode_m8170EFAFA718EDB3D29C9E513F7AEFA99C4E9D3D (int32_t ___forColor0, const RuntimeMethod* method);
// System.Void MetaWearNative::ios_turnDeviceLedOn(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_turnDeviceLedOn_mBE1B910E222D9D92211D0E9D1D780B65F3093121 (String_t* ___deviceId0, String_t* ___colorsCode1, const RuntimeMethod* method);
// System.Void MetaWearNative::ios_stopDeviceLeds(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_stopDeviceLeds_m18799FC7759C72683B265BD0A90B1690BA776738 (String_t* ___deviceI0, String_t* ___colorsCode1, const RuntimeMethod* method);
// System.Void MetaWearNative::ios_rememberDevice(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_rememberDevice_mFEA32D979247BD04577956AF0EB62694CE5E0702 (String_t* ___deviceId0, String_t* ___name1, const RuntimeMethod* method);
// System.Void MetaWearNative::ios_forgetRememberedDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_forgetRememberedDevices_m864F71318DB4A2BF72B6373BFEDF220092F1EDE4 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::SetStackTraceLogType(UnityEngine.LogType,UnityEngine.StackTraceLogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_SetStackTraceLogType_m0E7F71F07C77A92CD88DD0F4A0BFD881AE4F1692 (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void MetaWearNative/MessageReceiver::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceiver__ctor_m9C8BE67A0FF9774EFDA9B80441BC6E3FFBB68AEE (MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MetaWearNative::ios_setCallbackReceiver(MetaWearNative/MessageReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_setCallbackReceiver_m7DCDF1CF336A726AE3EE6F4DA728196F19929BEB (MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C * ___listener0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<DeviceCard>::.ctor()
inline void List_1__ctor_mBC32F9E9D15C57CCB05B208CFCBB4C254BC9C3C0 (List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * JObject_Parse_m77E4A7623A3E26AF750080CB1D186211386DFA48 (String_t* p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JArray_GetEnumerator_mF5F5CACC1928A37D5551BFA2D8D6B7E805957822 (JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 * __this, const RuntimeMethod* method);
// DeviceCard DeviceCard::fromIosSerialised(Newtonsoft.Json.Linq.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * DeviceCard_fromIosSerialised_m6D17407CEE070BA9579EF91BAF320C36B66AA94D (JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * ___serialised0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<DeviceCard>::Add(!0)
inline void List_1_Add_m602D3DDCDE4D203D2F49632DFBF2C7E95C49E141 (List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * __this, DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 *, DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<DeviceCard>::get_Count()
inline int32_t List_1_get_Count_m88CABD299715B67894E9CDDDDE1ADE364D10F8C3 (List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, const RuntimeMethod* method);
// System.Void MetaWearNative/VoidWithDeviceCards::Invoke(System.Collections.Generic.List`1<DeviceCard>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoidWithDeviceCards_Invoke_mD8638D3A75F39C0D1F3CEDA9735F7632D435A38B (VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * __this, List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * ___devices0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
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
	{
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_0 = (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 *)il2cpp_codegen_object_new(DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16_il2cpp_TypeInfo_var);
		DeviceCard__ctor_mB95AE5C5BFB661A4AEF8D725AEEAC0C3305E3182(L_0, /*hidden argument*/NULL);
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_1 = L_0;
		JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_2 = ___serialised0;
		NullCheck(L_2);
		JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_3 = JObject_get_Item_mF8AF0E8D461E4BFCC1A1D46F54A5E120A8744742(L_2, _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547, /*hidden argument*/NULL);
		String_t* L_4 = Extensions_Value_TisString_t_mD91A9B85F9FD8D044137D3187CB3530F9EB0F358(L_3, /*hidden argument*/Extensions_Value_TisString_t_mD91A9B85F9FD8D044137D3187CB3530F9EB0F358_RuntimeMethod_var);
		NullCheck(L_1);
		DeviceCard_set_id_m282E354CF4A4A0E3407F1EFDEBAD60046BD10037(L_1, L_4, /*hidden argument*/NULL);
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_5 = L_1;
		JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_6 = ___serialised0;
		NullCheck(L_6);
		JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_7 = JObject_get_Item_mF8AF0E8D461E4BFCC1A1D46F54A5E120A8744742(L_6, _stringLiteral6AE999552A0D2DCA14D62E2BC8B764D377B1DD6C, /*hidden argument*/NULL);
		String_t* L_8 = Extensions_Value_TisString_t_mD91A9B85F9FD8D044137D3187CB3530F9EB0F358(L_7, /*hidden argument*/Extensions_Value_TisString_t_mD91A9B85F9FD8D044137D3187CB3530F9EB0F358_RuntimeMethod_var);
		NullCheck(L_5);
		DeviceCard_set_name_m65C2AD7E6F2AC88B85702FE2777F6BE22A34C798(L_5, L_8, /*hidden argument*/NULL);
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_9 = L_5;
		JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 * L_10 = ___serialised0;
		NullCheck(L_10);
		JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_11 = JObject_get_Item_mF8AF0E8D461E4BFCC1A1D46F54A5E120A8744742(L_10, _stringLiteralE2DD208E6EE19DB2DDC63FC676717375A20D7427, /*hidden argument*/NULL);
		int32_t L_12 = Extensions_Value_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFDA0103FD7D2695561560B82EADA05C57D842AFB(L_11, /*hidden argument*/Extensions_Value_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mFDA0103FD7D2695561560B82EADA05C57D842AFB_RuntimeMethod_var);
		NullCheck(L_9);
		DeviceCard_set_signalStrength_m1020D38875C5B8ADC5FA4A95588EFCEB1232A7BB(L_9, L_12, /*hidden argument*/NULL);
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_13 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_14 = DateTime_get_Now_mB464D30F15C97069F92C1F910DCDDC3DFCC7F7D2(/*hidden argument*/NULL);
		NullCheck(L_13);
		DeviceCard_set_signalTime_m1C1628C977CAF0FC3AA405D7FA888B2EA8EA80AE(L_13, L_14, /*hidden argument*/NULL);
		return L_13;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MetaWearNative_ProcessIosMessage_m9E9D779D05DC91BAA4CA084E3AE91685E1C6F1BD(char* ___subject0, char* ___content1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___subject0U27 to managed representation
	String_t* ____subject0_unmarshaled = NULL;
	____subject0_unmarshaled = il2cpp_codegen_marshal_string_result(___subject0);

	// Marshaling of parameter U27___content1U27 to managed representation
	String_t* ____content1_unmarshaled = NULL;
	____content1_unmarshaled = il2cpp_codegen_marshal_string_result(___content1);

	// Managed method invocation
	MetaWearNative_ProcessIosMessage_m9E9D779D05DC91BAA4CA084E3AE91685E1C6F1BD(____subject0_unmarshaled, ____content1_unmarshaled, NULL);

}
// System.Void MetaWearNative::add_onNewDevicesScaned(MetaWearNative_VoidWithDeviceCards)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_add_onNewDevicesScaned_m5658362A8D46052A7BBA10248ECA2FDB0DD7C3C6 (VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_add_onNewDevicesScaned_m5658362A8D46052A7BBA10248ECA2FDB0DD7C3C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * V_0 = NULL;
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * V_1 = NULL;
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_0 = ((MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_StaticFields*)il2cpp_codegen_static_fields_for(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var))->get_onNewDevicesScaned_4();
		V_0 = L_0;
	}

IL_0006:
	{
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_1 = V_0;
		V_1 = L_1;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_2 = V_1;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *)CastclassSealed((RuntimeObject*)L_4, VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_5 = V_2;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_6 = V_1;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_7 = InterlockedCompareExchangeImpl<VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *>((VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE **)(((MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_StaticFields*)il2cpp_codegen_static_fields_for(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var))->get_address_of_onNewDevicesScaned_4()), L_5, L_6);
		V_0 = L_7;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_8 = V_0;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_9 = V_1;
		if ((!(((RuntimeObject*)(VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *)L_8) == ((RuntimeObject*)(VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void MetaWearNative::remove_onNewDevicesScaned(MetaWearNative_VoidWithDeviceCards)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_remove_onNewDevicesScaned_m6D09CFDCD2EF7E356AA910024100E09541633D24 (VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_remove_onNewDevicesScaned_m6D09CFDCD2EF7E356AA910024100E09541633D24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * V_0 = NULL;
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * V_1 = NULL;
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_0 = ((MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_StaticFields*)il2cpp_codegen_static_fields_for(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var))->get_onNewDevicesScaned_4();
		V_0 = L_0;
	}

IL_0006:
	{
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_1 = V_0;
		V_1 = L_1;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_2 = V_1;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *)CastclassSealed((RuntimeObject*)L_4, VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_5 = V_2;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_6 = V_1;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_7 = InterlockedCompareExchangeImpl<VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *>((VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE **)(((MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_StaticFields*)il2cpp_codegen_static_fields_for(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var))->get_address_of_onNewDevicesScaned_4()), L_5, L_6);
		V_0 = L_7;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_8 = V_0;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_9 = V_1;
		if ((!(((RuntimeObject*)(VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *)L_8) == ((RuntimeObject*)(VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void MetaWearNative::add_onKnowDevicesScaned(MetaWearNative_VoidWithDeviceCards)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_add_onKnowDevicesScaned_m5E2A35B679D39D00967C49426984EB5B092288AA (VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_add_onKnowDevicesScaned_m5E2A35B679D39D00967C49426984EB5B092288AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * V_0 = NULL;
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * V_1 = NULL;
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_0 = ((MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_StaticFields*)il2cpp_codegen_static_fields_for(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var))->get_onKnowDevicesScaned_5();
		V_0 = L_0;
	}

IL_0006:
	{
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_1 = V_0;
		V_1 = L_1;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_2 = V_1;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *)CastclassSealed((RuntimeObject*)L_4, VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_5 = V_2;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_6 = V_1;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_7 = InterlockedCompareExchangeImpl<VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *>((VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE **)(((MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_StaticFields*)il2cpp_codegen_static_fields_for(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var))->get_address_of_onKnowDevicesScaned_5()), L_5, L_6);
		V_0 = L_7;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_8 = V_0;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_9 = V_1;
		if ((!(((RuntimeObject*)(VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *)L_8) == ((RuntimeObject*)(VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void MetaWearNative::remove_onKnowDevicesScaned(MetaWearNative_VoidWithDeviceCards)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_remove_onKnowDevicesScaned_m0EA89C39B1073EEDAD3E702F1B8D94AA02434DAD (VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_remove_onKnowDevicesScaned_m0EA89C39B1073EEDAD3E702F1B8D94AA02434DAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * V_0 = NULL;
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * V_1 = NULL;
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_0 = ((MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_StaticFields*)il2cpp_codegen_static_fields_for(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var))->get_onKnowDevicesScaned_5();
		V_0 = L_0;
	}

IL_0006:
	{
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_1 = V_0;
		V_1 = L_1;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_2 = V_1;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *)CastclassSealed((RuntimeObject*)L_4, VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_5 = V_2;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_6 = V_1;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_7 = InterlockedCompareExchangeImpl<VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *>((VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE **)(((MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_StaticFields*)il2cpp_codegen_static_fields_for(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var))->get_address_of_onKnowDevicesScaned_5()), L_5, L_6);
		V_0 = L_7;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_8 = V_0;
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_9 = V_1;
		if ((!(((RuntimeObject*)(VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *)L_8) == ((RuntimeObject*)(VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.String MetaWearNative::LedColorCode(MetaWearNative_LedColors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaWearNative_LedColorCode_m8170EFAFA718EDB3D29C9E513F7AEFA99C4E9D3D (int32_t ___forColor0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_LedColorCode_m8170EFAFA718EDB3D29C9E513F7AEFA99C4E9D3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___forColor0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0022;
			}
			case 3:
			{
				goto IL_002e;
			}
			case 4:
			{
				goto IL_001c;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_001c:
	{
		return _stringLiteralD87C448044DEFB778F33158D8CCF94A20531D600;
	}

IL_0022:
	{
		return _stringLiteral4C9A82CE72CA2519F38D0AF0ABBB4CECB9FCECA9;
	}

IL_0028:
	{
		return _stringLiteralBC74F4F071A5A33F00AB88A6D6385B5E6638B86C;
	}

IL_002e:
	{
		return _stringLiteral78988010B890CE6F4D2136481F392787EC6D6106;
	}

IL_0034:
	{
		return _stringLiteral71F8E7976E4CBC4561C9D62FB283E7F788202ACB;
	}

IL_003a:
	{
		return _stringLiteral7C537E5966C8BD26C48225C20935756C63AF5A3F;
	}
}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ios_scanForNewDevices();
#endif
// System.Void MetaWearNative::ios_scanForNewDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_scanForNewDevices_m85CC8AAA64D719917F2DD70369E020E809C2152A (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ios_scanForNewDevices)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ios_scanForKnownDevices();
#endif
// System.Void MetaWearNative::ios_scanForKnownDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_scanForKnownDevices_m74B8FDFDF2F8121E4639D9E49CC26878FA020F94 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ios_scanForKnownDevices)();

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ios_startFlashingDevice(char*);
#endif
// System.Void MetaWearNative::ios_startFlashingDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_startFlashingDevice_m747BE2E3233DAD47A33E98279C35D843F43880BA (String_t* ___deviceId0, const RuntimeMethod* method)
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
// System.Void MetaWearNative::ios_setCallbackReceiver(MetaWearNative_MessageReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_setCallbackReceiver_m7DCDF1CF336A726AE3EE6F4DA728196F19929BEB (MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C * ___listener0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter U27___listener0U27 to native representation
	Il2CppMethodPointer ____listener0_marshaled = NULL;
	____listener0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___listener0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ios_setCallbackReceiver)(____listener0_marshaled);

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ios_stopDeviceLeds(char*, char*);
#endif
// System.Void MetaWearNative::ios_stopDeviceLeds(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_stopDeviceLeds_m18799FC7759C72683B265BD0A90B1690BA776738 (String_t* ___deviceI0, String_t* ___colorsCode1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter U27___deviceI0U27 to native representation
	char* ____deviceI0_marshaled = NULL;
	____deviceI0_marshaled = il2cpp_codegen_marshal_string(___deviceI0);

	// Marshaling of parameter U27___colorsCode1U27 to native representation
	char* ____colorsCode1_marshaled = NULL;
	____colorsCode1_marshaled = il2cpp_codegen_marshal_string(___colorsCode1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ios_stopDeviceLeds)(____deviceI0_marshaled, ____colorsCode1_marshaled);

	// Marshaling cleanup of parameter U27___deviceI0U27 native representation
	il2cpp_codegen_marshal_free(____deviceI0_marshaled);
	____deviceI0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___colorsCode1U27 native representation
	il2cpp_codegen_marshal_free(____colorsCode1_marshaled);
	____colorsCode1_marshaled = NULL;

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ios_turnDeviceLedOn(char*, char*);
#endif
// System.Void MetaWearNative::ios_turnDeviceLedOn(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_turnDeviceLedOn_mBE1B910E222D9D92211D0E9D1D780B65F3093121 (String_t* ___deviceId0, String_t* ___colorsCode1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter U27___deviceId0U27 to native representation
	char* ____deviceId0_marshaled = NULL;
	____deviceId0_marshaled = il2cpp_codegen_marshal_string(___deviceId0);

	// Marshaling of parameter U27___colorsCode1U27 to native representation
	char* ____colorsCode1_marshaled = NULL;
	____colorsCode1_marshaled = il2cpp_codegen_marshal_string(___colorsCode1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ios_turnDeviceLedOn)(____deviceId0_marshaled, ____colorsCode1_marshaled);

	// Marshaling cleanup of parameter U27___deviceId0U27 native representation
	il2cpp_codegen_marshal_free(____deviceId0_marshaled);
	____deviceId0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___colorsCode1U27 native representation
	il2cpp_codegen_marshal_free(____colorsCode1_marshaled);
	____colorsCode1_marshaled = NULL;

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ios_rememberDevice(char*, char*);
#endif
// System.Void MetaWearNative::ios_rememberDevice(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_rememberDevice_mFEA32D979247BD04577956AF0EB62694CE5E0702 (String_t* ___deviceId0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter U27___deviceId0U27 to native representation
	char* ____deviceId0_marshaled = NULL;
	____deviceId0_marshaled = il2cpp_codegen_marshal_string(___deviceId0);

	// Marshaling of parameter U27___name1U27 to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ios_rememberDevice)(____deviceId0_marshaled, ____name1_marshaled);

	// Marshaling cleanup of parameter U27___deviceId0U27 native representation
	il2cpp_codegen_marshal_free(____deviceId0_marshaled);
	____deviceId0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___name1U27 native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

}
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL ios_forgetRememberedDevices();
#endif
// System.Void MetaWearNative::ios_forgetRememberedDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ios_forgetRememberedDevices_m864F71318DB4A2BF72B6373BFEDF220092F1EDE4 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(ios_forgetRememberedDevices)();

}
// System.Void MetaWearNative::ScanForNewDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ScanForNewDevices_m59AB7E2569E777BC01002D2B46981034D0F4AE73 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_ScanForNewDevices_m59AB7E2569E777BC01002D2B46981034D0F4AE73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774(_stringLiteral4C10E261F4AFB978699EB377C823EB45CBEB0365, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		MetaWearNative_ios_scanForNewDevices_m85CC8AAA64D719917F2DD70369E020E809C2152A(/*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWearNative::ScanForKnownDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ScanForKnownDevices_mE0BE23631DC7BFCF170A69DC808248B16E27C59D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_ScanForKnownDevices_mE0BE23631DC7BFCF170A69DC808248B16E27C59D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		MetaWearNative_ios_scanForKnownDevices_m74B8FDFDF2F8121E4639D9E49CC26878FA020F94(/*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWearNative::StartFlashingDevice(DeviceCard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_StartFlashingDevice_m8854A03FF6E556D5D2A6E6B2342BDAF5E06DFD2E (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * ___device0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_StartFlashingDevice_m8854A03FF6E556D5D2A6E6B2342BDAF5E06DFD2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_0 = ___device0;
		NullCheck(L_0);
		String_t* L_1 = DeviceCard_get_id_m9AC5D3AB4ED36D0EDC7BD94A7ACDEF3595CCCA3F(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		MetaWearNative_ios_startFlashingDevice_m747BE2E3233DAD47A33E98279C35D843F43880BA(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWearNative::StartDeviceLed(DeviceCard,MetaWearNative_LedColors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_StartDeviceLed_mAB0F6DB18C7A7B21FF0C5C49AE43652B0B404714 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * ___device0, int32_t ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_StartDeviceLed_mAB0F6DB18C7A7B21FF0C5C49AE43652B0B404714_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_0 = ___device0;
		NullCheck(L_0);
		String_t* L_1 = DeviceCard_get_id_m9AC5D3AB4ED36D0EDC7BD94A7ACDEF3595CCCA3F(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___color1;
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		String_t* L_3 = MetaWearNative_LedColorCode_m8170EFAFA718EDB3D29C9E513F7AEFA99C4E9D3D(L_2, /*hidden argument*/NULL);
		MetaWearNative_ios_turnDeviceLedOn_mBE1B910E222D9D92211D0E9D1D780B65F3093121(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWearNative::StopDeviceLeds(DeviceCard,MetaWearNative_LedColors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_StopDeviceLeds_m38FD70457E7BE829F970756C3DD4683F2FCFBE44 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * ___device0, int32_t ___color1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_StopDeviceLeds_m38FD70457E7BE829F970756C3DD4683F2FCFBE44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_0 = ___device0;
		NullCheck(L_0);
		String_t* L_1 = DeviceCard_get_id_m9AC5D3AB4ED36D0EDC7BD94A7ACDEF3595CCCA3F(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___color1;
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		String_t* L_3 = MetaWearNative_LedColorCode_m8170EFAFA718EDB3D29C9E513F7AEFA99C4E9D3D(L_2, /*hidden argument*/NULL);
		MetaWearNative_ios_stopDeviceLeds_m18799FC7759C72683B265BD0A90B1690BA776738(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWearNative::RememberDevice(DeviceCard,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_RememberDevice_m2AFFF7C88CF5F29B4DCF783EAC482D3674B15C5B (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * ___device0, String_t* ___withName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_RememberDevice_m2AFFF7C88CF5F29B4DCF783EAC482D3674B15C5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_0 = ___device0;
		NullCheck(L_0);
		String_t* L_1 = DeviceCard_get_id_m9AC5D3AB4ED36D0EDC7BD94A7ACDEF3595CCCA3F(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___withName1;
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		MetaWearNative_ios_rememberDevice_mFEA32D979247BD04577956AF0EB62694CE5E0702(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWearNative::ForgetAllRememberdDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ForgetAllRememberdDevices_m70CBC28D2E720921AF81436B768D71E0003BB46C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_ForgetAllRememberdDevices_m70CBC28D2E720921AF81436B768D71E0003BB46C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		MetaWearNative_ios_forgetRememberedDevices_m864F71318DB4A2BF72B6373BFEDF220092F1EDE4(/*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWearNative::StartAccelerometerStream(DeviceCard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_StartAccelerometerStream_m15F15B5595F92E06827CA7ED0C3ED7941EB85DE9 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * ___forDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_StartAccelerometerStream_m15F15B5595F92E06827CA7ED0C3ED7941EB85DE9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral8131D2FF239E771247C0577DF864163B749FF518, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWearNative::StopAccelerometerStream(DeviceCard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_StopAccelerometerStream_m9347B74549BDCF4575FD6DB701B1C0E2B9341815 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * ___forDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_StopAccelerometerStream_m9347B74549BDCF4575FD6DB701B1C0E2B9341815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral66560884E0ED2078CBBE79F4EADCA71ADAE84723, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWearNative::StartSensorFusionStream(DeviceCard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_StartSensorFusionStream_m00B16A06845A318B4AA84F4AECA55D32E82A5D05 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * ___forDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_StartSensorFusionStream_m00B16A06845A318B4AA84F4AECA55D32E82A5D05_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral8732F91E94782290F8F85CF2814F082013C33C2E, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWearNative::StopSensorFusionStream(DeviceCard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_StopSensorFusionStream_mD2057F3A0EF213474491E71775E747940FB1D487 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * ___forDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_StopSensorFusionStream_mD2057F3A0EF213474491E71775E747940FB1D487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral7DDD8F15567763EA0429A4B93B90D2A732DB7B45, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWearNative::DisconnectDevice(DeviceCard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_DisconnectDevice_m6A7446C039A549D13F8364BBAA706A18610C2776 (DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * ___device0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_DisconnectDevice_m6A7446C039A549D13F8364BBAA706A18610C2776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralA05252FC2198C4CA4CC293F8318AAA9389B66EFE, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWearNative::DisconnectAllDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_DisconnectAllDevices_m8FD74C145E1E10095877823B41F1FBA9D29EB5D2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_DisconnectAllDevices_m8FD74C145E1E10095877823B41F1FBA9D29EB5D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralB78DA89BD945BBBF7FE4233E0651B0354488EE87, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWearNative::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative__cctor_mF7693C64EEE8281967AC8C2FD2E501D08762391A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative__cctor_mF7693C64EEE8281967AC8C2FD2E501D08762391A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_SetStackTraceLogType_m0E7F71F07C77A92CD88DD0F4A0BFD881AE4F1692(3, 0, /*hidden argument*/NULL);
		Application_SetStackTraceLogType_m0E7F71F07C77A92CD88DD0F4A0BFD881AE4F1692(2, 0, /*hidden argument*/NULL);
		MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C * L_0 = (MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C *)il2cpp_codegen_object_new(MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C_il2cpp_TypeInfo_var);
		MessageReceiver__ctor_m9C8BE67A0FF9774EFDA9B80441BC6E3FFBB68AEE(L_0, NULL, (intptr_t)((intptr_t)MetaWearNative_ProcessIosMessage_m9E9D779D05DC91BAA4CA084E3AE91685E1C6F1BD_RuntimeMethod_var), /*hidden argument*/NULL);
		MetaWearNative_ios_setCallbackReceiver_m7DCDF1CF336A726AE3EE6F4DA728196F19929BEB(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MetaWearNative::ProcessIosMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative_ProcessIosMessage_m9E9D779D05DC91BAA4CA084E3AE91685E1C6F1BD (String_t* ___subject0, String_t* ___content1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWearNative_ProcessIosMessage_m9E9D779D05DC91BAA4CA084E3AE91685E1C6F1BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B3_0 = 0;
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * G_B15_0 = NULL;
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * G_B14_0 = NULL;
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * G_B19_0 = NULL;
	VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * G_B18_0 = NULL;
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
			goto IL_00ec;
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
		JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 * L_8 = ((JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11 *)IsInstClass((RuntimeObject*)L_7, JArray_t1CE13821116F9B501573275C6BDD9FB254E65F11_il2cpp_TypeInfo_var));
		NullCheck(L_8);
		VirtFuncInvoker0< JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * >::Invoke(15 /* Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::get_First() */, L_8);
		NullCheck(L_8);
		RuntimeObject* L_9 = JArray_GetEnumerator_mF5F5CACC1928A37D5551BFA2D8D6B7E805957822(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0062;
		}

IL_004a:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_11 = InterfaceFuncInvoker0< JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_tA3DFFFD6133C0C5607FFA19B3E4E7395E872113C_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
			List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * L_12 = V_0;
			JToken_tE4D47E426873D5F0A43737D6D5C9C6B07E3A6B02 * L_13 = V_2;
			DeviceCard_t82A8F9A320CB17DAFEED5F5176B8BE78F792DD16 * L_14 = DeviceCard_fromIosSerialised_m6D17407CEE070BA9579EF91BAF320C36B66AA94D(((JObject_t786AF07B1009334856B0362BBC48EEF68C81C585 *)IsInstClass((RuntimeObject*)L_13, JObject_t786AF07B1009334856B0362BBC48EEF68C81C585_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			NullCheck(L_12);
			List_1_Add_m602D3DDCDE4D203D2F49632DFBF2C7E95C49E141(L_12, L_14, /*hidden argument*/List_1_Add_m602D3DDCDE4D203D2F49632DFBF2C7E95C49E141_RuntimeMethod_var);
		}

IL_0062:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck(L_15);
			bool L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_004a;
			}
		}

IL_006a:
		{
			IL2CPP_LEAVE(0x76, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_1;
			if (!L_17)
			{
				goto IL_0075;
			}
		}

IL_006f:
		{
			RuntimeObject* L_18 = V_1;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_18);
		}

IL_0075:
		{
			IL2CPP_RESET_LEAVE(0x76);
			IL2CPP_END_FINALLY(108)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x76, IL_0076)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0076:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral4ED7EAAD395DD81505888EBCD0BD63416D407B38);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral4ED7EAAD395DD81505888EBCD0BD63416D407B38);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_21 = L_20;
		List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = List_1_get_Count_m88CABD299715B67894E9CDDDDE1ADE364D10F8C3(L_22, /*hidden argument*/List_1_get_Count_m88CABD299715B67894E9CDDDDE1ADE364D10F8C3_RuntimeMethod_var);
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_25);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_25);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = L_21;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral08978886DEFAF5ABA2F28E11E2378BDC5BE800E6);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral08978886DEFAF5ABA2F28E11E2378BDC5BE800E6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = L_26;
		String_t* L_28 = ___subject0;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_28);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = L_27;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral091385BE99B45F459A231582D583EC9F3FA3D194);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral091385BE99B45F459A231582D583EC9F3FA3D194);
		String_t* L_30 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_29, /*hidden argument*/NULL);
		MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774(L_30, /*hidden argument*/NULL);
		String_t* L_31 = ___subject0;
		bool L_32 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_31, _stringLiteral6CCCD026A25D8CB3E30F1BC64A73E86B4B10F6DC, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_33 = ((MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_StaticFields*)il2cpp_codegen_static_fields_for(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var))->get_onNewDevicesScaned_4();
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_34 = L_33;
		G_B14_0 = L_34;
		if (L_34)
		{
			G_B15_0 = L_34;
			goto IL_00c7;
		}
	}
	{
		return;
	}

IL_00c7:
	{
		List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * L_35 = V_0;
		NullCheck(G_B15_0);
		VoidWithDeviceCards_Invoke_mD8638D3A75F39C0D1F3CEDA9735F7632D435A38B(G_B15_0, L_35, /*hidden argument*/NULL);
		return;
	}

IL_00ce:
	{
		String_t* L_36 = ___subject0;
		bool L_37 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_36, _stringLiteral6B05A59CAD7754B921DBD229F8E680EEA812F8C1, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0102;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var);
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_38 = ((MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_StaticFields*)il2cpp_codegen_static_fields_for(MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287_il2cpp_TypeInfo_var))->get_onKnowDevicesScaned_5();
		VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * L_39 = L_38;
		G_B18_0 = L_39;
		if (L_39)
		{
			G_B19_0 = L_39;
			goto IL_00e5;
		}
	}
	{
		return;
	}

IL_00e5:
	{
		List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * L_40 = V_0;
		NullCheck(G_B19_0);
		VoidWithDeviceCards_Invoke_mD8638D3A75F39C0D1F3CEDA9735F7632D435A38B(G_B19_0, L_40, /*hidden argument*/NULL);
		return;
	}

IL_00ec:
	{
		String_t* L_41 = ___subject0;
		String_t* L_42 = ___content1;
		String_t* L_43 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteralF0DB24E44F63002A7AF891222D783F3C0C9392BE, L_41, _stringLiteralD965050D70187FFF0BDFECDF3D67928DE5867AD7, L_42, /*hidden argument*/NULL);
		MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774(L_43, /*hidden argument*/NULL);
	}

IL_0102:
	{
		return;
	}
}
// System.Void MetaWearNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWearNative__ctor_m56002F84DDCF96F8F5EBAF4A0B11EAF348AEE8BA (MetaWearNative_t3A995D5B3FB55C18B4195CA9135EE54C5F7AB287 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C (MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C * __this, String_t* ___topic0, String_t* ___message1, const RuntimeMethod* method)
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
// System.Void MetaWearNative_MessageReceiver::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceiver__ctor_m9C8BE67A0FF9774EFDA9B80441BC6E3FFBB68AEE (MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MetaWearNative_MessageReceiver::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceiver_Invoke_m3E23CC6FFA59E7145D2DCDEDAFCAA80984AE1B4E (MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C * __this, String_t* ___topic0, String_t* ___message1, const RuntimeMethod* method)
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
// System.IAsyncResult MetaWearNative_MessageReceiver::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageReceiver_BeginInvoke_m3732373D2E5021A5C8E5039EA0F5E95B477965FC (MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C * __this, String_t* ___topic0, String_t* ___message1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___topic0;
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void MetaWearNative_MessageReceiver::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceiver_EndInvoke_m4B1B584B6A4F8A539FC73AACCEACD2B7C5B4C270 (MessageReceiver_tBD1F6A0FF4784056C8B6B8D73B35F9ED4A37AC3C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void MetaWearNative_MessageSubjects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSubjects__ctor_m41BFD80695A58503ACEA13D8156881399DB85AA1 (MessageSubjects_t91309CF9049FB8FFB0CE91067A46393662D25F18 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageSubjects__ctor_m41BFD80695A58503ACEA13D8156881399DB85AA1_MetadataUsageId);
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
// System.Void MetaWearNative_VoidWithDeviceCards::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoidWithDeviceCards__ctor_mEF7C8168F010200ABD3D4A814CEF6EADBF7A01C1 (VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void MetaWearNative_VoidWithDeviceCards::Invoke(System.Collections.Generic.List`1<DeviceCard>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoidWithDeviceCards_Invoke_mD8638D3A75F39C0D1F3CEDA9735F7632D435A38B (VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * __this, List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * ___devices0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___devices0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___devices0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___devices0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___devices0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___devices0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___devices0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___devices0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___devices0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * >::Invoke(targetMethod, targetThis, ___devices0);
					else
						GenericVirtActionInvoker1< List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * >::Invoke(targetMethod, targetThis, ___devices0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___devices0);
					else
						VirtActionInvoker1< List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___devices0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___devices0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult MetaWearNative_VoidWithDeviceCards::BeginInvoke(System.Collections.Generic.List`1<DeviceCard>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VoidWithDeviceCards_BeginInvoke_mAF3691A23670DAABE172A59BC0DFA59E38CC51F3 (VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * __this, List_1_t6274AC1DD01F89225F859A773F66F814F4B1C244 * ___devices0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___devices0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void MetaWearNative_VoidWithDeviceCards::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoidWithDeviceCards_EndInvoke_mD96B60A43DA0EB0FCFF92289017D7DB69A609E6E (VoidWithDeviceCards_t5E8637B3777760B8CEE1D784726E9A7EA5FCE2DE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

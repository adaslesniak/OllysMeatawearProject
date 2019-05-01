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

// MetaWeariOSUnity
struct MetaWeariOSUnity_tE0EA63F75413E24C17D5204F83B18B6C1F58FC8D;
// MetaWeariOSUnity/MessageReceiver
struct MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954;
// MetaWeariOSUnity/MessageSubjects
struct MessageSubjects_t285C889FBD987EF10774ED1092003335ECC18556;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
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

IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceiver_tC8A803E0FA2F91E7D30777642DE45CCB7426E954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetaWeariOSUnity_tE0EA63F75413E24C17D5204F83B18B6C1F58FC8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* iOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4F709C63FECB3A62B8C73714FBB1B98291B2BC53;
IL2CPP_EXTERN_C String_t* _stringLiteralC32782643F86448DD0CF8F2A6E1B2A3F7AA0CCAB;
IL2CPP_EXTERN_C String_t* _stringLiteralD965050D70187FFF0BDFECDF3D67928DE5867AD7;
IL2CPP_EXTERN_C String_t* _stringLiteralF0DB24E44F63002A7AF891222D783F3C0C9392BE;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisiOSMessageReceiver_t66DDFDF4CD60A2626BC57AB5C4E2D359EE8C2654_m8B90E23F458A26FE94EBF513F7590DE8A17988BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetaWeariOSUnity_ProcessIosMessage_m70BA4887E6C603C8BD442CA1B21D63ED85E32AF0_RuntimeMethod_var;
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

public:
};

struct Il2CppArrayBounds;

// System.Array


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


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// System.Void MetaWeariOSUnity::ProcessIosMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_ProcessIosMessage_m70BA4887E6C603C8BD442CA1B21D63ED85E32AF0 (String_t* ___subject0, String_t* ___message1, const RuntimeMethod* method);
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
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
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
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MetaWeariOSUnity_ProcessIosMessage_m70BA4887E6C603C8BD442CA1B21D63ED85E32AF0(char* ___subject0, char* ___message1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___subject0U27 to managed representation
	String_t* ____subject0_unmarshaled = NULL;
	____subject0_unmarshaled = il2cpp_codegen_marshal_string_result(___subject0);

	// Marshaling of parameter U27___message1U27 to managed representation
	String_t* ____message1_unmarshaled = NULL;
	____message1_unmarshaled = il2cpp_codegen_marshal_string_result(___message1);

	// Managed method invocation
	MetaWeariOSUnity_ProcessIosMessage_m70BA4887E6C603C8BD442CA1B21D63ED85E32AF0(____subject0_unmarshaled, ____message1_unmarshaled, NULL);

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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaWeariOSUnity_ProcessIosMessage_m70BA4887E6C603C8BD442CA1B21D63ED85E32AF0 (String_t* ___subject0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetaWeariOSUnity_ProcessIosMessage_m70BA4887E6C603C8BD442CA1B21D63ED85E32AF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___subject0;
		String_t* L_1 = ___message1;
		String_t* L_2 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteralF0DB24E44F63002A7AF891222D783F3C0C9392BE, L_0, _stringLiteralD965050D70187FFF0BDFECDF3D67928DE5867AD7, L_1, /*hidden argument*/NULL);
		MonoBehaviour_print_m171D860AF3370C46648FE8F3EE3E0E6535E1C774(L_2, /*hidden argument*/NULL);
		return;
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
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral4F709C63FECB3A62B8C73714FBB1B98291B2BC53, L_0, /*hidden argument*/NULL);
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

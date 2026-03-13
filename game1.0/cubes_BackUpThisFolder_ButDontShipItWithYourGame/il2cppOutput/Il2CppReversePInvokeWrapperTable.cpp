#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

struct EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B ;
struct Guid_t ;
struct tobii_wearable_advanced_data_t_t9B8B91889847E314DD6AA858A8198CCE85068C74 ;
struct tobii_wearable_consumer_data_t_t3E124E89F7F07F3249F4603E116CB8E9F7E2E2D5 ;
struct tobii_wearable_foveated_gaze_t_tA366187441341205B7D26261B0756CBF3163DE30 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
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
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Tobii.StreamEngine.tobii_log_level_t
struct tobii_log_level_t_t03EA891BBEC1E3DD197FED119E7FBBD21B366AC2 
{
public:
	// System.Int32 Tobii.StreamEngine.tobii_log_level_t::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(tobii_log_level_t_t03EA891BBEC1E3DD197FED119E7FBBD21B366AC2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void CDECL ReversePInvokeWrapper_ConnectionHelper_DeviceUrlReceiver_mF28C18E5C0E55E4A12BCFA9C50ADBF8EB7C0BB45(char* ___url0, intptr_t ___userData1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m21ADE6DC652B28DDB916AC68B9FC908B18006FFD(Guid_t * ___sourceId0, int32_t ___controlCode1, uint8_t ___setLevel2, int64_t ___anyKeyword3, int64_t ___allKeyword4, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B * ___filterData5, void* ___callbackContext6);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0(intptr_t ___arg0);
extern "C" void CDECL ReversePInvokeWrapper_OpenVRLoader_TickCallback_mC033E59205AE3E0521FD3DA250665EAEBD5B5631(int32_t ___value0);
extern "C" void CDECL ReversePInvokeWrapper_StreamEngineTracker_LogCallback_m42126A084A53FE26A26406A11570F76BA40CC6C9(intptr_t ___logContext0, int32_t ___level1, char* ___text2);
extern "C" void CDECL ReversePInvokeWrapper_StreamEngineTracker_OnAdvancedWearableData_m38C0E26A78155AA21CD2774569885FE5B4F43908(tobii_wearable_advanced_data_t_t9B8B91889847E314DD6AA858A8198CCE85068C74 * ___data0, intptr_t ___userData1);
extern "C" void CDECL ReversePInvokeWrapper_StreamEngineTracker_OnWearableData_m595F90475B22BA0085F79EEB9ED17790E0518FF8(tobii_wearable_consumer_data_t_t3E124E89F7F07F3249F4603E116CB8E9F7E2E2D5 * ___data0, intptr_t ___userData1);
extern "C" void CDECL ReversePInvokeWrapper_StreamEngineTracker_OnWearableFoveatedGaze_m4F0172B6B2B86069E67BD67AB0AE75FB8DA18C25(tobii_wearable_foveated_gaze_t_tA366187441341205B7D26261B0756CBF3163DE30 * ___data0, intptr_t ___userData1);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[8] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ConnectionHelper_DeviceUrlReceiver_mF28C18E5C0E55E4A12BCFA9C50ADBF8EB7C0BB45),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m21ADE6DC652B28DDB916AC68B9FC908B18006FFD),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OpenVRLoader_TickCallback_mC033E59205AE3E0521FD3DA250665EAEBD5B5631),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_StreamEngineTracker_LogCallback_m42126A084A53FE26A26406A11570F76BA40CC6C9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_StreamEngineTracker_OnAdvancedWearableData_m38C0E26A78155AA21CD2774569885FE5B4F43908),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_StreamEngineTracker_OnWearableData_m595F90475B22BA0085F79EEB9ED17790E0518FF8),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_StreamEngineTracker_OnWearableFoveatedGaze_m4F0172B6B2B86069E67BD67AB0AE75FB8DA18C25),
};

#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// Valve.VR.SteamVR_Events/Event`1<System.Single>
struct Event_1_t68600C8ECE8DE52B1FAE99AEDD630AE9498D4283;
// Valve.VR.SteamVR_Events/Event`1<Valve.VR.InteractionSystem.TeleportMarkerBase>
struct Event_1_tC01AC4F11A560936A656B638C916D0925A6C2627;
// System.Collections.Generic.List`1<Valve.VR.InteractionSystem.RenderModel>
struct List_1_tB589A60C816E866443F6E2F3C21161CEB133216E;
// System.Collections.Generic.List`1<Valve.VR.InteractionSystem.Hand/AttachedObject>
struct List_1_t005D6AC51A2B482684471002B21EB7800D60AA45;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Valve.VR.InteractionSystem.Hand[]
struct HandU5BU5D_tC092C7BDF34DDFC6FF249FAFB0DE5E20331C5B5A;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Valve.VR.InteractionSystem.TeleportMarkerBase[]
struct TeleportMarkerBaseU5BU5D_t7DB5CD4B25C24A53E4DCBB4628209089D57BB902;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Valve.VR.InteractionSystem.AllowTeleportWhileAttachedToHand
struct AllowTeleportWhileAttachedToHand_t1B08D63EEC5DE7C83E093F99E0D76323668D2076;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// Valve.VR.CVRSystem
struct CVRSystem_t8A2DEB5BF4ACF7AC5D0889EA701AC64DBC8E767B;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Valve.VR.InteractionSystem.Hand
struct Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865;
// Valve.VR.InteractionSystem.HandEvent
struct HandEvent_tB05F9192CEC46DE35AC49646A9882DB36A454D23;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// Valve.VR.ISteamVR_Action_In_Source
struct ISteamVR_Action_In_Source_tA689B29DDC013C417297DADA3866B324408F4D16;
// Valve.VR.InteractionSystem.Interactable
struct Interactable_t1DA7C81B6B1405ADFC05D71B3963FA179EF2E3C4;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// Valve.VR.InteractionSystem.Player
struct Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D;
// Valve.VR.InteractionSystem.RenderModel
struct RenderModel_tA371C9FC10932FB4E1D38CD07B613BC1BA9C28E2;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Valve.VR.SteamVR_Action_Boolean
struct SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5;
// Valve.VR.SteamVR_Action_Boolean_Source_Map
struct SteamVR_Action_Boolean_Source_Map_t504F1984E963F4D1553CA999D97F7509C95C8899;
// Valve.VR.SteamVR_Action_Vibration
struct SteamVR_Action_Vibration_t4D1EFC2C6062A2FBF0AA3161410C534F0993159C;
// Valve.VR.SteamVR_Behaviour_Pose
struct SteamVR_Behaviour_Pose_t973518E48DAFAE4569703C12F466EAABA43B1E64;
// Valve.VR.SteamVR_RenderModel
struct SteamVR_RenderModel_t20269A4C0DAED902ECBDBC7F810B9E95D44ACA3F;
// Valve.VR.SteamVR_TrackedObject
struct SteamVR_TrackedObject_t0F54DD40BC1A829D3AA288BFA597D2440D6AD57D;
// System.String
struct String_t;
// Valve.VR.InteractionSystem.Teleport
struct Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8;
// Valve.VR.InteractionSystem.TeleportArc
struct TeleportArc_tC862A36037EF7B8EC0F429537798AE2DA7C16DD9;
// Valve.VR.InteractionSystem.TeleportMarkerBase
struct TeleportMarkerBase_tAE8F2B2438B4484146D07B7DEB40D36DF160A203;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// Valve.VR.InteractionSystem.Throwable
struct Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// Valve.VR.InteractionSystem.VelocityEstimator
struct VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WheelCollider
struct WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779;
// Valve.VR.InteractionSystem.Sample.WheelDust
struct WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4;
// Valve.VR.IVRSystem/_AcknowledgeQuit_Exiting
struct _AcknowledgeQuit_Exiting_t5A9D9A75A89A0AAE98236EC6408AE77644B6A81E;
// Valve.VR.IVRSystem/_ApplyTransform
struct _ApplyTransform_tFDB18E4DD7A98E2F270A0500C93E160073B75C74;
// Valve.VR.IVRSystem/_ComputeDistortion
struct _ComputeDistortion_t2AD5D97371512EE4A2B445E2BF17F0847DA0C7ED;
// Valve.VR.IVRSystem/_GetAppContainerFilePaths
struct _GetAppContainerFilePaths_tC9F2A708E189642FF074522CFE0A50BD21CE0566;
// Valve.VR.IVRSystem/_GetArrayTrackedDeviceProperty
struct _GetArrayTrackedDeviceProperty_t6689DD73D8A9FCEF30E1511D2BE51244326CD3B1;
// Valve.VR.IVRSystem/_GetBoolTrackedDeviceProperty
struct _GetBoolTrackedDeviceProperty_t2B420117C58065BFE6131E5B460F8EB9E322A617;
// Valve.VR.IVRSystem/_GetButtonIdNameFromEnum
struct _GetButtonIdNameFromEnum_tFC87E5D34788044225BE2E86234354F025080F4D;
// Valve.VR.IVRSystem/_GetControllerAxisTypeNameFromEnum
struct _GetControllerAxisTypeNameFromEnum_tF8E80732BC2DBD70C8B536888C0668EAEBC1972B;
// Valve.VR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex
struct _GetControllerRoleForTrackedDeviceIndex_t23FBD24FD25C599016F6402D9BF571D9874A6D0D;
// Valve.VR.IVRSystem/_GetControllerState
struct _GetControllerState_t10782313381F8D2D8D096A49084BD4F28041BD59;
// Valve.VR.IVRSystem/_GetControllerStateWithPose
struct _GetControllerStateWithPose_tBFA8462022986AF55655D86EFF563CA2823A9D87;
// Valve.VR.IVRSystem/_GetD3D9AdapterIndex
struct _GetD3D9AdapterIndex_t92F8192B1CAEDB337809322FF2E1EDF874E649AB;
// Valve.VR.IVRSystem/_GetDXGIOutputInfo
struct _GetDXGIOutputInfo_t6464D69302C25CD86DCD2B37D0E0A22E887682AC;
// Valve.VR.IVRSystem/_GetDeviceToAbsoluteTrackingPose
struct _GetDeviceToAbsoluteTrackingPose_tC27BC33D0F92116B0CAB78C54D3FEE0A1E4BFBAE;
// Valve.VR.IVRSystem/_GetEventTypeNameFromEnum
struct _GetEventTypeNameFromEnum_t279A34BEBA324CA1786788719A606C592D715230;
// Valve.VR.IVRSystem/_GetEyeToHeadTransform
struct _GetEyeToHeadTransform_t8D8ECAA1FD5315161215020E353D42D70F1D5D1A;
// Valve.VR.IVRSystem/_GetFloatTrackedDeviceProperty
struct _GetFloatTrackedDeviceProperty_t67E4F1EC31BBCA0E7D54BF0A65D74FBF05644908;
// Valve.VR.IVRSystem/_GetHiddenAreaMesh
struct _GetHiddenAreaMesh_tBD1F007E89A9109B34A70CF1F568FB4199213DE8;
// Valve.VR.IVRSystem/_GetInt32TrackedDeviceProperty
struct _GetInt32TrackedDeviceProperty_tC319AC2CB5EE45C5FCDAB2A10DBF5A99E368B30B;
// Valve.VR.IVRSystem/_GetMatrix34TrackedDeviceProperty
struct _GetMatrix34TrackedDeviceProperty_t18701C7256456EFB6331646D5C046926B10EABAF;
// Valve.VR.IVRSystem/_GetOutputDevice
struct _GetOutputDevice_t94061AEC40C8E9C67BE3B56C40147B5AF1CA2270;
// Valve.VR.IVRSystem/_GetProjectionMatrix
struct _GetProjectionMatrix_tAFF45FBE481225BE2ACE624E3DDF805EA953C10B;
// Valve.VR.IVRSystem/_GetProjectionRaw
struct _GetProjectionRaw_t1A7D4926CBAD9FD8D5840D79D1A3117003B215A1;
// Valve.VR.IVRSystem/_GetPropErrorNameFromEnum
struct _GetPropErrorNameFromEnum_t3956179857AFD556169A0C526E2CD50152C31A04;
// Valve.VR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose
struct _GetRawZeroPoseToStandingAbsoluteTrackingPose_t736A2F56757C5683170208E45A8E2122FC0B8B77;
// Valve.VR.IVRSystem/_GetRecommendedRenderTargetSize
struct _GetRecommendedRenderTargetSize_t68595CF1263FCEC156A4C3520BA027D9263294DA;
// Valve.VR.IVRSystem/_GetRuntimeVersion
struct _GetRuntimeVersion_t39F4CD120C25C93429DFE831EFB4178D07912C81;
// Valve.VR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose
struct _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_t6EC9E5D3FA123B340A37C519118A21729EFB882F;
// Valve.VR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass
struct _GetSortedTrackedDeviceIndicesOfClass_t9463541ACD325B7704BC4CE060A6E4E0D9FC7B0D;
// Valve.VR.IVRSystem/_GetStringTrackedDeviceProperty
struct _GetStringTrackedDeviceProperty_t416FC985873C7598EC1465F05691A4CE359176D1;
// Valve.VR.IVRSystem/_GetTimeSinceLastVsync
struct _GetTimeSinceLastVsync_t14D4253A8274031FC7503BDE36901E977A687DFD;
// Valve.VR.IVRSystem/_GetTrackedDeviceActivityLevel
struct _GetTrackedDeviceActivityLevel_t3E06A046C032E114ECCD060292740B15A3B49642;
// Valve.VR.IVRSystem/_GetTrackedDeviceClass
struct _GetTrackedDeviceClass_tCB4A4133933EF8B125F54237B7B7E3A3E5278F4F;
// Valve.VR.IVRSystem/_GetTrackedDeviceIndexForControllerRole
struct _GetTrackedDeviceIndexForControllerRole_t30CB98E98A7AB1E67EAF4553BE1E005F43C9CDE1;
// Valve.VR.IVRSystem/_GetUint64TrackedDeviceProperty
struct _GetUint64TrackedDeviceProperty_t2AAE1727D570F4B0EEF873F48299F5C593ABE33A;
// Valve.VR.IVRSystem/_IsDisplayOnDesktop
struct _IsDisplayOnDesktop_t79F23BBE0F30892C4FC143035EC3960BE980AE27;
// Valve.VR.IVRSystem/_IsInputAvailable
struct _IsInputAvailable_t207B8074FB28E19E36824E4E87782003ACCBD96B;
// Valve.VR.IVRSystem/_IsSteamVRDrawingControllers
struct _IsSteamVRDrawingControllers_t1C470DD053784EE83E329BDD481424B52F4687B9;
// Valve.VR.IVRSystem/_IsTrackedDeviceConnected
struct _IsTrackedDeviceConnected_t971C1F0935F9BBB91C3B20E2B78560E7DCFBC89A;
// Valve.VR.IVRSystem/_PerformFirmwareUpdate
struct _PerformFirmwareUpdate_t0FD169A0800C2A9B5BDFF76E3452588F84BEAA3A;
// Valve.VR.IVRSystem/_PollNextEvent
struct _PollNextEvent_t86DBE8D3267ED34FC9A11BD212AC84EA6EB18CF6;
// Valve.VR.IVRSystem/_PollNextEventWithPose
struct _PollNextEventWithPose_t7552E34D17A116877CBCCAA8C75ACEFF88878364;
// Valve.VR.IVRSystem/_SetDisplayVisibility
struct _SetDisplayVisibility_t7BB3AB0AE15E0AD4E9AAB472AEF2F5E4A7099C32;
// Valve.VR.IVRSystem/_ShouldApplicationPause
struct _ShouldApplicationPause_t61E037C737A8D7AB0E054CFCCF896FC8916D7538;
// Valve.VR.IVRSystem/_ShouldApplicationReduceRenderingWork
struct _ShouldApplicationReduceRenderingWork_t774D2EEA1E076F50A94A131DA6070E8180E6F62B;
// Valve.VR.IVRSystem/_TriggerHapticPulse
struct _TriggerHapticPulse_t02D1EB948BDE1AE85B42320185EFA98C8DD1007B;
// Valve.VR.SteamVR_Events/Action
struct Action_t31CD649757E3D346C3C7E102055BFE86A861368C;
// Valve.VR.SteamVR_TrackingReferenceManager/TrackingReferenceObject
struct TrackingReferenceObject_tBAB354E365AF6C817E6AC71ACDDFC7FA5D35EA92;
// SteamVR_Utils/Event
struct Event_t055B707375B5497703E80036CCD4BB5D39D45891;
// SteamVR_Utils/SystemFn
struct SystemFn_t57D3B1A97C15A7D53265FF0E45BC6922556A7F7F;
// Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__106
struct U3CTeleportHintCoroutineU3Ed__106_t318FFF97CD5C8ED0887D17348D6499E8F524FFB6;
// Valve.VR.InteractionSystem.Throwable/<LateDetach>d__29
struct U3CLateDetachU3Ed__29_t8DC61F0F2923C524707B49D597ABBD91E0AFC980;
// Valve.VR.InteractionSystem.Util/<WrapCoroutine>d__43
struct U3CWrapCoroutineU3Ed__43_tEB56558945010B61DB40B57FEF840A08C0753E0C;
// Valve.VR.InteractionSystem.VelocityEstimator/<EstimateVelocityCoroutine>d__13
struct U3CEstimateVelocityCoroutineU3Ed__13_t2634E98B1DC2A41F3D5723D11F4A5CA4B1BEE96B;
// Valve.VR.InteractionSystem.Sample.WheelDust/<emitter>d__11
struct U3CemitterU3Ed__11_t47946151B354F774011ED475E28D23489C61F944;
// SteamVR_Utils/Event/Handler
struct Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1;

IL2CPP_EXTERN_C RuntimeClass* Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral9F15E73C308C9440A4A66E65A54F37A6862F5072;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEstimateVelocityCoroutineU3Ed__13_System_Collections_IEnumerator_Reset_m418A043F339B6EDED52C080C7AF97DCF3ED2E2BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLateDetachU3Ed__29_System_Collections_IEnumerator_Reset_mCDB7A52FB3B58C0B3D8AEF1BCE6EAE8778FC3460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTeleportHintCoroutineU3Ed__106_System_Collections_IEnumerator_Reset_m0355FE5F88BE7890D25321D207109A21E28523AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWrapCoroutineU3Ed__43_System_Collections_IEnumerator_Reset_mE2A48A7BA7AA59A2FB64C75658061701145E3D6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CemitterU3Ed__11_System_Collections_IEnumerator_Reset_m6DF88368A23014FFEEB256B6CDC9FF68896FC363_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct HandU5BU5D_tC092C7BDF34DDFC6FF249FAFB0DE5E20331C5B5A;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// Valve.VR.SteamVR_Action
struct SteamVR_Action_tB37BCB6619FE4A579C9A357286C90CF30A3C1B92  : public RuntimeObject
{
public:
	// System.String Valve.VR.SteamVR_Action::actionPath
	String_t* ___actionPath_0;
	// System.Boolean Valve.VR.SteamVR_Action::needsReinit
	bool ___needsReinit_1;
	// System.String Valve.VR.SteamVR_Action::cachedShortName
	String_t* ___cachedShortName_3;

public:
	inline static int32_t get_offset_of_actionPath_0() { return static_cast<int32_t>(offsetof(SteamVR_Action_tB37BCB6619FE4A579C9A357286C90CF30A3C1B92, ___actionPath_0)); }
	inline String_t* get_actionPath_0() const { return ___actionPath_0; }
	inline String_t** get_address_of_actionPath_0() { return &___actionPath_0; }
	inline void set_actionPath_0(String_t* value)
	{
		___actionPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionPath_0), (void*)value);
	}

	inline static int32_t get_offset_of_needsReinit_1() { return static_cast<int32_t>(offsetof(SteamVR_Action_tB37BCB6619FE4A579C9A357286C90CF30A3C1B92, ___needsReinit_1)); }
	inline bool get_needsReinit_1() const { return ___needsReinit_1; }
	inline bool* get_address_of_needsReinit_1() { return &___needsReinit_1; }
	inline void set_needsReinit_1(bool value)
	{
		___needsReinit_1 = value;
	}

	inline static int32_t get_offset_of_cachedShortName_3() { return static_cast<int32_t>(offsetof(SteamVR_Action_tB37BCB6619FE4A579C9A357286C90CF30A3C1B92, ___cachedShortName_3)); }
	inline String_t* get_cachedShortName_3() const { return ___cachedShortName_3; }
	inline String_t** get_address_of_cachedShortName_3() { return &___cachedShortName_3; }
	inline void set_cachedShortName_3(String_t* value)
	{
		___cachedShortName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedShortName_3), (void*)value);
	}
};

struct SteamVR_Action_tB37BCB6619FE4A579C9A357286C90CF30A3C1B92_StaticFields
{
public:
	// System.Boolean Valve.VR.SteamVR_Action::startUpdatingSourceOnAccess
	bool ___startUpdatingSourceOnAccess_2;

public:
	inline static int32_t get_offset_of_startUpdatingSourceOnAccess_2() { return static_cast<int32_t>(offsetof(SteamVR_Action_tB37BCB6619FE4A579C9A357286C90CF30A3C1B92_StaticFields, ___startUpdatingSourceOnAccess_2)); }
	inline bool get_startUpdatingSourceOnAccess_2() const { return ___startUpdatingSourceOnAccess_2; }
	inline bool* get_address_of_startUpdatingSourceOnAccess_2() { return &___startUpdatingSourceOnAccess_2; }
	inline void set_startUpdatingSourceOnAccess_2(bool value)
	{
		___startUpdatingSourceOnAccess_2 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// SteamVR_Utils/Event
struct Event_t055B707375B5497703E80036CCD4BB5D39D45891  : public RuntimeObject
{
public:

public:
};

struct Event_t055B707375B5497703E80036CCD4BB5D39D45891_StaticFields
{
public:
	// System.Collections.Hashtable SteamVR_Utils/Event::listeners
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___listeners_0;

public:
	inline static int32_t get_offset_of_listeners_0() { return static_cast<int32_t>(offsetof(Event_t055B707375B5497703E80036CCD4BB5D39D45891_StaticFields, ___listeners_0)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_listeners_0() const { return ___listeners_0; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_listeners_0() { return &___listeners_0; }
	inline void set_listeners_0(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___listeners_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listeners_0), (void*)value);
	}
};


// Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__106
struct U3CTeleportHintCoroutineU3Ed__106_t318FFF97CD5C8ED0887D17348D6499E8F524FFB6  : public RuntimeObject
{
public:
	// System.Int32 Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__106::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__106::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Valve.VR.InteractionSystem.Teleport Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__106::<>4__this
	Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 * ___U3CU3E4__this_2;
	// System.Single Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__106::<prevBreakTime>5__2
	float ___U3CprevBreakTimeU3E5__2_3;
	// System.Single Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__106::<prevHapticPulseTime>5__3
	float ___U3CprevHapticPulseTimeU3E5__3_4;
	// System.Boolean Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__106::<pulsed>5__4
	bool ___U3CpulsedU3E5__4_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTeleportHintCoroutineU3Ed__106_t318FFF97CD5C8ED0887D17348D6499E8F524FFB6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTeleportHintCoroutineU3Ed__106_t318FFF97CD5C8ED0887D17348D6499E8F524FFB6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTeleportHintCoroutineU3Ed__106_t318FFF97CD5C8ED0887D17348D6499E8F524FFB6, ___U3CU3E4__this_2)); }
	inline Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CprevBreakTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CTeleportHintCoroutineU3Ed__106_t318FFF97CD5C8ED0887D17348D6499E8F524FFB6, ___U3CprevBreakTimeU3E5__2_3)); }
	inline float get_U3CprevBreakTimeU3E5__2_3() const { return ___U3CprevBreakTimeU3E5__2_3; }
	inline float* get_address_of_U3CprevBreakTimeU3E5__2_3() { return &___U3CprevBreakTimeU3E5__2_3; }
	inline void set_U3CprevBreakTimeU3E5__2_3(float value)
	{
		___U3CprevBreakTimeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CprevHapticPulseTimeU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CTeleportHintCoroutineU3Ed__106_t318FFF97CD5C8ED0887D17348D6499E8F524FFB6, ___U3CprevHapticPulseTimeU3E5__3_4)); }
	inline float get_U3CprevHapticPulseTimeU3E5__3_4() const { return ___U3CprevHapticPulseTimeU3E5__3_4; }
	inline float* get_address_of_U3CprevHapticPulseTimeU3E5__3_4() { return &___U3CprevHapticPulseTimeU3E5__3_4; }
	inline void set_U3CprevHapticPulseTimeU3E5__3_4(float value)
	{
		___U3CprevHapticPulseTimeU3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3CpulsedU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CTeleportHintCoroutineU3Ed__106_t318FFF97CD5C8ED0887D17348D6499E8F524FFB6, ___U3CpulsedU3E5__4_5)); }
	inline bool get_U3CpulsedU3E5__4_5() const { return ___U3CpulsedU3E5__4_5; }
	inline bool* get_address_of_U3CpulsedU3E5__4_5() { return &___U3CpulsedU3E5__4_5; }
	inline void set_U3CpulsedU3E5__4_5(bool value)
	{
		___U3CpulsedU3E5__4_5 = value;
	}
};


// Valve.VR.InteractionSystem.Throwable/<LateDetach>d__29
struct U3CLateDetachU3Ed__29_t8DC61F0F2923C524707B49D597ABBD91E0AFC980  : public RuntimeObject
{
public:
	// System.Int32 Valve.VR.InteractionSystem.Throwable/<LateDetach>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Valve.VR.InteractionSystem.Throwable/<LateDetach>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Valve.VR.InteractionSystem.Hand Valve.VR.InteractionSystem.Throwable/<LateDetach>d__29::hand
	Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * ___hand_2;
	// Valve.VR.InteractionSystem.Throwable Valve.VR.InteractionSystem.Throwable/<LateDetach>d__29::<>4__this
	Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLateDetachU3Ed__29_t8DC61F0F2923C524707B49D597ABBD91E0AFC980, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLateDetachU3Ed__29_t8DC61F0F2923C524707B49D597ABBD91E0AFC980, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_hand_2() { return static_cast<int32_t>(offsetof(U3CLateDetachU3Ed__29_t8DC61F0F2923C524707B49D597ABBD91E0AFC980, ___hand_2)); }
	inline Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * get_hand_2() const { return ___hand_2; }
	inline Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 ** get_address_of_hand_2() { return &___hand_2; }
	inline void set_hand_2(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * value)
	{
		___hand_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hand_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLateDetachU3Ed__29_t8DC61F0F2923C524707B49D597ABBD91E0AFC980, ___U3CU3E4__this_3)); }
	inline Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Valve.VR.InteractionSystem.Util/<WrapCoroutine>d__43
struct U3CWrapCoroutineU3Ed__43_tEB56558945010B61DB40B57FEF840A08C0753E0C  : public RuntimeObject
{
public:
	// System.Int32 Valve.VR.InteractionSystem.Util/<WrapCoroutine>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Valve.VR.InteractionSystem.Util/<WrapCoroutine>d__43::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Collections.IEnumerator Valve.VR.InteractionSystem.Util/<WrapCoroutine>d__43::coroutine
	RuntimeObject* ___coroutine_2;
	// System.Action Valve.VR.InteractionSystem.Util/<WrapCoroutine>d__43::onCoroutineFinished
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onCoroutineFinished_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWrapCoroutineU3Ed__43_tEB56558945010B61DB40B57FEF840A08C0753E0C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWrapCoroutineU3Ed__43_tEB56558945010B61DB40B57FEF840A08C0753E0C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_coroutine_2() { return static_cast<int32_t>(offsetof(U3CWrapCoroutineU3Ed__43_tEB56558945010B61DB40B57FEF840A08C0753E0C, ___coroutine_2)); }
	inline RuntimeObject* get_coroutine_2() const { return ___coroutine_2; }
	inline RuntimeObject** get_address_of_coroutine_2() { return &___coroutine_2; }
	inline void set_coroutine_2(RuntimeObject* value)
	{
		___coroutine_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coroutine_2), (void*)value);
	}

	inline static int32_t get_offset_of_onCoroutineFinished_3() { return static_cast<int32_t>(offsetof(U3CWrapCoroutineU3Ed__43_tEB56558945010B61DB40B57FEF840A08C0753E0C, ___onCoroutineFinished_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onCoroutineFinished_3() const { return ___onCoroutineFinished_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onCoroutineFinished_3() { return &___onCoroutineFinished_3; }
	inline void set_onCoroutineFinished_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onCoroutineFinished_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCoroutineFinished_3), (void*)value);
	}
};


// Valve.VR.InteractionSystem.Sample.WheelDust/<emitter>d__11
struct U3CemitterU3Ed__11_t47946151B354F774011ED475E28D23489C61F944  : public RuntimeObject
{
public:
	// System.Int32 Valve.VR.InteractionSystem.Sample.WheelDust/<emitter>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Valve.VR.InteractionSystem.Sample.WheelDust/<emitter>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Valve.VR.InteractionSystem.Sample.WheelDust Valve.VR.InteractionSystem.Sample.WheelDust/<emitter>d__11::<>4__this
	WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CemitterU3Ed__11_t47946151B354F774011ED475E28D23489C61F944, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CemitterU3Ed__11_t47946151B354F774011ED475E28D23489C61F944, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CemitterU3Ed__11_t47946151B354F774011ED475E28D23489C61F944, ___U3CU3E4__this_2)); }
	inline WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Valve.VR.SteamVR_Action`2<Valve.VR.SteamVR_Action_Boolean_Source_Map,Valve.VR.SteamVR_Action_Boolean_Source>
struct SteamVR_Action_2_tC41E1B670DDD01F12F592A6EAF298EB8DC7089E9  : public SteamVR_Action_tB37BCB6619FE4A579C9A357286C90CF30A3C1B92
{
public:
	// SourceMap Valve.VR.SteamVR_Action`2::sourceMap
	SteamVR_Action_Boolean_Source_Map_t504F1984E963F4D1553CA999D97F7509C95C8899 * ___sourceMap_4;
	// System.Boolean Valve.VR.SteamVR_Action`2::initialized
	bool ___initialized_5;

public:
	inline static int32_t get_offset_of_sourceMap_4() { return static_cast<int32_t>(offsetof(SteamVR_Action_2_tC41E1B670DDD01F12F592A6EAF298EB8DC7089E9, ___sourceMap_4)); }
	inline SteamVR_Action_Boolean_Source_Map_t504F1984E963F4D1553CA999D97F7509C95C8899 * get_sourceMap_4() const { return ___sourceMap_4; }
	inline SteamVR_Action_Boolean_Source_Map_t504F1984E963F4D1553CA999D97F7509C95C8899 ** get_address_of_sourceMap_4() { return &___sourceMap_4; }
	inline void set_sourceMap_4(SteamVR_Action_Boolean_Source_Map_t504F1984E963F4D1553CA999D97F7509C95C8899 * value)
	{
		___sourceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceMap_4), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_5() { return static_cast<int32_t>(offsetof(SteamVR_Action_2_tC41E1B670DDD01F12F592A6EAF298EB8DC7089E9, ___initialized_5)); }
	inline bool get_initialized_5() const { return ___initialized_5; }
	inline bool* get_address_of_initialized_5() { return &___initialized_5; }
	inline void set_initialized_5(bool value)
	{
		___initialized_5 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
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

// Valve.VR.HmdMatrix34_t
struct HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC 
{
public:
	// System.Single Valve.VR.HmdMatrix34_t::m0
	float ___m0_0;
	// System.Single Valve.VR.HmdMatrix34_t::m1
	float ___m1_1;
	// System.Single Valve.VR.HmdMatrix34_t::m2
	float ___m2_2;
	// System.Single Valve.VR.HmdMatrix34_t::m3
	float ___m3_3;
	// System.Single Valve.VR.HmdMatrix34_t::m4
	float ___m4_4;
	// System.Single Valve.VR.HmdMatrix34_t::m5
	float ___m5_5;
	// System.Single Valve.VR.HmdMatrix34_t::m6
	float ___m6_6;
	// System.Single Valve.VR.HmdMatrix34_t::m7
	float ___m7_7;
	// System.Single Valve.VR.HmdMatrix34_t::m8
	float ___m8_8;
	// System.Single Valve.VR.HmdMatrix34_t::m9
	float ___m9_9;
	// System.Single Valve.VR.HmdMatrix34_t::m10
	float ___m10_10;
	// System.Single Valve.VR.HmdMatrix34_t::m11
	float ___m11_11;

public:
	inline static int32_t get_offset_of_m0_0() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC, ___m0_0)); }
	inline float get_m0_0() const { return ___m0_0; }
	inline float* get_address_of_m0_0() { return &___m0_0; }
	inline void set_m0_0(float value)
	{
		___m0_0 = value;
	}

	inline static int32_t get_offset_of_m1_1() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC, ___m1_1)); }
	inline float get_m1_1() const { return ___m1_1; }
	inline float* get_address_of_m1_1() { return &___m1_1; }
	inline void set_m1_1(float value)
	{
		___m1_1 = value;
	}

	inline static int32_t get_offset_of_m2_2() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC, ___m2_2)); }
	inline float get_m2_2() const { return ___m2_2; }
	inline float* get_address_of_m2_2() { return &___m2_2; }
	inline void set_m2_2(float value)
	{
		___m2_2 = value;
	}

	inline static int32_t get_offset_of_m3_3() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC, ___m3_3)); }
	inline float get_m3_3() const { return ___m3_3; }
	inline float* get_address_of_m3_3() { return &___m3_3; }
	inline void set_m3_3(float value)
	{
		___m3_3 = value;
	}

	inline static int32_t get_offset_of_m4_4() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC, ___m4_4)); }
	inline float get_m4_4() const { return ___m4_4; }
	inline float* get_address_of_m4_4() { return &___m4_4; }
	inline void set_m4_4(float value)
	{
		___m4_4 = value;
	}

	inline static int32_t get_offset_of_m5_5() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC, ___m5_5)); }
	inline float get_m5_5() const { return ___m5_5; }
	inline float* get_address_of_m5_5() { return &___m5_5; }
	inline void set_m5_5(float value)
	{
		___m5_5 = value;
	}

	inline static int32_t get_offset_of_m6_6() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC, ___m6_6)); }
	inline float get_m6_6() const { return ___m6_6; }
	inline float* get_address_of_m6_6() { return &___m6_6; }
	inline void set_m6_6(float value)
	{
		___m6_6 = value;
	}

	inline static int32_t get_offset_of_m7_7() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC, ___m7_7)); }
	inline float get_m7_7() const { return ___m7_7; }
	inline float* get_address_of_m7_7() { return &___m7_7; }
	inline void set_m7_7(float value)
	{
		___m7_7 = value;
	}

	inline static int32_t get_offset_of_m8_8() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC, ___m8_8)); }
	inline float get_m8_8() const { return ___m8_8; }
	inline float* get_address_of_m8_8() { return &___m8_8; }
	inline void set_m8_8(float value)
	{
		___m8_8 = value;
	}

	inline static int32_t get_offset_of_m9_9() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC, ___m9_9)); }
	inline float get_m9_9() const { return ___m9_9; }
	inline float* get_address_of_m9_9() { return &___m9_9; }
	inline void set_m9_9(float value)
	{
		___m9_9 = value;
	}

	inline static int32_t get_offset_of_m10_10() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC, ___m10_10)); }
	inline float get_m10_10() const { return ___m10_10; }
	inline float* get_address_of_m10_10() { return &___m10_10; }
	inline void set_m10_10(float value)
	{
		___m10_10 = value;
	}

	inline static int32_t get_offset_of_m11_11() { return static_cast<int32_t>(offsetof(HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC, ___m11_11)); }
	inline float get_m11_11() const { return ___m11_11; }
	inline float* get_address_of_m11_11() { return &___m11_11; }
	inline void set_m11_11(float value)
	{
		___m11_11 = value;
	}
};


// Valve.VR.HmdMatrix44_t
struct HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9 
{
public:
	// System.Single Valve.VR.HmdMatrix44_t::m0
	float ___m0_0;
	// System.Single Valve.VR.HmdMatrix44_t::m1
	float ___m1_1;
	// System.Single Valve.VR.HmdMatrix44_t::m2
	float ___m2_2;
	// System.Single Valve.VR.HmdMatrix44_t::m3
	float ___m3_3;
	// System.Single Valve.VR.HmdMatrix44_t::m4
	float ___m4_4;
	// System.Single Valve.VR.HmdMatrix44_t::m5
	float ___m5_5;
	// System.Single Valve.VR.HmdMatrix44_t::m6
	float ___m6_6;
	// System.Single Valve.VR.HmdMatrix44_t::m7
	float ___m7_7;
	// System.Single Valve.VR.HmdMatrix44_t::m8
	float ___m8_8;
	// System.Single Valve.VR.HmdMatrix44_t::m9
	float ___m9_9;
	// System.Single Valve.VR.HmdMatrix44_t::m10
	float ___m10_10;
	// System.Single Valve.VR.HmdMatrix44_t::m11
	float ___m11_11;
	// System.Single Valve.VR.HmdMatrix44_t::m12
	float ___m12_12;
	// System.Single Valve.VR.HmdMatrix44_t::m13
	float ___m13_13;
	// System.Single Valve.VR.HmdMatrix44_t::m14
	float ___m14_14;
	// System.Single Valve.VR.HmdMatrix44_t::m15
	float ___m15_15;

public:
	inline static int32_t get_offset_of_m0_0() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m0_0)); }
	inline float get_m0_0() const { return ___m0_0; }
	inline float* get_address_of_m0_0() { return &___m0_0; }
	inline void set_m0_0(float value)
	{
		___m0_0 = value;
	}

	inline static int32_t get_offset_of_m1_1() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m1_1)); }
	inline float get_m1_1() const { return ___m1_1; }
	inline float* get_address_of_m1_1() { return &___m1_1; }
	inline void set_m1_1(float value)
	{
		___m1_1 = value;
	}

	inline static int32_t get_offset_of_m2_2() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m2_2)); }
	inline float get_m2_2() const { return ___m2_2; }
	inline float* get_address_of_m2_2() { return &___m2_2; }
	inline void set_m2_2(float value)
	{
		___m2_2 = value;
	}

	inline static int32_t get_offset_of_m3_3() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m3_3)); }
	inline float get_m3_3() const { return ___m3_3; }
	inline float* get_address_of_m3_3() { return &___m3_3; }
	inline void set_m3_3(float value)
	{
		___m3_3 = value;
	}

	inline static int32_t get_offset_of_m4_4() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m4_4)); }
	inline float get_m4_4() const { return ___m4_4; }
	inline float* get_address_of_m4_4() { return &___m4_4; }
	inline void set_m4_4(float value)
	{
		___m4_4 = value;
	}

	inline static int32_t get_offset_of_m5_5() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m5_5)); }
	inline float get_m5_5() const { return ___m5_5; }
	inline float* get_address_of_m5_5() { return &___m5_5; }
	inline void set_m5_5(float value)
	{
		___m5_5 = value;
	}

	inline static int32_t get_offset_of_m6_6() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m6_6)); }
	inline float get_m6_6() const { return ___m6_6; }
	inline float* get_address_of_m6_6() { return &___m6_6; }
	inline void set_m6_6(float value)
	{
		___m6_6 = value;
	}

	inline static int32_t get_offset_of_m7_7() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m7_7)); }
	inline float get_m7_7() const { return ___m7_7; }
	inline float* get_address_of_m7_7() { return &___m7_7; }
	inline void set_m7_7(float value)
	{
		___m7_7 = value;
	}

	inline static int32_t get_offset_of_m8_8() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m8_8)); }
	inline float get_m8_8() const { return ___m8_8; }
	inline float* get_address_of_m8_8() { return &___m8_8; }
	inline void set_m8_8(float value)
	{
		___m8_8 = value;
	}

	inline static int32_t get_offset_of_m9_9() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m9_9)); }
	inline float get_m9_9() const { return ___m9_9; }
	inline float* get_address_of_m9_9() { return &___m9_9; }
	inline void set_m9_9(float value)
	{
		___m9_9 = value;
	}

	inline static int32_t get_offset_of_m10_10() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m10_10)); }
	inline float get_m10_10() const { return ___m10_10; }
	inline float* get_address_of_m10_10() { return &___m10_10; }
	inline void set_m10_10(float value)
	{
		___m10_10 = value;
	}

	inline static int32_t get_offset_of_m11_11() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m11_11)); }
	inline float get_m11_11() const { return ___m11_11; }
	inline float* get_address_of_m11_11() { return &___m11_11; }
	inline void set_m11_11(float value)
	{
		___m11_11 = value;
	}

	inline static int32_t get_offset_of_m12_12() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m12_12)); }
	inline float get_m12_12() const { return ___m12_12; }
	inline float* get_address_of_m12_12() { return &___m12_12; }
	inline void set_m12_12(float value)
	{
		___m12_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m14_14() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m14_14)); }
	inline float get_m14_14() const { return ___m14_14; }
	inline float* get_address_of_m14_14() { return &___m14_14; }
	inline void set_m14_14(float value)
	{
		___m14_14 = value;
	}

	inline static int32_t get_offset_of_m15_15() { return static_cast<int32_t>(offsetof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9, ___m15_15)); }
	inline float get_m15_15() const { return ___m15_15; }
	inline float* get_address_of_m15_15() { return &___m15_15; }
	inline void set_m15_15(float value)
	{
		___m15_15 = value;
	}
};


// Valve.VR.IVRSystem
struct IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786 
{
public:
	// Valve.VR.IVRSystem/_GetRecommendedRenderTargetSize Valve.VR.IVRSystem::GetRecommendedRenderTargetSize
	_GetRecommendedRenderTargetSize_t68595CF1263FCEC156A4C3520BA027D9263294DA * ___GetRecommendedRenderTargetSize_0;
	// Valve.VR.IVRSystem/_GetProjectionMatrix Valve.VR.IVRSystem::GetProjectionMatrix
	_GetProjectionMatrix_tAFF45FBE481225BE2ACE624E3DDF805EA953C10B * ___GetProjectionMatrix_1;
	// Valve.VR.IVRSystem/_GetProjectionRaw Valve.VR.IVRSystem::GetProjectionRaw
	_GetProjectionRaw_t1A7D4926CBAD9FD8D5840D79D1A3117003B215A1 * ___GetProjectionRaw_2;
	// Valve.VR.IVRSystem/_ComputeDistortion Valve.VR.IVRSystem::ComputeDistortion
	_ComputeDistortion_t2AD5D97371512EE4A2B445E2BF17F0847DA0C7ED * ___ComputeDistortion_3;
	// Valve.VR.IVRSystem/_GetEyeToHeadTransform Valve.VR.IVRSystem::GetEyeToHeadTransform
	_GetEyeToHeadTransform_t8D8ECAA1FD5315161215020E353D42D70F1D5D1A * ___GetEyeToHeadTransform_4;
	// Valve.VR.IVRSystem/_GetTimeSinceLastVsync Valve.VR.IVRSystem::GetTimeSinceLastVsync
	_GetTimeSinceLastVsync_t14D4253A8274031FC7503BDE36901E977A687DFD * ___GetTimeSinceLastVsync_5;
	// Valve.VR.IVRSystem/_GetD3D9AdapterIndex Valve.VR.IVRSystem::GetD3D9AdapterIndex
	_GetD3D9AdapterIndex_t92F8192B1CAEDB337809322FF2E1EDF874E649AB * ___GetD3D9AdapterIndex_6;
	// Valve.VR.IVRSystem/_GetDXGIOutputInfo Valve.VR.IVRSystem::GetDXGIOutputInfo
	_GetDXGIOutputInfo_t6464D69302C25CD86DCD2B37D0E0A22E887682AC * ___GetDXGIOutputInfo_7;
	// Valve.VR.IVRSystem/_GetOutputDevice Valve.VR.IVRSystem::GetOutputDevice
	_GetOutputDevice_t94061AEC40C8E9C67BE3B56C40147B5AF1CA2270 * ___GetOutputDevice_8;
	// Valve.VR.IVRSystem/_IsDisplayOnDesktop Valve.VR.IVRSystem::IsDisplayOnDesktop
	_IsDisplayOnDesktop_t79F23BBE0F30892C4FC143035EC3960BE980AE27 * ___IsDisplayOnDesktop_9;
	// Valve.VR.IVRSystem/_SetDisplayVisibility Valve.VR.IVRSystem::SetDisplayVisibility
	_SetDisplayVisibility_t7BB3AB0AE15E0AD4E9AAB472AEF2F5E4A7099C32 * ___SetDisplayVisibility_10;
	// Valve.VR.IVRSystem/_GetDeviceToAbsoluteTrackingPose Valve.VR.IVRSystem::GetDeviceToAbsoluteTrackingPose
	_GetDeviceToAbsoluteTrackingPose_tC27BC33D0F92116B0CAB78C54D3FEE0A1E4BFBAE * ___GetDeviceToAbsoluteTrackingPose_11;
	// Valve.VR.IVRSystem/_GetSeatedZeroPoseToStandingAbsoluteTrackingPose Valve.VR.IVRSystem::GetSeatedZeroPoseToStandingAbsoluteTrackingPose
	_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_t6EC9E5D3FA123B340A37C519118A21729EFB882F * ___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_12;
	// Valve.VR.IVRSystem/_GetRawZeroPoseToStandingAbsoluteTrackingPose Valve.VR.IVRSystem::GetRawZeroPoseToStandingAbsoluteTrackingPose
	_GetRawZeroPoseToStandingAbsoluteTrackingPose_t736A2F56757C5683170208E45A8E2122FC0B8B77 * ___GetRawZeroPoseToStandingAbsoluteTrackingPose_13;
	// Valve.VR.IVRSystem/_GetSortedTrackedDeviceIndicesOfClass Valve.VR.IVRSystem::GetSortedTrackedDeviceIndicesOfClass
	_GetSortedTrackedDeviceIndicesOfClass_t9463541ACD325B7704BC4CE060A6E4E0D9FC7B0D * ___GetSortedTrackedDeviceIndicesOfClass_14;
	// Valve.VR.IVRSystem/_GetTrackedDeviceActivityLevel Valve.VR.IVRSystem::GetTrackedDeviceActivityLevel
	_GetTrackedDeviceActivityLevel_t3E06A046C032E114ECCD060292740B15A3B49642 * ___GetTrackedDeviceActivityLevel_15;
	// Valve.VR.IVRSystem/_ApplyTransform Valve.VR.IVRSystem::ApplyTransform
	_ApplyTransform_tFDB18E4DD7A98E2F270A0500C93E160073B75C74 * ___ApplyTransform_16;
	// Valve.VR.IVRSystem/_GetTrackedDeviceIndexForControllerRole Valve.VR.IVRSystem::GetTrackedDeviceIndexForControllerRole
	_GetTrackedDeviceIndexForControllerRole_t30CB98E98A7AB1E67EAF4553BE1E005F43C9CDE1 * ___GetTrackedDeviceIndexForControllerRole_17;
	// Valve.VR.IVRSystem/_GetControllerRoleForTrackedDeviceIndex Valve.VR.IVRSystem::GetControllerRoleForTrackedDeviceIndex
	_GetControllerRoleForTrackedDeviceIndex_t23FBD24FD25C599016F6402D9BF571D9874A6D0D * ___GetControllerRoleForTrackedDeviceIndex_18;
	// Valve.VR.IVRSystem/_GetTrackedDeviceClass Valve.VR.IVRSystem::GetTrackedDeviceClass
	_GetTrackedDeviceClass_tCB4A4133933EF8B125F54237B7B7E3A3E5278F4F * ___GetTrackedDeviceClass_19;
	// Valve.VR.IVRSystem/_IsTrackedDeviceConnected Valve.VR.IVRSystem::IsTrackedDeviceConnected
	_IsTrackedDeviceConnected_t971C1F0935F9BBB91C3B20E2B78560E7DCFBC89A * ___IsTrackedDeviceConnected_20;
	// Valve.VR.IVRSystem/_GetBoolTrackedDeviceProperty Valve.VR.IVRSystem::GetBoolTrackedDeviceProperty
	_GetBoolTrackedDeviceProperty_t2B420117C58065BFE6131E5B460F8EB9E322A617 * ___GetBoolTrackedDeviceProperty_21;
	// Valve.VR.IVRSystem/_GetFloatTrackedDeviceProperty Valve.VR.IVRSystem::GetFloatTrackedDeviceProperty
	_GetFloatTrackedDeviceProperty_t67E4F1EC31BBCA0E7D54BF0A65D74FBF05644908 * ___GetFloatTrackedDeviceProperty_22;
	// Valve.VR.IVRSystem/_GetInt32TrackedDeviceProperty Valve.VR.IVRSystem::GetInt32TrackedDeviceProperty
	_GetInt32TrackedDeviceProperty_tC319AC2CB5EE45C5FCDAB2A10DBF5A99E368B30B * ___GetInt32TrackedDeviceProperty_23;
	// Valve.VR.IVRSystem/_GetUint64TrackedDeviceProperty Valve.VR.IVRSystem::GetUint64TrackedDeviceProperty
	_GetUint64TrackedDeviceProperty_t2AAE1727D570F4B0EEF873F48299F5C593ABE33A * ___GetUint64TrackedDeviceProperty_24;
	// Valve.VR.IVRSystem/_GetMatrix34TrackedDeviceProperty Valve.VR.IVRSystem::GetMatrix34TrackedDeviceProperty
	_GetMatrix34TrackedDeviceProperty_t18701C7256456EFB6331646D5C046926B10EABAF * ___GetMatrix34TrackedDeviceProperty_25;
	// Valve.VR.IVRSystem/_GetArrayTrackedDeviceProperty Valve.VR.IVRSystem::GetArrayTrackedDeviceProperty
	_GetArrayTrackedDeviceProperty_t6689DD73D8A9FCEF30E1511D2BE51244326CD3B1 * ___GetArrayTrackedDeviceProperty_26;
	// Valve.VR.IVRSystem/_GetStringTrackedDeviceProperty Valve.VR.IVRSystem::GetStringTrackedDeviceProperty
	_GetStringTrackedDeviceProperty_t416FC985873C7598EC1465F05691A4CE359176D1 * ___GetStringTrackedDeviceProperty_27;
	// Valve.VR.IVRSystem/_GetPropErrorNameFromEnum Valve.VR.IVRSystem::GetPropErrorNameFromEnum
	_GetPropErrorNameFromEnum_t3956179857AFD556169A0C526E2CD50152C31A04 * ___GetPropErrorNameFromEnum_28;
	// Valve.VR.IVRSystem/_PollNextEvent Valve.VR.IVRSystem::PollNextEvent
	_PollNextEvent_t86DBE8D3267ED34FC9A11BD212AC84EA6EB18CF6 * ___PollNextEvent_29;
	// Valve.VR.IVRSystem/_PollNextEventWithPose Valve.VR.IVRSystem::PollNextEventWithPose
	_PollNextEventWithPose_t7552E34D17A116877CBCCAA8C75ACEFF88878364 * ___PollNextEventWithPose_30;
	// Valve.VR.IVRSystem/_GetEventTypeNameFromEnum Valve.VR.IVRSystem::GetEventTypeNameFromEnum
	_GetEventTypeNameFromEnum_t279A34BEBA324CA1786788719A606C592D715230 * ___GetEventTypeNameFromEnum_31;
	// Valve.VR.IVRSystem/_GetHiddenAreaMesh Valve.VR.IVRSystem::GetHiddenAreaMesh
	_GetHiddenAreaMesh_tBD1F007E89A9109B34A70CF1F568FB4199213DE8 * ___GetHiddenAreaMesh_32;
	// Valve.VR.IVRSystem/_GetControllerState Valve.VR.IVRSystem::GetControllerState
	_GetControllerState_t10782313381F8D2D8D096A49084BD4F28041BD59 * ___GetControllerState_33;
	// Valve.VR.IVRSystem/_GetControllerStateWithPose Valve.VR.IVRSystem::GetControllerStateWithPose
	_GetControllerStateWithPose_tBFA8462022986AF55655D86EFF563CA2823A9D87 * ___GetControllerStateWithPose_34;
	// Valve.VR.IVRSystem/_TriggerHapticPulse Valve.VR.IVRSystem::TriggerHapticPulse
	_TriggerHapticPulse_t02D1EB948BDE1AE85B42320185EFA98C8DD1007B * ___TriggerHapticPulse_35;
	// Valve.VR.IVRSystem/_GetButtonIdNameFromEnum Valve.VR.IVRSystem::GetButtonIdNameFromEnum
	_GetButtonIdNameFromEnum_tFC87E5D34788044225BE2E86234354F025080F4D * ___GetButtonIdNameFromEnum_36;
	// Valve.VR.IVRSystem/_GetControllerAxisTypeNameFromEnum Valve.VR.IVRSystem::GetControllerAxisTypeNameFromEnum
	_GetControllerAxisTypeNameFromEnum_tF8E80732BC2DBD70C8B536888C0668EAEBC1972B * ___GetControllerAxisTypeNameFromEnum_37;
	// Valve.VR.IVRSystem/_IsInputAvailable Valve.VR.IVRSystem::IsInputAvailable
	_IsInputAvailable_t207B8074FB28E19E36824E4E87782003ACCBD96B * ___IsInputAvailable_38;
	// Valve.VR.IVRSystem/_IsSteamVRDrawingControllers Valve.VR.IVRSystem::IsSteamVRDrawingControllers
	_IsSteamVRDrawingControllers_t1C470DD053784EE83E329BDD481424B52F4687B9 * ___IsSteamVRDrawingControllers_39;
	// Valve.VR.IVRSystem/_ShouldApplicationPause Valve.VR.IVRSystem::ShouldApplicationPause
	_ShouldApplicationPause_t61E037C737A8D7AB0E054CFCCF896FC8916D7538 * ___ShouldApplicationPause_40;
	// Valve.VR.IVRSystem/_ShouldApplicationReduceRenderingWork Valve.VR.IVRSystem::ShouldApplicationReduceRenderingWork
	_ShouldApplicationReduceRenderingWork_t774D2EEA1E076F50A94A131DA6070E8180E6F62B * ___ShouldApplicationReduceRenderingWork_41;
	// Valve.VR.IVRSystem/_PerformFirmwareUpdate Valve.VR.IVRSystem::PerformFirmwareUpdate
	_PerformFirmwareUpdate_t0FD169A0800C2A9B5BDFF76E3452588F84BEAA3A * ___PerformFirmwareUpdate_42;
	// Valve.VR.IVRSystem/_AcknowledgeQuit_Exiting Valve.VR.IVRSystem::AcknowledgeQuit_Exiting
	_AcknowledgeQuit_Exiting_t5A9D9A75A89A0AAE98236EC6408AE77644B6A81E * ___AcknowledgeQuit_Exiting_43;
	// Valve.VR.IVRSystem/_GetAppContainerFilePaths Valve.VR.IVRSystem::GetAppContainerFilePaths
	_GetAppContainerFilePaths_tC9F2A708E189642FF074522CFE0A50BD21CE0566 * ___GetAppContainerFilePaths_44;
	// Valve.VR.IVRSystem/_GetRuntimeVersion Valve.VR.IVRSystem::GetRuntimeVersion
	_GetRuntimeVersion_t39F4CD120C25C93429DFE831EFB4178D07912C81 * ___GetRuntimeVersion_45;

public:
	inline static int32_t get_offset_of_GetRecommendedRenderTargetSize_0() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetRecommendedRenderTargetSize_0)); }
	inline _GetRecommendedRenderTargetSize_t68595CF1263FCEC156A4C3520BA027D9263294DA * get_GetRecommendedRenderTargetSize_0() const { return ___GetRecommendedRenderTargetSize_0; }
	inline _GetRecommendedRenderTargetSize_t68595CF1263FCEC156A4C3520BA027D9263294DA ** get_address_of_GetRecommendedRenderTargetSize_0() { return &___GetRecommendedRenderTargetSize_0; }
	inline void set_GetRecommendedRenderTargetSize_0(_GetRecommendedRenderTargetSize_t68595CF1263FCEC156A4C3520BA027D9263294DA * value)
	{
		___GetRecommendedRenderTargetSize_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetRecommendedRenderTargetSize_0), (void*)value);
	}

	inline static int32_t get_offset_of_GetProjectionMatrix_1() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetProjectionMatrix_1)); }
	inline _GetProjectionMatrix_tAFF45FBE481225BE2ACE624E3DDF805EA953C10B * get_GetProjectionMatrix_1() const { return ___GetProjectionMatrix_1; }
	inline _GetProjectionMatrix_tAFF45FBE481225BE2ACE624E3DDF805EA953C10B ** get_address_of_GetProjectionMatrix_1() { return &___GetProjectionMatrix_1; }
	inline void set_GetProjectionMatrix_1(_GetProjectionMatrix_tAFF45FBE481225BE2ACE624E3DDF805EA953C10B * value)
	{
		___GetProjectionMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetProjectionMatrix_1), (void*)value);
	}

	inline static int32_t get_offset_of_GetProjectionRaw_2() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetProjectionRaw_2)); }
	inline _GetProjectionRaw_t1A7D4926CBAD9FD8D5840D79D1A3117003B215A1 * get_GetProjectionRaw_2() const { return ___GetProjectionRaw_2; }
	inline _GetProjectionRaw_t1A7D4926CBAD9FD8D5840D79D1A3117003B215A1 ** get_address_of_GetProjectionRaw_2() { return &___GetProjectionRaw_2; }
	inline void set_GetProjectionRaw_2(_GetProjectionRaw_t1A7D4926CBAD9FD8D5840D79D1A3117003B215A1 * value)
	{
		___GetProjectionRaw_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetProjectionRaw_2), (void*)value);
	}

	inline static int32_t get_offset_of_ComputeDistortion_3() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___ComputeDistortion_3)); }
	inline _ComputeDistortion_t2AD5D97371512EE4A2B445E2BF17F0847DA0C7ED * get_ComputeDistortion_3() const { return ___ComputeDistortion_3; }
	inline _ComputeDistortion_t2AD5D97371512EE4A2B445E2BF17F0847DA0C7ED ** get_address_of_ComputeDistortion_3() { return &___ComputeDistortion_3; }
	inline void set_ComputeDistortion_3(_ComputeDistortion_t2AD5D97371512EE4A2B445E2BF17F0847DA0C7ED * value)
	{
		___ComputeDistortion_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ComputeDistortion_3), (void*)value);
	}

	inline static int32_t get_offset_of_GetEyeToHeadTransform_4() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetEyeToHeadTransform_4)); }
	inline _GetEyeToHeadTransform_t8D8ECAA1FD5315161215020E353D42D70F1D5D1A * get_GetEyeToHeadTransform_4() const { return ___GetEyeToHeadTransform_4; }
	inline _GetEyeToHeadTransform_t8D8ECAA1FD5315161215020E353D42D70F1D5D1A ** get_address_of_GetEyeToHeadTransform_4() { return &___GetEyeToHeadTransform_4; }
	inline void set_GetEyeToHeadTransform_4(_GetEyeToHeadTransform_t8D8ECAA1FD5315161215020E353D42D70F1D5D1A * value)
	{
		___GetEyeToHeadTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetEyeToHeadTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_GetTimeSinceLastVsync_5() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetTimeSinceLastVsync_5)); }
	inline _GetTimeSinceLastVsync_t14D4253A8274031FC7503BDE36901E977A687DFD * get_GetTimeSinceLastVsync_5() const { return ___GetTimeSinceLastVsync_5; }
	inline _GetTimeSinceLastVsync_t14D4253A8274031FC7503BDE36901E977A687DFD ** get_address_of_GetTimeSinceLastVsync_5() { return &___GetTimeSinceLastVsync_5; }
	inline void set_GetTimeSinceLastVsync_5(_GetTimeSinceLastVsync_t14D4253A8274031FC7503BDE36901E977A687DFD * value)
	{
		___GetTimeSinceLastVsync_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetTimeSinceLastVsync_5), (void*)value);
	}

	inline static int32_t get_offset_of_GetD3D9AdapterIndex_6() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetD3D9AdapterIndex_6)); }
	inline _GetD3D9AdapterIndex_t92F8192B1CAEDB337809322FF2E1EDF874E649AB * get_GetD3D9AdapterIndex_6() const { return ___GetD3D9AdapterIndex_6; }
	inline _GetD3D9AdapterIndex_t92F8192B1CAEDB337809322FF2E1EDF874E649AB ** get_address_of_GetD3D9AdapterIndex_6() { return &___GetD3D9AdapterIndex_6; }
	inline void set_GetD3D9AdapterIndex_6(_GetD3D9AdapterIndex_t92F8192B1CAEDB337809322FF2E1EDF874E649AB * value)
	{
		___GetD3D9AdapterIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetD3D9AdapterIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_GetDXGIOutputInfo_7() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetDXGIOutputInfo_7)); }
	inline _GetDXGIOutputInfo_t6464D69302C25CD86DCD2B37D0E0A22E887682AC * get_GetDXGIOutputInfo_7() const { return ___GetDXGIOutputInfo_7; }
	inline _GetDXGIOutputInfo_t6464D69302C25CD86DCD2B37D0E0A22E887682AC ** get_address_of_GetDXGIOutputInfo_7() { return &___GetDXGIOutputInfo_7; }
	inline void set_GetDXGIOutputInfo_7(_GetDXGIOutputInfo_t6464D69302C25CD86DCD2B37D0E0A22E887682AC * value)
	{
		___GetDXGIOutputInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetDXGIOutputInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of_GetOutputDevice_8() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetOutputDevice_8)); }
	inline _GetOutputDevice_t94061AEC40C8E9C67BE3B56C40147B5AF1CA2270 * get_GetOutputDevice_8() const { return ___GetOutputDevice_8; }
	inline _GetOutputDevice_t94061AEC40C8E9C67BE3B56C40147B5AF1CA2270 ** get_address_of_GetOutputDevice_8() { return &___GetOutputDevice_8; }
	inline void set_GetOutputDevice_8(_GetOutputDevice_t94061AEC40C8E9C67BE3B56C40147B5AF1CA2270 * value)
	{
		___GetOutputDevice_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetOutputDevice_8), (void*)value);
	}

	inline static int32_t get_offset_of_IsDisplayOnDesktop_9() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___IsDisplayOnDesktop_9)); }
	inline _IsDisplayOnDesktop_t79F23BBE0F30892C4FC143035EC3960BE980AE27 * get_IsDisplayOnDesktop_9() const { return ___IsDisplayOnDesktop_9; }
	inline _IsDisplayOnDesktop_t79F23BBE0F30892C4FC143035EC3960BE980AE27 ** get_address_of_IsDisplayOnDesktop_9() { return &___IsDisplayOnDesktop_9; }
	inline void set_IsDisplayOnDesktop_9(_IsDisplayOnDesktop_t79F23BBE0F30892C4FC143035EC3960BE980AE27 * value)
	{
		___IsDisplayOnDesktop_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsDisplayOnDesktop_9), (void*)value);
	}

	inline static int32_t get_offset_of_SetDisplayVisibility_10() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___SetDisplayVisibility_10)); }
	inline _SetDisplayVisibility_t7BB3AB0AE15E0AD4E9AAB472AEF2F5E4A7099C32 * get_SetDisplayVisibility_10() const { return ___SetDisplayVisibility_10; }
	inline _SetDisplayVisibility_t7BB3AB0AE15E0AD4E9AAB472AEF2F5E4A7099C32 ** get_address_of_SetDisplayVisibility_10() { return &___SetDisplayVisibility_10; }
	inline void set_SetDisplayVisibility_10(_SetDisplayVisibility_t7BB3AB0AE15E0AD4E9AAB472AEF2F5E4A7099C32 * value)
	{
		___SetDisplayVisibility_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SetDisplayVisibility_10), (void*)value);
	}

	inline static int32_t get_offset_of_GetDeviceToAbsoluteTrackingPose_11() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetDeviceToAbsoluteTrackingPose_11)); }
	inline _GetDeviceToAbsoluteTrackingPose_tC27BC33D0F92116B0CAB78C54D3FEE0A1E4BFBAE * get_GetDeviceToAbsoluteTrackingPose_11() const { return ___GetDeviceToAbsoluteTrackingPose_11; }
	inline _GetDeviceToAbsoluteTrackingPose_tC27BC33D0F92116B0CAB78C54D3FEE0A1E4BFBAE ** get_address_of_GetDeviceToAbsoluteTrackingPose_11() { return &___GetDeviceToAbsoluteTrackingPose_11; }
	inline void set_GetDeviceToAbsoluteTrackingPose_11(_GetDeviceToAbsoluteTrackingPose_tC27BC33D0F92116B0CAB78C54D3FEE0A1E4BFBAE * value)
	{
		___GetDeviceToAbsoluteTrackingPose_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetDeviceToAbsoluteTrackingPose_11), (void*)value);
	}

	inline static int32_t get_offset_of_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_12() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_12)); }
	inline _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_t6EC9E5D3FA123B340A37C519118A21729EFB882F * get_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_12() const { return ___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_12; }
	inline _GetSeatedZeroPoseToStandingAbsoluteTrackingPose_t6EC9E5D3FA123B340A37C519118A21729EFB882F ** get_address_of_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_12() { return &___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_12; }
	inline void set_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_12(_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_t6EC9E5D3FA123B340A37C519118A21729EFB882F * value)
	{
		___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_12), (void*)value);
	}

	inline static int32_t get_offset_of_GetRawZeroPoseToStandingAbsoluteTrackingPose_13() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetRawZeroPoseToStandingAbsoluteTrackingPose_13)); }
	inline _GetRawZeroPoseToStandingAbsoluteTrackingPose_t736A2F56757C5683170208E45A8E2122FC0B8B77 * get_GetRawZeroPoseToStandingAbsoluteTrackingPose_13() const { return ___GetRawZeroPoseToStandingAbsoluteTrackingPose_13; }
	inline _GetRawZeroPoseToStandingAbsoluteTrackingPose_t736A2F56757C5683170208E45A8E2122FC0B8B77 ** get_address_of_GetRawZeroPoseToStandingAbsoluteTrackingPose_13() { return &___GetRawZeroPoseToStandingAbsoluteTrackingPose_13; }
	inline void set_GetRawZeroPoseToStandingAbsoluteTrackingPose_13(_GetRawZeroPoseToStandingAbsoluteTrackingPose_t736A2F56757C5683170208E45A8E2122FC0B8B77 * value)
	{
		___GetRawZeroPoseToStandingAbsoluteTrackingPose_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetRawZeroPoseToStandingAbsoluteTrackingPose_13), (void*)value);
	}

	inline static int32_t get_offset_of_GetSortedTrackedDeviceIndicesOfClass_14() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetSortedTrackedDeviceIndicesOfClass_14)); }
	inline _GetSortedTrackedDeviceIndicesOfClass_t9463541ACD325B7704BC4CE060A6E4E0D9FC7B0D * get_GetSortedTrackedDeviceIndicesOfClass_14() const { return ___GetSortedTrackedDeviceIndicesOfClass_14; }
	inline _GetSortedTrackedDeviceIndicesOfClass_t9463541ACD325B7704BC4CE060A6E4E0D9FC7B0D ** get_address_of_GetSortedTrackedDeviceIndicesOfClass_14() { return &___GetSortedTrackedDeviceIndicesOfClass_14; }
	inline void set_GetSortedTrackedDeviceIndicesOfClass_14(_GetSortedTrackedDeviceIndicesOfClass_t9463541ACD325B7704BC4CE060A6E4E0D9FC7B0D * value)
	{
		___GetSortedTrackedDeviceIndicesOfClass_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetSortedTrackedDeviceIndicesOfClass_14), (void*)value);
	}

	inline static int32_t get_offset_of_GetTrackedDeviceActivityLevel_15() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetTrackedDeviceActivityLevel_15)); }
	inline _GetTrackedDeviceActivityLevel_t3E06A046C032E114ECCD060292740B15A3B49642 * get_GetTrackedDeviceActivityLevel_15() const { return ___GetTrackedDeviceActivityLevel_15; }
	inline _GetTrackedDeviceActivityLevel_t3E06A046C032E114ECCD060292740B15A3B49642 ** get_address_of_GetTrackedDeviceActivityLevel_15() { return &___GetTrackedDeviceActivityLevel_15; }
	inline void set_GetTrackedDeviceActivityLevel_15(_GetTrackedDeviceActivityLevel_t3E06A046C032E114ECCD060292740B15A3B49642 * value)
	{
		___GetTrackedDeviceActivityLevel_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetTrackedDeviceActivityLevel_15), (void*)value);
	}

	inline static int32_t get_offset_of_ApplyTransform_16() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___ApplyTransform_16)); }
	inline _ApplyTransform_tFDB18E4DD7A98E2F270A0500C93E160073B75C74 * get_ApplyTransform_16() const { return ___ApplyTransform_16; }
	inline _ApplyTransform_tFDB18E4DD7A98E2F270A0500C93E160073B75C74 ** get_address_of_ApplyTransform_16() { return &___ApplyTransform_16; }
	inline void set_ApplyTransform_16(_ApplyTransform_tFDB18E4DD7A98E2F270A0500C93E160073B75C74 * value)
	{
		___ApplyTransform_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ApplyTransform_16), (void*)value);
	}

	inline static int32_t get_offset_of_GetTrackedDeviceIndexForControllerRole_17() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetTrackedDeviceIndexForControllerRole_17)); }
	inline _GetTrackedDeviceIndexForControllerRole_t30CB98E98A7AB1E67EAF4553BE1E005F43C9CDE1 * get_GetTrackedDeviceIndexForControllerRole_17() const { return ___GetTrackedDeviceIndexForControllerRole_17; }
	inline _GetTrackedDeviceIndexForControllerRole_t30CB98E98A7AB1E67EAF4553BE1E005F43C9CDE1 ** get_address_of_GetTrackedDeviceIndexForControllerRole_17() { return &___GetTrackedDeviceIndexForControllerRole_17; }
	inline void set_GetTrackedDeviceIndexForControllerRole_17(_GetTrackedDeviceIndexForControllerRole_t30CB98E98A7AB1E67EAF4553BE1E005F43C9CDE1 * value)
	{
		___GetTrackedDeviceIndexForControllerRole_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetTrackedDeviceIndexForControllerRole_17), (void*)value);
	}

	inline static int32_t get_offset_of_GetControllerRoleForTrackedDeviceIndex_18() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetControllerRoleForTrackedDeviceIndex_18)); }
	inline _GetControllerRoleForTrackedDeviceIndex_t23FBD24FD25C599016F6402D9BF571D9874A6D0D * get_GetControllerRoleForTrackedDeviceIndex_18() const { return ___GetControllerRoleForTrackedDeviceIndex_18; }
	inline _GetControllerRoleForTrackedDeviceIndex_t23FBD24FD25C599016F6402D9BF571D9874A6D0D ** get_address_of_GetControllerRoleForTrackedDeviceIndex_18() { return &___GetControllerRoleForTrackedDeviceIndex_18; }
	inline void set_GetControllerRoleForTrackedDeviceIndex_18(_GetControllerRoleForTrackedDeviceIndex_t23FBD24FD25C599016F6402D9BF571D9874A6D0D * value)
	{
		___GetControllerRoleForTrackedDeviceIndex_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetControllerRoleForTrackedDeviceIndex_18), (void*)value);
	}

	inline static int32_t get_offset_of_GetTrackedDeviceClass_19() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetTrackedDeviceClass_19)); }
	inline _GetTrackedDeviceClass_tCB4A4133933EF8B125F54237B7B7E3A3E5278F4F * get_GetTrackedDeviceClass_19() const { return ___GetTrackedDeviceClass_19; }
	inline _GetTrackedDeviceClass_tCB4A4133933EF8B125F54237B7B7E3A3E5278F4F ** get_address_of_GetTrackedDeviceClass_19() { return &___GetTrackedDeviceClass_19; }
	inline void set_GetTrackedDeviceClass_19(_GetTrackedDeviceClass_tCB4A4133933EF8B125F54237B7B7E3A3E5278F4F * value)
	{
		___GetTrackedDeviceClass_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetTrackedDeviceClass_19), (void*)value);
	}

	inline static int32_t get_offset_of_IsTrackedDeviceConnected_20() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___IsTrackedDeviceConnected_20)); }
	inline _IsTrackedDeviceConnected_t971C1F0935F9BBB91C3B20E2B78560E7DCFBC89A * get_IsTrackedDeviceConnected_20() const { return ___IsTrackedDeviceConnected_20; }
	inline _IsTrackedDeviceConnected_t971C1F0935F9BBB91C3B20E2B78560E7DCFBC89A ** get_address_of_IsTrackedDeviceConnected_20() { return &___IsTrackedDeviceConnected_20; }
	inline void set_IsTrackedDeviceConnected_20(_IsTrackedDeviceConnected_t971C1F0935F9BBB91C3B20E2B78560E7DCFBC89A * value)
	{
		___IsTrackedDeviceConnected_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsTrackedDeviceConnected_20), (void*)value);
	}

	inline static int32_t get_offset_of_GetBoolTrackedDeviceProperty_21() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetBoolTrackedDeviceProperty_21)); }
	inline _GetBoolTrackedDeviceProperty_t2B420117C58065BFE6131E5B460F8EB9E322A617 * get_GetBoolTrackedDeviceProperty_21() const { return ___GetBoolTrackedDeviceProperty_21; }
	inline _GetBoolTrackedDeviceProperty_t2B420117C58065BFE6131E5B460F8EB9E322A617 ** get_address_of_GetBoolTrackedDeviceProperty_21() { return &___GetBoolTrackedDeviceProperty_21; }
	inline void set_GetBoolTrackedDeviceProperty_21(_GetBoolTrackedDeviceProperty_t2B420117C58065BFE6131E5B460F8EB9E322A617 * value)
	{
		___GetBoolTrackedDeviceProperty_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetBoolTrackedDeviceProperty_21), (void*)value);
	}

	inline static int32_t get_offset_of_GetFloatTrackedDeviceProperty_22() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetFloatTrackedDeviceProperty_22)); }
	inline _GetFloatTrackedDeviceProperty_t67E4F1EC31BBCA0E7D54BF0A65D74FBF05644908 * get_GetFloatTrackedDeviceProperty_22() const { return ___GetFloatTrackedDeviceProperty_22; }
	inline _GetFloatTrackedDeviceProperty_t67E4F1EC31BBCA0E7D54BF0A65D74FBF05644908 ** get_address_of_GetFloatTrackedDeviceProperty_22() { return &___GetFloatTrackedDeviceProperty_22; }
	inline void set_GetFloatTrackedDeviceProperty_22(_GetFloatTrackedDeviceProperty_t67E4F1EC31BBCA0E7D54BF0A65D74FBF05644908 * value)
	{
		___GetFloatTrackedDeviceProperty_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetFloatTrackedDeviceProperty_22), (void*)value);
	}

	inline static int32_t get_offset_of_GetInt32TrackedDeviceProperty_23() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetInt32TrackedDeviceProperty_23)); }
	inline _GetInt32TrackedDeviceProperty_tC319AC2CB5EE45C5FCDAB2A10DBF5A99E368B30B * get_GetInt32TrackedDeviceProperty_23() const { return ___GetInt32TrackedDeviceProperty_23; }
	inline _GetInt32TrackedDeviceProperty_tC319AC2CB5EE45C5FCDAB2A10DBF5A99E368B30B ** get_address_of_GetInt32TrackedDeviceProperty_23() { return &___GetInt32TrackedDeviceProperty_23; }
	inline void set_GetInt32TrackedDeviceProperty_23(_GetInt32TrackedDeviceProperty_tC319AC2CB5EE45C5FCDAB2A10DBF5A99E368B30B * value)
	{
		___GetInt32TrackedDeviceProperty_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetInt32TrackedDeviceProperty_23), (void*)value);
	}

	inline static int32_t get_offset_of_GetUint64TrackedDeviceProperty_24() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetUint64TrackedDeviceProperty_24)); }
	inline _GetUint64TrackedDeviceProperty_t2AAE1727D570F4B0EEF873F48299F5C593ABE33A * get_GetUint64TrackedDeviceProperty_24() const { return ___GetUint64TrackedDeviceProperty_24; }
	inline _GetUint64TrackedDeviceProperty_t2AAE1727D570F4B0EEF873F48299F5C593ABE33A ** get_address_of_GetUint64TrackedDeviceProperty_24() { return &___GetUint64TrackedDeviceProperty_24; }
	inline void set_GetUint64TrackedDeviceProperty_24(_GetUint64TrackedDeviceProperty_t2AAE1727D570F4B0EEF873F48299F5C593ABE33A * value)
	{
		___GetUint64TrackedDeviceProperty_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetUint64TrackedDeviceProperty_24), (void*)value);
	}

	inline static int32_t get_offset_of_GetMatrix34TrackedDeviceProperty_25() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetMatrix34TrackedDeviceProperty_25)); }
	inline _GetMatrix34TrackedDeviceProperty_t18701C7256456EFB6331646D5C046926B10EABAF * get_GetMatrix34TrackedDeviceProperty_25() const { return ___GetMatrix34TrackedDeviceProperty_25; }
	inline _GetMatrix34TrackedDeviceProperty_t18701C7256456EFB6331646D5C046926B10EABAF ** get_address_of_GetMatrix34TrackedDeviceProperty_25() { return &___GetMatrix34TrackedDeviceProperty_25; }
	inline void set_GetMatrix34TrackedDeviceProperty_25(_GetMatrix34TrackedDeviceProperty_t18701C7256456EFB6331646D5C046926B10EABAF * value)
	{
		___GetMatrix34TrackedDeviceProperty_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetMatrix34TrackedDeviceProperty_25), (void*)value);
	}

	inline static int32_t get_offset_of_GetArrayTrackedDeviceProperty_26() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetArrayTrackedDeviceProperty_26)); }
	inline _GetArrayTrackedDeviceProperty_t6689DD73D8A9FCEF30E1511D2BE51244326CD3B1 * get_GetArrayTrackedDeviceProperty_26() const { return ___GetArrayTrackedDeviceProperty_26; }
	inline _GetArrayTrackedDeviceProperty_t6689DD73D8A9FCEF30E1511D2BE51244326CD3B1 ** get_address_of_GetArrayTrackedDeviceProperty_26() { return &___GetArrayTrackedDeviceProperty_26; }
	inline void set_GetArrayTrackedDeviceProperty_26(_GetArrayTrackedDeviceProperty_t6689DD73D8A9FCEF30E1511D2BE51244326CD3B1 * value)
	{
		___GetArrayTrackedDeviceProperty_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetArrayTrackedDeviceProperty_26), (void*)value);
	}

	inline static int32_t get_offset_of_GetStringTrackedDeviceProperty_27() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetStringTrackedDeviceProperty_27)); }
	inline _GetStringTrackedDeviceProperty_t416FC985873C7598EC1465F05691A4CE359176D1 * get_GetStringTrackedDeviceProperty_27() const { return ___GetStringTrackedDeviceProperty_27; }
	inline _GetStringTrackedDeviceProperty_t416FC985873C7598EC1465F05691A4CE359176D1 ** get_address_of_GetStringTrackedDeviceProperty_27() { return &___GetStringTrackedDeviceProperty_27; }
	inline void set_GetStringTrackedDeviceProperty_27(_GetStringTrackedDeviceProperty_t416FC985873C7598EC1465F05691A4CE359176D1 * value)
	{
		___GetStringTrackedDeviceProperty_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetStringTrackedDeviceProperty_27), (void*)value);
	}

	inline static int32_t get_offset_of_GetPropErrorNameFromEnum_28() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetPropErrorNameFromEnum_28)); }
	inline _GetPropErrorNameFromEnum_t3956179857AFD556169A0C526E2CD50152C31A04 * get_GetPropErrorNameFromEnum_28() const { return ___GetPropErrorNameFromEnum_28; }
	inline _GetPropErrorNameFromEnum_t3956179857AFD556169A0C526E2CD50152C31A04 ** get_address_of_GetPropErrorNameFromEnum_28() { return &___GetPropErrorNameFromEnum_28; }
	inline void set_GetPropErrorNameFromEnum_28(_GetPropErrorNameFromEnum_t3956179857AFD556169A0C526E2CD50152C31A04 * value)
	{
		___GetPropErrorNameFromEnum_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetPropErrorNameFromEnum_28), (void*)value);
	}

	inline static int32_t get_offset_of_PollNextEvent_29() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___PollNextEvent_29)); }
	inline _PollNextEvent_t86DBE8D3267ED34FC9A11BD212AC84EA6EB18CF6 * get_PollNextEvent_29() const { return ___PollNextEvent_29; }
	inline _PollNextEvent_t86DBE8D3267ED34FC9A11BD212AC84EA6EB18CF6 ** get_address_of_PollNextEvent_29() { return &___PollNextEvent_29; }
	inline void set_PollNextEvent_29(_PollNextEvent_t86DBE8D3267ED34FC9A11BD212AC84EA6EB18CF6 * value)
	{
		___PollNextEvent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PollNextEvent_29), (void*)value);
	}

	inline static int32_t get_offset_of_PollNextEventWithPose_30() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___PollNextEventWithPose_30)); }
	inline _PollNextEventWithPose_t7552E34D17A116877CBCCAA8C75ACEFF88878364 * get_PollNextEventWithPose_30() const { return ___PollNextEventWithPose_30; }
	inline _PollNextEventWithPose_t7552E34D17A116877CBCCAA8C75ACEFF88878364 ** get_address_of_PollNextEventWithPose_30() { return &___PollNextEventWithPose_30; }
	inline void set_PollNextEventWithPose_30(_PollNextEventWithPose_t7552E34D17A116877CBCCAA8C75ACEFF88878364 * value)
	{
		___PollNextEventWithPose_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PollNextEventWithPose_30), (void*)value);
	}

	inline static int32_t get_offset_of_GetEventTypeNameFromEnum_31() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetEventTypeNameFromEnum_31)); }
	inline _GetEventTypeNameFromEnum_t279A34BEBA324CA1786788719A606C592D715230 * get_GetEventTypeNameFromEnum_31() const { return ___GetEventTypeNameFromEnum_31; }
	inline _GetEventTypeNameFromEnum_t279A34BEBA324CA1786788719A606C592D715230 ** get_address_of_GetEventTypeNameFromEnum_31() { return &___GetEventTypeNameFromEnum_31; }
	inline void set_GetEventTypeNameFromEnum_31(_GetEventTypeNameFromEnum_t279A34BEBA324CA1786788719A606C592D715230 * value)
	{
		___GetEventTypeNameFromEnum_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetEventTypeNameFromEnum_31), (void*)value);
	}

	inline static int32_t get_offset_of_GetHiddenAreaMesh_32() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetHiddenAreaMesh_32)); }
	inline _GetHiddenAreaMesh_tBD1F007E89A9109B34A70CF1F568FB4199213DE8 * get_GetHiddenAreaMesh_32() const { return ___GetHiddenAreaMesh_32; }
	inline _GetHiddenAreaMesh_tBD1F007E89A9109B34A70CF1F568FB4199213DE8 ** get_address_of_GetHiddenAreaMesh_32() { return &___GetHiddenAreaMesh_32; }
	inline void set_GetHiddenAreaMesh_32(_GetHiddenAreaMesh_tBD1F007E89A9109B34A70CF1F568FB4199213DE8 * value)
	{
		___GetHiddenAreaMesh_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetHiddenAreaMesh_32), (void*)value);
	}

	inline static int32_t get_offset_of_GetControllerState_33() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetControllerState_33)); }
	inline _GetControllerState_t10782313381F8D2D8D096A49084BD4F28041BD59 * get_GetControllerState_33() const { return ___GetControllerState_33; }
	inline _GetControllerState_t10782313381F8D2D8D096A49084BD4F28041BD59 ** get_address_of_GetControllerState_33() { return &___GetControllerState_33; }
	inline void set_GetControllerState_33(_GetControllerState_t10782313381F8D2D8D096A49084BD4F28041BD59 * value)
	{
		___GetControllerState_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetControllerState_33), (void*)value);
	}

	inline static int32_t get_offset_of_GetControllerStateWithPose_34() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetControllerStateWithPose_34)); }
	inline _GetControllerStateWithPose_tBFA8462022986AF55655D86EFF563CA2823A9D87 * get_GetControllerStateWithPose_34() const { return ___GetControllerStateWithPose_34; }
	inline _GetControllerStateWithPose_tBFA8462022986AF55655D86EFF563CA2823A9D87 ** get_address_of_GetControllerStateWithPose_34() { return &___GetControllerStateWithPose_34; }
	inline void set_GetControllerStateWithPose_34(_GetControllerStateWithPose_tBFA8462022986AF55655D86EFF563CA2823A9D87 * value)
	{
		___GetControllerStateWithPose_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetControllerStateWithPose_34), (void*)value);
	}

	inline static int32_t get_offset_of_TriggerHapticPulse_35() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___TriggerHapticPulse_35)); }
	inline _TriggerHapticPulse_t02D1EB948BDE1AE85B42320185EFA98C8DD1007B * get_TriggerHapticPulse_35() const { return ___TriggerHapticPulse_35; }
	inline _TriggerHapticPulse_t02D1EB948BDE1AE85B42320185EFA98C8DD1007B ** get_address_of_TriggerHapticPulse_35() { return &___TriggerHapticPulse_35; }
	inline void set_TriggerHapticPulse_35(_TriggerHapticPulse_t02D1EB948BDE1AE85B42320185EFA98C8DD1007B * value)
	{
		___TriggerHapticPulse_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TriggerHapticPulse_35), (void*)value);
	}

	inline static int32_t get_offset_of_GetButtonIdNameFromEnum_36() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetButtonIdNameFromEnum_36)); }
	inline _GetButtonIdNameFromEnum_tFC87E5D34788044225BE2E86234354F025080F4D * get_GetButtonIdNameFromEnum_36() const { return ___GetButtonIdNameFromEnum_36; }
	inline _GetButtonIdNameFromEnum_tFC87E5D34788044225BE2E86234354F025080F4D ** get_address_of_GetButtonIdNameFromEnum_36() { return &___GetButtonIdNameFromEnum_36; }
	inline void set_GetButtonIdNameFromEnum_36(_GetButtonIdNameFromEnum_tFC87E5D34788044225BE2E86234354F025080F4D * value)
	{
		___GetButtonIdNameFromEnum_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetButtonIdNameFromEnum_36), (void*)value);
	}

	inline static int32_t get_offset_of_GetControllerAxisTypeNameFromEnum_37() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetControllerAxisTypeNameFromEnum_37)); }
	inline _GetControllerAxisTypeNameFromEnum_tF8E80732BC2DBD70C8B536888C0668EAEBC1972B * get_GetControllerAxisTypeNameFromEnum_37() const { return ___GetControllerAxisTypeNameFromEnum_37; }
	inline _GetControllerAxisTypeNameFromEnum_tF8E80732BC2DBD70C8B536888C0668EAEBC1972B ** get_address_of_GetControllerAxisTypeNameFromEnum_37() { return &___GetControllerAxisTypeNameFromEnum_37; }
	inline void set_GetControllerAxisTypeNameFromEnum_37(_GetControllerAxisTypeNameFromEnum_tF8E80732BC2DBD70C8B536888C0668EAEBC1972B * value)
	{
		___GetControllerAxisTypeNameFromEnum_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetControllerAxisTypeNameFromEnum_37), (void*)value);
	}

	inline static int32_t get_offset_of_IsInputAvailable_38() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___IsInputAvailable_38)); }
	inline _IsInputAvailable_t207B8074FB28E19E36824E4E87782003ACCBD96B * get_IsInputAvailable_38() const { return ___IsInputAvailable_38; }
	inline _IsInputAvailable_t207B8074FB28E19E36824E4E87782003ACCBD96B ** get_address_of_IsInputAvailable_38() { return &___IsInputAvailable_38; }
	inline void set_IsInputAvailable_38(_IsInputAvailable_t207B8074FB28E19E36824E4E87782003ACCBD96B * value)
	{
		___IsInputAvailable_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsInputAvailable_38), (void*)value);
	}

	inline static int32_t get_offset_of_IsSteamVRDrawingControllers_39() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___IsSteamVRDrawingControllers_39)); }
	inline _IsSteamVRDrawingControllers_t1C470DD053784EE83E329BDD481424B52F4687B9 * get_IsSteamVRDrawingControllers_39() const { return ___IsSteamVRDrawingControllers_39; }
	inline _IsSteamVRDrawingControllers_t1C470DD053784EE83E329BDD481424B52F4687B9 ** get_address_of_IsSteamVRDrawingControllers_39() { return &___IsSteamVRDrawingControllers_39; }
	inline void set_IsSteamVRDrawingControllers_39(_IsSteamVRDrawingControllers_t1C470DD053784EE83E329BDD481424B52F4687B9 * value)
	{
		___IsSteamVRDrawingControllers_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsSteamVRDrawingControllers_39), (void*)value);
	}

	inline static int32_t get_offset_of_ShouldApplicationPause_40() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___ShouldApplicationPause_40)); }
	inline _ShouldApplicationPause_t61E037C737A8D7AB0E054CFCCF896FC8916D7538 * get_ShouldApplicationPause_40() const { return ___ShouldApplicationPause_40; }
	inline _ShouldApplicationPause_t61E037C737A8D7AB0E054CFCCF896FC8916D7538 ** get_address_of_ShouldApplicationPause_40() { return &___ShouldApplicationPause_40; }
	inline void set_ShouldApplicationPause_40(_ShouldApplicationPause_t61E037C737A8D7AB0E054CFCCF896FC8916D7538 * value)
	{
		___ShouldApplicationPause_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShouldApplicationPause_40), (void*)value);
	}

	inline static int32_t get_offset_of_ShouldApplicationReduceRenderingWork_41() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___ShouldApplicationReduceRenderingWork_41)); }
	inline _ShouldApplicationReduceRenderingWork_t774D2EEA1E076F50A94A131DA6070E8180E6F62B * get_ShouldApplicationReduceRenderingWork_41() const { return ___ShouldApplicationReduceRenderingWork_41; }
	inline _ShouldApplicationReduceRenderingWork_t774D2EEA1E076F50A94A131DA6070E8180E6F62B ** get_address_of_ShouldApplicationReduceRenderingWork_41() { return &___ShouldApplicationReduceRenderingWork_41; }
	inline void set_ShouldApplicationReduceRenderingWork_41(_ShouldApplicationReduceRenderingWork_t774D2EEA1E076F50A94A131DA6070E8180E6F62B * value)
	{
		___ShouldApplicationReduceRenderingWork_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ShouldApplicationReduceRenderingWork_41), (void*)value);
	}

	inline static int32_t get_offset_of_PerformFirmwareUpdate_42() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___PerformFirmwareUpdate_42)); }
	inline _PerformFirmwareUpdate_t0FD169A0800C2A9B5BDFF76E3452588F84BEAA3A * get_PerformFirmwareUpdate_42() const { return ___PerformFirmwareUpdate_42; }
	inline _PerformFirmwareUpdate_t0FD169A0800C2A9B5BDFF76E3452588F84BEAA3A ** get_address_of_PerformFirmwareUpdate_42() { return &___PerformFirmwareUpdate_42; }
	inline void set_PerformFirmwareUpdate_42(_PerformFirmwareUpdate_t0FD169A0800C2A9B5BDFF76E3452588F84BEAA3A * value)
	{
		___PerformFirmwareUpdate_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PerformFirmwareUpdate_42), (void*)value);
	}

	inline static int32_t get_offset_of_AcknowledgeQuit_Exiting_43() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___AcknowledgeQuit_Exiting_43)); }
	inline _AcknowledgeQuit_Exiting_t5A9D9A75A89A0AAE98236EC6408AE77644B6A81E * get_AcknowledgeQuit_Exiting_43() const { return ___AcknowledgeQuit_Exiting_43; }
	inline _AcknowledgeQuit_Exiting_t5A9D9A75A89A0AAE98236EC6408AE77644B6A81E ** get_address_of_AcknowledgeQuit_Exiting_43() { return &___AcknowledgeQuit_Exiting_43; }
	inline void set_AcknowledgeQuit_Exiting_43(_AcknowledgeQuit_Exiting_t5A9D9A75A89A0AAE98236EC6408AE77644B6A81E * value)
	{
		___AcknowledgeQuit_Exiting_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcknowledgeQuit_Exiting_43), (void*)value);
	}

	inline static int32_t get_offset_of_GetAppContainerFilePaths_44() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetAppContainerFilePaths_44)); }
	inline _GetAppContainerFilePaths_tC9F2A708E189642FF074522CFE0A50BD21CE0566 * get_GetAppContainerFilePaths_44() const { return ___GetAppContainerFilePaths_44; }
	inline _GetAppContainerFilePaths_tC9F2A708E189642FF074522CFE0A50BD21CE0566 ** get_address_of_GetAppContainerFilePaths_44() { return &___GetAppContainerFilePaths_44; }
	inline void set_GetAppContainerFilePaths_44(_GetAppContainerFilePaths_tC9F2A708E189642FF074522CFE0A50BD21CE0566 * value)
	{
		___GetAppContainerFilePaths_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetAppContainerFilePaths_44), (void*)value);
	}

	inline static int32_t get_offset_of_GetRuntimeVersion_45() { return static_cast<int32_t>(offsetof(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786, ___GetRuntimeVersion_45)); }
	inline _GetRuntimeVersion_t39F4CD120C25C93429DFE831EFB4178D07912C81 * get_GetRuntimeVersion_45() const { return ___GetRuntimeVersion_45; }
	inline _GetRuntimeVersion_t39F4CD120C25C93429DFE831EFB4178D07912C81 ** get_address_of_GetRuntimeVersion_45() { return &___GetRuntimeVersion_45; }
	inline void set_GetRuntimeVersion_45(_GetRuntimeVersion_t39F4CD120C25C93429DFE831EFB4178D07912C81 * value)
	{
		___GetRuntimeVersion_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetRuntimeVersion_45), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Valve.VR.IVRSystem
struct IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786_marshaled_pinvoke
{
	Il2CppMethodPointer ___GetRecommendedRenderTargetSize_0;
	Il2CppMethodPointer ___GetProjectionMatrix_1;
	Il2CppMethodPointer ___GetProjectionRaw_2;
	Il2CppMethodPointer ___ComputeDistortion_3;
	Il2CppMethodPointer ___GetEyeToHeadTransform_4;
	Il2CppMethodPointer ___GetTimeSinceLastVsync_5;
	Il2CppMethodPointer ___GetD3D9AdapterIndex_6;
	Il2CppMethodPointer ___GetDXGIOutputInfo_7;
	Il2CppMethodPointer ___GetOutputDevice_8;
	Il2CppMethodPointer ___IsDisplayOnDesktop_9;
	Il2CppMethodPointer ___SetDisplayVisibility_10;
	Il2CppMethodPointer ___GetDeviceToAbsoluteTrackingPose_11;
	Il2CppMethodPointer ___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_12;
	Il2CppMethodPointer ___GetRawZeroPoseToStandingAbsoluteTrackingPose_13;
	Il2CppMethodPointer ___GetSortedTrackedDeviceIndicesOfClass_14;
	Il2CppMethodPointer ___GetTrackedDeviceActivityLevel_15;
	Il2CppMethodPointer ___ApplyTransform_16;
	Il2CppMethodPointer ___GetTrackedDeviceIndexForControllerRole_17;
	Il2CppMethodPointer ___GetControllerRoleForTrackedDeviceIndex_18;
	Il2CppMethodPointer ___GetTrackedDeviceClass_19;
	Il2CppMethodPointer ___IsTrackedDeviceConnected_20;
	Il2CppMethodPointer ___GetBoolTrackedDeviceProperty_21;
	Il2CppMethodPointer ___GetFloatTrackedDeviceProperty_22;
	Il2CppMethodPointer ___GetInt32TrackedDeviceProperty_23;
	Il2CppMethodPointer ___GetUint64TrackedDeviceProperty_24;
	Il2CppMethodPointer ___GetMatrix34TrackedDeviceProperty_25;
	Il2CppMethodPointer ___GetArrayTrackedDeviceProperty_26;
	Il2CppMethodPointer ___GetStringTrackedDeviceProperty_27;
	Il2CppMethodPointer ___GetPropErrorNameFromEnum_28;
	Il2CppMethodPointer ___PollNextEvent_29;
	Il2CppMethodPointer ___PollNextEventWithPose_30;
	Il2CppMethodPointer ___GetEventTypeNameFromEnum_31;
	Il2CppMethodPointer ___GetHiddenAreaMesh_32;
	Il2CppMethodPointer ___GetControllerState_33;
	Il2CppMethodPointer ___GetControllerStateWithPose_34;
	Il2CppMethodPointer ___TriggerHapticPulse_35;
	Il2CppMethodPointer ___GetButtonIdNameFromEnum_36;
	Il2CppMethodPointer ___GetControllerAxisTypeNameFromEnum_37;
	Il2CppMethodPointer ___IsInputAvailable_38;
	Il2CppMethodPointer ___IsSteamVRDrawingControllers_39;
	Il2CppMethodPointer ___ShouldApplicationPause_40;
	Il2CppMethodPointer ___ShouldApplicationReduceRenderingWork_41;
	Il2CppMethodPointer ___PerformFirmwareUpdate_42;
	Il2CppMethodPointer ___AcknowledgeQuit_Exiting_43;
	Il2CppMethodPointer ___GetAppContainerFilePaths_44;
	Il2CppMethodPointer ___GetRuntimeVersion_45;
};
// Native definition for COM marshalling of Valve.VR.IVRSystem
struct IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786_marshaled_com
{
	Il2CppMethodPointer ___GetRecommendedRenderTargetSize_0;
	Il2CppMethodPointer ___GetProjectionMatrix_1;
	Il2CppMethodPointer ___GetProjectionRaw_2;
	Il2CppMethodPointer ___ComputeDistortion_3;
	Il2CppMethodPointer ___GetEyeToHeadTransform_4;
	Il2CppMethodPointer ___GetTimeSinceLastVsync_5;
	Il2CppMethodPointer ___GetD3D9AdapterIndex_6;
	Il2CppMethodPointer ___GetDXGIOutputInfo_7;
	Il2CppMethodPointer ___GetOutputDevice_8;
	Il2CppMethodPointer ___IsDisplayOnDesktop_9;
	Il2CppMethodPointer ___SetDisplayVisibility_10;
	Il2CppMethodPointer ___GetDeviceToAbsoluteTrackingPose_11;
	Il2CppMethodPointer ___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_12;
	Il2CppMethodPointer ___GetRawZeroPoseToStandingAbsoluteTrackingPose_13;
	Il2CppMethodPointer ___GetSortedTrackedDeviceIndicesOfClass_14;
	Il2CppMethodPointer ___GetTrackedDeviceActivityLevel_15;
	Il2CppMethodPointer ___ApplyTransform_16;
	Il2CppMethodPointer ___GetTrackedDeviceIndexForControllerRole_17;
	Il2CppMethodPointer ___GetControllerRoleForTrackedDeviceIndex_18;
	Il2CppMethodPointer ___GetTrackedDeviceClass_19;
	Il2CppMethodPointer ___IsTrackedDeviceConnected_20;
	Il2CppMethodPointer ___GetBoolTrackedDeviceProperty_21;
	Il2CppMethodPointer ___GetFloatTrackedDeviceProperty_22;
	Il2CppMethodPointer ___GetInt32TrackedDeviceProperty_23;
	Il2CppMethodPointer ___GetUint64TrackedDeviceProperty_24;
	Il2CppMethodPointer ___GetMatrix34TrackedDeviceProperty_25;
	Il2CppMethodPointer ___GetArrayTrackedDeviceProperty_26;
	Il2CppMethodPointer ___GetStringTrackedDeviceProperty_27;
	Il2CppMethodPointer ___GetPropErrorNameFromEnum_28;
	Il2CppMethodPointer ___PollNextEvent_29;
	Il2CppMethodPointer ___PollNextEventWithPose_30;
	Il2CppMethodPointer ___GetEventTypeNameFromEnum_31;
	Il2CppMethodPointer ___GetHiddenAreaMesh_32;
	Il2CppMethodPointer ___GetControllerState_33;
	Il2CppMethodPointer ___GetControllerStateWithPose_34;
	Il2CppMethodPointer ___TriggerHapticPulse_35;
	Il2CppMethodPointer ___GetButtonIdNameFromEnum_36;
	Il2CppMethodPointer ___GetControllerAxisTypeNameFromEnum_37;
	Il2CppMethodPointer ___IsInputAvailable_38;
	Il2CppMethodPointer ___IsSteamVRDrawingControllers_39;
	Il2CppMethodPointer ___ShouldApplicationPause_40;
	Il2CppMethodPointer ___ShouldApplicationReduceRenderingWork_41;
	Il2CppMethodPointer ___PerformFirmwareUpdate_42;
	Il2CppMethodPointer ___AcknowledgeQuit_Exiting_43;
	Il2CppMethodPointer ___GetAppContainerFilePaths_44;
	Il2CppMethodPointer ___GetRuntimeVersion_45;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Valve.VR.SteamVR_Action_In`2<Valve.VR.SteamVR_Action_Boolean_Source_Map,Valve.VR.SteamVR_Action_Boolean_Source>
struct SteamVR_Action_In_2_t586F6DA46D6826E16B720A8296A45AAA89BC0645  : public SteamVR_Action_2_tC41E1B670DDD01F12F592A6EAF298EB8DC7089E9
{
public:

public:
};


// Valve.VR.CVRSystem
struct CVRSystem_t8A2DEB5BF4ACF7AC5D0889EA701AC64DBC8E767B  : public RuntimeObject
{
public:
	// Valve.VR.IVRSystem Valve.VR.CVRSystem::FnTable
	IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786  ___FnTable_0;

public:
	inline static int32_t get_offset_of_FnTable_0() { return static_cast<int32_t>(offsetof(CVRSystem_t8A2DEB5BF4ACF7AC5D0889EA701AC64DBC8E767B, ___FnTable_0)); }
	inline IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786  get_FnTable_0() const { return ___FnTable_0; }
	inline IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786 * get_address_of_FnTable_0() { return &___FnTable_0; }
	inline void set_FnTable_0(IVRSystem_t3E7386C21BB240F69348B9A9F876FA785DB87786  value)
	{
		___FnTable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetRecommendedRenderTargetSize_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetProjectionMatrix_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetProjectionRaw_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___ComputeDistortion_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetEyeToHeadTransform_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetTimeSinceLastVsync_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetD3D9AdapterIndex_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetDXGIOutputInfo_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetOutputDevice_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___IsDisplayOnDesktop_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___SetDisplayVisibility_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetDeviceToAbsoluteTrackingPose_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetSeatedZeroPoseToStandingAbsoluteTrackingPose_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetRawZeroPoseToStandingAbsoluteTrackingPose_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetSortedTrackedDeviceIndicesOfClass_14), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetTrackedDeviceActivityLevel_15), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___ApplyTransform_16), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetTrackedDeviceIndexForControllerRole_17), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetControllerRoleForTrackedDeviceIndex_18), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetTrackedDeviceClass_19), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___IsTrackedDeviceConnected_20), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetBoolTrackedDeviceProperty_21), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetFloatTrackedDeviceProperty_22), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetInt32TrackedDeviceProperty_23), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetUint64TrackedDeviceProperty_24), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetMatrix34TrackedDeviceProperty_25), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetArrayTrackedDeviceProperty_26), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetStringTrackedDeviceProperty_27), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetPropErrorNameFromEnum_28), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___PollNextEvent_29), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___PollNextEventWithPose_30), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetEventTypeNameFromEnum_31), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetHiddenAreaMesh_32), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetControllerState_33), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetControllerStateWithPose_34), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___TriggerHapticPulse_35), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetButtonIdNameFromEnum_36), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetControllerAxisTypeNameFromEnum_37), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___IsInputAvailable_38), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___IsSteamVRDrawingControllers_39), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___ShouldApplicationPause_40), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___ShouldApplicationReduceRenderingWork_41), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___PerformFirmwareUpdate_42), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___AcknowledgeQuit_Exiting_43), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetAppContainerFilePaths_44), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___FnTable_0))->___GetRuntimeVersion_45), (void*)NULL);
		#endif
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Valve.VR.ETrackedDeviceClass
struct ETrackedDeviceClass_t45D766206AF204300A0419609443F1702C8D11AC 
{
public:
	// System.Int32 Valve.VR.ETrackedDeviceClass::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ETrackedDeviceClass_t45D766206AF204300A0419609443F1702C8D11AC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* ___buckets_10;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_11;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_12;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_13;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_20;

public:
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___buckets_10)); }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_10), (void*)value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_17), (void*)value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_18), (void*)value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keycomparer_19), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____syncRoot_20)); }
	inline RuntimeObject * get__syncRoot_20() const { return ____syncRoot_20; }
	inline RuntimeObject ** get_address_of__syncRoot_20() { return &____syncRoot_20; }
	inline void set__syncRoot_20(RuntimeObject * value)
	{
		____syncRoot_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_20), (void*)value);
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Valve.VR.InteractionSystem.ReleaseStyle
struct ReleaseStyle_t93C621BB4FF3EC3981BDCE0A45A3A98277DF6585 
{
public:
	// System.Int32 Valve.VR.InteractionSystem.ReleaseStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReleaseStyle_t93C621BB4FF3EC3981BDCE0A45A3A98277DF6585, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RigidbodyInterpolation
struct RigidbodyInterpolation_tB7232E79E6FFF55DE2A57816D19DADE2550710D2 
{
public:
	// System.Int32 UnityEngine.RigidbodyInterpolation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyInterpolation_tB7232E79E6FFF55DE2A57816D19DADE2550710D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.SteamVR_Input_Sources
struct SteamVR_Input_Sources_t4EC108745BB23D3B64D1DE3B5A987B892B683456 
{
public:
	// System.Int32 Valve.VR.SteamVR_Input_Sources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SteamVR_Input_Sources_t4EC108745BB23D3B64D1DE3B5A987B892B683456, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.SteamVR_Skeleton_JointIndexEnum
struct SteamVR_Skeleton_JointIndexEnum_t5BE7FC28DAFA0091629F434BBADC75271D00875C 
{
public:
	// System.Int32 Valve.VR.SteamVR_Skeleton_JointIndexEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SteamVR_Skeleton_JointIndexEnum_t5BE7FC28DAFA0091629F434BBADC75271D00875C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.InteractionSystem.Hand/AttachmentFlags
struct AttachmentFlags_tA5587EEF64AB808C8AC33B7F40B4DFB31BEC7CAB 
{
public:
	// System.Int32 Valve.VR.InteractionSystem.Hand/AttachmentFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttachmentFlags_tA5587EEF64AB808C8AC33B7F40B4DFB31BEC7CAB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.SteamVR_TrackedObject/EIndex
struct EIndex_t74CAFB4F1977F04F94CD4F0229283B66F619F3B9 
{
public:
	// System.Int32 Valve.VR.SteamVR_TrackedObject/EIndex::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EIndex_t74CAFB4F1977F04F94CD4F0229283B66F619F3B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// SteamVR_Utils/RigidTransform
struct RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 
{
public:
	// UnityEngine.Vector3 SteamVR_Utils/RigidTransform::pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos_0;
	// UnityEngine.Quaternion SteamVR_Utils/RigidTransform::rot
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot_1;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983, ___pos_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pos_0() const { return ___pos_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_rot_1() { return static_cast<int32_t>(offsetof(RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983, ___rot_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rot_1() const { return ___rot_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rot_1() { return &___rot_1; }
	inline void set_rot_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rot_1 = value;
	}
};


// Valve.VR.InteractionSystem.TeleportPoint/TeleportPointType
struct TeleportPointType_t7F7EB51458C78E712EC85CC8E88BC7FC961B1AA0 
{
public:
	// System.Int32 Valve.VR.InteractionSystem.TeleportPoint/TeleportPointType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TeleportPointType_t7F7EB51458C78E712EC85CC8E88BC7FC961B1AA0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.InteractionSystem.VelocityEstimator/<EstimateVelocityCoroutine>d__13
struct U3CEstimateVelocityCoroutineU3Ed__13_t2634E98B1DC2A41F3D5723D11F4A5CA4B1BEE96B  : public RuntimeObject
{
public:
	// System.Int32 Valve.VR.InteractionSystem.VelocityEstimator/<EstimateVelocityCoroutine>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Valve.VR.InteractionSystem.VelocityEstimator/<EstimateVelocityCoroutine>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Valve.VR.InteractionSystem.VelocityEstimator Valve.VR.InteractionSystem.VelocityEstimator/<EstimateVelocityCoroutine>d__13::<>4__this
	VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Valve.VR.InteractionSystem.VelocityEstimator/<EstimateVelocityCoroutine>d__13::<previousPosition>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CpreviousPositionU3E5__2_3;
	// UnityEngine.Quaternion Valve.VR.InteractionSystem.VelocityEstimator/<EstimateVelocityCoroutine>d__13::<previousRotation>5__3
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___U3CpreviousRotationU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEstimateVelocityCoroutineU3Ed__13_t2634E98B1DC2A41F3D5723D11F4A5CA4B1BEE96B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEstimateVelocityCoroutineU3Ed__13_t2634E98B1DC2A41F3D5723D11F4A5CA4B1BEE96B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEstimateVelocityCoroutineU3Ed__13_t2634E98B1DC2A41F3D5723D11F4A5CA4B1BEE96B, ___U3CU3E4__this_2)); }
	inline VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpreviousPositionU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CEstimateVelocityCoroutineU3Ed__13_t2634E98B1DC2A41F3D5723D11F4A5CA4B1BEE96B, ___U3CpreviousPositionU3E5__2_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CpreviousPositionU3E5__2_3() const { return ___U3CpreviousPositionU3E5__2_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CpreviousPositionU3E5__2_3() { return &___U3CpreviousPositionU3E5__2_3; }
	inline void set_U3CpreviousPositionU3E5__2_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CpreviousPositionU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CpreviousRotationU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CEstimateVelocityCoroutineU3Ed__13_t2634E98B1DC2A41F3D5723D11F4A5CA4B1BEE96B, ___U3CpreviousRotationU3E5__3_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_U3CpreviousRotationU3E5__3_4() const { return ___U3CpreviousRotationU3E5__3_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_U3CpreviousRotationU3E5__3_4() { return &___U3CpreviousRotationU3E5__3_4; }
	inline void set_U3CpreviousRotationU3E5__3_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___U3CpreviousRotationU3E5__3_4 = value;
	}
};


// Valve.VR.InteractionSystem.Sample.FloppyHand/Finger/eulerAxis
struct eulerAxis_t0DF998EB192EB7A4B204C4749AA15E4F8C4CAA5A 
{
public:
	// System.Int32 Valve.VR.InteractionSystem.Sample.FloppyHand/Finger/eulerAxis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(eulerAxis_t0DF998EB192EB7A4B204C4749AA15E4F8C4CAA5A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Valve.VR.SteamVR_Skeleton_Poser/PoseBlendingBehaviour/BlenderTypes
struct BlenderTypes_tFB45386A49F4E45361282C34897D05AEF235E8B8 
{
public:
	// System.Int32 Valve.VR.SteamVR_Skeleton_Poser/PoseBlendingBehaviour/BlenderTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlenderTypes_tFB45386A49F4E45361282C34897D05AEF235E8B8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// Valve.VR.SteamVR_Action_Boolean
struct SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5  : public SteamVR_Action_In_2_t586F6DA46D6826E16B720A8296A45AAA89BC0645
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Valve.VR.SteamVR_TrackingReferenceManager/TrackingReferenceObject
struct TrackingReferenceObject_tBAB354E365AF6C817E6AC71ACDDFC7FA5D35EA92  : public RuntimeObject
{
public:
	// Valve.VR.ETrackedDeviceClass Valve.VR.SteamVR_TrackingReferenceManager/TrackingReferenceObject::trackedDeviceClass
	int32_t ___trackedDeviceClass_0;
	// UnityEngine.GameObject Valve.VR.SteamVR_TrackingReferenceManager/TrackingReferenceObject::gameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameObject_1;
	// Valve.VR.SteamVR_RenderModel Valve.VR.SteamVR_TrackingReferenceManager/TrackingReferenceObject::renderModel
	SteamVR_RenderModel_t20269A4C0DAED902ECBDBC7F810B9E95D44ACA3F * ___renderModel_2;
	// Valve.VR.SteamVR_TrackedObject Valve.VR.SteamVR_TrackingReferenceManager/TrackingReferenceObject::trackedObject
	SteamVR_TrackedObject_t0F54DD40BC1A829D3AA288BFA597D2440D6AD57D * ___trackedObject_3;

public:
	inline static int32_t get_offset_of_trackedDeviceClass_0() { return static_cast<int32_t>(offsetof(TrackingReferenceObject_tBAB354E365AF6C817E6AC71ACDDFC7FA5D35EA92, ___trackedDeviceClass_0)); }
	inline int32_t get_trackedDeviceClass_0() const { return ___trackedDeviceClass_0; }
	inline int32_t* get_address_of_trackedDeviceClass_0() { return &___trackedDeviceClass_0; }
	inline void set_trackedDeviceClass_0(int32_t value)
	{
		___trackedDeviceClass_0 = value;
	}

	inline static int32_t get_offset_of_gameObject_1() { return static_cast<int32_t>(offsetof(TrackingReferenceObject_tBAB354E365AF6C817E6AC71ACDDFC7FA5D35EA92, ___gameObject_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameObject_1() const { return ___gameObject_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameObject_1() { return &___gameObject_1; }
	inline void set_gameObject_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameObject_1), (void*)value);
	}

	inline static int32_t get_offset_of_renderModel_2() { return static_cast<int32_t>(offsetof(TrackingReferenceObject_tBAB354E365AF6C817E6AC71ACDDFC7FA5D35EA92, ___renderModel_2)); }
	inline SteamVR_RenderModel_t20269A4C0DAED902ECBDBC7F810B9E95D44ACA3F * get_renderModel_2() const { return ___renderModel_2; }
	inline SteamVR_RenderModel_t20269A4C0DAED902ECBDBC7F810B9E95D44ACA3F ** get_address_of_renderModel_2() { return &___renderModel_2; }
	inline void set_renderModel_2(SteamVR_RenderModel_t20269A4C0DAED902ECBDBC7F810B9E95D44ACA3F * value)
	{
		___renderModel_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderModel_2), (void*)value);
	}

	inline static int32_t get_offset_of_trackedObject_3() { return static_cast<int32_t>(offsetof(TrackingReferenceObject_tBAB354E365AF6C817E6AC71ACDDFC7FA5D35EA92, ___trackedObject_3)); }
	inline SteamVR_TrackedObject_t0F54DD40BC1A829D3AA288BFA597D2440D6AD57D * get_trackedObject_3() const { return ___trackedObject_3; }
	inline SteamVR_TrackedObject_t0F54DD40BC1A829D3AA288BFA597D2440D6AD57D ** get_address_of_trackedObject_3() { return &___trackedObject_3; }
	inline void set_trackedObject_3(SteamVR_TrackedObject_t0F54DD40BC1A829D3AA288BFA597D2440D6AD57D * value)
	{
		___trackedObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedObject_3), (void*)value);
	}
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// SteamVR_Utils/SystemFn
struct SystemFn_t57D3B1A97C15A7D53265FF0E45BC6922556A7F7F  : public MulticastDelegate_t
{
public:

public:
};


// SteamVR_Utils/Event/Handler
struct Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Valve.VR.InteractionSystem.Hand
struct Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Valve.VR.InteractionSystem.Hand Valve.VR.InteractionSystem.Hand::otherHand
	Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * ___otherHand_5;
	// Valve.VR.SteamVR_Input_Sources Valve.VR.InteractionSystem.Hand::handType
	int32_t ___handType_6;
	// Valve.VR.SteamVR_Behaviour_Pose Valve.VR.InteractionSystem.Hand::trackedObject
	SteamVR_Behaviour_Pose_t973518E48DAFAE4569703C12F466EAABA43B1E64 * ___trackedObject_7;
	// Valve.VR.SteamVR_Action_Boolean Valve.VR.InteractionSystem.Hand::grabPinchAction
	SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * ___grabPinchAction_8;
	// Valve.VR.SteamVR_Action_Boolean Valve.VR.InteractionSystem.Hand::grabGripAction
	SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * ___grabGripAction_9;
	// Valve.VR.SteamVR_Action_Vibration Valve.VR.InteractionSystem.Hand::hapticAction
	SteamVR_Action_Vibration_t4D1EFC2C6062A2FBF0AA3161410C534F0993159C * ___hapticAction_10;
	// Valve.VR.SteamVR_Action_Boolean Valve.VR.InteractionSystem.Hand::uiInteractAction
	SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * ___uiInteractAction_11;
	// System.Boolean Valve.VR.InteractionSystem.Hand::useHoverSphere
	bool ___useHoverSphere_12;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Hand::hoverSphereTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___hoverSphereTransform_13;
	// System.Single Valve.VR.InteractionSystem.Hand::hoverSphereRadius
	float ___hoverSphereRadius_14;
	// UnityEngine.LayerMask Valve.VR.InteractionSystem.Hand::hoverLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___hoverLayerMask_15;
	// System.Single Valve.VR.InteractionSystem.Hand::hoverUpdateInterval
	float ___hoverUpdateInterval_16;
	// System.Boolean Valve.VR.InteractionSystem.Hand::useControllerHoverComponent
	bool ___useControllerHoverComponent_17;
	// System.String Valve.VR.InteractionSystem.Hand::controllerHoverComponent
	String_t* ___controllerHoverComponent_18;
	// System.Single Valve.VR.InteractionSystem.Hand::controllerHoverRadius
	float ___controllerHoverRadius_19;
	// System.Boolean Valve.VR.InteractionSystem.Hand::useFingerJointHover
	bool ___useFingerJointHover_20;
	// Valve.VR.SteamVR_Skeleton_JointIndexEnum Valve.VR.InteractionSystem.Hand::fingerJointHover
	int32_t ___fingerJointHover_21;
	// System.Single Valve.VR.InteractionSystem.Hand::fingerJointHoverRadius
	float ___fingerJointHoverRadius_22;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Hand::objectAttachmentPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___objectAttachmentPoint_23;
	// UnityEngine.Camera Valve.VR.InteractionSystem.Hand::noSteamVRFallbackCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___noSteamVRFallbackCamera_24;
	// System.Single Valve.VR.InteractionSystem.Hand::noSteamVRFallbackMaxDistanceNoItem
	float ___noSteamVRFallbackMaxDistanceNoItem_25;
	// System.Single Valve.VR.InteractionSystem.Hand::noSteamVRFallbackMaxDistanceWithItem
	float ___noSteamVRFallbackMaxDistanceWithItem_26;
	// System.Single Valve.VR.InteractionSystem.Hand::noSteamVRFallbackInteractorDistance
	float ___noSteamVRFallbackInteractorDistance_27;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Hand::renderModelPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___renderModelPrefab_28;
	// System.Collections.Generic.List`1<Valve.VR.InteractionSystem.RenderModel> Valve.VR.InteractionSystem.Hand::renderModels
	List_1_tB589A60C816E866443F6E2F3C21161CEB133216E * ___renderModels_29;
	// Valve.VR.InteractionSystem.RenderModel Valve.VR.InteractionSystem.Hand::mainRenderModel
	RenderModel_tA371C9FC10932FB4E1D38CD07B613BC1BA9C28E2 * ___mainRenderModel_30;
	// Valve.VR.InteractionSystem.RenderModel Valve.VR.InteractionSystem.Hand::hoverhighlightRenderModel
	RenderModel_tA371C9FC10932FB4E1D38CD07B613BC1BA9C28E2 * ___hoverhighlightRenderModel_31;
	// System.Boolean Valve.VR.InteractionSystem.Hand::showDebugText
	bool ___showDebugText_32;
	// System.Boolean Valve.VR.InteractionSystem.Hand::spewDebugText
	bool ___spewDebugText_33;
	// System.Boolean Valve.VR.InteractionSystem.Hand::showDebugInteractables
	bool ___showDebugInteractables_34;
	// System.Collections.Generic.List`1<Valve.VR.InteractionSystem.Hand/AttachedObject> Valve.VR.InteractionSystem.Hand::attachedObjects
	List_1_t005D6AC51A2B482684471002B21EB7800D60AA45 * ___attachedObjects_35;
	// System.Boolean Valve.VR.InteractionSystem.Hand::<hoverLocked>k__BackingField
	bool ___U3ChoverLockedU3Ek__BackingField_36;
	// Valve.VR.InteractionSystem.Interactable Valve.VR.InteractionSystem.Hand::_hoveringInteractable
	Interactable_t1DA7C81B6B1405ADFC05D71B3963FA179EF2E3C4 * ____hoveringInteractable_37;
	// UnityEngine.TextMesh Valve.VR.InteractionSystem.Hand::debugText
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___debugText_38;
	// System.Int32 Valve.VR.InteractionSystem.Hand::prevOverlappingColliders
	int32_t ___prevOverlappingColliders_39;
	// UnityEngine.Collider[] Valve.VR.InteractionSystem.Hand::overlappingColliders
	ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* ___overlappingColliders_41;
	// Valve.VR.InteractionSystem.Player Valve.VR.InteractionSystem.Hand::playerInstance
	Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D * ___playerInstance_42;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Hand::applicationLostFocusObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___applicationLostFocusObject_43;
	// Valve.VR.SteamVR_Events/Action Valve.VR.InteractionSystem.Hand::inputFocusAction
	Action_t31CD649757E3D346C3C7E102055BFE86A861368C * ___inputFocusAction_44;

public:
	inline static int32_t get_offset_of_otherHand_5() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___otherHand_5)); }
	inline Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * get_otherHand_5() const { return ___otherHand_5; }
	inline Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 ** get_address_of_otherHand_5() { return &___otherHand_5; }
	inline void set_otherHand_5(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * value)
	{
		___otherHand_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___otherHand_5), (void*)value);
	}

	inline static int32_t get_offset_of_handType_6() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___handType_6)); }
	inline int32_t get_handType_6() const { return ___handType_6; }
	inline int32_t* get_address_of_handType_6() { return &___handType_6; }
	inline void set_handType_6(int32_t value)
	{
		___handType_6 = value;
	}

	inline static int32_t get_offset_of_trackedObject_7() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___trackedObject_7)); }
	inline SteamVR_Behaviour_Pose_t973518E48DAFAE4569703C12F466EAABA43B1E64 * get_trackedObject_7() const { return ___trackedObject_7; }
	inline SteamVR_Behaviour_Pose_t973518E48DAFAE4569703C12F466EAABA43B1E64 ** get_address_of_trackedObject_7() { return &___trackedObject_7; }
	inline void set_trackedObject_7(SteamVR_Behaviour_Pose_t973518E48DAFAE4569703C12F466EAABA43B1E64 * value)
	{
		___trackedObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackedObject_7), (void*)value);
	}

	inline static int32_t get_offset_of_grabPinchAction_8() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___grabPinchAction_8)); }
	inline SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * get_grabPinchAction_8() const { return ___grabPinchAction_8; }
	inline SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 ** get_address_of_grabPinchAction_8() { return &___grabPinchAction_8; }
	inline void set_grabPinchAction_8(SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * value)
	{
		___grabPinchAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grabPinchAction_8), (void*)value);
	}

	inline static int32_t get_offset_of_grabGripAction_9() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___grabGripAction_9)); }
	inline SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * get_grabGripAction_9() const { return ___grabGripAction_9; }
	inline SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 ** get_address_of_grabGripAction_9() { return &___grabGripAction_9; }
	inline void set_grabGripAction_9(SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * value)
	{
		___grabGripAction_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grabGripAction_9), (void*)value);
	}

	inline static int32_t get_offset_of_hapticAction_10() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___hapticAction_10)); }
	inline SteamVR_Action_Vibration_t4D1EFC2C6062A2FBF0AA3161410C534F0993159C * get_hapticAction_10() const { return ___hapticAction_10; }
	inline SteamVR_Action_Vibration_t4D1EFC2C6062A2FBF0AA3161410C534F0993159C ** get_address_of_hapticAction_10() { return &___hapticAction_10; }
	inline void set_hapticAction_10(SteamVR_Action_Vibration_t4D1EFC2C6062A2FBF0AA3161410C534F0993159C * value)
	{
		___hapticAction_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hapticAction_10), (void*)value);
	}

	inline static int32_t get_offset_of_uiInteractAction_11() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___uiInteractAction_11)); }
	inline SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * get_uiInteractAction_11() const { return ___uiInteractAction_11; }
	inline SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 ** get_address_of_uiInteractAction_11() { return &___uiInteractAction_11; }
	inline void set_uiInteractAction_11(SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * value)
	{
		___uiInteractAction_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiInteractAction_11), (void*)value);
	}

	inline static int32_t get_offset_of_useHoverSphere_12() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___useHoverSphere_12)); }
	inline bool get_useHoverSphere_12() const { return ___useHoverSphere_12; }
	inline bool* get_address_of_useHoverSphere_12() { return &___useHoverSphere_12; }
	inline void set_useHoverSphere_12(bool value)
	{
		___useHoverSphere_12 = value;
	}

	inline static int32_t get_offset_of_hoverSphereTransform_13() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___hoverSphereTransform_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_hoverSphereTransform_13() const { return ___hoverSphereTransform_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_hoverSphereTransform_13() { return &___hoverSphereTransform_13; }
	inline void set_hoverSphereTransform_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___hoverSphereTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoverSphereTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of_hoverSphereRadius_14() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___hoverSphereRadius_14)); }
	inline float get_hoverSphereRadius_14() const { return ___hoverSphereRadius_14; }
	inline float* get_address_of_hoverSphereRadius_14() { return &___hoverSphereRadius_14; }
	inline void set_hoverSphereRadius_14(float value)
	{
		___hoverSphereRadius_14 = value;
	}

	inline static int32_t get_offset_of_hoverLayerMask_15() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___hoverLayerMask_15)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_hoverLayerMask_15() const { return ___hoverLayerMask_15; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_hoverLayerMask_15() { return &___hoverLayerMask_15; }
	inline void set_hoverLayerMask_15(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___hoverLayerMask_15 = value;
	}

	inline static int32_t get_offset_of_hoverUpdateInterval_16() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___hoverUpdateInterval_16)); }
	inline float get_hoverUpdateInterval_16() const { return ___hoverUpdateInterval_16; }
	inline float* get_address_of_hoverUpdateInterval_16() { return &___hoverUpdateInterval_16; }
	inline void set_hoverUpdateInterval_16(float value)
	{
		___hoverUpdateInterval_16 = value;
	}

	inline static int32_t get_offset_of_useControllerHoverComponent_17() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___useControllerHoverComponent_17)); }
	inline bool get_useControllerHoverComponent_17() const { return ___useControllerHoverComponent_17; }
	inline bool* get_address_of_useControllerHoverComponent_17() { return &___useControllerHoverComponent_17; }
	inline void set_useControllerHoverComponent_17(bool value)
	{
		___useControllerHoverComponent_17 = value;
	}

	inline static int32_t get_offset_of_controllerHoverComponent_18() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___controllerHoverComponent_18)); }
	inline String_t* get_controllerHoverComponent_18() const { return ___controllerHoverComponent_18; }
	inline String_t** get_address_of_controllerHoverComponent_18() { return &___controllerHoverComponent_18; }
	inline void set_controllerHoverComponent_18(String_t* value)
	{
		___controllerHoverComponent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerHoverComponent_18), (void*)value);
	}

	inline static int32_t get_offset_of_controllerHoverRadius_19() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___controllerHoverRadius_19)); }
	inline float get_controllerHoverRadius_19() const { return ___controllerHoverRadius_19; }
	inline float* get_address_of_controllerHoverRadius_19() { return &___controllerHoverRadius_19; }
	inline void set_controllerHoverRadius_19(float value)
	{
		___controllerHoverRadius_19 = value;
	}

	inline static int32_t get_offset_of_useFingerJointHover_20() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___useFingerJointHover_20)); }
	inline bool get_useFingerJointHover_20() const { return ___useFingerJointHover_20; }
	inline bool* get_address_of_useFingerJointHover_20() { return &___useFingerJointHover_20; }
	inline void set_useFingerJointHover_20(bool value)
	{
		___useFingerJointHover_20 = value;
	}

	inline static int32_t get_offset_of_fingerJointHover_21() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___fingerJointHover_21)); }
	inline int32_t get_fingerJointHover_21() const { return ___fingerJointHover_21; }
	inline int32_t* get_address_of_fingerJointHover_21() { return &___fingerJointHover_21; }
	inline void set_fingerJointHover_21(int32_t value)
	{
		___fingerJointHover_21 = value;
	}

	inline static int32_t get_offset_of_fingerJointHoverRadius_22() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___fingerJointHoverRadius_22)); }
	inline float get_fingerJointHoverRadius_22() const { return ___fingerJointHoverRadius_22; }
	inline float* get_address_of_fingerJointHoverRadius_22() { return &___fingerJointHoverRadius_22; }
	inline void set_fingerJointHoverRadius_22(float value)
	{
		___fingerJointHoverRadius_22 = value;
	}

	inline static int32_t get_offset_of_objectAttachmentPoint_23() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___objectAttachmentPoint_23)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_objectAttachmentPoint_23() const { return ___objectAttachmentPoint_23; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_objectAttachmentPoint_23() { return &___objectAttachmentPoint_23; }
	inline void set_objectAttachmentPoint_23(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___objectAttachmentPoint_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectAttachmentPoint_23), (void*)value);
	}

	inline static int32_t get_offset_of_noSteamVRFallbackCamera_24() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___noSteamVRFallbackCamera_24)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_noSteamVRFallbackCamera_24() const { return ___noSteamVRFallbackCamera_24; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_noSteamVRFallbackCamera_24() { return &___noSteamVRFallbackCamera_24; }
	inline void set_noSteamVRFallbackCamera_24(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___noSteamVRFallbackCamera_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___noSteamVRFallbackCamera_24), (void*)value);
	}

	inline static int32_t get_offset_of_noSteamVRFallbackMaxDistanceNoItem_25() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___noSteamVRFallbackMaxDistanceNoItem_25)); }
	inline float get_noSteamVRFallbackMaxDistanceNoItem_25() const { return ___noSteamVRFallbackMaxDistanceNoItem_25; }
	inline float* get_address_of_noSteamVRFallbackMaxDistanceNoItem_25() { return &___noSteamVRFallbackMaxDistanceNoItem_25; }
	inline void set_noSteamVRFallbackMaxDistanceNoItem_25(float value)
	{
		___noSteamVRFallbackMaxDistanceNoItem_25 = value;
	}

	inline static int32_t get_offset_of_noSteamVRFallbackMaxDistanceWithItem_26() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___noSteamVRFallbackMaxDistanceWithItem_26)); }
	inline float get_noSteamVRFallbackMaxDistanceWithItem_26() const { return ___noSteamVRFallbackMaxDistanceWithItem_26; }
	inline float* get_address_of_noSteamVRFallbackMaxDistanceWithItem_26() { return &___noSteamVRFallbackMaxDistanceWithItem_26; }
	inline void set_noSteamVRFallbackMaxDistanceWithItem_26(float value)
	{
		___noSteamVRFallbackMaxDistanceWithItem_26 = value;
	}

	inline static int32_t get_offset_of_noSteamVRFallbackInteractorDistance_27() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___noSteamVRFallbackInteractorDistance_27)); }
	inline float get_noSteamVRFallbackInteractorDistance_27() const { return ___noSteamVRFallbackInteractorDistance_27; }
	inline float* get_address_of_noSteamVRFallbackInteractorDistance_27() { return &___noSteamVRFallbackInteractorDistance_27; }
	inline void set_noSteamVRFallbackInteractorDistance_27(float value)
	{
		___noSteamVRFallbackInteractorDistance_27 = value;
	}

	inline static int32_t get_offset_of_renderModelPrefab_28() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___renderModelPrefab_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_renderModelPrefab_28() const { return ___renderModelPrefab_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_renderModelPrefab_28() { return &___renderModelPrefab_28; }
	inline void set_renderModelPrefab_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___renderModelPrefab_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderModelPrefab_28), (void*)value);
	}

	inline static int32_t get_offset_of_renderModels_29() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___renderModels_29)); }
	inline List_1_tB589A60C816E866443F6E2F3C21161CEB133216E * get_renderModels_29() const { return ___renderModels_29; }
	inline List_1_tB589A60C816E866443F6E2F3C21161CEB133216E ** get_address_of_renderModels_29() { return &___renderModels_29; }
	inline void set_renderModels_29(List_1_tB589A60C816E866443F6E2F3C21161CEB133216E * value)
	{
		___renderModels_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderModels_29), (void*)value);
	}

	inline static int32_t get_offset_of_mainRenderModel_30() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___mainRenderModel_30)); }
	inline RenderModel_tA371C9FC10932FB4E1D38CD07B613BC1BA9C28E2 * get_mainRenderModel_30() const { return ___mainRenderModel_30; }
	inline RenderModel_tA371C9FC10932FB4E1D38CD07B613BC1BA9C28E2 ** get_address_of_mainRenderModel_30() { return &___mainRenderModel_30; }
	inline void set_mainRenderModel_30(RenderModel_tA371C9FC10932FB4E1D38CD07B613BC1BA9C28E2 * value)
	{
		___mainRenderModel_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainRenderModel_30), (void*)value);
	}

	inline static int32_t get_offset_of_hoverhighlightRenderModel_31() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___hoverhighlightRenderModel_31)); }
	inline RenderModel_tA371C9FC10932FB4E1D38CD07B613BC1BA9C28E2 * get_hoverhighlightRenderModel_31() const { return ___hoverhighlightRenderModel_31; }
	inline RenderModel_tA371C9FC10932FB4E1D38CD07B613BC1BA9C28E2 ** get_address_of_hoverhighlightRenderModel_31() { return &___hoverhighlightRenderModel_31; }
	inline void set_hoverhighlightRenderModel_31(RenderModel_tA371C9FC10932FB4E1D38CD07B613BC1BA9C28E2 * value)
	{
		___hoverhighlightRenderModel_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hoverhighlightRenderModel_31), (void*)value);
	}

	inline static int32_t get_offset_of_showDebugText_32() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___showDebugText_32)); }
	inline bool get_showDebugText_32() const { return ___showDebugText_32; }
	inline bool* get_address_of_showDebugText_32() { return &___showDebugText_32; }
	inline void set_showDebugText_32(bool value)
	{
		___showDebugText_32 = value;
	}

	inline static int32_t get_offset_of_spewDebugText_33() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___spewDebugText_33)); }
	inline bool get_spewDebugText_33() const { return ___spewDebugText_33; }
	inline bool* get_address_of_spewDebugText_33() { return &___spewDebugText_33; }
	inline void set_spewDebugText_33(bool value)
	{
		___spewDebugText_33 = value;
	}

	inline static int32_t get_offset_of_showDebugInteractables_34() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___showDebugInteractables_34)); }
	inline bool get_showDebugInteractables_34() const { return ___showDebugInteractables_34; }
	inline bool* get_address_of_showDebugInteractables_34() { return &___showDebugInteractables_34; }
	inline void set_showDebugInteractables_34(bool value)
	{
		___showDebugInteractables_34 = value;
	}

	inline static int32_t get_offset_of_attachedObjects_35() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___attachedObjects_35)); }
	inline List_1_t005D6AC51A2B482684471002B21EB7800D60AA45 * get_attachedObjects_35() const { return ___attachedObjects_35; }
	inline List_1_t005D6AC51A2B482684471002B21EB7800D60AA45 ** get_address_of_attachedObjects_35() { return &___attachedObjects_35; }
	inline void set_attachedObjects_35(List_1_t005D6AC51A2B482684471002B21EB7800D60AA45 * value)
	{
		___attachedObjects_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachedObjects_35), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChoverLockedU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___U3ChoverLockedU3Ek__BackingField_36)); }
	inline bool get_U3ChoverLockedU3Ek__BackingField_36() const { return ___U3ChoverLockedU3Ek__BackingField_36; }
	inline bool* get_address_of_U3ChoverLockedU3Ek__BackingField_36() { return &___U3ChoverLockedU3Ek__BackingField_36; }
	inline void set_U3ChoverLockedU3Ek__BackingField_36(bool value)
	{
		___U3ChoverLockedU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of__hoveringInteractable_37() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ____hoveringInteractable_37)); }
	inline Interactable_t1DA7C81B6B1405ADFC05D71B3963FA179EF2E3C4 * get__hoveringInteractable_37() const { return ____hoveringInteractable_37; }
	inline Interactable_t1DA7C81B6B1405ADFC05D71B3963FA179EF2E3C4 ** get_address_of__hoveringInteractable_37() { return &____hoveringInteractable_37; }
	inline void set__hoveringInteractable_37(Interactable_t1DA7C81B6B1405ADFC05D71B3963FA179EF2E3C4 * value)
	{
		____hoveringInteractable_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hoveringInteractable_37), (void*)value);
	}

	inline static int32_t get_offset_of_debugText_38() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___debugText_38)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_debugText_38() const { return ___debugText_38; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_debugText_38() { return &___debugText_38; }
	inline void set_debugText_38(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___debugText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___debugText_38), (void*)value);
	}

	inline static int32_t get_offset_of_prevOverlappingColliders_39() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___prevOverlappingColliders_39)); }
	inline int32_t get_prevOverlappingColliders_39() const { return ___prevOverlappingColliders_39; }
	inline int32_t* get_address_of_prevOverlappingColliders_39() { return &___prevOverlappingColliders_39; }
	inline void set_prevOverlappingColliders_39(int32_t value)
	{
		___prevOverlappingColliders_39 = value;
	}

	inline static int32_t get_offset_of_overlappingColliders_41() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___overlappingColliders_41)); }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* get_overlappingColliders_41() const { return ___overlappingColliders_41; }
	inline ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486** get_address_of_overlappingColliders_41() { return &___overlappingColliders_41; }
	inline void set_overlappingColliders_41(ColliderU5BU5D_t5124940293343DB3D31DA41C593709905906E486* value)
	{
		___overlappingColliders_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overlappingColliders_41), (void*)value);
	}

	inline static int32_t get_offset_of_playerInstance_42() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___playerInstance_42)); }
	inline Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D * get_playerInstance_42() const { return ___playerInstance_42; }
	inline Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D ** get_address_of_playerInstance_42() { return &___playerInstance_42; }
	inline void set_playerInstance_42(Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D * value)
	{
		___playerInstance_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerInstance_42), (void*)value);
	}

	inline static int32_t get_offset_of_applicationLostFocusObject_43() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___applicationLostFocusObject_43)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_applicationLostFocusObject_43() const { return ___applicationLostFocusObject_43; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_applicationLostFocusObject_43() { return &___applicationLostFocusObject_43; }
	inline void set_applicationLostFocusObject_43(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___applicationLostFocusObject_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationLostFocusObject_43), (void*)value);
	}

	inline static int32_t get_offset_of_inputFocusAction_44() { return static_cast<int32_t>(offsetof(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865, ___inputFocusAction_44)); }
	inline Action_t31CD649757E3D346C3C7E102055BFE86A861368C * get_inputFocusAction_44() const { return ___inputFocusAction_44; }
	inline Action_t31CD649757E3D346C3C7E102055BFE86A861368C ** get_address_of_inputFocusAction_44() { return &___inputFocusAction_44; }
	inline void set_inputFocusAction_44(Action_t31CD649757E3D346C3C7E102055BFE86A861368C * value)
	{
		___inputFocusAction_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputFocusAction_44), (void*)value);
	}
};


// Valve.VR.InteractionSystem.Player
struct Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Valve.VR.InteractionSystem.Player::trackingOriginTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___trackingOriginTransform_4;
	// UnityEngine.Transform[] Valve.VR.InteractionSystem.Player::hmdTransforms
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___hmdTransforms_5;
	// Valve.VR.InteractionSystem.Hand[] Valve.VR.InteractionSystem.Player::hands
	HandU5BU5D_tC092C7BDF34DDFC6FF249FAFB0DE5E20331C5B5A* ___hands_6;
	// UnityEngine.Collider Valve.VR.InteractionSystem.Player::headCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___headCollider_7;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Player::rigSteamVR
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rigSteamVR_8;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Player::rig2DFallback
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___rig2DFallback_9;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Player::audioListener
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___audioListener_10;
	// Valve.VR.SteamVR_Action_Boolean Valve.VR.InteractionSystem.Player::headsetOnHead
	SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * ___headsetOnHead_11;
	// System.Boolean Valve.VR.InteractionSystem.Player::allowToggleTo2D
	bool ___allowToggleTo2D_12;

public:
	inline static int32_t get_offset_of_trackingOriginTransform_4() { return static_cast<int32_t>(offsetof(Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D, ___trackingOriginTransform_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_trackingOriginTransform_4() const { return ___trackingOriginTransform_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_trackingOriginTransform_4() { return &___trackingOriginTransform_4; }
	inline void set_trackingOriginTransform_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___trackingOriginTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_hmdTransforms_5() { return static_cast<int32_t>(offsetof(Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D, ___hmdTransforms_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_hmdTransforms_5() const { return ___hmdTransforms_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_hmdTransforms_5() { return &___hmdTransforms_5; }
	inline void set_hmdTransforms_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___hmdTransforms_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hmdTransforms_5), (void*)value);
	}

	inline static int32_t get_offset_of_hands_6() { return static_cast<int32_t>(offsetof(Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D, ___hands_6)); }
	inline HandU5BU5D_tC092C7BDF34DDFC6FF249FAFB0DE5E20331C5B5A* get_hands_6() const { return ___hands_6; }
	inline HandU5BU5D_tC092C7BDF34DDFC6FF249FAFB0DE5E20331C5B5A** get_address_of_hands_6() { return &___hands_6; }
	inline void set_hands_6(HandU5BU5D_tC092C7BDF34DDFC6FF249FAFB0DE5E20331C5B5A* value)
	{
		___hands_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hands_6), (void*)value);
	}

	inline static int32_t get_offset_of_headCollider_7() { return static_cast<int32_t>(offsetof(Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D, ___headCollider_7)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_headCollider_7() const { return ___headCollider_7; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_headCollider_7() { return &___headCollider_7; }
	inline void set_headCollider_7(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___headCollider_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headCollider_7), (void*)value);
	}

	inline static int32_t get_offset_of_rigSteamVR_8() { return static_cast<int32_t>(offsetof(Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D, ___rigSteamVR_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_rigSteamVR_8() const { return ___rigSteamVR_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_rigSteamVR_8() { return &___rigSteamVR_8; }
	inline void set_rigSteamVR_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___rigSteamVR_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigSteamVR_8), (void*)value);
	}

	inline static int32_t get_offset_of_rig2DFallback_9() { return static_cast<int32_t>(offsetof(Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D, ___rig2DFallback_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_rig2DFallback_9() const { return ___rig2DFallback_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_rig2DFallback_9() { return &___rig2DFallback_9; }
	inline void set_rig2DFallback_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___rig2DFallback_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rig2DFallback_9), (void*)value);
	}

	inline static int32_t get_offset_of_audioListener_10() { return static_cast<int32_t>(offsetof(Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D, ___audioListener_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_audioListener_10() const { return ___audioListener_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_audioListener_10() { return &___audioListener_10; }
	inline void set_audioListener_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___audioListener_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioListener_10), (void*)value);
	}

	inline static int32_t get_offset_of_headsetOnHead_11() { return static_cast<int32_t>(offsetof(Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D, ___headsetOnHead_11)); }
	inline SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * get_headsetOnHead_11() const { return ___headsetOnHead_11; }
	inline SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 ** get_address_of_headsetOnHead_11() { return &___headsetOnHead_11; }
	inline void set_headsetOnHead_11(SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * value)
	{
		___headsetOnHead_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headsetOnHead_11), (void*)value);
	}

	inline static int32_t get_offset_of_allowToggleTo2D_12() { return static_cast<int32_t>(offsetof(Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D, ___allowToggleTo2D_12)); }
	inline bool get_allowToggleTo2D_12() const { return ___allowToggleTo2D_12; }
	inline bool* get_address_of_allowToggleTo2D_12() { return &___allowToggleTo2D_12; }
	inline void set_allowToggleTo2D_12(bool value)
	{
		___allowToggleTo2D_12 = value;
	}
};

struct Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D_StaticFields
{
public:
	// Valve.VR.InteractionSystem.Player Valve.VR.InteractionSystem.Player::_instance
	Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D * ____instance_13;

public:
	inline static int32_t get_offset_of__instance_13() { return static_cast<int32_t>(offsetof(Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D_StaticFields, ____instance_13)); }
	inline Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D * get__instance_13() const { return ____instance_13; }
	inline Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D ** get_address_of__instance_13() { return &____instance_13; }
	inline void set__instance_13(Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D * value)
	{
		____instance_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_13), (void*)value);
	}
};


// Valve.VR.InteractionSystem.Teleport
struct Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Valve.VR.SteamVR_Action_Boolean Valve.VR.InteractionSystem.Teleport::teleportAction
	SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * ___teleportAction_4;
	// UnityEngine.LayerMask Valve.VR.InteractionSystem.Teleport::traceLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___traceLayerMask_5;
	// UnityEngine.LayerMask Valve.VR.InteractionSystem.Teleport::floorFixupTraceLayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___floorFixupTraceLayerMask_6;
	// System.Single Valve.VR.InteractionSystem.Teleport::floorFixupMaximumTraceDistance
	float ___floorFixupMaximumTraceDistance_7;
	// UnityEngine.Material Valve.VR.InteractionSystem.Teleport::areaVisibleMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___areaVisibleMaterial_8;
	// UnityEngine.Material Valve.VR.InteractionSystem.Teleport::areaLockedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___areaLockedMaterial_9;
	// UnityEngine.Material Valve.VR.InteractionSystem.Teleport::areaHighlightedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___areaHighlightedMaterial_10;
	// UnityEngine.Material Valve.VR.InteractionSystem.Teleport::pointVisibleMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___pointVisibleMaterial_11;
	// UnityEngine.Material Valve.VR.InteractionSystem.Teleport::pointLockedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___pointLockedMaterial_12;
	// UnityEngine.Material Valve.VR.InteractionSystem.Teleport::pointHighlightedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___pointHighlightedMaterial_13;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Teleport::destinationReticleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___destinationReticleTransform_14;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Teleport::invalidReticleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___invalidReticleTransform_15;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Teleport::playAreaPreviewCorner
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playAreaPreviewCorner_16;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Teleport::playAreaPreviewSide
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playAreaPreviewSide_17;
	// UnityEngine.Color Valve.VR.InteractionSystem.Teleport::pointerValidColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___pointerValidColor_18;
	// UnityEngine.Color Valve.VR.InteractionSystem.Teleport::pointerInvalidColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___pointerInvalidColor_19;
	// UnityEngine.Color Valve.VR.InteractionSystem.Teleport::pointerLockedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___pointerLockedColor_20;
	// System.Boolean Valve.VR.InteractionSystem.Teleport::showPlayAreaMarker
	bool ___showPlayAreaMarker_21;
	// System.Single Valve.VR.InteractionSystem.Teleport::teleportFadeTime
	float ___teleportFadeTime_22;
	// System.Single Valve.VR.InteractionSystem.Teleport::meshFadeTime
	float ___meshFadeTime_23;
	// System.Single Valve.VR.InteractionSystem.Teleport::arcDistance
	float ___arcDistance_24;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Teleport::onActivateObjectTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___onActivateObjectTransform_25;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Teleport::onDeactivateObjectTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___onDeactivateObjectTransform_26;
	// System.Single Valve.VR.InteractionSystem.Teleport::activateObjectTime
	float ___activateObjectTime_27;
	// System.Single Valve.VR.InteractionSystem.Teleport::deactivateObjectTime
	float ___deactivateObjectTime_28;
	// UnityEngine.AudioSource Valve.VR.InteractionSystem.Teleport::pointerAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___pointerAudioSource_29;
	// UnityEngine.AudioSource Valve.VR.InteractionSystem.Teleport::loopingAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___loopingAudioSource_30;
	// UnityEngine.AudioSource Valve.VR.InteractionSystem.Teleport::headAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___headAudioSource_31;
	// UnityEngine.AudioSource Valve.VR.InteractionSystem.Teleport::reticleAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___reticleAudioSource_32;
	// UnityEngine.AudioClip Valve.VR.InteractionSystem.Teleport::teleportSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___teleportSound_33;
	// UnityEngine.AudioClip Valve.VR.InteractionSystem.Teleport::pointerStartSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___pointerStartSound_34;
	// UnityEngine.AudioClip Valve.VR.InteractionSystem.Teleport::pointerLoopSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___pointerLoopSound_35;
	// UnityEngine.AudioClip Valve.VR.InteractionSystem.Teleport::pointerStopSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___pointerStopSound_36;
	// UnityEngine.AudioClip Valve.VR.InteractionSystem.Teleport::goodHighlightSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___goodHighlightSound_37;
	// UnityEngine.AudioClip Valve.VR.InteractionSystem.Teleport::badHighlightSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___badHighlightSound_38;
	// System.Boolean Valve.VR.InteractionSystem.Teleport::debugFloor
	bool ___debugFloor_39;
	// System.Boolean Valve.VR.InteractionSystem.Teleport::showOffsetReticle
	bool ___showOffsetReticle_40;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Teleport::offsetReticleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___offsetReticleTransform_41;
	// UnityEngine.MeshRenderer Valve.VR.InteractionSystem.Teleport::floorDebugSphere
	MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * ___floorDebugSphere_42;
	// UnityEngine.LineRenderer Valve.VR.InteractionSystem.Teleport::floorDebugLine
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___floorDebugLine_43;
	// UnityEngine.LineRenderer Valve.VR.InteractionSystem.Teleport::pointerLineRenderer
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___pointerLineRenderer_44;
	// UnityEngine.GameObject Valve.VR.InteractionSystem.Teleport::teleportPointerObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___teleportPointerObject_45;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Teleport::pointerStartTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___pointerStartTransform_46;
	// Valve.VR.InteractionSystem.Hand Valve.VR.InteractionSystem.Teleport::pointerHand
	Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * ___pointerHand_47;
	// Valve.VR.InteractionSystem.Player Valve.VR.InteractionSystem.Teleport::player
	Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D * ___player_48;
	// Valve.VR.InteractionSystem.TeleportArc Valve.VR.InteractionSystem.Teleport::teleportArc
	TeleportArc_tC862A36037EF7B8EC0F429537798AE2DA7C16DD9 * ___teleportArc_49;
	// System.Boolean Valve.VR.InteractionSystem.Teleport::visible
	bool ___visible_50;
	// Valve.VR.InteractionSystem.TeleportMarkerBase[] Valve.VR.InteractionSystem.Teleport::teleportMarkers
	TeleportMarkerBaseU5BU5D_t7DB5CD4B25C24A53E4DCBB4628209089D57BB902* ___teleportMarkers_51;
	// Valve.VR.InteractionSystem.TeleportMarkerBase Valve.VR.InteractionSystem.Teleport::pointedAtTeleportMarker
	TeleportMarkerBase_tAE8F2B2438B4484146D07B7DEB40D36DF160A203 * ___pointedAtTeleportMarker_52;
	// Valve.VR.InteractionSystem.TeleportMarkerBase Valve.VR.InteractionSystem.Teleport::teleportingToMarker
	TeleportMarkerBase_tAE8F2B2438B4484146D07B7DEB40D36DF160A203 * ___teleportingToMarker_53;
	// UnityEngine.Vector3 Valve.VR.InteractionSystem.Teleport::pointedAtPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pointedAtPosition_54;
	// UnityEngine.Vector3 Valve.VR.InteractionSystem.Teleport::prevPointedAtPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___prevPointedAtPosition_55;
	// System.Boolean Valve.VR.InteractionSystem.Teleport::teleporting
	bool ___teleporting_56;
	// System.Single Valve.VR.InteractionSystem.Teleport::currentFadeTime
	float ___currentFadeTime_57;
	// System.Single Valve.VR.InteractionSystem.Teleport::meshAlphaPercent
	float ___meshAlphaPercent_58;
	// System.Single Valve.VR.InteractionSystem.Teleport::pointerShowStartTime
	float ___pointerShowStartTime_59;
	// System.Single Valve.VR.InteractionSystem.Teleport::pointerHideStartTime
	float ___pointerHideStartTime_60;
	// System.Boolean Valve.VR.InteractionSystem.Teleport::meshFading
	bool ___meshFading_61;
	// System.Single Valve.VR.InteractionSystem.Teleport::fullTintAlpha
	float ___fullTintAlpha_62;
	// System.Single Valve.VR.InteractionSystem.Teleport::invalidReticleMinScale
	float ___invalidReticleMinScale_63;
	// System.Single Valve.VR.InteractionSystem.Teleport::invalidReticleMaxScale
	float ___invalidReticleMaxScale_64;
	// System.Single Valve.VR.InteractionSystem.Teleport::invalidReticleMinScaleDistance
	float ___invalidReticleMinScaleDistance_65;
	// System.Single Valve.VR.InteractionSystem.Teleport::invalidReticleMaxScaleDistance
	float ___invalidReticleMaxScaleDistance_66;
	// UnityEngine.Vector3 Valve.VR.InteractionSystem.Teleport::invalidReticleScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___invalidReticleScale_67;
	// UnityEngine.Quaternion Valve.VR.InteractionSystem.Teleport::invalidReticleTargetRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___invalidReticleTargetRotation_68;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Teleport::playAreaPreviewTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___playAreaPreviewTransform_69;
	// UnityEngine.Transform[] Valve.VR.InteractionSystem.Teleport::playAreaPreviewCorners
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___playAreaPreviewCorners_70;
	// UnityEngine.Transform[] Valve.VR.InteractionSystem.Teleport::playAreaPreviewSides
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___playAreaPreviewSides_71;
	// System.Single Valve.VR.InteractionSystem.Teleport::loopingAudioMaxVolume
	float ___loopingAudioMaxVolume_72;
	// UnityEngine.Coroutine Valve.VR.InteractionSystem.Teleport::hintCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___hintCoroutine_73;
	// System.Boolean Valve.VR.InteractionSystem.Teleport::originalHoverLockState
	bool ___originalHoverLockState_74;
	// Valve.VR.InteractionSystem.Interactable Valve.VR.InteractionSystem.Teleport::originalHoveringInteractable
	Interactable_t1DA7C81B6B1405ADFC05D71B3963FA179EF2E3C4 * ___originalHoveringInteractable_75;
	// Valve.VR.InteractionSystem.AllowTeleportWhileAttachedToHand Valve.VR.InteractionSystem.Teleport::allowTeleportWhileAttached
	AllowTeleportWhileAttachedToHand_t1B08D63EEC5DE7C83E093F99E0D76323668D2076 * ___allowTeleportWhileAttached_76;
	// UnityEngine.Vector3 Valve.VR.InteractionSystem.Teleport::startingFeetOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startingFeetOffset_77;
	// System.Boolean Valve.VR.InteractionSystem.Teleport::movedFeetFarEnough
	bool ___movedFeetFarEnough_78;
	// Valve.VR.SteamVR_Events/Action Valve.VR.InteractionSystem.Teleport::chaperoneInfoInitializedAction
	Action_t31CD649757E3D346C3C7E102055BFE86A861368C * ___chaperoneInfoInitializedAction_79;

public:
	inline static int32_t get_offset_of_teleportAction_4() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___teleportAction_4)); }
	inline SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * get_teleportAction_4() const { return ___teleportAction_4; }
	inline SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 ** get_address_of_teleportAction_4() { return &___teleportAction_4; }
	inline void set_teleportAction_4(SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * value)
	{
		___teleportAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportAction_4), (void*)value);
	}

	inline static int32_t get_offset_of_traceLayerMask_5() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___traceLayerMask_5)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_traceLayerMask_5() const { return ___traceLayerMask_5; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_traceLayerMask_5() { return &___traceLayerMask_5; }
	inline void set_traceLayerMask_5(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___traceLayerMask_5 = value;
	}

	inline static int32_t get_offset_of_floorFixupTraceLayerMask_6() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___floorFixupTraceLayerMask_6)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_floorFixupTraceLayerMask_6() const { return ___floorFixupTraceLayerMask_6; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_floorFixupTraceLayerMask_6() { return &___floorFixupTraceLayerMask_6; }
	inline void set_floorFixupTraceLayerMask_6(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___floorFixupTraceLayerMask_6 = value;
	}

	inline static int32_t get_offset_of_floorFixupMaximumTraceDistance_7() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___floorFixupMaximumTraceDistance_7)); }
	inline float get_floorFixupMaximumTraceDistance_7() const { return ___floorFixupMaximumTraceDistance_7; }
	inline float* get_address_of_floorFixupMaximumTraceDistance_7() { return &___floorFixupMaximumTraceDistance_7; }
	inline void set_floorFixupMaximumTraceDistance_7(float value)
	{
		___floorFixupMaximumTraceDistance_7 = value;
	}

	inline static int32_t get_offset_of_areaVisibleMaterial_8() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___areaVisibleMaterial_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_areaVisibleMaterial_8() const { return ___areaVisibleMaterial_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_areaVisibleMaterial_8() { return &___areaVisibleMaterial_8; }
	inline void set_areaVisibleMaterial_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___areaVisibleMaterial_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___areaVisibleMaterial_8), (void*)value);
	}

	inline static int32_t get_offset_of_areaLockedMaterial_9() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___areaLockedMaterial_9)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_areaLockedMaterial_9() const { return ___areaLockedMaterial_9; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_areaLockedMaterial_9() { return &___areaLockedMaterial_9; }
	inline void set_areaLockedMaterial_9(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___areaLockedMaterial_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___areaLockedMaterial_9), (void*)value);
	}

	inline static int32_t get_offset_of_areaHighlightedMaterial_10() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___areaHighlightedMaterial_10)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_areaHighlightedMaterial_10() const { return ___areaHighlightedMaterial_10; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_areaHighlightedMaterial_10() { return &___areaHighlightedMaterial_10; }
	inline void set_areaHighlightedMaterial_10(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___areaHighlightedMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___areaHighlightedMaterial_10), (void*)value);
	}

	inline static int32_t get_offset_of_pointVisibleMaterial_11() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointVisibleMaterial_11)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_pointVisibleMaterial_11() const { return ___pointVisibleMaterial_11; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_pointVisibleMaterial_11() { return &___pointVisibleMaterial_11; }
	inline void set_pointVisibleMaterial_11(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___pointVisibleMaterial_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointVisibleMaterial_11), (void*)value);
	}

	inline static int32_t get_offset_of_pointLockedMaterial_12() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointLockedMaterial_12)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_pointLockedMaterial_12() const { return ___pointLockedMaterial_12; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_pointLockedMaterial_12() { return &___pointLockedMaterial_12; }
	inline void set_pointLockedMaterial_12(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___pointLockedMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointLockedMaterial_12), (void*)value);
	}

	inline static int32_t get_offset_of_pointHighlightedMaterial_13() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointHighlightedMaterial_13)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_pointHighlightedMaterial_13() const { return ___pointHighlightedMaterial_13; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_pointHighlightedMaterial_13() { return &___pointHighlightedMaterial_13; }
	inline void set_pointHighlightedMaterial_13(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___pointHighlightedMaterial_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointHighlightedMaterial_13), (void*)value);
	}

	inline static int32_t get_offset_of_destinationReticleTransform_14() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___destinationReticleTransform_14)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_destinationReticleTransform_14() const { return ___destinationReticleTransform_14; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_destinationReticleTransform_14() { return &___destinationReticleTransform_14; }
	inline void set_destinationReticleTransform_14(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___destinationReticleTransform_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destinationReticleTransform_14), (void*)value);
	}

	inline static int32_t get_offset_of_invalidReticleTransform_15() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___invalidReticleTransform_15)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_invalidReticleTransform_15() const { return ___invalidReticleTransform_15; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_invalidReticleTransform_15() { return &___invalidReticleTransform_15; }
	inline void set_invalidReticleTransform_15(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___invalidReticleTransform_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidReticleTransform_15), (void*)value);
	}

	inline static int32_t get_offset_of_playAreaPreviewCorner_16() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___playAreaPreviewCorner_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playAreaPreviewCorner_16() const { return ___playAreaPreviewCorner_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playAreaPreviewCorner_16() { return &___playAreaPreviewCorner_16; }
	inline void set_playAreaPreviewCorner_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playAreaPreviewCorner_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playAreaPreviewCorner_16), (void*)value);
	}

	inline static int32_t get_offset_of_playAreaPreviewSide_17() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___playAreaPreviewSide_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playAreaPreviewSide_17() const { return ___playAreaPreviewSide_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playAreaPreviewSide_17() { return &___playAreaPreviewSide_17; }
	inline void set_playAreaPreviewSide_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playAreaPreviewSide_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playAreaPreviewSide_17), (void*)value);
	}

	inline static int32_t get_offset_of_pointerValidColor_18() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointerValidColor_18)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_pointerValidColor_18() const { return ___pointerValidColor_18; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_pointerValidColor_18() { return &___pointerValidColor_18; }
	inline void set_pointerValidColor_18(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___pointerValidColor_18 = value;
	}

	inline static int32_t get_offset_of_pointerInvalidColor_19() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointerInvalidColor_19)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_pointerInvalidColor_19() const { return ___pointerInvalidColor_19; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_pointerInvalidColor_19() { return &___pointerInvalidColor_19; }
	inline void set_pointerInvalidColor_19(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___pointerInvalidColor_19 = value;
	}

	inline static int32_t get_offset_of_pointerLockedColor_20() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointerLockedColor_20)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_pointerLockedColor_20() const { return ___pointerLockedColor_20; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_pointerLockedColor_20() { return &___pointerLockedColor_20; }
	inline void set_pointerLockedColor_20(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___pointerLockedColor_20 = value;
	}

	inline static int32_t get_offset_of_showPlayAreaMarker_21() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___showPlayAreaMarker_21)); }
	inline bool get_showPlayAreaMarker_21() const { return ___showPlayAreaMarker_21; }
	inline bool* get_address_of_showPlayAreaMarker_21() { return &___showPlayAreaMarker_21; }
	inline void set_showPlayAreaMarker_21(bool value)
	{
		___showPlayAreaMarker_21 = value;
	}

	inline static int32_t get_offset_of_teleportFadeTime_22() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___teleportFadeTime_22)); }
	inline float get_teleportFadeTime_22() const { return ___teleportFadeTime_22; }
	inline float* get_address_of_teleportFadeTime_22() { return &___teleportFadeTime_22; }
	inline void set_teleportFadeTime_22(float value)
	{
		___teleportFadeTime_22 = value;
	}

	inline static int32_t get_offset_of_meshFadeTime_23() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___meshFadeTime_23)); }
	inline float get_meshFadeTime_23() const { return ___meshFadeTime_23; }
	inline float* get_address_of_meshFadeTime_23() { return &___meshFadeTime_23; }
	inline void set_meshFadeTime_23(float value)
	{
		___meshFadeTime_23 = value;
	}

	inline static int32_t get_offset_of_arcDistance_24() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___arcDistance_24)); }
	inline float get_arcDistance_24() const { return ___arcDistance_24; }
	inline float* get_address_of_arcDistance_24() { return &___arcDistance_24; }
	inline void set_arcDistance_24(float value)
	{
		___arcDistance_24 = value;
	}

	inline static int32_t get_offset_of_onActivateObjectTransform_25() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___onActivateObjectTransform_25)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_onActivateObjectTransform_25() const { return ___onActivateObjectTransform_25; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_onActivateObjectTransform_25() { return &___onActivateObjectTransform_25; }
	inline void set_onActivateObjectTransform_25(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___onActivateObjectTransform_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onActivateObjectTransform_25), (void*)value);
	}

	inline static int32_t get_offset_of_onDeactivateObjectTransform_26() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___onDeactivateObjectTransform_26)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_onDeactivateObjectTransform_26() const { return ___onDeactivateObjectTransform_26; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_onDeactivateObjectTransform_26() { return &___onDeactivateObjectTransform_26; }
	inline void set_onDeactivateObjectTransform_26(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___onDeactivateObjectTransform_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDeactivateObjectTransform_26), (void*)value);
	}

	inline static int32_t get_offset_of_activateObjectTime_27() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___activateObjectTime_27)); }
	inline float get_activateObjectTime_27() const { return ___activateObjectTime_27; }
	inline float* get_address_of_activateObjectTime_27() { return &___activateObjectTime_27; }
	inline void set_activateObjectTime_27(float value)
	{
		___activateObjectTime_27 = value;
	}

	inline static int32_t get_offset_of_deactivateObjectTime_28() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___deactivateObjectTime_28)); }
	inline float get_deactivateObjectTime_28() const { return ___deactivateObjectTime_28; }
	inline float* get_address_of_deactivateObjectTime_28() { return &___deactivateObjectTime_28; }
	inline void set_deactivateObjectTime_28(float value)
	{
		___deactivateObjectTime_28 = value;
	}

	inline static int32_t get_offset_of_pointerAudioSource_29() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointerAudioSource_29)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_pointerAudioSource_29() const { return ___pointerAudioSource_29; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_pointerAudioSource_29() { return &___pointerAudioSource_29; }
	inline void set_pointerAudioSource_29(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___pointerAudioSource_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerAudioSource_29), (void*)value);
	}

	inline static int32_t get_offset_of_loopingAudioSource_30() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___loopingAudioSource_30)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_loopingAudioSource_30() const { return ___loopingAudioSource_30; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_loopingAudioSource_30() { return &___loopingAudioSource_30; }
	inline void set_loopingAudioSource_30(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___loopingAudioSource_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopingAudioSource_30), (void*)value);
	}

	inline static int32_t get_offset_of_headAudioSource_31() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___headAudioSource_31)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_headAudioSource_31() const { return ___headAudioSource_31; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_headAudioSource_31() { return &___headAudioSource_31; }
	inline void set_headAudioSource_31(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___headAudioSource_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headAudioSource_31), (void*)value);
	}

	inline static int32_t get_offset_of_reticleAudioSource_32() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___reticleAudioSource_32)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_reticleAudioSource_32() const { return ___reticleAudioSource_32; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_reticleAudioSource_32() { return &___reticleAudioSource_32; }
	inline void set_reticleAudioSource_32(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___reticleAudioSource_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reticleAudioSource_32), (void*)value);
	}

	inline static int32_t get_offset_of_teleportSound_33() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___teleportSound_33)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_teleportSound_33() const { return ___teleportSound_33; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_teleportSound_33() { return &___teleportSound_33; }
	inline void set_teleportSound_33(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___teleportSound_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportSound_33), (void*)value);
	}

	inline static int32_t get_offset_of_pointerStartSound_34() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointerStartSound_34)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_pointerStartSound_34() const { return ___pointerStartSound_34; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_pointerStartSound_34() { return &___pointerStartSound_34; }
	inline void set_pointerStartSound_34(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___pointerStartSound_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerStartSound_34), (void*)value);
	}

	inline static int32_t get_offset_of_pointerLoopSound_35() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointerLoopSound_35)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_pointerLoopSound_35() const { return ___pointerLoopSound_35; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_pointerLoopSound_35() { return &___pointerLoopSound_35; }
	inline void set_pointerLoopSound_35(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___pointerLoopSound_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerLoopSound_35), (void*)value);
	}

	inline static int32_t get_offset_of_pointerStopSound_36() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointerStopSound_36)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_pointerStopSound_36() const { return ___pointerStopSound_36; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_pointerStopSound_36() { return &___pointerStopSound_36; }
	inline void set_pointerStopSound_36(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___pointerStopSound_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerStopSound_36), (void*)value);
	}

	inline static int32_t get_offset_of_goodHighlightSound_37() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___goodHighlightSound_37)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_goodHighlightSound_37() const { return ___goodHighlightSound_37; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_goodHighlightSound_37() { return &___goodHighlightSound_37; }
	inline void set_goodHighlightSound_37(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___goodHighlightSound_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goodHighlightSound_37), (void*)value);
	}

	inline static int32_t get_offset_of_badHighlightSound_38() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___badHighlightSound_38)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_badHighlightSound_38() const { return ___badHighlightSound_38; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_badHighlightSound_38() { return &___badHighlightSound_38; }
	inline void set_badHighlightSound_38(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___badHighlightSound_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___badHighlightSound_38), (void*)value);
	}

	inline static int32_t get_offset_of_debugFloor_39() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___debugFloor_39)); }
	inline bool get_debugFloor_39() const { return ___debugFloor_39; }
	inline bool* get_address_of_debugFloor_39() { return &___debugFloor_39; }
	inline void set_debugFloor_39(bool value)
	{
		___debugFloor_39 = value;
	}

	inline static int32_t get_offset_of_showOffsetReticle_40() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___showOffsetReticle_40)); }
	inline bool get_showOffsetReticle_40() const { return ___showOffsetReticle_40; }
	inline bool* get_address_of_showOffsetReticle_40() { return &___showOffsetReticle_40; }
	inline void set_showOffsetReticle_40(bool value)
	{
		___showOffsetReticle_40 = value;
	}

	inline static int32_t get_offset_of_offsetReticleTransform_41() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___offsetReticleTransform_41)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_offsetReticleTransform_41() const { return ___offsetReticleTransform_41; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_offsetReticleTransform_41() { return &___offsetReticleTransform_41; }
	inline void set_offsetReticleTransform_41(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___offsetReticleTransform_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offsetReticleTransform_41), (void*)value);
	}

	inline static int32_t get_offset_of_floorDebugSphere_42() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___floorDebugSphere_42)); }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * get_floorDebugSphere_42() const { return ___floorDebugSphere_42; }
	inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B ** get_address_of_floorDebugSphere_42() { return &___floorDebugSphere_42; }
	inline void set_floorDebugSphere_42(MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * value)
	{
		___floorDebugSphere_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floorDebugSphere_42), (void*)value);
	}

	inline static int32_t get_offset_of_floorDebugLine_43() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___floorDebugLine_43)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_floorDebugLine_43() const { return ___floorDebugLine_43; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_floorDebugLine_43() { return &___floorDebugLine_43; }
	inline void set_floorDebugLine_43(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___floorDebugLine_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floorDebugLine_43), (void*)value);
	}

	inline static int32_t get_offset_of_pointerLineRenderer_44() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointerLineRenderer_44)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_pointerLineRenderer_44() const { return ___pointerLineRenderer_44; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_pointerLineRenderer_44() { return &___pointerLineRenderer_44; }
	inline void set_pointerLineRenderer_44(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___pointerLineRenderer_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerLineRenderer_44), (void*)value);
	}

	inline static int32_t get_offset_of_teleportPointerObject_45() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___teleportPointerObject_45)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_teleportPointerObject_45() const { return ___teleportPointerObject_45; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_teleportPointerObject_45() { return &___teleportPointerObject_45; }
	inline void set_teleportPointerObject_45(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___teleportPointerObject_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportPointerObject_45), (void*)value);
	}

	inline static int32_t get_offset_of_pointerStartTransform_46() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointerStartTransform_46)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_pointerStartTransform_46() const { return ___pointerStartTransform_46; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_pointerStartTransform_46() { return &___pointerStartTransform_46; }
	inline void set_pointerStartTransform_46(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___pointerStartTransform_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerStartTransform_46), (void*)value);
	}

	inline static int32_t get_offset_of_pointerHand_47() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointerHand_47)); }
	inline Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * get_pointerHand_47() const { return ___pointerHand_47; }
	inline Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 ** get_address_of_pointerHand_47() { return &___pointerHand_47; }
	inline void set_pointerHand_47(Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * value)
	{
		___pointerHand_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerHand_47), (void*)value);
	}

	inline static int32_t get_offset_of_player_48() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___player_48)); }
	inline Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D * get_player_48() const { return ___player_48; }
	inline Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D ** get_address_of_player_48() { return &___player_48; }
	inline void set_player_48(Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D * value)
	{
		___player_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_48), (void*)value);
	}

	inline static int32_t get_offset_of_teleportArc_49() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___teleportArc_49)); }
	inline TeleportArc_tC862A36037EF7B8EC0F429537798AE2DA7C16DD9 * get_teleportArc_49() const { return ___teleportArc_49; }
	inline TeleportArc_tC862A36037EF7B8EC0F429537798AE2DA7C16DD9 ** get_address_of_teleportArc_49() { return &___teleportArc_49; }
	inline void set_teleportArc_49(TeleportArc_tC862A36037EF7B8EC0F429537798AE2DA7C16DD9 * value)
	{
		___teleportArc_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportArc_49), (void*)value);
	}

	inline static int32_t get_offset_of_visible_50() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___visible_50)); }
	inline bool get_visible_50() const { return ___visible_50; }
	inline bool* get_address_of_visible_50() { return &___visible_50; }
	inline void set_visible_50(bool value)
	{
		___visible_50 = value;
	}

	inline static int32_t get_offset_of_teleportMarkers_51() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___teleportMarkers_51)); }
	inline TeleportMarkerBaseU5BU5D_t7DB5CD4B25C24A53E4DCBB4628209089D57BB902* get_teleportMarkers_51() const { return ___teleportMarkers_51; }
	inline TeleportMarkerBaseU5BU5D_t7DB5CD4B25C24A53E4DCBB4628209089D57BB902** get_address_of_teleportMarkers_51() { return &___teleportMarkers_51; }
	inline void set_teleportMarkers_51(TeleportMarkerBaseU5BU5D_t7DB5CD4B25C24A53E4DCBB4628209089D57BB902* value)
	{
		___teleportMarkers_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportMarkers_51), (void*)value);
	}

	inline static int32_t get_offset_of_pointedAtTeleportMarker_52() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointedAtTeleportMarker_52)); }
	inline TeleportMarkerBase_tAE8F2B2438B4484146D07B7DEB40D36DF160A203 * get_pointedAtTeleportMarker_52() const { return ___pointedAtTeleportMarker_52; }
	inline TeleportMarkerBase_tAE8F2B2438B4484146D07B7DEB40D36DF160A203 ** get_address_of_pointedAtTeleportMarker_52() { return &___pointedAtTeleportMarker_52; }
	inline void set_pointedAtTeleportMarker_52(TeleportMarkerBase_tAE8F2B2438B4484146D07B7DEB40D36DF160A203 * value)
	{
		___pointedAtTeleportMarker_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointedAtTeleportMarker_52), (void*)value);
	}

	inline static int32_t get_offset_of_teleportingToMarker_53() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___teleportingToMarker_53)); }
	inline TeleportMarkerBase_tAE8F2B2438B4484146D07B7DEB40D36DF160A203 * get_teleportingToMarker_53() const { return ___teleportingToMarker_53; }
	inline TeleportMarkerBase_tAE8F2B2438B4484146D07B7DEB40D36DF160A203 ** get_address_of_teleportingToMarker_53() { return &___teleportingToMarker_53; }
	inline void set_teleportingToMarker_53(TeleportMarkerBase_tAE8F2B2438B4484146D07B7DEB40D36DF160A203 * value)
	{
		___teleportingToMarker_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportingToMarker_53), (void*)value);
	}

	inline static int32_t get_offset_of_pointedAtPosition_54() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointedAtPosition_54)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_pointedAtPosition_54() const { return ___pointedAtPosition_54; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_pointedAtPosition_54() { return &___pointedAtPosition_54; }
	inline void set_pointedAtPosition_54(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___pointedAtPosition_54 = value;
	}

	inline static int32_t get_offset_of_prevPointedAtPosition_55() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___prevPointedAtPosition_55)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_prevPointedAtPosition_55() const { return ___prevPointedAtPosition_55; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_prevPointedAtPosition_55() { return &___prevPointedAtPosition_55; }
	inline void set_prevPointedAtPosition_55(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___prevPointedAtPosition_55 = value;
	}

	inline static int32_t get_offset_of_teleporting_56() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___teleporting_56)); }
	inline bool get_teleporting_56() const { return ___teleporting_56; }
	inline bool* get_address_of_teleporting_56() { return &___teleporting_56; }
	inline void set_teleporting_56(bool value)
	{
		___teleporting_56 = value;
	}

	inline static int32_t get_offset_of_currentFadeTime_57() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___currentFadeTime_57)); }
	inline float get_currentFadeTime_57() const { return ___currentFadeTime_57; }
	inline float* get_address_of_currentFadeTime_57() { return &___currentFadeTime_57; }
	inline void set_currentFadeTime_57(float value)
	{
		___currentFadeTime_57 = value;
	}

	inline static int32_t get_offset_of_meshAlphaPercent_58() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___meshAlphaPercent_58)); }
	inline float get_meshAlphaPercent_58() const { return ___meshAlphaPercent_58; }
	inline float* get_address_of_meshAlphaPercent_58() { return &___meshAlphaPercent_58; }
	inline void set_meshAlphaPercent_58(float value)
	{
		___meshAlphaPercent_58 = value;
	}

	inline static int32_t get_offset_of_pointerShowStartTime_59() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointerShowStartTime_59)); }
	inline float get_pointerShowStartTime_59() const { return ___pointerShowStartTime_59; }
	inline float* get_address_of_pointerShowStartTime_59() { return &___pointerShowStartTime_59; }
	inline void set_pointerShowStartTime_59(float value)
	{
		___pointerShowStartTime_59 = value;
	}

	inline static int32_t get_offset_of_pointerHideStartTime_60() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___pointerHideStartTime_60)); }
	inline float get_pointerHideStartTime_60() const { return ___pointerHideStartTime_60; }
	inline float* get_address_of_pointerHideStartTime_60() { return &___pointerHideStartTime_60; }
	inline void set_pointerHideStartTime_60(float value)
	{
		___pointerHideStartTime_60 = value;
	}

	inline static int32_t get_offset_of_meshFading_61() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___meshFading_61)); }
	inline bool get_meshFading_61() const { return ___meshFading_61; }
	inline bool* get_address_of_meshFading_61() { return &___meshFading_61; }
	inline void set_meshFading_61(bool value)
	{
		___meshFading_61 = value;
	}

	inline static int32_t get_offset_of_fullTintAlpha_62() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___fullTintAlpha_62)); }
	inline float get_fullTintAlpha_62() const { return ___fullTintAlpha_62; }
	inline float* get_address_of_fullTintAlpha_62() { return &___fullTintAlpha_62; }
	inline void set_fullTintAlpha_62(float value)
	{
		___fullTintAlpha_62 = value;
	}

	inline static int32_t get_offset_of_invalidReticleMinScale_63() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___invalidReticleMinScale_63)); }
	inline float get_invalidReticleMinScale_63() const { return ___invalidReticleMinScale_63; }
	inline float* get_address_of_invalidReticleMinScale_63() { return &___invalidReticleMinScale_63; }
	inline void set_invalidReticleMinScale_63(float value)
	{
		___invalidReticleMinScale_63 = value;
	}

	inline static int32_t get_offset_of_invalidReticleMaxScale_64() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___invalidReticleMaxScale_64)); }
	inline float get_invalidReticleMaxScale_64() const { return ___invalidReticleMaxScale_64; }
	inline float* get_address_of_invalidReticleMaxScale_64() { return &___invalidReticleMaxScale_64; }
	inline void set_invalidReticleMaxScale_64(float value)
	{
		___invalidReticleMaxScale_64 = value;
	}

	inline static int32_t get_offset_of_invalidReticleMinScaleDistance_65() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___invalidReticleMinScaleDistance_65)); }
	inline float get_invalidReticleMinScaleDistance_65() const { return ___invalidReticleMinScaleDistance_65; }
	inline float* get_address_of_invalidReticleMinScaleDistance_65() { return &___invalidReticleMinScaleDistance_65; }
	inline void set_invalidReticleMinScaleDistance_65(float value)
	{
		___invalidReticleMinScaleDistance_65 = value;
	}

	inline static int32_t get_offset_of_invalidReticleMaxScaleDistance_66() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___invalidReticleMaxScaleDistance_66)); }
	inline float get_invalidReticleMaxScaleDistance_66() const { return ___invalidReticleMaxScaleDistance_66; }
	inline float* get_address_of_invalidReticleMaxScaleDistance_66() { return &___invalidReticleMaxScaleDistance_66; }
	inline void set_invalidReticleMaxScaleDistance_66(float value)
	{
		___invalidReticleMaxScaleDistance_66 = value;
	}

	inline static int32_t get_offset_of_invalidReticleScale_67() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___invalidReticleScale_67)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_invalidReticleScale_67() const { return ___invalidReticleScale_67; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_invalidReticleScale_67() { return &___invalidReticleScale_67; }
	inline void set_invalidReticleScale_67(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___invalidReticleScale_67 = value;
	}

	inline static int32_t get_offset_of_invalidReticleTargetRotation_68() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___invalidReticleTargetRotation_68)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_invalidReticleTargetRotation_68() const { return ___invalidReticleTargetRotation_68; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_invalidReticleTargetRotation_68() { return &___invalidReticleTargetRotation_68; }
	inline void set_invalidReticleTargetRotation_68(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___invalidReticleTargetRotation_68 = value;
	}

	inline static int32_t get_offset_of_playAreaPreviewTransform_69() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___playAreaPreviewTransform_69)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_playAreaPreviewTransform_69() const { return ___playAreaPreviewTransform_69; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_playAreaPreviewTransform_69() { return &___playAreaPreviewTransform_69; }
	inline void set_playAreaPreviewTransform_69(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___playAreaPreviewTransform_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playAreaPreviewTransform_69), (void*)value);
	}

	inline static int32_t get_offset_of_playAreaPreviewCorners_70() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___playAreaPreviewCorners_70)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_playAreaPreviewCorners_70() const { return ___playAreaPreviewCorners_70; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_playAreaPreviewCorners_70() { return &___playAreaPreviewCorners_70; }
	inline void set_playAreaPreviewCorners_70(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___playAreaPreviewCorners_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playAreaPreviewCorners_70), (void*)value);
	}

	inline static int32_t get_offset_of_playAreaPreviewSides_71() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___playAreaPreviewSides_71)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_playAreaPreviewSides_71() const { return ___playAreaPreviewSides_71; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_playAreaPreviewSides_71() { return &___playAreaPreviewSides_71; }
	inline void set_playAreaPreviewSides_71(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___playAreaPreviewSides_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playAreaPreviewSides_71), (void*)value);
	}

	inline static int32_t get_offset_of_loopingAudioMaxVolume_72() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___loopingAudioMaxVolume_72)); }
	inline float get_loopingAudioMaxVolume_72() const { return ___loopingAudioMaxVolume_72; }
	inline float* get_address_of_loopingAudioMaxVolume_72() { return &___loopingAudioMaxVolume_72; }
	inline void set_loopingAudioMaxVolume_72(float value)
	{
		___loopingAudioMaxVolume_72 = value;
	}

	inline static int32_t get_offset_of_hintCoroutine_73() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___hintCoroutine_73)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_hintCoroutine_73() const { return ___hintCoroutine_73; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_hintCoroutine_73() { return &___hintCoroutine_73; }
	inline void set_hintCoroutine_73(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___hintCoroutine_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hintCoroutine_73), (void*)value);
	}

	inline static int32_t get_offset_of_originalHoverLockState_74() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___originalHoverLockState_74)); }
	inline bool get_originalHoverLockState_74() const { return ___originalHoverLockState_74; }
	inline bool* get_address_of_originalHoverLockState_74() { return &___originalHoverLockState_74; }
	inline void set_originalHoverLockState_74(bool value)
	{
		___originalHoverLockState_74 = value;
	}

	inline static int32_t get_offset_of_originalHoveringInteractable_75() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___originalHoveringInteractable_75)); }
	inline Interactable_t1DA7C81B6B1405ADFC05D71B3963FA179EF2E3C4 * get_originalHoveringInteractable_75() const { return ___originalHoveringInteractable_75; }
	inline Interactable_t1DA7C81B6B1405ADFC05D71B3963FA179EF2E3C4 ** get_address_of_originalHoveringInteractable_75() { return &___originalHoveringInteractable_75; }
	inline void set_originalHoveringInteractable_75(Interactable_t1DA7C81B6B1405ADFC05D71B3963FA179EF2E3C4 * value)
	{
		___originalHoveringInteractable_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalHoveringInteractable_75), (void*)value);
	}

	inline static int32_t get_offset_of_allowTeleportWhileAttached_76() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___allowTeleportWhileAttached_76)); }
	inline AllowTeleportWhileAttachedToHand_t1B08D63EEC5DE7C83E093F99E0D76323668D2076 * get_allowTeleportWhileAttached_76() const { return ___allowTeleportWhileAttached_76; }
	inline AllowTeleportWhileAttachedToHand_t1B08D63EEC5DE7C83E093F99E0D76323668D2076 ** get_address_of_allowTeleportWhileAttached_76() { return &___allowTeleportWhileAttached_76; }
	inline void set_allowTeleportWhileAttached_76(AllowTeleportWhileAttachedToHand_t1B08D63EEC5DE7C83E093F99E0D76323668D2076 * value)
	{
		___allowTeleportWhileAttached_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allowTeleportWhileAttached_76), (void*)value);
	}

	inline static int32_t get_offset_of_startingFeetOffset_77() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___startingFeetOffset_77)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startingFeetOffset_77() const { return ___startingFeetOffset_77; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startingFeetOffset_77() { return &___startingFeetOffset_77; }
	inline void set_startingFeetOffset_77(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startingFeetOffset_77 = value;
	}

	inline static int32_t get_offset_of_movedFeetFarEnough_78() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___movedFeetFarEnough_78)); }
	inline bool get_movedFeetFarEnough_78() const { return ___movedFeetFarEnough_78; }
	inline bool* get_address_of_movedFeetFarEnough_78() { return &___movedFeetFarEnough_78; }
	inline void set_movedFeetFarEnough_78(bool value)
	{
		___movedFeetFarEnough_78 = value;
	}

	inline static int32_t get_offset_of_chaperoneInfoInitializedAction_79() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8, ___chaperoneInfoInitializedAction_79)); }
	inline Action_t31CD649757E3D346C3C7E102055BFE86A861368C * get_chaperoneInfoInitializedAction_79() const { return ___chaperoneInfoInitializedAction_79; }
	inline Action_t31CD649757E3D346C3C7E102055BFE86A861368C ** get_address_of_chaperoneInfoInitializedAction_79() { return &___chaperoneInfoInitializedAction_79; }
	inline void set_chaperoneInfoInitializedAction_79(Action_t31CD649757E3D346C3C7E102055BFE86A861368C * value)
	{
		___chaperoneInfoInitializedAction_79 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chaperoneInfoInitializedAction_79), (void*)value);
	}
};

struct Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8_StaticFields
{
public:
	// Valve.VR.SteamVR_Events/Event`1<System.Single> Valve.VR.InteractionSystem.Teleport::ChangeScene
	Event_1_t68600C8ECE8DE52B1FAE99AEDD630AE9498D4283 * ___ChangeScene_80;
	// Valve.VR.SteamVR_Events/Event`1<Valve.VR.InteractionSystem.TeleportMarkerBase> Valve.VR.InteractionSystem.Teleport::Player
	Event_1_tC01AC4F11A560936A656B638C916D0925A6C2627 * ___Player_81;
	// Valve.VR.SteamVR_Events/Event`1<Valve.VR.InteractionSystem.TeleportMarkerBase> Valve.VR.InteractionSystem.Teleport::PlayerPre
	Event_1_tC01AC4F11A560936A656B638C916D0925A6C2627 * ___PlayerPre_82;
	// Valve.VR.InteractionSystem.Teleport Valve.VR.InteractionSystem.Teleport::_instance
	Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 * ____instance_83;

public:
	inline static int32_t get_offset_of_ChangeScene_80() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8_StaticFields, ___ChangeScene_80)); }
	inline Event_1_t68600C8ECE8DE52B1FAE99AEDD630AE9498D4283 * get_ChangeScene_80() const { return ___ChangeScene_80; }
	inline Event_1_t68600C8ECE8DE52B1FAE99AEDD630AE9498D4283 ** get_address_of_ChangeScene_80() { return &___ChangeScene_80; }
	inline void set_ChangeScene_80(Event_1_t68600C8ECE8DE52B1FAE99AEDD630AE9498D4283 * value)
	{
		___ChangeScene_80 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChangeScene_80), (void*)value);
	}

	inline static int32_t get_offset_of_Player_81() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8_StaticFields, ___Player_81)); }
	inline Event_1_tC01AC4F11A560936A656B638C916D0925A6C2627 * get_Player_81() const { return ___Player_81; }
	inline Event_1_tC01AC4F11A560936A656B638C916D0925A6C2627 ** get_address_of_Player_81() { return &___Player_81; }
	inline void set_Player_81(Event_1_tC01AC4F11A560936A656B638C916D0925A6C2627 * value)
	{
		___Player_81 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Player_81), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerPre_82() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8_StaticFields, ___PlayerPre_82)); }
	inline Event_1_tC01AC4F11A560936A656B638C916D0925A6C2627 * get_PlayerPre_82() const { return ___PlayerPre_82; }
	inline Event_1_tC01AC4F11A560936A656B638C916D0925A6C2627 ** get_address_of_PlayerPre_82() { return &___PlayerPre_82; }
	inline void set_PlayerPre_82(Event_1_tC01AC4F11A560936A656B638C916D0925A6C2627 * value)
	{
		___PlayerPre_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerPre_82), (void*)value);
	}

	inline static int32_t get_offset_of__instance_83() { return static_cast<int32_t>(offsetof(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8_StaticFields, ____instance_83)); }
	inline Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 * get__instance_83() const { return ____instance_83; }
	inline Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 ** get_address_of__instance_83() { return &____instance_83; }
	inline void set__instance_83(Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 * value)
	{
		____instance_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_83), (void*)value);
	}
};


// Valve.VR.InteractionSystem.Throwable
struct Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Valve.VR.InteractionSystem.Hand/AttachmentFlags Valve.VR.InteractionSystem.Throwable::attachmentFlags
	int32_t ___attachmentFlags_4;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Throwable::attachmentOffset
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___attachmentOffset_5;
	// System.Single Valve.VR.InteractionSystem.Throwable::catchingSpeedThreshold
	float ___catchingSpeedThreshold_6;
	// Valve.VR.InteractionSystem.ReleaseStyle Valve.VR.InteractionSystem.Throwable::releaseVelocityStyle
	int32_t ___releaseVelocityStyle_7;
	// System.Single Valve.VR.InteractionSystem.Throwable::releaseVelocityTimeOffset
	float ___releaseVelocityTimeOffset_8;
	// System.Single Valve.VR.InteractionSystem.Throwable::scaleReleaseVelocity
	float ___scaleReleaseVelocity_9;
	// System.Single Valve.VR.InteractionSystem.Throwable::scaleReleaseVelocityThreshold
	float ___scaleReleaseVelocityThreshold_10;
	// UnityEngine.AnimationCurve Valve.VR.InteractionSystem.Throwable::scaleReleaseVelocityCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___scaleReleaseVelocityCurve_11;
	// System.Boolean Valve.VR.InteractionSystem.Throwable::restoreOriginalParent
	bool ___restoreOriginalParent_12;
	// Valve.VR.InteractionSystem.VelocityEstimator Valve.VR.InteractionSystem.Throwable::velocityEstimator
	VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * ___velocityEstimator_13;
	// System.Boolean Valve.VR.InteractionSystem.Throwable::attached
	bool ___attached_14;
	// System.Single Valve.VR.InteractionSystem.Throwable::attachTime
	float ___attachTime_15;
	// UnityEngine.Vector3 Valve.VR.InteractionSystem.Throwable::attachPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___attachPosition_16;
	// UnityEngine.Quaternion Valve.VR.InteractionSystem.Throwable::attachRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___attachRotation_17;
	// UnityEngine.Transform Valve.VR.InteractionSystem.Throwable::attachEaseInTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___attachEaseInTransform_18;
	// UnityEngine.Events.UnityEvent Valve.VR.InteractionSystem.Throwable::onPickUp
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onPickUp_19;
	// UnityEngine.Events.UnityEvent Valve.VR.InteractionSystem.Throwable::onDetachFromHand
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___onDetachFromHand_20;
	// Valve.VR.InteractionSystem.HandEvent Valve.VR.InteractionSystem.Throwable::onHeldUpdate
	HandEvent_tB05F9192CEC46DE35AC49646A9882DB36A454D23 * ___onHeldUpdate_21;
	// UnityEngine.RigidbodyInterpolation Valve.VR.InteractionSystem.Throwable::hadInterpolation
	int32_t ___hadInterpolation_22;
	// UnityEngine.Rigidbody Valve.VR.InteractionSystem.Throwable::rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigidbody_23;
	// Valve.VR.InteractionSystem.Interactable Valve.VR.InteractionSystem.Throwable::interactable
	Interactable_t1DA7C81B6B1405ADFC05D71B3963FA179EF2E3C4 * ___interactable_24;

public:
	inline static int32_t get_offset_of_attachmentFlags_4() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___attachmentFlags_4)); }
	inline int32_t get_attachmentFlags_4() const { return ___attachmentFlags_4; }
	inline int32_t* get_address_of_attachmentFlags_4() { return &___attachmentFlags_4; }
	inline void set_attachmentFlags_4(int32_t value)
	{
		___attachmentFlags_4 = value;
	}

	inline static int32_t get_offset_of_attachmentOffset_5() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___attachmentOffset_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_attachmentOffset_5() const { return ___attachmentOffset_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_attachmentOffset_5() { return &___attachmentOffset_5; }
	inline void set_attachmentOffset_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___attachmentOffset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachmentOffset_5), (void*)value);
	}

	inline static int32_t get_offset_of_catchingSpeedThreshold_6() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___catchingSpeedThreshold_6)); }
	inline float get_catchingSpeedThreshold_6() const { return ___catchingSpeedThreshold_6; }
	inline float* get_address_of_catchingSpeedThreshold_6() { return &___catchingSpeedThreshold_6; }
	inline void set_catchingSpeedThreshold_6(float value)
	{
		___catchingSpeedThreshold_6 = value;
	}

	inline static int32_t get_offset_of_releaseVelocityStyle_7() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___releaseVelocityStyle_7)); }
	inline int32_t get_releaseVelocityStyle_7() const { return ___releaseVelocityStyle_7; }
	inline int32_t* get_address_of_releaseVelocityStyle_7() { return &___releaseVelocityStyle_7; }
	inline void set_releaseVelocityStyle_7(int32_t value)
	{
		___releaseVelocityStyle_7 = value;
	}

	inline static int32_t get_offset_of_releaseVelocityTimeOffset_8() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___releaseVelocityTimeOffset_8)); }
	inline float get_releaseVelocityTimeOffset_8() const { return ___releaseVelocityTimeOffset_8; }
	inline float* get_address_of_releaseVelocityTimeOffset_8() { return &___releaseVelocityTimeOffset_8; }
	inline void set_releaseVelocityTimeOffset_8(float value)
	{
		___releaseVelocityTimeOffset_8 = value;
	}

	inline static int32_t get_offset_of_scaleReleaseVelocity_9() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___scaleReleaseVelocity_9)); }
	inline float get_scaleReleaseVelocity_9() const { return ___scaleReleaseVelocity_9; }
	inline float* get_address_of_scaleReleaseVelocity_9() { return &___scaleReleaseVelocity_9; }
	inline void set_scaleReleaseVelocity_9(float value)
	{
		___scaleReleaseVelocity_9 = value;
	}

	inline static int32_t get_offset_of_scaleReleaseVelocityThreshold_10() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___scaleReleaseVelocityThreshold_10)); }
	inline float get_scaleReleaseVelocityThreshold_10() const { return ___scaleReleaseVelocityThreshold_10; }
	inline float* get_address_of_scaleReleaseVelocityThreshold_10() { return &___scaleReleaseVelocityThreshold_10; }
	inline void set_scaleReleaseVelocityThreshold_10(float value)
	{
		___scaleReleaseVelocityThreshold_10 = value;
	}

	inline static int32_t get_offset_of_scaleReleaseVelocityCurve_11() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___scaleReleaseVelocityCurve_11)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_scaleReleaseVelocityCurve_11() const { return ___scaleReleaseVelocityCurve_11; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_scaleReleaseVelocityCurve_11() { return &___scaleReleaseVelocityCurve_11; }
	inline void set_scaleReleaseVelocityCurve_11(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___scaleReleaseVelocityCurve_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scaleReleaseVelocityCurve_11), (void*)value);
	}

	inline static int32_t get_offset_of_restoreOriginalParent_12() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___restoreOriginalParent_12)); }
	inline bool get_restoreOriginalParent_12() const { return ___restoreOriginalParent_12; }
	inline bool* get_address_of_restoreOriginalParent_12() { return &___restoreOriginalParent_12; }
	inline void set_restoreOriginalParent_12(bool value)
	{
		___restoreOriginalParent_12 = value;
	}

	inline static int32_t get_offset_of_velocityEstimator_13() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___velocityEstimator_13)); }
	inline VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * get_velocityEstimator_13() const { return ___velocityEstimator_13; }
	inline VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 ** get_address_of_velocityEstimator_13() { return &___velocityEstimator_13; }
	inline void set_velocityEstimator_13(VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * value)
	{
		___velocityEstimator_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___velocityEstimator_13), (void*)value);
	}

	inline static int32_t get_offset_of_attached_14() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___attached_14)); }
	inline bool get_attached_14() const { return ___attached_14; }
	inline bool* get_address_of_attached_14() { return &___attached_14; }
	inline void set_attached_14(bool value)
	{
		___attached_14 = value;
	}

	inline static int32_t get_offset_of_attachTime_15() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___attachTime_15)); }
	inline float get_attachTime_15() const { return ___attachTime_15; }
	inline float* get_address_of_attachTime_15() { return &___attachTime_15; }
	inline void set_attachTime_15(float value)
	{
		___attachTime_15 = value;
	}

	inline static int32_t get_offset_of_attachPosition_16() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___attachPosition_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_attachPosition_16() const { return ___attachPosition_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_attachPosition_16() { return &___attachPosition_16; }
	inline void set_attachPosition_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___attachPosition_16 = value;
	}

	inline static int32_t get_offset_of_attachRotation_17() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___attachRotation_17)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_attachRotation_17() const { return ___attachRotation_17; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_attachRotation_17() { return &___attachRotation_17; }
	inline void set_attachRotation_17(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___attachRotation_17 = value;
	}

	inline static int32_t get_offset_of_attachEaseInTransform_18() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___attachEaseInTransform_18)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_attachEaseInTransform_18() const { return ___attachEaseInTransform_18; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_attachEaseInTransform_18() { return &___attachEaseInTransform_18; }
	inline void set_attachEaseInTransform_18(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___attachEaseInTransform_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attachEaseInTransform_18), (void*)value);
	}

	inline static int32_t get_offset_of_onPickUp_19() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___onPickUp_19)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onPickUp_19() const { return ___onPickUp_19; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onPickUp_19() { return &___onPickUp_19; }
	inline void set_onPickUp_19(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onPickUp_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPickUp_19), (void*)value);
	}

	inline static int32_t get_offset_of_onDetachFromHand_20() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___onDetachFromHand_20)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_onDetachFromHand_20() const { return ___onDetachFromHand_20; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_onDetachFromHand_20() { return &___onDetachFromHand_20; }
	inline void set_onDetachFromHand_20(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___onDetachFromHand_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDetachFromHand_20), (void*)value);
	}

	inline static int32_t get_offset_of_onHeldUpdate_21() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___onHeldUpdate_21)); }
	inline HandEvent_tB05F9192CEC46DE35AC49646A9882DB36A454D23 * get_onHeldUpdate_21() const { return ___onHeldUpdate_21; }
	inline HandEvent_tB05F9192CEC46DE35AC49646A9882DB36A454D23 ** get_address_of_onHeldUpdate_21() { return &___onHeldUpdate_21; }
	inline void set_onHeldUpdate_21(HandEvent_tB05F9192CEC46DE35AC49646A9882DB36A454D23 * value)
	{
		___onHeldUpdate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHeldUpdate_21), (void*)value);
	}

	inline static int32_t get_offset_of_hadInterpolation_22() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___hadInterpolation_22)); }
	inline int32_t get_hadInterpolation_22() const { return ___hadInterpolation_22; }
	inline int32_t* get_address_of_hadInterpolation_22() { return &___hadInterpolation_22; }
	inline void set_hadInterpolation_22(int32_t value)
	{
		___hadInterpolation_22 = value;
	}

	inline static int32_t get_offset_of_rigidbody_23() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___rigidbody_23)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rigidbody_23() const { return ___rigidbody_23; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rigidbody_23() { return &___rigidbody_23; }
	inline void set_rigidbody_23(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rigidbody_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidbody_23), (void*)value);
	}

	inline static int32_t get_offset_of_interactable_24() { return static_cast<int32_t>(offsetof(Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC, ___interactable_24)); }
	inline Interactable_t1DA7C81B6B1405ADFC05D71B3963FA179EF2E3C4 * get_interactable_24() const { return ___interactable_24; }
	inline Interactable_t1DA7C81B6B1405ADFC05D71B3963FA179EF2E3C4 ** get_address_of_interactable_24() { return &___interactable_24; }
	inline void set_interactable_24(Interactable_t1DA7C81B6B1405ADFC05D71B3963FA179EF2E3C4 * value)
	{
		___interactable_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___interactable_24), (void*)value);
	}
};


// Valve.VR.InteractionSystem.VelocityEstimator
struct VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Valve.VR.InteractionSystem.VelocityEstimator::velocityAverageFrames
	int32_t ___velocityAverageFrames_4;
	// System.Int32 Valve.VR.InteractionSystem.VelocityEstimator::angularVelocityAverageFrames
	int32_t ___angularVelocityAverageFrames_5;
	// System.Boolean Valve.VR.InteractionSystem.VelocityEstimator::estimateOnAwake
	bool ___estimateOnAwake_6;
	// UnityEngine.Coroutine Valve.VR.InteractionSystem.VelocityEstimator::routine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine_7;
	// System.Int32 Valve.VR.InteractionSystem.VelocityEstimator::sampleCount
	int32_t ___sampleCount_8;
	// UnityEngine.Vector3[] Valve.VR.InteractionSystem.VelocityEstimator::velocitySamples
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___velocitySamples_9;
	// UnityEngine.Vector3[] Valve.VR.InteractionSystem.VelocityEstimator::angularVelocitySamples
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___angularVelocitySamples_10;

public:
	inline static int32_t get_offset_of_velocityAverageFrames_4() { return static_cast<int32_t>(offsetof(VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078, ___velocityAverageFrames_4)); }
	inline int32_t get_velocityAverageFrames_4() const { return ___velocityAverageFrames_4; }
	inline int32_t* get_address_of_velocityAverageFrames_4() { return &___velocityAverageFrames_4; }
	inline void set_velocityAverageFrames_4(int32_t value)
	{
		___velocityAverageFrames_4 = value;
	}

	inline static int32_t get_offset_of_angularVelocityAverageFrames_5() { return static_cast<int32_t>(offsetof(VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078, ___angularVelocityAverageFrames_5)); }
	inline int32_t get_angularVelocityAverageFrames_5() const { return ___angularVelocityAverageFrames_5; }
	inline int32_t* get_address_of_angularVelocityAverageFrames_5() { return &___angularVelocityAverageFrames_5; }
	inline void set_angularVelocityAverageFrames_5(int32_t value)
	{
		___angularVelocityAverageFrames_5 = value;
	}

	inline static int32_t get_offset_of_estimateOnAwake_6() { return static_cast<int32_t>(offsetof(VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078, ___estimateOnAwake_6)); }
	inline bool get_estimateOnAwake_6() const { return ___estimateOnAwake_6; }
	inline bool* get_address_of_estimateOnAwake_6() { return &___estimateOnAwake_6; }
	inline void set_estimateOnAwake_6(bool value)
	{
		___estimateOnAwake_6 = value;
	}

	inline static int32_t get_offset_of_routine_7() { return static_cast<int32_t>(offsetof(VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078, ___routine_7)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_routine_7() const { return ___routine_7; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_routine_7() { return &___routine_7; }
	inline void set_routine_7(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___routine_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___routine_7), (void*)value);
	}

	inline static int32_t get_offset_of_sampleCount_8() { return static_cast<int32_t>(offsetof(VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078, ___sampleCount_8)); }
	inline int32_t get_sampleCount_8() const { return ___sampleCount_8; }
	inline int32_t* get_address_of_sampleCount_8() { return &___sampleCount_8; }
	inline void set_sampleCount_8(int32_t value)
	{
		___sampleCount_8 = value;
	}

	inline static int32_t get_offset_of_velocitySamples_9() { return static_cast<int32_t>(offsetof(VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078, ___velocitySamples_9)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_velocitySamples_9() const { return ___velocitySamples_9; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_velocitySamples_9() { return &___velocitySamples_9; }
	inline void set_velocitySamples_9(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___velocitySamples_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___velocitySamples_9), (void*)value);
	}

	inline static int32_t get_offset_of_angularVelocitySamples_10() { return static_cast<int32_t>(offsetof(VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078, ___angularVelocitySamples_10)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_angularVelocitySamples_10() const { return ___angularVelocitySamples_10; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_angularVelocitySamples_10() { return &___angularVelocitySamples_10; }
	inline void set_angularVelocitySamples_10(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___angularVelocitySamples_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___angularVelocitySamples_10), (void*)value);
	}
};


// Valve.VR.InteractionSystem.Sample.WheelDust
struct WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.WheelCollider Valve.VR.InteractionSystem.Sample.WheelDust::col
	WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * ___col_4;
	// UnityEngine.ParticleSystem Valve.VR.InteractionSystem.Sample.WheelDust::p
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___p_5;
	// System.Single Valve.VR.InteractionSystem.Sample.WheelDust::EmissionMul
	float ___EmissionMul_6;
	// System.Single Valve.VR.InteractionSystem.Sample.WheelDust::velocityMul
	float ___velocityMul_7;
	// System.Single Valve.VR.InteractionSystem.Sample.WheelDust::maxEmission
	float ___maxEmission_8;
	// System.Single Valve.VR.InteractionSystem.Sample.WheelDust::minSlip
	float ___minSlip_9;
	// System.Single Valve.VR.InteractionSystem.Sample.WheelDust::amt
	float ___amt_10;
	// UnityEngine.Vector3 Valve.VR.InteractionSystem.Sample.WheelDust::slip
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___slip_11;
	// System.Single Valve.VR.InteractionSystem.Sample.WheelDust::emitTimer
	float ___emitTimer_12;

public:
	inline static int32_t get_offset_of_col_4() { return static_cast<int32_t>(offsetof(WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4, ___col_4)); }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * get_col_4() const { return ___col_4; }
	inline WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 ** get_address_of_col_4() { return &___col_4; }
	inline void set_col_4(WheelCollider_t57B08104FE16DFC3BF72826F7A3CCB8477C01779 * value)
	{
		___col_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___col_4), (void*)value);
	}

	inline static int32_t get_offset_of_p_5() { return static_cast<int32_t>(offsetof(WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4, ___p_5)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_p_5() const { return ___p_5; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_p_5() { return &___p_5; }
	inline void set_p_5(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___p_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p_5), (void*)value);
	}

	inline static int32_t get_offset_of_EmissionMul_6() { return static_cast<int32_t>(offsetof(WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4, ___EmissionMul_6)); }
	inline float get_EmissionMul_6() const { return ___EmissionMul_6; }
	inline float* get_address_of_EmissionMul_6() { return &___EmissionMul_6; }
	inline void set_EmissionMul_6(float value)
	{
		___EmissionMul_6 = value;
	}

	inline static int32_t get_offset_of_velocityMul_7() { return static_cast<int32_t>(offsetof(WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4, ___velocityMul_7)); }
	inline float get_velocityMul_7() const { return ___velocityMul_7; }
	inline float* get_address_of_velocityMul_7() { return &___velocityMul_7; }
	inline void set_velocityMul_7(float value)
	{
		___velocityMul_7 = value;
	}

	inline static int32_t get_offset_of_maxEmission_8() { return static_cast<int32_t>(offsetof(WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4, ___maxEmission_8)); }
	inline float get_maxEmission_8() const { return ___maxEmission_8; }
	inline float* get_address_of_maxEmission_8() { return &___maxEmission_8; }
	inline void set_maxEmission_8(float value)
	{
		___maxEmission_8 = value;
	}

	inline static int32_t get_offset_of_minSlip_9() { return static_cast<int32_t>(offsetof(WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4, ___minSlip_9)); }
	inline float get_minSlip_9() const { return ___minSlip_9; }
	inline float* get_address_of_minSlip_9() { return &___minSlip_9; }
	inline void set_minSlip_9(float value)
	{
		___minSlip_9 = value;
	}

	inline static int32_t get_offset_of_amt_10() { return static_cast<int32_t>(offsetof(WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4, ___amt_10)); }
	inline float get_amt_10() const { return ___amt_10; }
	inline float* get_address_of_amt_10() { return &___amt_10; }
	inline void set_amt_10(float value)
	{
		___amt_10 = value;
	}

	inline static int32_t get_offset_of_slip_11() { return static_cast<int32_t>(offsetof(WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4, ___slip_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_slip_11() const { return ___slip_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_slip_11() { return &___slip_11; }
	inline void set_slip_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___slip_11 = value;
	}

	inline static int32_t get_offset_of_emitTimer_12() { return static_cast<int32_t>(offsetof(WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4, ___emitTimer_12)); }
	inline float get_emitTimer_12() const { return ___emitTimer_12; }
	inline float* get_address_of_emitTimer_12() { return &___emitTimer_12; }
	inline void set_emitTimer_12(float value)
	{
		___emitTimer_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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
// Valve.VR.InteractionSystem.Hand[]
struct HandU5BU5D_tC092C7BDF34DDFC6FF249FAFB0DE5E20331C5B5A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * m_Items[1];

public:
	inline Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void SteamVR_Utils/Event/Handler::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handler_Invoke_m476DF247EF56B5F6FC58E098C2864FD266C0D592 (Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91 (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void SteamVR_Utils/RigidTransform::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform__ctor_m9308BC147E127BDFBFC452CCB3A632C33D2B9606 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void SteamVR_Utils/RigidTransform::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform__ctor_mF4B9332992C7AE4CC587FA2A515D8E293AB7528A (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// System.Void SteamVR_Utils/RigidTransform::.ctor(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform__ctor_m82882F5EE69E007130AFD44E064623EBD296770B (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___from0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___to1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596 (const RuntimeMethod* method);
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method);
// UnityEngine.Vector3 SteamVR_Utils::GetPosition(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SteamVR_Utils_GetPosition_m1BD6EA43D57C901C212C73676400F1F3BC5005A3 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method);
// UnityEngine.Quaternion SteamVR_Utils::GetRotation(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  SteamVR_Utils_GetRotation_mBAE351201C0B906637B1E459385C94FB05920535 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method);
// System.Void SteamVR_Utils/RigidTransform::.ctor(Valve.VR.HmdMatrix34_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform__ctor_mC1C6C44AC15D8D6829F431D71D290A6EC8300AB2 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  ___pose0, const RuntimeMethod* method);
// System.Void SteamVR_Utils/RigidTransform::.ctor(Valve.VR.HmdMatrix44_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform__ctor_mB643C5633F8A198866C441B8010FA791D9608C7F (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  ___pose0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, int32_t ___row0, int32_t ___column1, const RuntimeMethod* method);
// Valve.VR.HmdMatrix44_t SteamVR_Utils/RigidTransform::ToHmdMatrix44()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  RigidTransform_ToHmdMatrix44_mEE0F869B7CC79FC97BA19B62296516C8E11962ED (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, const RuntimeMethod* method);
// Valve.VR.HmdMatrix34_t SteamVR_Utils/RigidTransform::ToHmdMatrix34()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  RigidTransform_ToHmdMatrix34_m7FFBDE5BC046C7A095D83DBC642155A03015E483 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m7EC909C253064DBECF7DB83BCF7C2E42163685BE (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Boolean SteamVR_Utils/RigidTransform::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidTransform_Equals_mBB93CE44A32F4A186A26FC905AB1F4511A793BA9 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Quaternion::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Quaternion_GetHashCode_mFCEA4CA542544DC9BD222C66F524C2F3CFE60744 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// System.Int32 SteamVR_Utils/RigidTransform::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RigidTransform_GetHashCode_mB1EFF12202FBE7F499A0B93342FDF0636CA20FB0 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_op_Inequality_m37169F3E8ADDA24A5A221AD7397835B437B71439 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// System.Void SteamVR_Utils/RigidTransform::Inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform_Inverse_m323ED3E444BF2AD9657A1CDFC93B6CB6CE40417E (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, const RuntimeMethod* method);
// SteamVR_Utils/RigidTransform SteamVR_Utils/RigidTransform::GetInverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  RigidTransform_GetInverse_mF40A096023BDE168447D0EA3584F0454AD318E27 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, const RuntimeMethod* method);
// System.Void SteamVR_Utils/RigidTransform::Multiply(SteamVR_Utils/RigidTransform,SteamVR_Utils/RigidTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform_Multiply_m2D623FFF1351DAABE54C67E9C5081BEB7EE36381 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___a0, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 SteamVR_Utils/RigidTransform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RigidTransform_InverseTransformPoint_mCEAC1E681DE0285F1A396F8FE60B820C2619A5EF (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 SteamVR_Utils/RigidTransform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RigidTransform_TransformPoint_mA4B25EC37AF96BCD44D46D5967DCF77FB6534658 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 SteamVR_Utils::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SteamVR_Utils_Lerp_m35E23ED733CB11C3B007B3E423FBF0F2C3005BF9 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___A0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___B1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion SteamVR_Utils::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  SteamVR_Utils_Slerp_mCBD31AB5EAD2BEA44E4348CCEE8981FD9F7D3326 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___A0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___B1, float ___t2, const RuntimeMethod* method);
// System.Void SteamVR_Utils/RigidTransform::Interpolate(SteamVR_Utils/RigidTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform_Interpolate_m587C2DC625A7FFCDD7D0C3A440D250BD74288956 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___to0, float ___t1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Boolean Valve.VR.InteractionSystem.Teleport::IsEligibleForTeleport(Valve.VR.InteractionSystem.Hand)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Teleport_IsEligibleForTeleport_m2AE44E7F2C5935D0FFC3AA73FAAC55AE4C8AFBBB (Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 * __this, Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * ___hand0, const RuntimeMethod* method);
// System.String Valve.VR.InteractionSystem.ControllerButtonHints::GetActiveHintText(Valve.VR.InteractionSystem.Hand,Valve.VR.ISteamVR_Action_In_Source)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControllerButtonHints_GetActiveHintText_m2FFB0F2FE1E54F1E23E16B3AB2E6DF1511F23643 (Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * ___hand0, RuntimeObject* ___action1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void Valve.VR.InteractionSystem.ControllerButtonHints::ShowTextHint(Valve.VR.InteractionSystem.Hand,Valve.VR.ISteamVR_Action_In_Source,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerButtonHints_ShowTextHint_m954568AB2BDF4BB93FF747EDCAE23ED1201DB498 (Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * ___hand0, RuntimeObject* ___action1, String_t* ___text2, bool ___highlightButton3, const RuntimeMethod* method);
// System.Void Valve.VR.InteractionSystem.Hand::TriggerHapticPulse(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_TriggerHapticPulse_m10929B8D98B8D481945B6783E800BBB289AD97EE (Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * __this, uint16_t ___microSecondsDuration0, const RuntimeMethod* method);
// System.Void Valve.VR.InteractionSystem.ControllerButtonHints::HideTextHint(Valve.VR.InteractionSystem.Hand,Valve.VR.ISteamVR_Action_In_Source)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerButtonHints_HideTextHint_m6F0C47CA6B8A5FA154C1170C7157900A82E805A3 (Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * ___hand0, RuntimeObject* ___action1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Valve.VR.InteractionSystem.Hand::DetachObject(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hand_DetachObject_mC9FB9C9CE20E64B62277CA740F13CCE3A381C598 (Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___objectToDetach0, bool ___restoreOriginalParent1, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void Valve.VR.InteractionSystem.Sample.WheelDust::DoEmit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelDust_DoEmit_m83BBCAE5FD5ADA0292CFE551F87708FB2397DA5A (WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
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
// System.Void Valve.VR.SteamVR_TrackingReferenceManager/TrackingReferenceObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingReferenceObject__ctor_mC67A20509EA0CC8F452927889DA7843903D15EB7 (TrackingReferenceObject_tBAB354E365AF6C817E6AC71ACDDFC7FA5D35EA92 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void SteamVR_Utils/Event::Listen(System.String,SteamVR_Utils/Event/Handler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Listen_m7F4E00BABCA2B65DF61A7E3CEE54FAAF9991FE73 (String_t* ___message0, Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * V_0 = NULL;
	{
		// var actions = listeners[message] as Handler;
		IL2CPP_RUNTIME_CLASS_INIT(Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = ((Event_t055B707375B5497703E80036CCD4BB5D39D45891_StaticFields*)il2cpp_codegen_static_fields_for(Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var))->get_listeners_0();
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = ((Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 *)IsInstSealed((RuntimeObject*)L_2, Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1_il2cpp_TypeInfo_var));
		// if (actions != null)
		Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// listeners[message] = actions + action;
		IL2CPP_RUNTIME_CLASS_INIT(Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_4 = ((Event_t055B707375B5497703E80036CCD4BB5D39D45891_StaticFields*)il2cpp_codegen_static_fields_for(Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var))->get_listeners_0();
		String_t* L_5 = ___message0;
		Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * L_6 = V_0;
		Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * L_7 = ___action1;
		Delegate_t * L_8;
		L_8 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_4, L_5, ((Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 *)CastclassSealed((RuntimeObject*)L_8, Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1_il2cpp_TypeInfo_var)));
		// }
		return;
	}

IL_002c:
	{
		// listeners[message] = action;
		IL2CPP_RUNTIME_CLASS_INIT(Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_9 = ((Event_t055B707375B5497703E80036CCD4BB5D39D45891_StaticFields*)il2cpp_codegen_static_fields_for(Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var))->get_listeners_0();
		String_t* L_10 = ___message0;
		Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * L_11 = ___action1;
		NullCheck(L_9);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_9, L_10, L_11);
		// }
		return;
	}
}
// System.Void SteamVR_Utils/Event::Remove(System.String,SteamVR_Utils/Event/Handler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Remove_mCE40C696749E19FCED0F833A12BF56E65329F3BE (String_t* ___message0, Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * V_0 = NULL;
	{
		// var actions = listeners[message] as Handler;
		IL2CPP_RUNTIME_CLASS_INIT(Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = ((Event_t055B707375B5497703E80036CCD4BB5D39D45891_StaticFields*)il2cpp_codegen_static_fields_for(Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var))->get_listeners_0();
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = ((Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 *)IsInstSealed((RuntimeObject*)L_2, Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1_il2cpp_TypeInfo_var));
		// if (actions != null)
		Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// listeners[message] = actions - action;
		IL2CPP_RUNTIME_CLASS_INIT(Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_4 = ((Event_t055B707375B5497703E80036CCD4BB5D39D45891_StaticFields*)il2cpp_codegen_static_fields_for(Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var))->get_listeners_0();
		String_t* L_5 = ___message0;
		Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * L_6 = V_0;
		Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * L_7 = ___action1;
		Delegate_t * L_8;
		L_8 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(24 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_4, L_5, ((Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 *)CastclassSealed((RuntimeObject*)L_8, Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1_il2cpp_TypeInfo_var)));
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void SteamVR_Utils/Event::Send(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Send_m929E855B617E3092B83441CA48B33631009B24B6 (String_t* ___message0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * V_0 = NULL;
	{
		// var actions = listeners[message] as Handler;
		IL2CPP_RUNTIME_CLASS_INIT(Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var);
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = ((Event_t055B707375B5497703E80036CCD4BB5D39D45891_StaticFields*)il2cpp_codegen_static_fields_for(Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var))->get_listeners_0();
		String_t* L_1 = ___message0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(23 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		V_0 = ((Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 *)IsInstSealed((RuntimeObject*)L_2, Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1_il2cpp_TypeInfo_var));
		// if (actions != null)
		Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// actions(args);
		Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * L_4 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = ___args1;
		NullCheck(L_4);
		Handler_Invoke_m476DF247EF56B5F6FC58E098C2864FD266C0D592(L_4, L_5, /*hidden argument*/NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void SteamVR_Utils/Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m438509CE7ED2C431D6E712142A1EC2B2A2E8F934 (Event_t055B707375B5497703E80036CCD4BB5D39D45891 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SteamVR_Utils/Event::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__cctor_m4B13F76D4508BE191AC7498B79A1F21067C00C41 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Hashtable listeners = new Hashtable();
		Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * L_0 = (Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC *)il2cpp_codegen_object_new(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC_il2cpp_TypeInfo_var);
		Hashtable__ctor_m2D9C25FB57ACD33B0DF8391D38A165975A1D9A91(L_0, /*hidden argument*/NULL);
		((Event_t055B707375B5497703E80036CCD4BB5D39D45891_StaticFields*)il2cpp_codegen_static_fields_for(Event_t055B707375B5497703E80036CCD4BB5D39D45891_il2cpp_TypeInfo_var))->set_listeners_0(L_0);
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
// SteamVR_Utils/RigidTransform SteamVR_Utils/RigidTransform::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  RigidTransform_get_identity_m1BFB145B45B7F937861E82F5165930C15A462876 (const RuntimeMethod* method)
{
	{
		// get { return new RigidTransform(Vector3.zero, Quaternion.identity); }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_2;
		memset((&L_2), 0, sizeof(L_2));
		RigidTransform__ctor_m9308BC147E127BDFBFC452CCB3A632C33D2B9606((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// SteamVR_Utils/RigidTransform SteamVR_Utils/RigidTransform::FromLocal(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  RigidTransform_FromLocal_m2E4FEFE9C3FD157AAD0A6E08D276B0D454A0D479 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		// return new RigidTransform(t.localPosition, t.localRotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___t0;
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_2, /*hidden argument*/NULL);
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_4;
		memset((&L_4), 0, sizeof(L_4));
		RigidTransform__ctor_m9308BC147E127BDFBFC452CCB3A632C33D2B9606((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void SteamVR_Utils/RigidTransform::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform__ctor_m9308BC147E127BDFBFC452CCB3A632C33D2B9606 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot1, const RuntimeMethod* method)
{
	{
		// this.pos = pos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___pos0;
		__this->set_pos_0(L_0);
		// this.rot = rot;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = ___rot1;
		__this->set_rot_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RigidTransform__ctor_m9308BC147E127BDFBFC452CCB3A632C33D2B9606_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rot1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	RigidTransform__ctor_m9308BC147E127BDFBFC452CCB3A632C33D2B9606(_thisAdjusted, ___pos0, ___rot1, method);
}
// System.Void SteamVR_Utils/RigidTransform::.ctor(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform__ctor_mF4B9332992C7AE4CC587FA2A515D8E293AB7528A (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		// this.pos = t.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_pos_0(L_1);
		// this.rot = t.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___t0;
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_2, /*hidden argument*/NULL);
		__this->set_rot_1(L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RigidTransform__ctor_mF4B9332992C7AE4CC587FA2A515D8E293AB7528A_AdjustorThunk (RuntimeObject * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	RigidTransform__ctor_mF4B9332992C7AE4CC587FA2A515D8E293AB7528A(_thisAdjusted, ___t0, method);
}
// System.Void SteamVR_Utils/RigidTransform::.ctor(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform__ctor_m82882F5EE69E007130AFD44E064623EBD296770B (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___from0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___to1, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var inv = Quaternion.Inverse(from.rotation);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___from0;
		NullCheck(L_0);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_0, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// rot = inv * to.rotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___to1;
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_4, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_3, L_5, /*hidden argument*/NULL);
		__this->set_rot_1(L_6);
		// pos = inv * (to.position - from.position);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ___to1;
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = ___from0;
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_9, L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_7, L_12, /*hidden argument*/NULL);
		__this->set_pos_0(L_13);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RigidTransform__ctor_m82882F5EE69E007130AFD44E064623EBD296770B_AdjustorThunk (RuntimeObject * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___from0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___to1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	RigidTransform__ctor_m82882F5EE69E007130AFD44E064623EBD296770B(_thisAdjusted, ___from0, ___to1, method);
}
// System.Void SteamVR_Utils/RigidTransform::.ctor(Valve.VR.HmdMatrix34_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform__ctor_mC1C6C44AC15D8D6829F431D71D290A6EC8300AB2 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  ___pose0, const RuntimeMethod* method)
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var m = Matrix4x4.identity;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0;
		L_0 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		V_0 = L_0;
		// m[0, 0] = pose.m0;
		HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  L_1 = ___pose0;
		float L_2 = L_1.get_m0_0();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 0, L_2, /*hidden argument*/NULL);
		// m[0, 1] = pose.m1;
		HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  L_3 = ___pose0;
		float L_4 = L_3.get_m1_1();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 1, L_4, /*hidden argument*/NULL);
		// m[0, 2] = -pose.m2;
		HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  L_5 = ___pose0;
		float L_6 = L_5.get_m2_2();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 2, ((-L_6)), /*hidden argument*/NULL);
		// m[0, 3] = pose.m3;
		HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  L_7 = ___pose0;
		float L_8 = L_7.get_m3_3();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 3, L_8, /*hidden argument*/NULL);
		// m[1, 0] = pose.m4;
		HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  L_9 = ___pose0;
		float L_10 = L_9.get_m4_4();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 0, L_10, /*hidden argument*/NULL);
		// m[1, 1] = pose.m5;
		HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  L_11 = ___pose0;
		float L_12 = L_11.get_m5_5();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 1, L_12, /*hidden argument*/NULL);
		// m[1, 2] = -pose.m6;
		HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  L_13 = ___pose0;
		float L_14 = L_13.get_m6_6();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 2, ((-L_14)), /*hidden argument*/NULL);
		// m[1, 3] = pose.m7;
		HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  L_15 = ___pose0;
		float L_16 = L_15.get_m7_7();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 3, L_16, /*hidden argument*/NULL);
		// m[2, 0] = -pose.m8;
		HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  L_17 = ___pose0;
		float L_18 = L_17.get_m8_8();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 0, ((-L_18)), /*hidden argument*/NULL);
		// m[2, 1] = -pose.m9;
		HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  L_19 = ___pose0;
		float L_20 = L_19.get_m9_9();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 1, ((-L_20)), /*hidden argument*/NULL);
		// m[2, 2] = pose.m10;
		HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  L_21 = ___pose0;
		float L_22 = L_21.get_m10_10();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 2, L_22, /*hidden argument*/NULL);
		// m[2, 3] = -pose.m11;
		HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  L_23 = ___pose0;
		float L_24 = L_23.get_m11_11();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 3, ((-L_24)), /*hidden argument*/NULL);
		// this.pos = m.GetPosition();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_25 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = SteamVR_Utils_GetPosition_m1BD6EA43D57C901C212C73676400F1F3BC5005A3(L_25, /*hidden argument*/NULL);
		__this->set_pos_0(L_26);
		// this.rot = m.GetRotation();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_27 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_28;
		L_28 = SteamVR_Utils_GetRotation_mBAE351201C0B906637B1E459385C94FB05920535(L_27, /*hidden argument*/NULL);
		__this->set_rot_1(L_28);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RigidTransform__ctor_mC1C6C44AC15D8D6829F431D71D290A6EC8300AB2_AdjustorThunk (RuntimeObject * __this, HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  ___pose0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	RigidTransform__ctor_mC1C6C44AC15D8D6829F431D71D290A6EC8300AB2(_thisAdjusted, ___pose0, method);
}
// System.Void SteamVR_Utils/RigidTransform::.ctor(Valve.VR.HmdMatrix44_t)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform__ctor_mB643C5633F8A198866C441B8010FA791D9608C7F (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  ___pose0, const RuntimeMethod* method)
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var m = Matrix4x4.identity;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0;
		L_0 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		V_0 = L_0;
		// m[0, 0] = pose.m0;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_1 = ___pose0;
		float L_2 = L_1.get_m0_0();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 0, L_2, /*hidden argument*/NULL);
		// m[0, 1] = pose.m1;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_3 = ___pose0;
		float L_4 = L_3.get_m1_1();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 1, L_4, /*hidden argument*/NULL);
		// m[0, 2] = -pose.m2;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_5 = ___pose0;
		float L_6 = L_5.get_m2_2();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 2, ((-L_6)), /*hidden argument*/NULL);
		// m[0, 3] = pose.m3;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_7 = ___pose0;
		float L_8 = L_7.get_m3_3();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 3, L_8, /*hidden argument*/NULL);
		// m[1, 0] = pose.m4;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_9 = ___pose0;
		float L_10 = L_9.get_m4_4();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 0, L_10, /*hidden argument*/NULL);
		// m[1, 1] = pose.m5;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_11 = ___pose0;
		float L_12 = L_11.get_m5_5();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 1, L_12, /*hidden argument*/NULL);
		// m[1, 2] = -pose.m6;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_13 = ___pose0;
		float L_14 = L_13.get_m6_6();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 2, ((-L_14)), /*hidden argument*/NULL);
		// m[1, 3] = pose.m7;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_15 = ___pose0;
		float L_16 = L_15.get_m7_7();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 3, L_16, /*hidden argument*/NULL);
		// m[2, 0] = -pose.m8;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_17 = ___pose0;
		float L_18 = L_17.get_m8_8();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 0, ((-L_18)), /*hidden argument*/NULL);
		// m[2, 1] = -pose.m9;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_19 = ___pose0;
		float L_20 = L_19.get_m9_9();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 1, ((-L_20)), /*hidden argument*/NULL);
		// m[2, 2] = pose.m10;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_21 = ___pose0;
		float L_22 = L_21.get_m10_10();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 2, L_22, /*hidden argument*/NULL);
		// m[2, 3] = -pose.m11;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_23 = ___pose0;
		float L_24 = L_23.get_m11_11();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 3, ((-L_24)), /*hidden argument*/NULL);
		// m[3, 0] = pose.m12;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_25 = ___pose0;
		float L_26 = L_25.get_m12_12();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 3, 0, L_26, /*hidden argument*/NULL);
		// m[3, 1] = pose.m13;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_27 = ___pose0;
		float L_28 = L_27.get_m13_13();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 3, 1, L_28, /*hidden argument*/NULL);
		// m[3, 2] = -pose.m14;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_29 = ___pose0;
		float L_30 = L_29.get_m14_14();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 3, 2, ((-L_30)), /*hidden argument*/NULL);
		// m[3, 3] = pose.m15;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_31 = ___pose0;
		float L_32 = L_31.get_m15_15();
		Matrix4x4_set_Item_mE286A89718710DDF166DF6ACF8A480D15FE06B2F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 3, 3, L_32, /*hidden argument*/NULL);
		// this.pos = m.GetPosition();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_33 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = SteamVR_Utils_GetPosition_m1BD6EA43D57C901C212C73676400F1F3BC5005A3(L_33, /*hidden argument*/NULL);
		__this->set_pos_0(L_34);
		// this.rot = m.GetRotation();
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_35 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_36;
		L_36 = SteamVR_Utils_GetRotation_mBAE351201C0B906637B1E459385C94FB05920535(L_35, /*hidden argument*/NULL);
		__this->set_rot_1(L_36);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RigidTransform__ctor_mB643C5633F8A198866C441B8010FA791D9608C7F_AdjustorThunk (RuntimeObject * __this, HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  ___pose0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	RigidTransform__ctor_mB643C5633F8A198866C441B8010FA791D9608C7F(_thisAdjusted, ___pose0, method);
}
// Valve.VR.HmdMatrix44_t SteamVR_Utils/RigidTransform::ToHmdMatrix44()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  RigidTransform_ToHmdMatrix44_mEE0F869B7CC79FC97BA19B62296516C8E11962ED (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, const RuntimeMethod* method)
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var m = Matrix4x4.TRS(pos, rot, Vector3.one);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_pos_0();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = __this->get_rot_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_3;
		L_3 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// var pose = new HmdMatrix44_t();
		il2cpp_codegen_initobj((&V_1), sizeof(HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9 ));
		// pose.m0 = m[0, 0];
		float L_4;
		L_4 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 0, /*hidden argument*/NULL);
		(&V_1)->set_m0_0(L_4);
		// pose.m1 = m[0, 1];
		float L_5;
		L_5 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 1, /*hidden argument*/NULL);
		(&V_1)->set_m1_1(L_5);
		// pose.m2 = -m[0, 2];
		float L_6;
		L_6 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 2, /*hidden argument*/NULL);
		(&V_1)->set_m2_2(((-L_6)));
		// pose.m3 = m[0, 3];
		float L_7;
		L_7 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 3, /*hidden argument*/NULL);
		(&V_1)->set_m3_3(L_7);
		// pose.m4 = m[1, 0];
		float L_8;
		L_8 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 0, /*hidden argument*/NULL);
		(&V_1)->set_m4_4(L_8);
		// pose.m5 = m[1, 1];
		float L_9;
		L_9 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 1, /*hidden argument*/NULL);
		(&V_1)->set_m5_5(L_9);
		// pose.m6 = -m[1, 2];
		float L_10;
		L_10 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 2, /*hidden argument*/NULL);
		(&V_1)->set_m6_6(((-L_10)));
		// pose.m7 = m[1, 3];
		float L_11;
		L_11 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 3, /*hidden argument*/NULL);
		(&V_1)->set_m7_7(L_11);
		// pose.m8 = -m[2, 0];
		float L_12;
		L_12 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 0, /*hidden argument*/NULL);
		(&V_1)->set_m8_8(((-L_12)));
		// pose.m9 = -m[2, 1];
		float L_13;
		L_13 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 1, /*hidden argument*/NULL);
		(&V_1)->set_m9_9(((-L_13)));
		// pose.m10 = m[2, 2];
		float L_14;
		L_14 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 2, /*hidden argument*/NULL);
		(&V_1)->set_m10_10(L_14);
		// pose.m11 = -m[2, 3];
		float L_15;
		L_15 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 3, /*hidden argument*/NULL);
		(&V_1)->set_m11_11(((-L_15)));
		// pose.m12 = m[3, 0];
		float L_16;
		L_16 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 3, 0, /*hidden argument*/NULL);
		(&V_1)->set_m12_12(L_16);
		// pose.m13 = m[3, 1];
		float L_17;
		L_17 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 3, 1, /*hidden argument*/NULL);
		(&V_1)->set_m13_13(L_17);
		// pose.m14 = -m[3, 2];
		float L_18;
		L_18 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 3, 2, /*hidden argument*/NULL);
		(&V_1)->set_m14_14(((-L_18)));
		// pose.m15 = m[3, 3];
		float L_19;
		L_19 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 3, 3, /*hidden argument*/NULL);
		(&V_1)->set_m15_15(L_19);
		// return pose;
		HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  L_20 = V_1;
		return L_20;
	}
}
IL2CPP_EXTERN_C  HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  RigidTransform_ToHmdMatrix44_mEE0F869B7CC79FC97BA19B62296516C8E11962ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	HmdMatrix44_t_t6BCA3BF523ECCB388F218CE1E0CED891DC328FF9  _returnValue;
	_returnValue = RigidTransform_ToHmdMatrix44_mEE0F869B7CC79FC97BA19B62296516C8E11962ED(_thisAdjusted, method);
	return _returnValue;
}
// Valve.VR.HmdMatrix34_t SteamVR_Utils/RigidTransform::ToHmdMatrix34()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  RigidTransform_ToHmdMatrix34_m7FFBDE5BC046C7A095D83DBC642155A03015E483 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, const RuntimeMethod* method)
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var m = Matrix4x4.TRS(pos, rot, Vector3.one);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_pos_0();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = __this->get_rot_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_3;
		L_3 = Matrix4x4_TRS_m0CBC696D0BDF58DCEC40B99BC32C716FAD024CE5(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// var pose = new HmdMatrix34_t();
		il2cpp_codegen_initobj((&V_1), sizeof(HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC ));
		// pose.m0 = m[0, 0];
		float L_4;
		L_4 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 0, /*hidden argument*/NULL);
		(&V_1)->set_m0_0(L_4);
		// pose.m1 = m[0, 1];
		float L_5;
		L_5 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 1, /*hidden argument*/NULL);
		(&V_1)->set_m1_1(L_5);
		// pose.m2 = -m[0, 2];
		float L_6;
		L_6 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 2, /*hidden argument*/NULL);
		(&V_1)->set_m2_2(((-L_6)));
		// pose.m3 = m[0, 3];
		float L_7;
		L_7 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 0, 3, /*hidden argument*/NULL);
		(&V_1)->set_m3_3(L_7);
		// pose.m4 = m[1, 0];
		float L_8;
		L_8 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 0, /*hidden argument*/NULL);
		(&V_1)->set_m4_4(L_8);
		// pose.m5 = m[1, 1];
		float L_9;
		L_9 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 1, /*hidden argument*/NULL);
		(&V_1)->set_m5_5(L_9);
		// pose.m6 = -m[1, 2];
		float L_10;
		L_10 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 2, /*hidden argument*/NULL);
		(&V_1)->set_m6_6(((-L_10)));
		// pose.m7 = m[1, 3];
		float L_11;
		L_11 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 1, 3, /*hidden argument*/NULL);
		(&V_1)->set_m7_7(L_11);
		// pose.m8 = -m[2, 0];
		float L_12;
		L_12 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 0, /*hidden argument*/NULL);
		(&V_1)->set_m8_8(((-L_12)));
		// pose.m9 = -m[2, 1];
		float L_13;
		L_13 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 1, /*hidden argument*/NULL);
		(&V_1)->set_m9_9(((-L_13)));
		// pose.m10 = m[2, 2];
		float L_14;
		L_14 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 2, /*hidden argument*/NULL);
		(&V_1)->set_m10_10(L_14);
		// pose.m11 = -m[2, 3];
		float L_15;
		L_15 = Matrix4x4_get_Item_mCE077E076AEE65232C5602DBBB5CC0D236184D0F((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_0), 2, 3, /*hidden argument*/NULL);
		(&V_1)->set_m11_11(((-L_15)));
		// return pose;
		HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C  HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  RigidTransform_ToHmdMatrix34_m7FFBDE5BC046C7A095D83DBC642155A03015E483_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	HmdMatrix34_t_t4E23FAE6F38C81C936E84403DF748DFF68795CCC  _returnValue;
	_returnValue = RigidTransform_ToHmdMatrix34_m7FFBDE5BC046C7A095D83DBC642155A03015E483(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean SteamVR_Utils/RigidTransform::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidTransform_Equals_mBB93CE44A32F4A186A26FC905AB1F4511A793BA9 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (o is RigidTransform)
		RuntimeObject * L_0 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		// RigidTransform t = (RigidTransform)o;
		RuntimeObject * L_1 = ___o0;
		V_0 = ((*(RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *)((RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *)UnBox(L_1, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983_il2cpp_TypeInfo_var))));
		// return pos == t.pos && rot == t.rot;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_pos_0();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_3 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3.get_pos_0();
		bool L_5;
		L_5 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = __this->get_rot_1();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_7 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = L_7.get_rot_1();
		bool L_9;
		L_9 = Quaternion_op_Equality_m7EC909C253064DBECF7DB83BCF7C2E42163685BE(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0034:
	{
		return (bool)0;
	}

IL_0036:
	{
		// return false;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool RigidTransform_Equals_mBB93CE44A32F4A186A26FC905AB1F4511A793BA9_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	bool _returnValue;
	_returnValue = RigidTransform_Equals_mBB93CE44A32F4A186A26FC905AB1F4511A793BA9(_thisAdjusted, ___o0, method);
	return _returnValue;
}
// System.Int32 SteamVR_Utils/RigidTransform::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RigidTransform_GetHashCode_mB1EFF12202FBE7F499A0B93342FDF0636CA20FB0 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, const RuntimeMethod* method)
{
	{
		// return pos.GetHashCode() ^ rot.GetHashCode();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_pos_0();
		int32_t L_1;
		L_1 = Vector3_GetHashCode_m9F18401DA6025110A012F55BBB5ACABD36FA9A0A((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_0, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_2 = __this->get_address_of_rot_1();
		int32_t L_3;
		L_3 = Quaternion_GetHashCode_mFCEA4CA542544DC9BD222C66F524C2F3CFE60744((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)L_2, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t RigidTransform_GetHashCode_mB1EFF12202FBE7F499A0B93342FDF0636CA20FB0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RigidTransform_GetHashCode_mB1EFF12202FBE7F499A0B93342FDF0636CA20FB0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean SteamVR_Utils/RigidTransform::op_Equality(SteamVR_Utils/RigidTransform,SteamVR_Utils/RigidTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidTransform_op_Equality_mDEEFBB17DC1070F2DECAD66CBEB8BD7B31E88DA5 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___a0, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___b1, const RuntimeMethod* method)
{
	{
		// return a.pos == b.pos && a.rot == b.rot;
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_pos_0();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2.get_pos_0();
		bool L_4;
		L_4 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_5 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = L_5.get_rot_1();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_7 = ___b1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = L_7.get_rot_1();
		bool L_9;
		L_9 = Quaternion_op_Equality_m7EC909C253064DBECF7DB83BCF7C2E42163685BE(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Boolean SteamVR_Utils/RigidTransform::op_Inequality(SteamVR_Utils/RigidTransform,SteamVR_Utils/RigidTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RigidTransform_op_Inequality_m66E78322D0D346B1A71CF2D54D7BD85C3B87C1A7 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___a0, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___b1, const RuntimeMethod* method)
{
	{
		// return a.pos != b.pos || a.rot != b.rot;
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_pos_0();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2.get_pos_0();
		bool L_4;
		L_4 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_1, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_5 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = L_5.get_rot_1();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_7 = ___b1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = L_7.get_rot_1();
		bool L_9;
		L_9 = Quaternion_op_Inequality_m37169F3E8ADDA24A5A221AD7397835B437B71439(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0025:
	{
		return (bool)1;
	}
}
// SteamVR_Utils/RigidTransform SteamVR_Utils/RigidTransform::op_Multiply(SteamVR_Utils/RigidTransform,SteamVR_Utils/RigidTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  RigidTransform_op_Multiply_m6E64079714803423FBEB31DBC4CEE9CEF610FA7B (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___a0, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___b1, const RuntimeMethod* method)
{
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new RigidTransform
		// {
		//     rot = a.rot * b.rot,
		//     pos = a.pos + a.rot * b.pos
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 ));
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_0 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = L_0.get_rot_1();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_2 = ___b1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = L_2.get_rot_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_1, L_3, /*hidden argument*/NULL);
		(&V_0)->set_rot_1(L_4);
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_5 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = L_5.get_pos_0();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_7 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = L_7.get_rot_1();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_9 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = L_9.get_pos_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_8, L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_11, /*hidden argument*/NULL);
		(&V_0)->set_pos_0(L_12);
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_13 = V_0;
		return L_13;
	}
}
// System.Void SteamVR_Utils/RigidTransform::Inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform_Inverse_m323ED3E444BF2AD9657A1CDFC93B6CB6CE40417E (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, const RuntimeMethod* method)
{
	{
		// rot = Quaternion.Inverse(rot);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_rot_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_0, /*hidden argument*/NULL);
		__this->set_rot_1(L_1);
		// pos = -(rot * pos);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = __this->get_rot_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_pos_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_2, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_4, /*hidden argument*/NULL);
		__this->set_pos_0(L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RigidTransform_Inverse_m323ED3E444BF2AD9657A1CDFC93B6CB6CE40417E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	RigidTransform_Inverse_m323ED3E444BF2AD9657A1CDFC93B6CB6CE40417E(_thisAdjusted, method);
}
// SteamVR_Utils/RigidTransform SteamVR_Utils/RigidTransform::GetInverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  RigidTransform_GetInverse_mF40A096023BDE168447D0EA3584F0454AD318E27 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, const RuntimeMethod* method)
{
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var t = new RigidTransform(pos, rot);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_pos_0();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = __this->get_rot_1();
		RigidTransform__ctor_m9308BC147E127BDFBFC452CCB3A632C33D2B9606((RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *)(&V_0), L_0, L_1, /*hidden argument*/NULL);
		// t.Inverse();
		RigidTransform_Inverse_m323ED3E444BF2AD9657A1CDFC93B6CB6CE40417E((RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *)(&V_0), /*hidden argument*/NULL);
		// return t;
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  RigidTransform_GetInverse_mF40A096023BDE168447D0EA3584F0454AD318E27_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  _returnValue;
	_returnValue = RigidTransform_GetInverse_mF40A096023BDE168447D0EA3584F0454AD318E27(_thisAdjusted, method);
	return _returnValue;
}
// System.Void SteamVR_Utils/RigidTransform::Multiply(SteamVR_Utils/RigidTransform,SteamVR_Utils/RigidTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform_Multiply_m2D623FFF1351DAABE54C67E9C5081BEB7EE36381 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___a0, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___b1, const RuntimeMethod* method)
{
	{
		// rot = a.rot * b.rot;
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_0 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = L_0.get_rot_1();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_2 = ___b1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = L_2.get_rot_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_1, L_3, /*hidden argument*/NULL);
		__this->set_rot_1(L_4);
		// pos = a.pos + a.rot * b.pos;
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_5 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = L_5.get_pos_0();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_7 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = L_7.get_rot_1();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_9 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = L_9.get_pos_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_8, L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_11, /*hidden argument*/NULL);
		__this->set_pos_0(L_12);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RigidTransform_Multiply_m2D623FFF1351DAABE54C67E9C5081BEB7EE36381_AdjustorThunk (RuntimeObject * __this, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___a0, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___b1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	RigidTransform_Multiply_m2D623FFF1351DAABE54C67E9C5081BEB7EE36381(_thisAdjusted, ___a0, ___b1, method);
}
// UnityEngine.Vector3 SteamVR_Utils/RigidTransform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RigidTransform_InverseTransformPoint_mCEAC1E681DE0285F1A396F8FE60B820C2619A5EF (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method)
{
	{
		// return Quaternion.Inverse(rot) * (point - pos);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_rot_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___point0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_pos_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_1, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RigidTransform_InverseTransformPoint_mCEAC1E681DE0285F1A396F8FE60B820C2619A5EF_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = RigidTransform_InverseTransformPoint_mCEAC1E681DE0285F1A396F8FE60B820C2619A5EF(_thisAdjusted, ___point0, method);
	return _returnValue;
}
// UnityEngine.Vector3 SteamVR_Utils/RigidTransform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RigidTransform_TransformPoint_mA4B25EC37AF96BCD44D46D5967DCF77FB6534658 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method)
{
	{
		// return pos + (rot * point);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_pos_0();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1 = __this->get_rot_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___point0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RigidTransform_TransformPoint_mA4B25EC37AF96BCD44D46D5967DCF77FB6534658_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  _returnValue;
	_returnValue = RigidTransform_TransformPoint_mA4B25EC37AF96BCD44D46D5967DCF77FB6534658(_thisAdjusted, ___point0, method);
	return _returnValue;
}
// UnityEngine.Vector3 SteamVR_Utils/RigidTransform::op_Multiply(SteamVR_Utils/RigidTransform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RigidTransform_op_Multiply_m349E8816032B9F48B7BC29C3C90C16FE2D0397CE (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___t0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v1, const RuntimeMethod* method)
{
	{
		// return t.TransformPoint(v);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = RigidTransform_TransformPoint_mA4B25EC37AF96BCD44D46D5967DCF77FB6534658((RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *)(&___t0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SteamVR_Utils/RigidTransform SteamVR_Utils/RigidTransform::Interpolate(SteamVR_Utils/RigidTransform,SteamVR_Utils/RigidTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  RigidTransform_Interpolate_m3A6A1AFEA3B718F2D4F09BBBEABE398B1285E885 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___a0, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___b1, float ___t2, const RuntimeMethod* method)
{
	{
		// return new RigidTransform(Vector3.Lerp(a.pos, b.pos, t), Quaternion.Slerp(a.rot, b.rot, t));
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_0 = ___a0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0.get_pos_0();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_2 = ___b1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = L_2.get_pos_0();
		float L_4 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_1, L_3, L_4, /*hidden argument*/NULL);
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_6 = ___a0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = L_6.get_rot_1();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_8 = ___b1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = L_8.get_rot_1();
		float L_10 = ___t2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_7, L_9, L_10, /*hidden argument*/NULL);
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_12;
		memset((&L_12), 0, sizeof(L_12));
		RigidTransform__ctor_m9308BC147E127BDFBFC452CCB3A632C33D2B9606((&L_12), L_5, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void SteamVR_Utils/RigidTransform::Interpolate(SteamVR_Utils/RigidTransform,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RigidTransform_Interpolate_m587C2DC625A7FFCDD7D0C3A440D250BD74288956 (RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * __this, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___to0, float ___t1, const RuntimeMethod* method)
{
	{
		// pos = SteamVR_Utils.Lerp(pos, to.pos, t);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_pos_0();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_1 = ___to0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = L_1.get_pos_0();
		float L_3 = ___t1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = SteamVR_Utils_Lerp_m35E23ED733CB11C3B007B3E423FBF0F2C3005BF9(L_0, L_2, L_3, /*hidden argument*/NULL);
		__this->set_pos_0(L_4);
		// rot = SteamVR_Utils.Slerp(rot, to.rot, t);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = __this->get_rot_1();
		RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  L_6 = ___to0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = L_6.get_rot_1();
		float L_8 = ___t1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = SteamVR_Utils_Slerp_mCBD31AB5EAD2BEA44E4348CCEE8981FD9F7D3326(L_5, L_7, L_8, /*hidden argument*/NULL);
		__this->set_rot_1(L_9);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RigidTransform_Interpolate_m587C2DC625A7FFCDD7D0C3A440D250BD74288956_AdjustorThunk (RuntimeObject * __this, RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983  ___to0, float ___t1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 * _thisAdjusted = reinterpret_cast<RigidTransform_t7323FD19D1275FE2F2D062702C6A4622343D7983 *>(__this + _offset);
	RigidTransform_Interpolate_m587C2DC625A7FFCDD7D0C3A440D250BD74288956(_thisAdjusted, ___to0, ___t1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SteamVR_Utils/SystemFn::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemFn__ctor_m3F934684B4822D5D11F67F1282B43171785E996D (SystemFn_t57D3B1A97C15A7D53265FF0E45BC6922556A7F7F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object SteamVR_Utils/SystemFn::Invoke(Valve.VR.CVRSystem,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SystemFn_Invoke_m50DD7DE2BA5DB4556616056E2E32D23C49304FB9 (SystemFn_t57D3B1A97C15A7D53265FF0E45BC6922556A7F7F * __this, CVRSystem_t8A2DEB5BF4ACF7AC5D0889EA701AC64DBC8E767B * ___system0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef RuntimeObject * (*FunctionPointerType) (CVRSystem_t8A2DEB5BF4ACF7AC5D0889EA701AC64DBC8E767B *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___system0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, CVRSystem_t8A2DEB5BF4ACF7AC5D0889EA701AC64DBC8E767B *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___system0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(targetMethod, ___system0, ___args1);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(targetMethod, ___system0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___system0, ___args1);
					else
						result = VirtFuncInvoker1< RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___system0, ___args1);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (CVRSystem_t8A2DEB5BF4ACF7AC5D0889EA701AC64DBC8E767B *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___system0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< RuntimeObject *, CVRSystem_t8A2DEB5BF4ACF7AC5D0889EA701AC64DBC8E767B *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(targetMethod, targetThis, ___system0, ___args1);
					else
						result = GenericVirtFuncInvoker2< RuntimeObject *, CVRSystem_t8A2DEB5BF4ACF7AC5D0889EA701AC64DBC8E767B *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(targetMethod, targetThis, ___system0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< RuntimeObject *, CVRSystem_t8A2DEB5BF4ACF7AC5D0889EA701AC64DBC8E767B *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___system0, ___args1);
					else
						result = VirtFuncInvoker2< RuntimeObject *, CVRSystem_t8A2DEB5BF4ACF7AC5D0889EA701AC64DBC8E767B *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___system0, ___args1);
				}
			}
			else
			{
				if (___parameterCount == 1)
				{
					typedef RuntimeObject * (*FunctionPointerType) (CVRSystem_t8A2DEB5BF4ACF7AC5D0889EA701AC64DBC8E767B *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___system0, ___args1, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, CVRSystem_t8A2DEB5BF4ACF7AC5D0889EA701AC64DBC8E767B *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___system0, ___args1, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult SteamVR_Utils/SystemFn::BeginInvoke(Valve.VR.CVRSystem,System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SystemFn_BeginInvoke_m88D337DFC3B0E81C04EE65779F3C4CB6954F85D9 (SystemFn_t57D3B1A97C15A7D53265FF0E45BC6922556A7F7F * __this, CVRSystem_t8A2DEB5BF4ACF7AC5D0889EA701AC64DBC8E767B * ___system0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___system0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Object SteamVR_Utils/SystemFn::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SystemFn_EndInvoke_m7B2C88BF5675BAFDDAB773096F97217930D1D762 (SystemFn_t57D3B1A97C15A7D53265FF0E45BC6922556A7F7F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__106::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTeleportHintCoroutineU3Ed__106__ctor_mBF65F43028AC6576BA6BDEBD6339DC8CFA441917 (U3CTeleportHintCoroutineU3Ed__106_t318FFF97CD5C8ED0887D17348D6499E8F524FFB6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__106::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTeleportHintCoroutineU3Ed__106_System_IDisposable_Dispose_mEC056F67B573530944962D2BA909F2C4C8F92C73 (U3CTeleportHintCoroutineU3Ed__106_t318FFF97CD5C8ED0887D17348D6499E8F524FFB6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__106::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTeleportHintCoroutineU3Ed__106_MoveNext_mF229A6818318E22A445EBBFAFBD5D9C68051E9AC (U3CTeleportHintCoroutineU3Ed__106_t318FFF97CD5C8ED0887D17348D6499E8F524FFB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F15E73C308C9440A4A66E65A54F37A6862F5072);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 * V_1 = NULL;
	HandU5BU5D_tC092C7BDF34DDFC6FF249FAFB0DE5E20331C5B5A* V_2 = NULL;
	int32_t V_3 = 0;
	Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0128;
			}
			case 2:
			{
				goto IL_015d;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float prevBreakTime = Time.time;
		float L_3;
		L_3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CprevBreakTimeU3E5__2_3(L_3);
		// float prevHapticPulseTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CprevHapticPulseTimeU3E5__3_4(L_4);
	}

IL_003f:
	{
		// bool pulsed = false;
		__this->set_U3CpulsedU3E5__4_5((bool)0);
		// foreach ( Hand hand in player.hands )
		Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 * L_5 = V_1;
		NullCheck(L_5);
		Player_tB9AD52F12EAC6DCDC8615F797EE6CEC9EC272A5D * L_6 = L_5->get_player_48();
		NullCheck(L_6);
		HandU5BU5D_tC092C7BDF34DDFC6FF249FAFB0DE5E20331C5B5A* L_7 = L_6->get_hands_6();
		V_2 = L_7;
		V_3 = 0;
		goto IL_00f3;
	}

IL_0059:
	{
		// foreach ( Hand hand in player.hands )
		HandU5BU5D_tC092C7BDF34DDFC6FF249FAFB0DE5E20331C5B5A* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		// bool showHint = IsEligibleForTeleport( hand );
		Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 * L_12 = V_1;
		Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * L_13 = V_4;
		NullCheck(L_12);
		bool L_14;
		L_14 = Teleport_IsEligibleForTeleport_m2AE44E7F2C5935D0FFC3AA73FAAC55AE4C8AFBBB(L_12, L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		// bool isShowingHint = !string.IsNullOrEmpty( ControllerButtonHints.GetActiveHintText( hand, teleportAction) );
		Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * L_15 = V_4;
		Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 * L_16 = V_1;
		NullCheck(L_16);
		SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * L_17 = L_16->get_teleportAction_4();
		String_t* L_18;
		L_18 = ControllerButtonHints_GetActiveHintText_m2FFB0F2FE1E54F1E23E16B3AB2E6DF1511F23643(L_15, L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_18, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		// if ( showHint )
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00d8;
		}
	}
	{
		// if ( !isShowingHint )
		bool L_21 = V_6;
		if (L_21)
		{
			goto IL_00b0;
		}
	}
	{
		// ControllerButtonHints.ShowTextHint( hand, teleportAction, "Teleport" );
		Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * L_22 = V_4;
		Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 * L_23 = V_1;
		NullCheck(L_23);
		SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * L_24 = L_23->get_teleportAction_4();
		ControllerButtonHints_ShowTextHint_m954568AB2BDF4BB93FF747EDCAE23ED1201DB498(L_22, L_24, _stringLiteral9F15E73C308C9440A4A66E65A54F37A6862F5072, (bool)1, /*hidden argument*/NULL);
		// prevBreakTime = Time.time;
		float L_25;
		L_25 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CprevBreakTimeU3E5__2_3(L_25);
		// prevHapticPulseTime = Time.time;
		float L_26;
		L_26 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CprevHapticPulseTimeU3E5__3_4(L_26);
	}

IL_00b0:
	{
		// if ( Time.time > prevHapticPulseTime + 0.05f )
		float L_27;
		L_27 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_28 = __this->get_U3CprevHapticPulseTimeU3E5__3_4();
		if ((!(((float)L_27) > ((float)((float)il2cpp_codegen_add((float)L_28, (float)(0.0500000007f)))))))
		{
			goto IL_00ef;
		}
	}
	{
		// pulsed = true;
		__this->set_U3CpulsedU3E5__4_5((bool)1);
		// hand.TriggerHapticPulse( 500 );
		Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * L_29 = V_4;
		NullCheck(L_29);
		Hand_TriggerHapticPulse_m10929B8D98B8D481945B6783E800BBB289AD97EE(L_29, (uint16_t)((int32_t)500), /*hidden argument*/NULL);
		// }
		goto IL_00ef;
	}

IL_00d8:
	{
		// else if ( !showHint && isShowingHint )
		bool L_30 = V_5;
		bool L_31 = V_6;
		if (!((int32_t)((int32_t)((((int32_t)L_30) == ((int32_t)0))? 1 : 0)&(int32_t)L_31)))
		{
			goto IL_00ef;
		}
	}
	{
		// ControllerButtonHints.HideTextHint( hand, teleportAction);
		Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * L_32 = V_4;
		Teleport_tF748C097D9937FF0B40CFED9F401A00FEF7649B8 * L_33 = V_1;
		NullCheck(L_33);
		SteamVR_Action_Boolean_t309462D316A74D45D173BDDB5E301FF4CD5D88A5 * L_34 = L_33->get_teleportAction_4();
		ControllerButtonHints_HideTextHint_m6F0C47CA6B8A5FA154C1170C7157900A82E805A3(L_32, L_34, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00f3:
	{
		// foreach ( Hand hand in player.hands )
		int32_t L_36 = V_3;
		HandU5BU5D_tC092C7BDF34DDFC6FF249FAFB0DE5E20331C5B5A* L_37 = V_2;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))))
		{
			goto IL_0059;
		}
	}
	{
		// if ( Time.time > prevBreakTime + 3.0f )
		float L_38;
		L_38 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_39 = __this->get_U3CprevBreakTimeU3E5__2_3();
		if ((!(((float)L_38) > ((float)((float)il2cpp_codegen_add((float)L_39, (float)(3.0f)))))))
		{
			goto IL_013a;
		}
	}
	{
		// yield return new WaitForSeconds( 3.0f );
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_40 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_40, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_40);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0128:
	{
		__this->set_U3CU3E1__state_0((-1));
		// prevBreakTime = Time.time;
		float L_41;
		L_41 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CprevBreakTimeU3E5__2_3(L_41);
	}

IL_013a:
	{
		// if ( pulsed )
		bool L_42 = __this->get_U3CpulsedU3E5__4_5();
		if (!L_42)
		{
			goto IL_014d;
		}
	}
	{
		// prevHapticPulseTime = Time.time;
		float L_43;
		L_43 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_U3CprevHapticPulseTimeU3E5__3_4(L_43);
	}

IL_014d:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_015d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while ( true )
		goto IL_003f;
	}
}
// System.Object Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__106::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTeleportHintCoroutineU3Ed__106_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA2F15CA2607DAD7063A04A86C6235FF2217A490F (U3CTeleportHintCoroutineU3Ed__106_t318FFF97CD5C8ED0887D17348D6499E8F524FFB6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__106::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTeleportHintCoroutineU3Ed__106_System_Collections_IEnumerator_Reset_m0355FE5F88BE7890D25321D207109A21E28523AB (U3CTeleportHintCoroutineU3Ed__106_t318FFF97CD5C8ED0887D17348D6499E8F524FFB6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTeleportHintCoroutineU3Ed__106_System_Collections_IEnumerator_Reset_m0355FE5F88BE7890D25321D207109A21E28523AB_RuntimeMethod_var)));
	}
}
// System.Object Valve.VR.InteractionSystem.Teleport/<TeleportHintCoroutine>d__106::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTeleportHintCoroutineU3Ed__106_System_Collections_IEnumerator_get_Current_m44570CADD6DE9F1C750FCAC4F8775FC9D4E4CD2C (U3CTeleportHintCoroutineU3Ed__106_t318FFF97CD5C8ED0887D17348D6499E8F524FFB6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Valve.VR.InteractionSystem.Throwable/<LateDetach>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLateDetachU3Ed__29__ctor_mC4E640DF8B0F9D97EF71BE7E5E21CDCBAB727411 (U3CLateDetachU3Ed__29_t8DC61F0F2923C524707B49D597ABBD91E0AFC980 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Throwable/<LateDetach>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLateDetachU3Ed__29_System_IDisposable_Dispose_m3C921F4C1D031EB98FC5BAE5C1FF2CFF2158C7C4 (U3CLateDetachU3Ed__29_t8DC61F0F2923C524707B49D597ABBD91E0AFC980 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Valve.VR.InteractionSystem.Throwable/<LateDetach>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLateDetachU3Ed__29_MoveNext_mB8836012DA51004775A366D32787C735E77FA98F (U3CLateDetachU3Ed__29_t8DC61F0F2923C524707B49D597ABBD91E0AFC980 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// hand.DetachObject( gameObject, restoreOriginalParent );
		Hand_t7C40C2F681012A0CDCFB22A2DA76929D90EAB865 * L_5 = __this->get_hand_2();
		Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC * L_6 = V_1;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		Throwable_t1B8492624F9DB52C998400B56820EA82FAB8F3BC * L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = L_8->get_restoreOriginalParent_12();
		NullCheck(L_5);
		Hand_DetachObject_mC9FB9C9CE20E64B62277CA740F13CCE3A381C598(L_5, L_7, L_9, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Valve.VR.InteractionSystem.Throwable/<LateDetach>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLateDetachU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFAFCEBB5CF6B8FF6A147450BE863761794387735 (U3CLateDetachU3Ed__29_t8DC61F0F2923C524707B49D597ABBD91E0AFC980 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Valve.VR.InteractionSystem.Throwable/<LateDetach>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLateDetachU3Ed__29_System_Collections_IEnumerator_Reset_mCDB7A52FB3B58C0B3D8AEF1BCE6EAE8778FC3460 (U3CLateDetachU3Ed__29_t8DC61F0F2923C524707B49D597ABBD91E0AFC980 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLateDetachU3Ed__29_System_Collections_IEnumerator_Reset_mCDB7A52FB3B58C0B3D8AEF1BCE6EAE8778FC3460_RuntimeMethod_var)));
	}
}
// System.Object Valve.VR.InteractionSystem.Throwable/<LateDetach>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLateDetachU3Ed__29_System_Collections_IEnumerator_get_Current_mAE92DC4B74ECB10B3D2C933A79F271603018EDA3 (U3CLateDetachU3Ed__29_t8DC61F0F2923C524707B49D597ABBD91E0AFC980 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Valve.VR.InteractionSystem.Util/<WrapCoroutine>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrapCoroutineU3Ed__43__ctor_mE8986E6B7E9195B72F85058F7F5D140FB0228942 (U3CWrapCoroutineU3Ed__43_tEB56558945010B61DB40B57FEF840A08C0753E0C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Util/<WrapCoroutine>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrapCoroutineU3Ed__43_System_IDisposable_Dispose_m350B0FB2BF27D0DEB2386EACB1B43EBC976AEC00 (U3CWrapCoroutineU3Ed__43_tEB56558945010B61DB40B57FEF840A08C0753E0C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Valve.VR.InteractionSystem.Util/<WrapCoroutine>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWrapCoroutineU3Ed__43_MoveNext_mCF9AD85D7BB11BCB7FE0A1A7581DFB1537B7B8E1 (U3CWrapCoroutineU3Ed__43_tEB56558945010B61DB40B57FEF840A08C0753E0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_003a;
	}

IL_0019:
	{
		// yield return coroutine.Current;
		RuntimeObject* L_3 = __this->get_coroutine_2();
		NullCheck(L_3);
		RuntimeObject * L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_3);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0033:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_003a:
	{
		// while ( coroutine.MoveNext() )
		RuntimeObject* L_5 = __this->get_coroutine_2();
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
		if (L_6)
		{
			goto IL_0019;
		}
	}
	{
		// onCoroutineFinished();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7 = __this->get_onCoroutineFinished_3();
		NullCheck(L_7);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_7, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Valve.VR.InteractionSystem.Util/<WrapCoroutine>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWrapCoroutineU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBD79430C591FF2CA8EACFCBA6F38A3763F46469D (U3CWrapCoroutineU3Ed__43_tEB56558945010B61DB40B57FEF840A08C0753E0C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Valve.VR.InteractionSystem.Util/<WrapCoroutine>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrapCoroutineU3Ed__43_System_Collections_IEnumerator_Reset_mE2A48A7BA7AA59A2FB64C75658061701145E3D6C (U3CWrapCoroutineU3Ed__43_tEB56558945010B61DB40B57FEF840A08C0753E0C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWrapCoroutineU3Ed__43_System_Collections_IEnumerator_Reset_mE2A48A7BA7AA59A2FB64C75658061701145E3D6C_RuntimeMethod_var)));
	}
}
// System.Object Valve.VR.InteractionSystem.Util/<WrapCoroutine>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWrapCoroutineU3Ed__43_System_Collections_IEnumerator_get_Current_m23E465EC9DCD833610171E58281DD8443DECD889 (U3CWrapCoroutineU3Ed__43_tEB56558945010B61DB40B57FEF840A08C0753E0C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Valve.VR.InteractionSystem.VelocityEstimator/<EstimateVelocityCoroutine>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEstimateVelocityCoroutineU3Ed__13__ctor_m32FE4EABBFD9D7C2BFF94ACFC32DFE0081559060 (U3CEstimateVelocityCoroutineU3Ed__13_t2634E98B1DC2A41F3D5723D11F4A5CA4B1BEE96B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.VelocityEstimator/<EstimateVelocityCoroutine>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEstimateVelocityCoroutineU3Ed__13_System_IDisposable_Dispose_mDB06693D8A78086CF14E1B9FD787EBB2966EF178 (U3CEstimateVelocityCoroutineU3Ed__13_t2634E98B1DC2A41F3D5723D11F4A5CA4B1BEE96B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Valve.VR.InteractionSystem.VelocityEstimator/<EstimateVelocityCoroutine>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEstimateVelocityCoroutineU3Ed__13_MoveNext_mEE50972FA03F90016A15D23CA439251E0A66D68C (U3CEstimateVelocityCoroutineU3Ed__13_t2634E98B1DC2A41F3D5723D11F4A5CA4B1BEE96B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// sampleCount = 0;
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_4 = V_1;
		NullCheck(L_4);
		L_4->set_sampleCount_8(0);
		// Vector3 previousPosition = transform.position;
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_5 = V_1;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		__this->set_U3CpreviousPositionU3E5__2_3(L_7);
		// Quaternion previousRotation = transform.rotation;
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_8 = V_1;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_9, /*hidden argument*/NULL);
		__this->set_U3CpreviousRotationU3E5__3_4(L_10);
	}

IL_0047:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_11 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_11, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// float velocityFactor = 1.0f / Time.deltaTime;
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_2 = ((float)((float)(1.0f)/(float)L_12));
		// int v = sampleCount % velocitySamples.Length;
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_sampleCount_8();
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_15 = V_1;
		NullCheck(L_15);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_16 = L_15->get_velocitySamples_9();
		NullCheck(L_16);
		V_3 = ((int32_t)((int32_t)L_14%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))));
		// int w = sampleCount % angularVelocitySamples.Length;
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_sampleCount_8();
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_19 = V_1;
		NullCheck(L_19);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_20 = L_19->get_angularVelocitySamples_10();
		NullCheck(L_20);
		V_4 = ((int32_t)((int32_t)L_18%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))));
		// sampleCount++;
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_21 = V_1;
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_sampleCount_8();
		NullCheck(L_21);
		L_21->set_sampleCount_8(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
		// velocitySamples[v] = velocityFactor * ( transform.position - previousPosition );
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_24 = V_1;
		NullCheck(L_24);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_25 = L_24->get_velocitySamples_9();
		int32_t L_26 = V_3;
		float L_27 = V_2;
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_28 = V_1;
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = __this->get_U3CpreviousPositionU3E5__2_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_30, L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(L_27, L_32, /*hidden argument*/NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_33);
		// Quaternion deltaRotation = transform.rotation * Quaternion.Inverse( previousRotation );
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_34 = V_1;
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_36;
		L_36 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_35, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_37 = __this->get_U3CpreviousRotationU3E5__3_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38;
		L_38 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_37, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
		L_39 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_36, L_38, /*hidden argument*/NULL);
		V_5 = L_39;
		// float theta = 2.0f * Mathf.Acos( Mathf.Clamp( deltaRotation.w, -1.0f, 1.0f ) );
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_40 = V_5;
		float L_41 = L_40.get_w_3();
		float L_42;
		L_42 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_41, (-1.0f), (1.0f), /*hidden argument*/NULL);
		float L_43;
		L_43 = acosf(L_42);
		V_6 = ((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_43));
		// if ( theta > Mathf.PI )
		float L_44 = V_6;
		if ((!(((float)L_44) > ((float)(3.14159274f)))))
		{
			goto IL_0118;
		}
	}
	{
		// theta -= 2.0f * Mathf.PI;
		float L_45 = V_6;
		V_6 = ((float)il2cpp_codegen_subtract((float)L_45, (float)(6.28318548f)));
	}

IL_0118:
	{
		// Vector3 angularVelocity = new Vector3( deltaRotation.x, deltaRotation.y, deltaRotation.z );
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_46 = V_5;
		float L_47 = L_46.get_x_0();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_48 = V_5;
		float L_49 = L_48.get_y_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_50 = V_5;
		float L_51 = L_50.get_z_2();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), L_47, L_49, L_51, /*hidden argument*/NULL);
		// if ( angularVelocity.sqrMagnitude > 0.0f )
		float L_52;
		L_52 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), /*hidden argument*/NULL);
		if ((!(((float)L_52) > ((float)(0.0f)))))
		{
			goto IL_0154;
		}
	}
	{
		// angularVelocity = theta * velocityFactor * angularVelocity.normalized;
		float L_53 = V_6;
		float L_54 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline(((float)il2cpp_codegen_multiply((float)L_53, (float)L_54)), L_55, /*hidden argument*/NULL);
		V_7 = L_56;
	}

IL_0154:
	{
		// angularVelocitySamples[w] = angularVelocity;
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_57 = V_1;
		NullCheck(L_57);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_58 = L_57->get_angularVelocitySamples_10();
		int32_t L_59 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = V_7;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_60);
		// previousPosition = transform.position;
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_61 = V_1;
		NullCheck(L_61);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_62, /*hidden argument*/NULL);
		__this->set_U3CpreviousPositionU3E5__2_3(L_63);
		// previousRotation = transform.rotation;
		VelocityEstimator_tE21599AF39D7D095377078D4456FD51D07362078 * L_64 = V_1;
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_66;
		L_66 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_65, /*hidden argument*/NULL);
		__this->set_U3CpreviousRotationU3E5__3_4(L_66);
		// while ( true )
		goto IL_0047;
	}
}
// System.Object Valve.VR.InteractionSystem.VelocityEstimator/<EstimateVelocityCoroutine>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEstimateVelocityCoroutineU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDF0E2CC768352756E90B928DFD2FCD525EE0AD87 (U3CEstimateVelocityCoroutineU3Ed__13_t2634E98B1DC2A41F3D5723D11F4A5CA4B1BEE96B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Valve.VR.InteractionSystem.VelocityEstimator/<EstimateVelocityCoroutine>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEstimateVelocityCoroutineU3Ed__13_System_Collections_IEnumerator_Reset_m418A043F339B6EDED52C080C7AF97DCF3ED2E2BA (U3CEstimateVelocityCoroutineU3Ed__13_t2634E98B1DC2A41F3D5723D11F4A5CA4B1BEE96B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEstimateVelocityCoroutineU3Ed__13_System_Collections_IEnumerator_Reset_m418A043F339B6EDED52C080C7AF97DCF3ED2E2BA_RuntimeMethod_var)));
	}
}
// System.Object Valve.VR.InteractionSystem.VelocityEstimator/<EstimateVelocityCoroutine>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEstimateVelocityCoroutineU3Ed__13_System_Collections_IEnumerator_get_Current_mC6F87926759C46D53617034241A4B24204E3A262 (U3CEstimateVelocityCoroutineU3Ed__13_t2634E98B1DC2A41F3D5723D11F4A5CA4B1BEE96B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Valve.VR.InteractionSystem.Sample.WheelDust/<emitter>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CemitterU3Ed__11__ctor_m5FF204B1AFB165A56C98DDE77A065EBFCC679A78 (U3CemitterU3Ed__11_t47946151B354F774011ED475E28D23489C61F944 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.WheelDust/<emitter>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CemitterU3Ed__11_System_IDisposable_Dispose_m7A63964CFA01FB3DE848BB69F5C8F9AD5A3B391B (U3CemitterU3Ed__11_t47946151B354F774011ED475E28D23489C61F944 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Valve.VR.InteractionSystem.Sample.WheelDust/<emitter>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CemitterU3Ed__11_MoveNext_m513CECAB91A25D619C57F80164F83D8038392CEA (U3CemitterU3Ed__11_t47946151B354F774011ED475E28D23489C61F944 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_006f;
	}

IL_0020:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (amt > minSlip)
		WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_amt_10();
		WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->get_minSlip_9();
		if ((!(((float)L_5) > ((float)L_7))))
		{
			goto IL_006f;
		}
	}
	{
		// emitTimer += Mathf.Clamp((EmissionMul * amt), 0.01f, maxEmission);
		WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * L_8 = V_1;
		WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->get_emitTimer_12();
		WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->get_EmissionMul_6();
		WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->get_amt_10();
		WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->get_maxEmission_8();
		float L_17;
		L_17 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)L_12, (float)L_14)), (0.00999999978f), L_16, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_emitTimer_12(((float)il2cpp_codegen_add((float)L_10, (float)L_17)));
	}

IL_006f:
	{
		// while (emitTimer < 1)
		WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->get_emitTimer_12();
		if ((((float)L_19) < ((float)(1.0f))))
		{
			goto IL_0020;
		}
	}
	{
		// emitTimer = 0;
		WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * L_20 = V_1;
		NullCheck(L_20);
		L_20->set_emitTimer_12((0.0f));
		// DoEmit();
		WheelDust_tF9965CA2153C3202C2258A6F1D346BB9300C9BB4 * L_21 = V_1;
		NullCheck(L_21);
		WheelDust_DoEmit_m83BBCAE5FD5ADA0292CFE551F87708FB2397DA5A(L_21, /*hidden argument*/NULL);
		// while (true)
		goto IL_006f;
	}
}
// System.Object Valve.VR.InteractionSystem.Sample.WheelDust/<emitter>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CemitterU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8494CDD00915B00FBA78B392D2B186DCB2D2FC6A (U3CemitterU3Ed__11_t47946151B354F774011ED475E28D23489C61F944 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Valve.VR.InteractionSystem.Sample.WheelDust/<emitter>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CemitterU3Ed__11_System_Collections_IEnumerator_Reset_m6DF88368A23014FFEEB256B6CDC9FF68896FC363 (U3CemitterU3Ed__11_t47946151B354F774011ED475E28D23489C61F944 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CemitterU3Ed__11_System_Collections_IEnumerator_Reset_m6DF88368A23014FFEEB256B6CDC9FF68896FC363_RuntimeMethod_var)));
	}
}
// System.Object Valve.VR.InteractionSystem.Sample.WheelDust/<emitter>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CemitterU3Ed__11_System_Collections_IEnumerator_get_Current_mEB957AAA54293576B396DB1C86BC4006C58F56E6 (U3CemitterU3Ed__11_t47946151B354F774011ED475E28D23489C61F944 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SteamVR_Utils/Event/Handler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handler__ctor_m1AF3F1BB21E05F2EBDB12090D99B42BD84C155C7 (Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SteamVR_Utils/Event/Handler::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handler_Invoke_m476DF247EF56B5F6FC58E098C2864FD266C0D592 (Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___args0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___args0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___args0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(targetMethod, targetThis, ___args0);
					else
						GenericVirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(targetMethod, targetThis, ___args0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0);
					else
						VirtActionInvoker1< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___args0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult SteamVR_Utils/Event/Handler::BeginInvoke(System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Handler_BeginInvoke_m727C0840B74B383B7BE8A1E68BDACDF4135E1335 (Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___args0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void SteamVR_Utils/Event/Handler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handler_EndInvoke_m3431F4235A011C3A967EDA8E1ED0BECF60925D01 (Handler_t57D2D65B10403D6BA861F7E0D6BF827985E289E1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m079B29E4F58127F03BD52558C1FE1A528547328F_inline (float ___d0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a1;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a1;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a1;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}

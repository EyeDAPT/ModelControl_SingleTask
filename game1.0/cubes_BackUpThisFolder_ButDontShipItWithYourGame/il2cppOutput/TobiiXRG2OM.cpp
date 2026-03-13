#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09;
// System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>
struct Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Boolean>
struct Func_2_t0B9D374790B8C9FDCA96A193ED205DE97A1AF798;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single>
struct Func_2_t75E51AFE956686E40D3DF8B08359799B6E2DF8A8;
// Tobii.G2OM.G2OM_ObjectDistinguisher`1<Tobii.G2OM.IGazeFocusable>
struct G2OM_ObjectDistinguisher_1_tD07485647985E763F438B7499D89F0340453759E;
// Tobii.G2OM.G2OM_ObjectDistinguisher`1<System.Object>
struct G2OM_ObjectDistinguisher_1_t8F9DFCC69ADED09B385F1043D01D482E4FB323CE;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>>
struct IEnumerable_1_t20AE2A427F1FDDF89DBC82C09C525A0CE560509A;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Linq.IOrderedEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>>
struct IOrderedEnumerable_1_tFC9F2B1AA6714A975AE690059C7DFDAB8F32B0FA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.GameObject>
struct KeyCollection_tE86684E0271CDA1A0FAB5D33250A450E5FE5B362;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Tobii.G2OM.InternalCandidate>
struct KeyCollection_t79D8311FFBB12E46B22AFF81F23DC7E0B0C133D8;
// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>
struct List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C;
// System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>
struct List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.GameObject>
struct ValueCollection_t6EC1A46DD7FE8F7591C879C4884D3BFFE31F6DA1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Tobii.G2OM.InternalCandidate>
struct ValueCollection_tED40888EFCF2205AB3099E04D1F0BA7F75D45230;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.GameObject>[]
struct EntryU5BU5D_tEFD35EB41BFC47C75E430DCAAD59FC6DB5684249;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Tobii.G2OM.InternalCandidate>[]
struct EntryU5BU5D_t4DA137849E5BA2B8A61AD91ECA8A286A857DD956;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Tobii.G2OM.FocusedCandidate[]
struct FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585;
// Tobii.G2OM.G2OM_Candidate[]
struct G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E;
// Tobii.G2OM.G2OM_CandidateResult[]
struct G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02;
// Tobii.G2OM.G2OM_GazeRay[]
struct G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526;
// Tobii.G2OM.IGazeFocusable[]
struct IGazeFocusableU5BU5D_tD31B583BC8D58AEC677F17546AD1C3BC6634C9B3;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// Tobii.G2OM.G2OM
struct G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C;
// Tobii.G2OM.G2OM_ColliderDataProvider
struct G2OM_ColliderDataProvider_t8A1B9B2716DB0CEED380194C4228207DCE0676EC;
// Tobii.G2OM.G2OM_Context
struct G2OM_Context_t1E356FC3F10BB40EE80360B60208B56E4FA1E8F5;
// Tobii.G2OM.G2OM_Description
struct G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB;
// Tobii.G2OM.G2OM_ObjectFinder
struct G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05;
// Tobii.G2OM.G2OM_PostTicker
struct G2OM_PostTicker_tAAA7AB0665B1DBC0BF5C43AADE66C7E1EF8A0906;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Tobii.G2OM.IG2OM_ColliderDataProvider
struct IG2OM_ColliderDataProvider_t902B64FB6CC49EB5144558A308B6AD50CF8518B3;
// Tobii.G2OM.IG2OM_Context
struct IG2OM_Context_t76A1678AB05CC3E9530C8AEA2D90DE68D4136722;
// Tobii.G2OM.IG2OM_ObjectDistinguisher
struct IG2OM_ObjectDistinguisher_t54814829C953800054E5898D73F2099C0E0F1952;
// Tobii.G2OM.IG2OM_ObjectFinder
struct IG2OM_ObjectFinder_tDE13D081D582DC99781887DF958EF7D474C94445;
// Tobii.G2OM.IG2OM_PostTicker
struct IG2OM_PostTicker_t20B92D25A8EB1162F7B58A942D165501F94C7CC4;
// Tobii.G2OM.IGazeFocusable
struct IGazeFocusable_t6AE88CC8132B6BE9E45FFD4CDD3929557250481F;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.SphereCollider
struct SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Tobii.G2OM.G2OM/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342;

IL2CPP_EXTERN_C RuntimeClass* BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t0B9D374790B8C9FDCA96A193ED205DE97A1AF798_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t75E51AFE956686E40D3DF8B08359799B6E2DF8A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_ColliderDataProvider_t8A1B9B2716DB0CEED380194C4228207DCE0676EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_Context_t1E356FC3F10BB40EE80360B60208B56E4FA1E8F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_Error_tD5A05A0B06B00BF8E08890A27682FED4AD072A2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_ObjectDistinguisher_1_tD07485647985E763F438B7499D89F0340453759E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_PostTicker_tAAA7AB0665B1DBC0BF5C43AADE66C7E1EF8A0906_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IG2OM_ColliderDataProvider_t902B64FB6CC49EB5144558A308B6AD50CF8518B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IG2OM_Context_t76A1678AB05CC3E9530C8AEA2D90DE68D4136722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IG2OM_ObjectDistinguisher_t54814829C953800054E5898D73F2099C0E0F1952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IG2OM_ObjectFinder_tDE13D081D582DC99781887DF958EF7D474C94445_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IG2OM_PostTicker_t20B92D25A8EB1162F7B58A942D165501F94C7CC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGazeFocusable_t6AE88CC8132B6BE9E45FFD4CDD3929557250481F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral416CD7784FACF85FBEDA83A8E1A615217DEE0BDD;
IL2CPP_EXTERN_C String_t* _stringLiteral4267DC00BD0088B83F322827C2C735288AFD6E8A;
IL2CPP_EXTERN_C String_t* _stringLiteral7295D86B191797D130C4ABB7DDB1EB6E2F69410D;
IL2CPP_EXTERN_C String_t* _stringLiteralAB89372175E5CFDD9BFADE2FD7CC661A545D8F71;
IL2CPP_EXTERN_C String_t* _stringLiteralB77AEA6B66613896145DC025F0AD1733A45CF12E;
IL2CPP_EXTERN_C String_t* _stringLiteralBA47B4D74A80D7EF612B02030F48C705DEAF5E1E;
IL2CPP_EXTERN_C String_t* _stringLiteralBAB23CCB98895143359167F61DE647BB288C8617;
IL2CPP_EXTERN_C String_t* _stringLiteralBB7B05EBF47D4A2FDC065778B7A7FBBA2170A9EE;
IL2CPP_EXTERN_C String_t* _stringLiteralC9F78FA22EEAB5B4404E19906FD7CA028B2F9ADA;
IL2CPP_EXTERN_C String_t* _stringLiteralD0FFC6F0B394A5845018E5A614F136DB3D9632DE;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF077DE34F8D000C950F1CF5F29A4D148ABDAB85;
IL2CPP_EXTERN_C String_t* _stringLiteralE4E462BC9DC120BFC793A317769C9C55CD84D332;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA610FFDDFC70D85D351F86D009E64CD61E3EF886_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m36D039052B9BF2DDF9D0EA0B92FEC0735BE2EB7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m72AA6A3E6BEB604A7417604A6541872EF8919009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m66775372D34FFF649F9BE8E446C5D89F511FFF3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mDE9A7354DA43E5437FC711CB6543E7D1266AE536_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m70FD0317C637CC892E0EF411E72E61744D936489_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mB5E3CA5ADE783862DC4C62DA142911E9A83468D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m9AEECAEDEA37C29D6C803A6F2586A50C2306ACE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0D4EBC4081ED9D92C85A98F6381A2A260E141C50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m246DDEBE7436911EF460597C67CB507217C9E44D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m814AC0C584D059CEF22EAF2514890B45F72BA25C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE5180AAAC16603E71993A8F46CCDB13BAF23CC55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ElementAt_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_m58EFF427D0A4BF1CDDA3D7A3938A5F4CFB396064_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderByDescending_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m364E1901FA14B23AD8917580995A2DF897009A40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_mAF46F4D7D127A8A0A6B4526CC327ECD1291408D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m02CB645F41D85C58ACFFD33F64996A94648BF508_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7854A3FE002BF0D4937196B8F05B75EF5170310B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA1C37F88C2F5DE21ACDB87535F85256A4E1DA310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m49483B538F6952C08CE81F8447169816E1991D2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m653B6CA12D885210321CFF5235AE4242C3A90C6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEE3F2E6C3CBBB5F2377D2D86DE3C62CC016800A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m480E622FFCF9A727BCFD4296D6E3EF2995D27BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m98F82DCCF5C9518973A5FB956F7CAAB87854279E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA512F8CD40848044A35C75D34991E6F18AD3A452_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m2E25CA9C65B74B28238645769A2EBC7D7CE538F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m4CE11EB5E08F6B77F11BFDDD751DC4C12053F556_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* G2OM_ColliderDataProvider_GetColliderData_m7C34B2BD84F1B87043006E2018BC3420C9B490A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* G2OM_ObjectDistinguisher_1__ctor_mF12467B2434FC26D70C5F92219C4551AB71313CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisIGazeFocusable_t6AE88CC8132B6BE9E45FFD4CDD3929557250481F_m99B8B9B7C23BA9F43677F5F19CA5C687F3D0FCE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m7E4E0342C7361DDA09C8554ED99B8AB2875980EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mF17844CADA24FB37E362DCEA74951CFF0D53942B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mF77E84266CD7B5910C5C0C47D8DC3068DEB7B7C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m260090E50EDC1DB0A8300240D63CCCF7E48692FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0AFC962BC8563D0CEB1EA5B1D39CC6130B0A8DFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5490D531ACEAC668B2AC2FB5DA74CED478593AF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m23991899E2477DD9A3F79FBDADBA319A2297D065_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC5E16D024F1EAA95A174859EAB1C192A596FC849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFFC9DB51A8DE8C9DC75BC85A0FB833D218C3C3FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mCDEC89B2EB171FB3B8DE932158BC505ADC3C1C16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m59B4DED04CE74CDA40ED7067E22E8D8BF8EE9F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__0_m6A8770DC7CCFEFC2B07955E8ADA3324A24297D34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__1_m59A0878B39A1F61375E0D38030F54894A99089E9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585;
struct G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E;
struct G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02;
struct G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9C99B432DC0074D00924956E1FFC5FE3AA06AE83 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>
struct Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tEFD35EB41BFC47C75E430DCAAD59FC6DB5684249* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tE86684E0271CDA1A0FAB5D33250A450E5FE5B362 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6EC1A46DD7FE8F7591C879C4884D3BFFE31F6DA1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09, ___entries_1)); }
	inline EntryU5BU5D_tEFD35EB41BFC47C75E430DCAAD59FC6DB5684249* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tEFD35EB41BFC47C75E430DCAAD59FC6DB5684249** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tEFD35EB41BFC47C75E430DCAAD59FC6DB5684249* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09, ___keys_7)); }
	inline KeyCollection_tE86684E0271CDA1A0FAB5D33250A450E5FE5B362 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE86684E0271CDA1A0FAB5D33250A450E5FE5B362 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE86684E0271CDA1A0FAB5D33250A450E5FE5B362 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09, ___values_8)); }
	inline ValueCollection_t6EC1A46DD7FE8F7591C879C4884D3BFFE31F6DA1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6EC1A46DD7FE8F7591C879C4884D3BFFE31F6DA1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6EC1A46DD7FE8F7591C879C4884D3BFFE31F6DA1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>
struct Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4DA137849E5BA2B8A61AD91ECA8A286A857DD956* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t79D8311FFBB12E46B22AFF81F23DC7E0B0C133D8 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tED40888EFCF2205AB3099E04D1F0BA7F75D45230 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9, ___entries_1)); }
	inline EntryU5BU5D_t4DA137849E5BA2B8A61AD91ECA8A286A857DD956* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4DA137849E5BA2B8A61AD91ECA8A286A857DD956** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4DA137849E5BA2B8A61AD91ECA8A286A857DD956* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9, ___keys_7)); }
	inline KeyCollection_t79D8311FFBB12E46B22AFF81F23DC7E0B0C133D8 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t79D8311FFBB12E46B22AFF81F23DC7E0B0C133D8 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t79D8311FFBB12E46B22AFF81F23DC7E0B0C133D8 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9, ___values_8)); }
	inline ValueCollection_tED40888EFCF2205AB3099E04D1F0BA7F75D45230 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tED40888EFCF2205AB3099E04D1F0BA7F75D45230 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tED40888EFCF2205AB3099E04D1F0BA7F75D45230 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// Tobii.G2OM.G2OM_ObjectDistinguisher`1<Tobii.G2OM.IGazeFocusable>
struct G2OM_ObjectDistinguisher_1_tD07485647985E763F438B7499D89F0340453759E  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> Tobii.G2OM.G2OM_ObjectDistinguisher`1::_components
	List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * ____components_0;

public:
	inline static int32_t get_offset_of__components_0() { return static_cast<int32_t>(offsetof(G2OM_ObjectDistinguisher_1_tD07485647985E763F438B7499D89F0340453759E, ____components_0)); }
	inline List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * get__components_0() const { return ____components_0; }
	inline List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 ** get_address_of__components_0() { return &____components_0; }
	inline void set__components_0(List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * value)
	{
		____components_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____components_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>
struct List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C, ____items_1)); }
	inline FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585* get__items_1() const { return ____items_1; }
	inline FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C_StaticFields, ____emptyArray_5)); }
	inline FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>
struct List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IGazeFocusableU5BU5D_tD31B583BC8D58AEC677F17546AD1C3BC6634C9B3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39, ____items_1)); }
	inline IGazeFocusableU5BU5D_tD31B583BC8D58AEC677F17546AD1C3BC6634C9B3* get__items_1() const { return ____items_1; }
	inline IGazeFocusableU5BU5D_tD31B583BC8D58AEC677F17546AD1C3BC6634C9B3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IGazeFocusableU5BU5D_tD31B583BC8D58AEC677F17546AD1C3BC6634C9B3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IGazeFocusableU5BU5D_tD31B583BC8D58AEC677F17546AD1C3BC6634C9B3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39_StaticFields, ____emptyArray_5)); }
	inline IGazeFocusableU5BU5D_tD31B583BC8D58AEC677F17546AD1C3BC6634C9B3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IGazeFocusableU5BU5D_tD31B583BC8D58AEC677F17546AD1C3BC6634C9B3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IGazeFocusableU5BU5D_tD31B583BC8D58AEC677F17546AD1C3BC6634C9B3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// Tobii.G2OM.G2OM_ColliderDataProvider
struct G2OM_ColliderDataProvider_t8A1B9B2716DB0CEED380194C4228207DCE0676EC  : public RuntimeObject
{
public:

public:
};


// Tobii.G2OM.G2OM_ExtensionMethods
struct G2OM_ExtensionMethods_t3D232809F5A6D4CF5A62FA77A56D3A0F5938E034  : public RuntimeObject
{
public:

public:
};


// Tobii.G2OM.G2OM_PostTicker
struct G2OM_PostTicker_tAAA7AB0665B1DBC0BF5C43AADE66C7E1EF8A0906  : public RuntimeObject
{
public:
	// UnityEngine.GameObject Tobii.G2OM.G2OM_PostTicker::_previousGazeFocusedObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____previousGazeFocusedObject_0;
	// System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable> Tobii.G2OM.G2OM_PostTicker::_gazeFocusableComponents
	List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * ____gazeFocusableComponents_1;

public:
	inline static int32_t get_offset_of__previousGazeFocusedObject_0() { return static_cast<int32_t>(offsetof(G2OM_PostTicker_tAAA7AB0665B1DBC0BF5C43AADE66C7E1EF8A0906, ____previousGazeFocusedObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__previousGazeFocusedObject_0() const { return ____previousGazeFocusedObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__previousGazeFocusedObject_0() { return &____previousGazeFocusedObject_0; }
	inline void set__previousGazeFocusedObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____previousGazeFocusedObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previousGazeFocusedObject_0), (void*)value);
	}

	inline static int32_t get_offset_of__gazeFocusableComponents_1() { return static_cast<int32_t>(offsetof(G2OM_PostTicker_tAAA7AB0665B1DBC0BF5C43AADE66C7E1EF8A0906, ____gazeFocusableComponents_1)); }
	inline List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * get__gazeFocusableComponents_1() const { return ____gazeFocusableComponents_1; }
	inline List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 ** get_address_of__gazeFocusableComponents_1() { return &____gazeFocusableComponents_1; }
	inline void set__gazeFocusableComponents_1(List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * value)
	{
		____gazeFocusableComponents_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gazeFocusableComponents_1), (void*)value);
	}
};


// Tobii.G2OM.G2OM_UnityExtensionMethods
struct G2OM_UnityExtensionMethods_t17C3D0C58E602C8E90F422D9B23C9839DD67040D  : public RuntimeObject
{
public:

public:
};


// Tobii.G2OM.Interop
struct Interop_tD305398E7F03B0B5B983905CA4A85F6BECB17A70  : public RuntimeObject
{
public:

public:
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

// Tobii.G2OM.G2OM/<>c__DisplayClass32_0
struct U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int32> Tobii.G2OM.G2OM/<>c__DisplayClass32_0::keysToRemove
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___keysToRemove_0;
	// System.Single Tobii.G2OM.G2OM/<>c__DisplayClass32_0::now
	float ___now_1;

public:
	inline static int32_t get_offset_of_keysToRemove_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342, ___keysToRemove_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_keysToRemove_0() const { return ___keysToRemove_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_keysToRemove_0() { return &___keysToRemove_0; }
	inline void set_keysToRemove_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___keysToRemove_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keysToRemove_0), (void*)value);
	}

	inline static int32_t get_offset_of_now_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342, ___now_1)); }
	inline float get_now_1() const { return ___now_1; }
	inline float* get_address_of_now_1() { return &___now_1; }
	inline void set_now_1(float value)
	{
		___now_1 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<Tobii.G2OM.IGazeFocusable>
struct Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A, ___list_0)); }
	inline List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * get_list_0() const { return ___list_0; }
	inline List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___list_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_list_0() const { return ___list_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>
struct KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B, ___value_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_value_1() const { return ___value_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
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

// Tobii.G2OM.G2OM_ContextCreateOptions
struct G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724 
{
public:
	// System.UInt32 Tobii.G2OM.G2OM_ContextCreateOptions::capacity
	uint32_t ___capacity_0;
	// System.UInt32 Tobii.G2OM.G2OM_ContextCreateOptions::thread_count
	uint32_t ___thread_count_1;
	// System.String Tobii.G2OM.G2OM_ContextCreateOptions::license_content
	String_t* ___license_content_2;

public:
	inline static int32_t get_offset_of_capacity_0() { return static_cast<int32_t>(offsetof(G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724, ___capacity_0)); }
	inline uint32_t get_capacity_0() const { return ___capacity_0; }
	inline uint32_t* get_address_of_capacity_0() { return &___capacity_0; }
	inline void set_capacity_0(uint32_t value)
	{
		___capacity_0 = value;
	}

	inline static int32_t get_offset_of_thread_count_1() { return static_cast<int32_t>(offsetof(G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724, ___thread_count_1)); }
	inline uint32_t get_thread_count_1() const { return ___thread_count_1; }
	inline uint32_t* get_address_of_thread_count_1() { return &___thread_count_1; }
	inline void set_thread_count_1(uint32_t value)
	{
		___thread_count_1 = value;
	}

	inline static int32_t get_offset_of_license_content_2() { return static_cast<int32_t>(offsetof(G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724, ___license_content_2)); }
	inline String_t* get_license_content_2() const { return ___license_content_2; }
	inline String_t** get_address_of_license_content_2() { return &___license_content_2; }
	inline void set_license_content_2(String_t* value)
	{
		___license_content_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___license_content_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Tobii.G2OM.G2OM_ContextCreateOptions
struct G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshaled_pinvoke
{
	uint32_t ___capacity_0;
	uint32_t ___thread_count_1;
	char* ___license_content_2;
};
// Native definition for COM marshalling of Tobii.G2OM.G2OM_ContextCreateOptions
struct G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshaled_com
{
	uint32_t ___capacity_0;
	uint32_t ___thread_count_1;
	Il2CppChar* ___license_content_2;
};

// Tobii.G2OM.G2OM_Matrix4x4
struct G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2 
{
public:
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m00
	float ___m00_0;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m10
	float ___m10_1;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m20
	float ___m20_2;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m30
	float ___m30_3;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m01
	float ___m01_4;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m11
	float ___m11_5;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m21
	float ___m21_6;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m31
	float ___m31_7;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m02
	float ___m02_8;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m12
	float ___m12_9;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m22
	float ___m22_10;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m32
	float ___m32_11;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m03
	float ___m03_12;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m13
	float ___m13_13;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m23
	float ___m23_14;
	// System.Single Tobii.G2OM.G2OM_Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};


// Tobii.G2OM.G2OM_Raycast
struct G2OM_Raycast_t880D39AB15506A0A32FFFD984B53034CDDFB2016 
{
public:
	// System.Byte Tobii.G2OM.G2OM_Raycast::is_raycast_id_valid
	uint8_t ___is_raycast_id_valid_0;
	// System.UInt64 Tobii.G2OM.G2OM_Raycast::candidate_id
	uint64_t ___candidate_id_1;

public:
	inline static int32_t get_offset_of_is_raycast_id_valid_0() { return static_cast<int32_t>(offsetof(G2OM_Raycast_t880D39AB15506A0A32FFFD984B53034CDDFB2016, ___is_raycast_id_valid_0)); }
	inline uint8_t get_is_raycast_id_valid_0() const { return ___is_raycast_id_valid_0; }
	inline uint8_t* get_address_of_is_raycast_id_valid_0() { return &___is_raycast_id_valid_0; }
	inline void set_is_raycast_id_valid_0(uint8_t value)
	{
		___is_raycast_id_valid_0 = value;
	}

	inline static int32_t get_offset_of_candidate_id_1() { return static_cast<int32_t>(offsetof(G2OM_Raycast_t880D39AB15506A0A32FFFD984B53034CDDFB2016, ___candidate_id_1)); }
	inline uint64_t get_candidate_id_1() const { return ___candidate_id_1; }
	inline uint64_t* get_address_of_candidate_id_1() { return &___candidate_id_1; }
	inline void set_candidate_id_1(uint64_t value)
	{
		___candidate_id_1 = value;
	}
};


// Tobii.G2OM.G2OM_Vector3
struct G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D 
{
public:
	// System.Single Tobii.G2OM.G2OM_Vector3::x
	float ___x_0;
	// System.Single Tobii.G2OM.G2OM_Vector3::y
	float ___y_1;
	// System.Single Tobii.G2OM.G2OM_Vector3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
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


// Tobii.G2OM.InternalCandidate
struct InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895 
{
public:
	// UnityEngine.GameObject Tobii.G2OM.InternalCandidate::GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameObject_0;
	// System.Single Tobii.G2OM.InternalCandidate::Timestamp
	float ___Timestamp_1;

public:
	inline static int32_t get_offset_of_GameObject_0() { return static_cast<int32_t>(offsetof(InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895, ___GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameObject_0() const { return ___GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameObject_0() { return &___GameObject_0; }
	inline void set_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_Timestamp_1() { return static_cast<int32_t>(offsetof(InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895, ___Timestamp_1)); }
	inline float get_Timestamp_1() const { return ___Timestamp_1; }
	inline float* get_address_of_Timestamp_1() { return &___Timestamp_1; }
	inline void set_Timestamp_1(float value)
	{
		___Timestamp_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Tobii.G2OM.InternalCandidate
struct InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameObject_0;
	float ___Timestamp_1;
};
// Native definition for COM marshalling of Tobii.G2OM.InternalCandidate
struct InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameObject_0;
	float ___Timestamp_1;
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


// UnityEngine.Mathf
struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194__padding[1];
	};

public:
};

struct Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields
{
public:
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;

public:
	inline static int32_t get_offset_of_Epsilon_0() { return static_cast<int32_t>(offsetof(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields, ___Epsilon_0)); }
	inline float get_Epsilon_0() const { return ___Epsilon_0; }
	inline float* get_address_of_Epsilon_0() { return &___Epsilon_0; }
	inline void set_Epsilon_0(float value)
	{
		___Epsilon_0 = value;
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


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
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


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GameObject>
struct Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796, ___dictionary_0)); }
	inline Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796, ___current_3)); }
	inline KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___current_3)); }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>
struct KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00, ___value_1)); }
	inline InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  get_value_1() const { return ___value_1; }
	inline InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_1))->___GameObject_0), (void*)NULL);
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
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

// Tobii.G2OM.FocusedCandidate
struct FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442 
{
public:
	// UnityEngine.GameObject Tobii.G2OM.FocusedCandidate::GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameObject_0;
	// System.Boolean Tobii.G2OM.FocusedCandidate::IsRayValid
	bool ___IsRayValid_1;
	// UnityEngine.Vector3 Tobii.G2OM.FocusedCandidate::Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin_2;
	// UnityEngine.Vector3 Tobii.G2OM.FocusedCandidate::Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Direction_3;

public:
	inline static int32_t get_offset_of_GameObject_0() { return static_cast<int32_t>(offsetof(FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442, ___GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameObject_0() const { return ___GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameObject_0() { return &___GameObject_0; }
	inline void set_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsRayValid_1() { return static_cast<int32_t>(offsetof(FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442, ___IsRayValid_1)); }
	inline bool get_IsRayValid_1() const { return ___IsRayValid_1; }
	inline bool* get_address_of_IsRayValid_1() { return &___IsRayValid_1; }
	inline void set_IsRayValid_1(bool value)
	{
		___IsRayValid_1 = value;
	}

	inline static int32_t get_offset_of_Origin_2() { return static_cast<int32_t>(offsetof(FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442, ___Origin_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Origin_2() const { return ___Origin_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Origin_2() { return &___Origin_2; }
	inline void set_Origin_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Origin_2 = value;
	}

	inline static int32_t get_offset_of_Direction_3() { return static_cast<int32_t>(offsetof(FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442, ___Direction_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Direction_3() const { return ___Direction_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Direction_3() { return &___Direction_3; }
	inline void set_Direction_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Direction_3 = value;
	}
};

// Native definition for P/Invoke marshalling of Tobii.G2OM.FocusedCandidate
struct FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameObject_0;
	int32_t ___IsRayValid_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Direction_3;
};
// Native definition for COM marshalling of Tobii.G2OM.FocusedCandidate
struct FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameObject_0;
	int32_t ___IsRayValid_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Origin_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Direction_3;
};

// Tobii.G2OM.G2OM_Candidate
struct G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057 
{
public:
	// System.UInt64 Tobii.G2OM.G2OM_Candidate::candidate_id
	uint64_t ___candidate_id_0;
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_Candidate::aabb_max_local_space
	G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  ___aabb_max_local_space_1;
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_Candidate::aabb_min_local_space
	G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  ___aabb_min_local_space_2;
	// Tobii.G2OM.G2OM_Matrix4x4 Tobii.G2OM.G2OM_Candidate::world_to_local_matrix
	G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2  ___world_to_local_matrix_3;
	// Tobii.G2OM.G2OM_Matrix4x4 Tobii.G2OM.G2OM_Candidate::local_to_world_matrix
	G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2  ___local_to_world_matrix_4;

public:
	inline static int32_t get_offset_of_candidate_id_0() { return static_cast<int32_t>(offsetof(G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057, ___candidate_id_0)); }
	inline uint64_t get_candidate_id_0() const { return ___candidate_id_0; }
	inline uint64_t* get_address_of_candidate_id_0() { return &___candidate_id_0; }
	inline void set_candidate_id_0(uint64_t value)
	{
		___candidate_id_0 = value;
	}

	inline static int32_t get_offset_of_aabb_max_local_space_1() { return static_cast<int32_t>(offsetof(G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057, ___aabb_max_local_space_1)); }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  get_aabb_max_local_space_1() const { return ___aabb_max_local_space_1; }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D * get_address_of_aabb_max_local_space_1() { return &___aabb_max_local_space_1; }
	inline void set_aabb_max_local_space_1(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  value)
	{
		___aabb_max_local_space_1 = value;
	}

	inline static int32_t get_offset_of_aabb_min_local_space_2() { return static_cast<int32_t>(offsetof(G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057, ___aabb_min_local_space_2)); }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  get_aabb_min_local_space_2() const { return ___aabb_min_local_space_2; }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D * get_address_of_aabb_min_local_space_2() { return &___aabb_min_local_space_2; }
	inline void set_aabb_min_local_space_2(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  value)
	{
		___aabb_min_local_space_2 = value;
	}

	inline static int32_t get_offset_of_world_to_local_matrix_3() { return static_cast<int32_t>(offsetof(G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057, ___world_to_local_matrix_3)); }
	inline G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2  get_world_to_local_matrix_3() const { return ___world_to_local_matrix_3; }
	inline G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2 * get_address_of_world_to_local_matrix_3() { return &___world_to_local_matrix_3; }
	inline void set_world_to_local_matrix_3(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2  value)
	{
		___world_to_local_matrix_3 = value;
	}

	inline static int32_t get_offset_of_local_to_world_matrix_4() { return static_cast<int32_t>(offsetof(G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057, ___local_to_world_matrix_4)); }
	inline G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2  get_local_to_world_matrix_4() const { return ___local_to_world_matrix_4; }
	inline G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2 * get_address_of_local_to_world_matrix_4() { return &___local_to_world_matrix_4; }
	inline void set_local_to_world_matrix_4(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2  value)
	{
		___local_to_world_matrix_4 = value;
	}
};


// Tobii.G2OM.G2OM_Context
struct G2OM_Context_t1E356FC3F10BB40EE80360B60208B56E4FA1E8F5  : public RuntimeObject
{
public:
	// System.IntPtr Tobii.G2OM.G2OM_Context::_context
	intptr_t ____context_0;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(G2OM_Context_t1E356FC3F10BB40EE80360B60208B56E4FA1E8F5, ____context_0)); }
	inline intptr_t get__context_0() const { return ____context_0; }
	inline intptr_t* get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(intptr_t value)
	{
		____context_0 = value;
	}
};


// Tobii.G2OM.G2OM_Description
struct G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB  : public RuntimeObject
{
public:
	// System.Single Tobii.G2OM.G2OM_Description::HowLongToKeepCandidatesInSeconds
	float ___HowLongToKeepCandidatesInSeconds_0;
	// UnityEngine.LayerMask Tobii.G2OM.G2OM_Description::LayerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___LayerMask_1;
	// Tobii.G2OM.IG2OM_ObjectFinder Tobii.G2OM.G2OM_Description::ObjectFinder
	RuntimeObject* ___ObjectFinder_2;
	// Tobii.G2OM.IG2OM_ColliderDataProvider Tobii.G2OM.G2OM_Description::ColliderDataProvider
	RuntimeObject* ___ColliderDataProvider_3;
	// Tobii.G2OM.IG2OM_ObjectDistinguisher Tobii.G2OM.G2OM_Description::Distinguisher
	RuntimeObject* ___Distinguisher_4;
	// Tobii.G2OM.IG2OM_PostTicker Tobii.G2OM.G2OM_Description::PostTicker
	RuntimeObject* ___PostTicker_5;
	// Tobii.G2OM.IG2OM_Context Tobii.G2OM.G2OM_Description::Context
	RuntimeObject* ___Context_6;
	// Tobii.G2OM.G2OM_ContextCreateOptions Tobii.G2OM.G2OM_Description::Options
	G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724  ___Options_7;

public:
	inline static int32_t get_offset_of_HowLongToKeepCandidatesInSeconds_0() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___HowLongToKeepCandidatesInSeconds_0)); }
	inline float get_HowLongToKeepCandidatesInSeconds_0() const { return ___HowLongToKeepCandidatesInSeconds_0; }
	inline float* get_address_of_HowLongToKeepCandidatesInSeconds_0() { return &___HowLongToKeepCandidatesInSeconds_0; }
	inline void set_HowLongToKeepCandidatesInSeconds_0(float value)
	{
		___HowLongToKeepCandidatesInSeconds_0 = value;
	}

	inline static int32_t get_offset_of_LayerMask_1() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___LayerMask_1)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_LayerMask_1() const { return ___LayerMask_1; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_LayerMask_1() { return &___LayerMask_1; }
	inline void set_LayerMask_1(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___LayerMask_1 = value;
	}

	inline static int32_t get_offset_of_ObjectFinder_2() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___ObjectFinder_2)); }
	inline RuntimeObject* get_ObjectFinder_2() const { return ___ObjectFinder_2; }
	inline RuntimeObject** get_address_of_ObjectFinder_2() { return &___ObjectFinder_2; }
	inline void set_ObjectFinder_2(RuntimeObject* value)
	{
		___ObjectFinder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectFinder_2), (void*)value);
	}

	inline static int32_t get_offset_of_ColliderDataProvider_3() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___ColliderDataProvider_3)); }
	inline RuntimeObject* get_ColliderDataProvider_3() const { return ___ColliderDataProvider_3; }
	inline RuntimeObject** get_address_of_ColliderDataProvider_3() { return &___ColliderDataProvider_3; }
	inline void set_ColliderDataProvider_3(RuntimeObject* value)
	{
		___ColliderDataProvider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColliderDataProvider_3), (void*)value);
	}

	inline static int32_t get_offset_of_Distinguisher_4() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___Distinguisher_4)); }
	inline RuntimeObject* get_Distinguisher_4() const { return ___Distinguisher_4; }
	inline RuntimeObject** get_address_of_Distinguisher_4() { return &___Distinguisher_4; }
	inline void set_Distinguisher_4(RuntimeObject* value)
	{
		___Distinguisher_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Distinguisher_4), (void*)value);
	}

	inline static int32_t get_offset_of_PostTicker_5() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___PostTicker_5)); }
	inline RuntimeObject* get_PostTicker_5() const { return ___PostTicker_5; }
	inline RuntimeObject** get_address_of_PostTicker_5() { return &___PostTicker_5; }
	inline void set_PostTicker_5(RuntimeObject* value)
	{
		___PostTicker_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostTicker_5), (void*)value);
	}

	inline static int32_t get_offset_of_Context_6() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___Context_6)); }
	inline RuntimeObject* get_Context_6() const { return ___Context_6; }
	inline RuntimeObject** get_address_of_Context_6() { return &___Context_6; }
	inline void set_Context_6(RuntimeObject* value)
	{
		___Context_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Context_6), (void*)value);
	}

	inline static int32_t get_offset_of_Options_7() { return static_cast<int32_t>(offsetof(G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB, ___Options_7)); }
	inline G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724  get_Options_7() const { return ___Options_7; }
	inline G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724 * get_address_of_Options_7() { return &___Options_7; }
	inline void set_Options_7(G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724  value)
	{
		___Options_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Options_7))->___license_content_2), (void*)NULL);
	}
};


// Tobii.G2OM.G2OM_Error
struct G2OM_Error_tD5A05A0B06B00BF8E08890A27682FED4AD072A2F 
{
public:
	// System.Int32 Tobii.G2OM.G2OM_Error::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(G2OM_Error_tD5A05A0B06B00BF8E08890A27682FED4AD072A2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Tobii.G2OM.G2OM_ObjectFinder
struct G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05  : public RuntimeObject
{
public:
	// Tobii.G2OM.G2OM_GazeRay[] Tobii.G2OM.G2OM_ObjectFinder::_rays
	G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* ____rays_0;
	// UnityEngine.LayerMask Tobii.G2OM.G2OM_ObjectFinder::_layerMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ____layerMask_1;
	// System.Single Tobii.G2OM.G2OM_ObjectFinder::_previousTimestamp
	float ____previousTimestamp_2;
	// Tobii.G2OM.IG2OM_Context Tobii.G2OM.G2OM_ObjectFinder::_context
	RuntimeObject* ____context_3;

public:
	inline static int32_t get_offset_of__rays_0() { return static_cast<int32_t>(offsetof(G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05, ____rays_0)); }
	inline G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* get__rays_0() const { return ____rays_0; }
	inline G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526** get_address_of__rays_0() { return &____rays_0; }
	inline void set__rays_0(G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* value)
	{
		____rays_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rays_0), (void*)value);
	}

	inline static int32_t get_offset_of__layerMask_1() { return static_cast<int32_t>(offsetof(G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05, ____layerMask_1)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get__layerMask_1() const { return ____layerMask_1; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of__layerMask_1() { return &____layerMask_1; }
	inline void set__layerMask_1(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		____layerMask_1 = value;
	}

	inline static int32_t get_offset_of__previousTimestamp_2() { return static_cast<int32_t>(offsetof(G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05, ____previousTimestamp_2)); }
	inline float get__previousTimestamp_2() const { return ____previousTimestamp_2; }
	inline float* get_address_of__previousTimestamp_2() { return &____previousTimestamp_2; }
	inline void set__previousTimestamp_2(float value)
	{
		____previousTimestamp_2 = value;
	}

	inline static int32_t get_offset_of__context_3() { return static_cast<int32_t>(offsetof(G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05, ____context_3)); }
	inline RuntimeObject* get__context_3() const { return ____context_3; }
	inline RuntimeObject** get_address_of__context_3() { return &____context_3; }
	inline void set__context_3(RuntimeObject* value)
	{
		____context_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_3), (void*)value);
	}
};


// Tobii.G2OM.G2OM_Ray
struct G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9 
{
public:
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_Ray::origin
	G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  ___origin_0;
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_Ray::direction
	G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  ___direction_1;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9, ___origin_0)); }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  get_origin_0() const { return ___origin_0; }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  value)
	{
		___origin_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9, ___direction_1)); }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  get_direction_1() const { return ___direction_1; }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D * get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  value)
	{
		___direction_1 = value;
	}
};


// Tobii.G2OM.G2OM_RaycastResult
struct G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8 
{
public:
	// Tobii.G2OM.G2OM_Raycast Tobii.G2OM.G2OM_RaycastResult::gaze_ray
	G2OM_Raycast_t880D39AB15506A0A32FFFD984B53034CDDFB2016  ___gaze_ray_0;

public:
	inline static int32_t get_offset_of_gaze_ray_0() { return static_cast<int32_t>(offsetof(G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8, ___gaze_ray_0)); }
	inline G2OM_Raycast_t880D39AB15506A0A32FFFD984B53034CDDFB2016  get_gaze_ray_0() const { return ___gaze_ray_0; }
	inline G2OM_Raycast_t880D39AB15506A0A32FFFD984B53034CDDFB2016 * get_address_of_gaze_ray_0() { return &___gaze_ray_0; }
	inline void set_gaze_ray_0(G2OM_Raycast_t880D39AB15506A0A32FFFD984B53034CDDFB2016  value)
	{
		___gaze_ray_0 = value;
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

// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions
struct G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 
{
public:
	// System.UInt32 Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions::capacity
	uint32_t ___capacity_0;
	// System.UInt32 Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions::thread_count
	uint32_t ___thread_count_1;
	// System.IntPtr Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions::license_ptr
	intptr_t ___license_ptr_2;
	// System.UInt32 Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions::license_length
	uint32_t ___license_length_3;

public:
	inline static int32_t get_offset_of_capacity_0() { return static_cast<int32_t>(offsetof(G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691, ___capacity_0)); }
	inline uint32_t get_capacity_0() const { return ___capacity_0; }
	inline uint32_t* get_address_of_capacity_0() { return &___capacity_0; }
	inline void set_capacity_0(uint32_t value)
	{
		___capacity_0 = value;
	}

	inline static int32_t get_offset_of_thread_count_1() { return static_cast<int32_t>(offsetof(G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691, ___thread_count_1)); }
	inline uint32_t get_thread_count_1() const { return ___thread_count_1; }
	inline uint32_t* get_address_of_thread_count_1() { return &___thread_count_1; }
	inline void set_thread_count_1(uint32_t value)
	{
		___thread_count_1 = value;
	}

	inline static int32_t get_offset_of_license_ptr_2() { return static_cast<int32_t>(offsetof(G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691, ___license_ptr_2)); }
	inline intptr_t get_license_ptr_2() const { return ___license_ptr_2; }
	inline intptr_t* get_address_of_license_ptr_2() { return &___license_ptr_2; }
	inline void set_license_ptr_2(intptr_t value)
	{
		___license_ptr_2 = value;
	}

	inline static int32_t get_offset_of_license_length_3() { return static_cast<int32_t>(offsetof(G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691, ___license_length_3)); }
	inline uint32_t get_license_length_3() const { return ___license_length_3; }
	inline uint32_t* get_address_of_license_length_3() { return &___license_length_3; }
	inline void set_license_length_3(uint32_t value)
	{
		___license_length_3 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>
struct Enumerator_t36794CEF849490921D061F887DE469134992B045 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t36794CEF849490921D061F887DE469134992B045, ___dictionary_0)); }
	inline Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t36794CEF849490921D061F887DE469134992B045, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t36794CEF849490921D061F887DE469134992B045, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t36794CEF849490921D061F887DE469134992B045, ___current_3)); }
	inline KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___value_1))->___GameObject_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t36794CEF849490921D061F887DE469134992B045, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Tobii.G2OM.G2OM_GazeRay
struct G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA 
{
public:
	// Tobii.G2OM.G2OM_Ray Tobii.G2OM.G2OM_GazeRay::ray
	G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9  ___ray_0;
	// System.Byte Tobii.G2OM.G2OM_GazeRay::is_valid
	uint8_t ___is_valid_1;

public:
	inline static int32_t get_offset_of_ray_0() { return static_cast<int32_t>(offsetof(G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA, ___ray_0)); }
	inline G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9  get_ray_0() const { return ___ray_0; }
	inline G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9 * get_address_of_ray_0() { return &___ray_0; }
	inline void set_ray_0(G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9  value)
	{
		___ray_0 = value;
	}

	inline static int32_t get_offset_of_is_valid_1() { return static_cast<int32_t>(offsetof(G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA, ___is_valid_1)); }
	inline uint8_t get_is_valid_1() const { return ___is_valid_1; }
	inline uint8_t* get_address_of_is_valid_1() { return &___is_valid_1; }
	inline void set_is_valid_1(uint8_t value)
	{
		___is_valid_1 = value;
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Boolean>
struct Func_2_t0B9D374790B8C9FDCA96A193ED205DE97A1AF798  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single>
struct Func_2_t75E51AFE956686E40D3DF8B08359799B6E2DF8A8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Tobii.G2OM.G2OM_CandidateResult
struct G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08 
{
public:
	// System.UInt64 Tobii.G2OM.G2OM_CandidateResult::candidate_id
	uint64_t ___candidate_id_0;
	// System.Single Tobii.G2OM.G2OM_CandidateResult::score
	float ___score_1;
	// Tobii.G2OM.G2OM_GazeRay Tobii.G2OM.G2OM_CandidateResult::adjusted_gaze_ray_world_space
	G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  ___adjusted_gaze_ray_world_space_2;

public:
	inline static int32_t get_offset_of_candidate_id_0() { return static_cast<int32_t>(offsetof(G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08, ___candidate_id_0)); }
	inline uint64_t get_candidate_id_0() const { return ___candidate_id_0; }
	inline uint64_t* get_address_of_candidate_id_0() { return &___candidate_id_0; }
	inline void set_candidate_id_0(uint64_t value)
	{
		___candidate_id_0 = value;
	}

	inline static int32_t get_offset_of_score_1() { return static_cast<int32_t>(offsetof(G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08, ___score_1)); }
	inline float get_score_1() const { return ___score_1; }
	inline float* get_address_of_score_1() { return &___score_1; }
	inline void set_score_1(float value)
	{
		___score_1 = value;
	}

	inline static int32_t get_offset_of_adjusted_gaze_ray_world_space_2() { return static_cast<int32_t>(offsetof(G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08, ___adjusted_gaze_ray_world_space_2)); }
	inline G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  get_adjusted_gaze_ray_world_space_2() const { return ___adjusted_gaze_ray_world_space_2; }
	inline G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA * get_address_of_adjusted_gaze_ray_world_space_2() { return &___adjusted_gaze_ray_world_space_2; }
	inline void set_adjusted_gaze_ray_world_space_2(G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  value)
	{
		___adjusted_gaze_ray_world_space_2 = value;
	}
};


// Tobii.G2OM.G2OM_DeviceData
struct G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 
{
public:
	// System.Single Tobii.G2OM.G2OM_DeviceData::timestamp
	float ___timestamp_0;
	// Tobii.G2OM.G2OM_GazeRay Tobii.G2OM.G2OM_DeviceData::gaze_ray_world_space
	G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  ___gaze_ray_world_space_1;
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_DeviceData::camera_up_direction_world_space
	G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  ___camera_up_direction_world_space_2;
	// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_DeviceData::camera_right_direction_world_space
	G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  ___camera_right_direction_world_space_3;

public:
	inline static int32_t get_offset_of_timestamp_0() { return static_cast<int32_t>(offsetof(G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14, ___timestamp_0)); }
	inline float get_timestamp_0() const { return ___timestamp_0; }
	inline float* get_address_of_timestamp_0() { return &___timestamp_0; }
	inline void set_timestamp_0(float value)
	{
		___timestamp_0 = value;
	}

	inline static int32_t get_offset_of_gaze_ray_world_space_1() { return static_cast<int32_t>(offsetof(G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14, ___gaze_ray_world_space_1)); }
	inline G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  get_gaze_ray_world_space_1() const { return ___gaze_ray_world_space_1; }
	inline G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA * get_address_of_gaze_ray_world_space_1() { return &___gaze_ray_world_space_1; }
	inline void set_gaze_ray_world_space_1(G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  value)
	{
		___gaze_ray_world_space_1 = value;
	}

	inline static int32_t get_offset_of_camera_up_direction_world_space_2() { return static_cast<int32_t>(offsetof(G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14, ___camera_up_direction_world_space_2)); }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  get_camera_up_direction_world_space_2() const { return ___camera_up_direction_world_space_2; }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D * get_address_of_camera_up_direction_world_space_2() { return &___camera_up_direction_world_space_2; }
	inline void set_camera_up_direction_world_space_2(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  value)
	{
		___camera_up_direction_world_space_2 = value;
	}

	inline static int32_t get_offset_of_camera_right_direction_world_space_3() { return static_cast<int32_t>(offsetof(G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14, ___camera_right_direction_world_space_3)); }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  get_camera_right_direction_world_space_3() const { return ___camera_right_direction_world_space_3; }
	inline G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D * get_address_of_camera_right_direction_world_space_3() { return &___camera_right_direction_world_space_3; }
	inline void set_camera_right_direction_world_space_3(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  value)
	{
		___camera_right_direction_world_space_3 = value;
	}
};


// UnityEngine.MeshFilter
struct MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
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


// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.CapsuleCollider
struct CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// Tobii.G2OM.G2OM
struct G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C  : public RuntimeObject
{
public:
	// Tobii.G2OM.IG2OM_ObjectFinder Tobii.G2OM.G2OM::_objectFinder
	RuntimeObject* ____objectFinder_0;
	// Tobii.G2OM.IG2OM_ColliderDataProvider Tobii.G2OM.G2OM::_colliderDataProvider
	RuntimeObject* ____colliderDataProvider_1;
	// Tobii.G2OM.IG2OM_ObjectDistinguisher Tobii.G2OM.G2OM::_distinguisher
	RuntimeObject* ____distinguisher_2;
	// Tobii.G2OM.IG2OM_PostTicker Tobii.G2OM.G2OM::_postTicker
	RuntimeObject* ____postTicker_3;
	// Tobii.G2OM.IG2OM_Context Tobii.G2OM.G2OM::_context
	RuntimeObject* ____context_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate> Tobii.G2OM.G2OM::_internalCandidates
	Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * ____internalCandidates_5;
	// System.Single Tobii.G2OM.G2OM::_howLongToKeepCandidatesInMemory
	float ____howLongToKeepCandidatesInMemory_6;
	// System.Int32 Tobii.G2OM.G2OM::_internalCapacity
	int32_t ____internalCapacity_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject> Tobii.G2OM.G2OM::_newCandidates
	Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * ____newCandidates_8;
	// System.Collections.Generic.List`1<System.Int32> Tobii.G2OM.G2OM::_keysToRemove
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ____keysToRemove_9;
	// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate> Tobii.G2OM.G2OM::_gazeFocusedObjects
	List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * ____gazeFocusedObjects_10;
	// Tobii.G2OM.G2OM_DeviceData Tobii.G2OM.G2OM::_deviceData
	G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  ____deviceData_11;
	// Tobii.G2OM.G2OM_Candidate[] Tobii.G2OM.G2OM::_nativeCandidates
	G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* ____nativeCandidates_12;
	// Tobii.G2OM.G2OM_CandidateResult[] Tobii.G2OM.G2OM::_nativeCandidatesResult
	G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* ____nativeCandidatesResult_13;

public:
	inline static int32_t get_offset_of__objectFinder_0() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____objectFinder_0)); }
	inline RuntimeObject* get__objectFinder_0() const { return ____objectFinder_0; }
	inline RuntimeObject** get_address_of__objectFinder_0() { return &____objectFinder_0; }
	inline void set__objectFinder_0(RuntimeObject* value)
	{
		____objectFinder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____objectFinder_0), (void*)value);
	}

	inline static int32_t get_offset_of__colliderDataProvider_1() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____colliderDataProvider_1)); }
	inline RuntimeObject* get__colliderDataProvider_1() const { return ____colliderDataProvider_1; }
	inline RuntimeObject** get_address_of__colliderDataProvider_1() { return &____colliderDataProvider_1; }
	inline void set__colliderDataProvider_1(RuntimeObject* value)
	{
		____colliderDataProvider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colliderDataProvider_1), (void*)value);
	}

	inline static int32_t get_offset_of__distinguisher_2() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____distinguisher_2)); }
	inline RuntimeObject* get__distinguisher_2() const { return ____distinguisher_2; }
	inline RuntimeObject** get_address_of__distinguisher_2() { return &____distinguisher_2; }
	inline void set__distinguisher_2(RuntimeObject* value)
	{
		____distinguisher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____distinguisher_2), (void*)value);
	}

	inline static int32_t get_offset_of__postTicker_3() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____postTicker_3)); }
	inline RuntimeObject* get__postTicker_3() const { return ____postTicker_3; }
	inline RuntimeObject** get_address_of__postTicker_3() { return &____postTicker_3; }
	inline void set__postTicker_3(RuntimeObject* value)
	{
		____postTicker_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____postTicker_3), (void*)value);
	}

	inline static int32_t get_offset_of__context_4() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____context_4)); }
	inline RuntimeObject* get__context_4() const { return ____context_4; }
	inline RuntimeObject** get_address_of__context_4() { return &____context_4; }
	inline void set__context_4(RuntimeObject* value)
	{
		____context_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____context_4), (void*)value);
	}

	inline static int32_t get_offset_of__internalCandidates_5() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____internalCandidates_5)); }
	inline Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * get__internalCandidates_5() const { return ____internalCandidates_5; }
	inline Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 ** get_address_of__internalCandidates_5() { return &____internalCandidates_5; }
	inline void set__internalCandidates_5(Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * value)
	{
		____internalCandidates_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____internalCandidates_5), (void*)value);
	}

	inline static int32_t get_offset_of__howLongToKeepCandidatesInMemory_6() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____howLongToKeepCandidatesInMemory_6)); }
	inline float get__howLongToKeepCandidatesInMemory_6() const { return ____howLongToKeepCandidatesInMemory_6; }
	inline float* get_address_of__howLongToKeepCandidatesInMemory_6() { return &____howLongToKeepCandidatesInMemory_6; }
	inline void set__howLongToKeepCandidatesInMemory_6(float value)
	{
		____howLongToKeepCandidatesInMemory_6 = value;
	}

	inline static int32_t get_offset_of__internalCapacity_7() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____internalCapacity_7)); }
	inline int32_t get__internalCapacity_7() const { return ____internalCapacity_7; }
	inline int32_t* get_address_of__internalCapacity_7() { return &____internalCapacity_7; }
	inline void set__internalCapacity_7(int32_t value)
	{
		____internalCapacity_7 = value;
	}

	inline static int32_t get_offset_of__newCandidates_8() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____newCandidates_8)); }
	inline Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * get__newCandidates_8() const { return ____newCandidates_8; }
	inline Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 ** get_address_of__newCandidates_8() { return &____newCandidates_8; }
	inline void set__newCandidates_8(Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * value)
	{
		____newCandidates_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newCandidates_8), (void*)value);
	}

	inline static int32_t get_offset_of__keysToRemove_9() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____keysToRemove_9)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get__keysToRemove_9() const { return ____keysToRemove_9; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of__keysToRemove_9() { return &____keysToRemove_9; }
	inline void set__keysToRemove_9(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		____keysToRemove_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keysToRemove_9), (void*)value);
	}

	inline static int32_t get_offset_of__gazeFocusedObjects_10() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____gazeFocusedObjects_10)); }
	inline List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * get__gazeFocusedObjects_10() const { return ____gazeFocusedObjects_10; }
	inline List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C ** get_address_of__gazeFocusedObjects_10() { return &____gazeFocusedObjects_10; }
	inline void set__gazeFocusedObjects_10(List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * value)
	{
		____gazeFocusedObjects_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gazeFocusedObjects_10), (void*)value);
	}

	inline static int32_t get_offset_of__deviceData_11() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____deviceData_11)); }
	inline G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  get__deviceData_11() const { return ____deviceData_11; }
	inline G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * get_address_of__deviceData_11() { return &____deviceData_11; }
	inline void set__deviceData_11(G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  value)
	{
		____deviceData_11 = value;
	}

	inline static int32_t get_offset_of__nativeCandidates_12() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____nativeCandidates_12)); }
	inline G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* get__nativeCandidates_12() const { return ____nativeCandidates_12; }
	inline G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E** get_address_of__nativeCandidates_12() { return &____nativeCandidates_12; }
	inline void set__nativeCandidates_12(G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* value)
	{
		____nativeCandidates_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativeCandidates_12), (void*)value);
	}

	inline static int32_t get_offset_of__nativeCandidatesResult_13() { return static_cast<int32_t>(offsetof(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C, ____nativeCandidatesResult_13)); }
	inline G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* get__nativeCandidatesResult_13() const { return ____nativeCandidatesResult_13; }
	inline G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02** get_address_of__nativeCandidatesResult_13() { return &____nativeCandidatesResult_13; }
	inline void set__nativeCandidatesResult_13(G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* value)
	{
		____nativeCandidatesResult_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nativeCandidatesResult_13), (void*)value);
	}
};


// UnityEngine.SphereCollider
struct SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Tobii.G2OM.G2OM_Candidate[]
struct G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057  m_Items[1];

public:
	inline G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057  value)
	{
		m_Items[index] = value;
	}
};
// Tobii.G2OM.G2OM_CandidateResult[]
struct G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08  m_Items[1];

public:
	inline G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Tobii.G2OM.G2OM_GazeRay[]
struct G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  m_Items[1];

public:
	inline G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Tobii.G2OM.FocusedCandidate[]
struct FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  m_Items[1];

public:
	inline FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___GameObject_0), (void*)NULL);
	}
	inline FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___GameObject_0), (void*)NULL);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC005492A35FF3810936B20F0D2CB95C92703DD39_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m246DDEBE7436911EF460597C67CB507217C9E44D_gshared (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC5E16D024F1EAA95A174859EAB1C192A596FC849_gshared (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m72AA6A3E6BEB604A7417604A6541872EF8919009_gshared (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7_gshared (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C  Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mDE9A7354DA43E5437FC711CB6543E7D1266AE536_gshared (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, int32_t ___key0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  Dictionary_2_get_Item_m814AC0C584D059CEF22EAF2514890B45F72BA25C_gshared (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE5180AAAC16603E71993A8F46CCDB13BAF23CC55_gshared (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, int32_t ___key0, InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t36794CEF849490921D061F887DE469134992B045  Dictionary_2_GetEnumerator_mB5E3CA5ADE783862DC4C62DA142911E9A83468D4_gshared (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  Enumerator_get_Current_m480E622FFCF9A727BCFD4296D6E3EF2995D27BDC_gshared_inline (Enumerator_t36794CEF849490921D061F887DE469134992B045 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  KeyValuePair_2_get_Value_mF77E84266CD7B5910C5C0C47D8DC3068DEB7B7C5_gshared_inline (KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_gshared_inline (KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m653B6CA12D885210321CFF5235AE4242C3A90C6C_gshared (Enumerator_t36794CEF849490921D061F887DE469134992B045 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m02CB645F41D85C58ACFFD33F64996A94648BF508_gshared (Enumerator_t36794CEF849490921D061F887DE469134992B045 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m4CE11EB5E08F6B77F11BFDDD751DC4C12053F556_gshared (Func_2_t0B9D374790B8C9FDCA96A193ED205DE97A1AF798 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_mAF46F4D7D127A8A0A6B4526CC327ECD1291408D7_gshared (RuntimeObject* ___source0, Func_2_t0B9D374790B8C9FDCA96A193ED205DE97A1AF798 * ___predicate1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m2E25CA9C65B74B28238645769A2EBC7D7CE538F0_gshared (Func_2_t75E51AFE956686E40D3DF8B08359799B6E2DF8A8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderByDescending<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderByDescending_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m364E1901FA14B23AD8917580995A2DF897009A40_gshared (RuntimeObject* ___source0, Func_2_t75E51AFE956686E40D3DF8B08359799B6E2DF8A8 * ___keySelector1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  Enumerable_ElementAt_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_m58EFF427D0A4BF1CDDA3D7A3938A5F4CFB396064_gshared (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m9AEECAEDEA37C29D6C803A6F2586A50C2306ACE7_gshared (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5490D531ACEAC668B2AC2FB5DA74CED478593AF9_gshared (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m260090E50EDC1DB0A8300240D63CCCF7E48692FD_gshared (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * __this, FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void Tobii.G2OM.G2OM_ObjectDistinguisher`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectDistinguisher_1__ctor_m3F85189917F872DBC23E799249D1320A8B26C927_gshared (G2OM_ObjectDistinguisher_1_t8F9DFCC69ADED09B385F1043D01D482E4FB323CE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m14135ABCC9D07B90731529E85DFAAA2BBD1ED8DB_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mCDEC89B2EB171FB3B8DE932158BC505ADC3C1C16_gshared_inline (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  List_1_get_Item_m59B4DED04CE74CDA40ED7067E22E8D8BF8EE9F72_gshared_inline (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::GetComponents<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponents_TisRuntimeObject_m05916636D3EA83EDCD2E5DE7CFF6FC53F182A71D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___results0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);

// System.Void Tobii.G2OM.G2OM::.ctor(Tobii.G2OM.G2OM_Description)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM__ctor_m2D2FAC3AF98AC67CBBA406AE5E2B12043A2C304D (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * __this, G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * ___description0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m0D4EBC4081ED9D92C85A98F6381A2A260E141C50 (Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mC005492A35FF3810936B20F0D2CB95C92703DD39_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m246DDEBE7436911EF460597C67CB507217C9E44D (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m246DDEBE7436911EF460597C67CB507217C9E44D_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::.ctor(System.Int32)
inline void List_1__ctor_mC5E16D024F1EAA95A174859EAB1C192A596FC849 (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C *, int32_t, const RuntimeMethod*))List_1__ctor_mC5E16D024F1EAA95A174859EAB1C192A596FC849_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
inline void List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::Clear()
inline void Dictionary_2_Clear_m72AA6A3E6BEB604A7417604A6541872EF8919009 (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 *, const RuntimeMethod*))Dictionary_2_Clear_m72AA6A3E6BEB604A7417604A6541872EF8919009_gshared)(__this, method);
}
// System.Void Tobii.G2OM.G2OM::AddNewCandidates(System.Single,System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_AddNewCandidates_mD0DD33BAC8EEFB61C34301F07BC3A52CD193667B (float ___now0, Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * ___allCandidates1, Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * ___newCandidates2, const RuntimeMethod* method);
// System.Single Tobii.G2OM.G2OM::get_MaxHistoryInSeconds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float G2OM_get_MaxHistoryInSeconds_mBE37AA467A7AE86592155402DB38F653981998D3_inline (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * __this, const RuntimeMethod* method);
// System.Void Tobii.G2OM.G2OM::RemoveOldCandidates(System.Single,System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single,System.Collections.Generic.List`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_RemoveOldCandidates_mD1528FA2FBD6EF7AF02E42EF205F6E2FA835496B (float ___now0, Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * ___allCandidates1, float ___maxHistory2, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___keysToRemove3, int32_t ___maxKeysToKeep4, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Count()
inline int32_t Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7 (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 *, const RuntimeMethod*))Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7_gshared)(__this, method);
}
// System.Void Tobii.G2OM.G2OM::UpdateListOfFocusedCandidates(Tobii.G2OM.G2OM_CandidateResult[],System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_UpdateListOfFocusedCandidates_mC2A41938EFEA4765183A3961C723AC944085DCCD (G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* ___candidateResult0, Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * ___allCandidates1, List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * ___gazeFocusedObjects2, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796  Dictionary_2_GetEnumerator_m70FD0317C637CC892E0EF411E72E61744D936489 (Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796  (*) (Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GameObject>::get_Current()
inline KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B  Enumerator_get_Current_m98F82DCCF5C9518973A5FB956F7CAAB87854279E_inline (Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B  (*) (Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796 *, const RuntimeMethod*))Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m7E4E0342C7361DDA09C8554ED99B8AB2875980EC_inline (KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mDE9A7354DA43E5437FC711CB6543E7D1266AE536 (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mDE9A7354DA43E5437FC711CB6543E7D1266AE536_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.GameObject>::get_Value()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * KeyValuePair_2_get_Value_mF17844CADA24FB37E362DCEA74951CFF0D53942B_inline (KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Item(!0)
inline InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  Dictionary_2_get_Item_m814AC0C584D059CEF22EAF2514890B45F72BA25C (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  (*) (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m814AC0C584D059CEF22EAF2514890B45F72BA25C_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE5180AAAC16603E71993A8F46CCDB13BAF23CC55 (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, int32_t ___key0, InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 *, int32_t, InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895 , const RuntimeMethod*))Dictionary_2_set_Item_mE5180AAAC16603E71993A8F46CCDB13BAF23CC55_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mEE3F2E6C3CBBB5F2377D2D86DE3C62CC016800A4 (Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796 *, const RuntimeMethod*))Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m7854A3FE002BF0D4937196B8F05B75EF5170310B (Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796 *, const RuntimeMethod*))Enumerator_Dispose_m7567E65C01E35A09AD2AD4814D708A8E76469D31_gshared)(__this, method);
}
// System.Void Tobii.G2OM.G2OM/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m4BEDACEAB740212DA9A0F65626C3083973B1BD6F (U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::GetEnumerator()
inline Enumerator_t36794CEF849490921D061F887DE469134992B045  Dictionary_2_GetEnumerator_mB5E3CA5ADE783862DC4C62DA142911E9A83468D4 (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t36794CEF849490921D061F887DE469134992B045  (*) (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mB5E3CA5ADE783862DC4C62DA142911E9A83468D4_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>::get_Current()
inline KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  Enumerator_get_Current_m480E622FFCF9A727BCFD4296D6E3EF2995D27BDC_inline (Enumerator_t36794CEF849490921D061F887DE469134992B045 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  (*) (Enumerator_t36794CEF849490921D061F887DE469134992B045 *, const RuntimeMethod*))Enumerator_get_Current_m480E622FFCF9A727BCFD4296D6E3EF2995D27BDC_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Value()
inline InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  KeyValuePair_2_get_Value_mF77E84266CD7B5910C5C0C47D8DC3068DEB7B7C5_inline (KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 * __this, const RuntimeMethod* method)
{
	return ((  InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  (*) (KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mF77E84266CD7B5910C5C0C47D8DC3068DEB7B7C5_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_inline (KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>::MoveNext()
inline bool Enumerator_MoveNext_m653B6CA12D885210321CFF5235AE4242C3A90C6C (Enumerator_t36794CEF849490921D061F887DE469134992B045 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t36794CEF849490921D061F887DE469134992B045 *, const RuntimeMethod*))Enumerator_MoveNext_m653B6CA12D885210321CFF5235AE4242C3A90C6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Tobii.G2OM.InternalCandidate>::Dispose()
inline void Enumerator_Dispose_m02CB645F41D85C58ACFFD33F64996A94648BF508 (Enumerator_t36794CEF849490921D061F887DE469134992B045 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t36794CEF849490921D061F887DE469134992B045 *, const RuntimeMethod*))Enumerator_Dispose_m02CB645F41D85C58ACFFD33F64996A94648BF508_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4CE11EB5E08F6B77F11BFDDD751DC4C12053F556 (Func_2_t0B9D374790B8C9FDCA96A193ED205DE97A1AF798 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0B9D374790B8C9FDCA96A193ED205DE97A1AF798 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m4CE11EB5E08F6B77F11BFDDD751DC4C12053F556_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_mAF46F4D7D127A8A0A6B4526CC327ECD1291408D7 (RuntimeObject* ___source0, Func_2_t0B9D374790B8C9FDCA96A193ED205DE97A1AF798 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0B9D374790B8C9FDCA96A193ED205DE97A1AF798 *, const RuntimeMethod*))Enumerable_Where_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_mAF46F4D7D127A8A0A6B4526CC327ECD1291408D7_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2E25CA9C65B74B28238645769A2EBC7D7CE538F0 (Func_2_t75E51AFE956686E40D3DF8B08359799B6E2DF8A8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t75E51AFE956686E40D3DF8B08359799B6E2DF8A8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m2E25CA9C65B74B28238645769A2EBC7D7CE538F0_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderByDescending<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_OrderByDescending_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m364E1901FA14B23AD8917580995A2DF897009A40 (RuntimeObject* ___source0, Func_2_t75E51AFE956686E40D3DF8B08359799B6E2DF8A8 * ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t75E51AFE956686E40D3DF8B08359799B6E2DF8A8 *, const RuntimeMethod*))Enumerable_OrderByDescending_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m364E1901FA14B23AD8917580995A2DF897009A40_gshared)(___source0, ___keySelector1, method);
}
// !!0 System.Linq.Enumerable::ElementAt<System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>>(System.Collections.Generic.IEnumerable`1<!!0>,System.Int32)
inline KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  Enumerable_ElementAt_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_m58EFF427D0A4BF1CDDA3D7A3938A5F4CFB396064 (RuntimeObject* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_ElementAt_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_m58EFF427D0A4BF1CDDA3D7A3938A5F4CFB396064_gshared)(___source0, ___index1, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>::Remove(!0)
inline bool Dictionary_2_Remove_m9AEECAEDEA37C29D6C803A6F2586A50C2306ACE7 (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m9AEECAEDEA37C29D6C803A6F2586A50C2306ACE7_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::Clear()
inline void List_1_Clear_m5490D531ACEAC668B2AC2FB5DA74CED478593AF9 (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C *, const RuntimeMethod*))List_1_Clear_m5490D531ACEAC668B2AC2FB5DA74CED478593AF9_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Tobii.G2OM.G2OM_ExtensionMethods::ToBool(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool G2OM_ExtensionMethods_ToBool_m0DBD316C67F26A342CCC33C6F9F48141874DD39D (uint8_t ___b0, const RuntimeMethod* method);
// UnityEngine.Vector3 Tobii.G2OM.G2OM_UnityExtensionMethods::Vector(Tobii.G2OM.G2OM_Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G2OM_UnityExtensionMethods_Vector_mCEEA5AF945BEBF2504D3A64B1C6D3114AEC1FBA4 (G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  ___vector0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::Add(!0)
inline void List_1_Add_m260090E50EDC1DB0A8300240D63CCCF7E48692FD (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * __this, FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C *, FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442 , const RuntimeMethod*))List_1_Add_m260090E50EDC1DB0A8300240D63CCCF7E48692FD_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1 (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  BoxCollider_get_center_m832B93439717C72D4A3B427C6E8F5B54E2DBD669 (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.SphereCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SphereCollider_get_center_mBFAE4FFFC76B8FD8F1B2B2F12C52A30470443D3A (SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.SphereCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereCollider_get_radius_m403989140BDAD513299276953B481167CF08D02F (SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_ClampMagnitude_mF85598307D6CF3B4E5BEEB218CEDDCE39CDF3336 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, float ___maxLength1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CapsuleCollider_get_center_m6374F7457A9450CAFFAD2DF0C9D1419BF9E304CB (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.CapsuleCollider::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CapsuleCollider_get_direction_m2C5110BBCA2CC1C63183CDBD73B6D11CC89B0918 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.CapsuleCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m5746DDE5E6A099269FC9DAD253887C58E8A064D0 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417 (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * __this, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Mesh_get_bounds_m8704A23E8BA2D77C89FD4BF4379238062B1BE5DF (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_UnityExtensionMethods::AsG2OMVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  G2OM_UnityExtensionMethods_AsG2OMVector3_m285727854FC4760794F7B4EA667B3F3C0EA9DB06 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// Tobii.G2OM.G2OM_Matrix4x4 Tobii.G2OM.G2OM_UnityExtensionMethods::AsG2OMMatrix4x4(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2  G2OM_UnityExtensionMethods_AsG2OMMatrix4x4_m94ED5422DE280A850560B08E082B024D67559802 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_ContextCreateEx(System.IntPtr&,Tobii.G2OM.G2OM_ContextCreateOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_ContextCreateEx_m1B9DDAA52521BD4442611D32EB4CC3523E97B005 (intptr_t* ___context0, G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724 * ___options1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_Process(System.IntPtr,Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.G2OM_RaycastResult&,System.UInt32,Tobii.G2OM.G2OM_Candidate[],Tobii.G2OM.G2OM_CandidateResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_Process_mE05755CF4B7B4F32ACDDBD946B393C59EF32BB3D (intptr_t ___context0, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * ___deviceData1, G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8 * ___raycastResult2, uint32_t ___candidatesCount3, G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* ___candidates4, G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* ___candidateResults5, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_ContextDestroy(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_ContextDestroy_mCB317F7B57994D659486C60C6A21750C26B93918 (intptr_t* ___context0, const RuntimeMethod* method);
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_GetCandidateSearchPattern(System.IntPtr,Tobii.G2OM.G2OM_DeviceData&,System.UInt32,Tobii.G2OM.G2OM_GazeRay[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_GetCandidateSearchPattern_mAE6A42A99E3BFEDA11F27EAD72F96C601E1C548A (intptr_t ___context0, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * ___deviceData1, uint32_t ___numberOfRays2, G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* ___mutatedRays3, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C (int32_t ___intVal0, const RuntimeMethod* method);
// System.Void Tobii.G2OM.G2OM_ObjectFinder::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectFinder__ctor_m62AF547F70665623C64A51ABBBD67B3CF28D756E (G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05 * __this, float ___now0, const RuntimeMethod* method);
// System.Void Tobii.G2OM.G2OM_ColliderDataProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ColliderDataProvider__ctor_m8C394A0798E21E138E2EC37A610CEDA661A41823 (G2OM_ColliderDataProvider_t8A1B9B2716DB0CEED380194C4228207DCE0676EC * __this, const RuntimeMethod* method);
// System.Void Tobii.G2OM.G2OM_ObjectDistinguisher`1<Tobii.G2OM.IGazeFocusable>::.ctor()
inline void G2OM_ObjectDistinguisher_1__ctor_mF12467B2434FC26D70C5F92219C4551AB71313CF (G2OM_ObjectDistinguisher_1_tD07485647985E763F438B7499D89F0340453759E * __this, const RuntimeMethod* method)
{
	((  void (*) (G2OM_ObjectDistinguisher_1_tD07485647985E763F438B7499D89F0340453759E *, const RuntimeMethod*))G2OM_ObjectDistinguisher_1__ctor_m3F85189917F872DBC23E799249D1320A8B26C927_gshared)(__this, method);
}
// System.Void Tobii.G2OM.G2OM_PostTicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_PostTicker__ctor_m94F6CCD8D684BFFC9EB6FC2D8BE36722FA7A6957 (G2OM_PostTicker_tAAA7AB0665B1DBC0BF5C43AADE66C7E1EF8A0906 * __this, const RuntimeMethod* method);
// System.Void Tobii.G2OM.G2OM_Context::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Context__ctor_mB393A9751F24EEB36D7062C90D6586D6D5613160 (G2OM_Context_t1E356FC3F10BB40EE80360B60208B56E4FA1E8F5 * __this, const RuntimeMethod* method);
// Tobii.G2OM.G2OM_ContextCreateOptions Tobii.G2OM.Interop::G2OM_InitializeOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724  Interop_G2OM_InitializeOptions_m178C3D46C58F6DBEDE9448403EE0B7BAE0929C0A (const RuntimeMethod* method);
// System.Int32 Tobii.G2OM.G2OM_ObjectFinder::GetNumberOfRays(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t G2OM_ObjectFinder_GetNumberOfRays_m2E376699E7189E9DE24EB101419E666E2A4BA7B2 (float ___dt0, const RuntimeMethod* method);
// System.Void Tobii.G2OM.G2OM_ObjectFinder::FindObjects(Tobii.G2OM.G2OM_GazeRay[],System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>,Tobii.G2OM.IG2OM_ObjectDistinguisher,UnityEngine.LayerMask,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectFinder_FindObjects_m3AF03E7D68174C416419C87AB2FD3FD9A101FB30 (G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* ___rays0, Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * ___foundObjects1, RuntimeObject* ___distinguisher2, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___layerMask3, int32_t ___numberOfRaysThisFrame4, const RuntimeMethod* method);
// System.Boolean Tobii.G2OM.G2OM_ObjectFinder::FindGameObject(Tobii.G2OM.G2OM_Ray&,UnityEngine.LayerMask,UnityEngine.GameObject&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool G2OM_ObjectFinder_FindGameObject_mA35B3E9A0CB57BECDB49BC94B6E46B443D21C0E3 (G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9 * ___ray0, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___layerMask1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** ___gameObject2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Byte Tobii.G2OM.G2OM_ExtensionMethods::ToByte(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t G2OM_ExtensionMethods_ToByte_m9F6BF5ADFF7FFEE00E444B180D3A752743D3A914 (bool ___b0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F (float ___f0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::Clear()
inline void Dictionary_2_Clear_m36D039052B9BF2DDF9D0EA0B92FEC0735BE2EB7E (Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 *, const RuntimeMethod*))Dictionary_2_Clear_m14135ABCC9D07B90731529E85DFAAA2BBD1ED8DB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m66775372D34FFF649F9BE8E446C5D89F511FFF3E (Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>::Add(!0,!1)
inline void Dictionary_2_Add_mA610FFDDFC70D85D351F86D009E64CD61E3EF886 (Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * __this, int32_t ___key0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 *, int32_t, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCBD5F7D498C246713EDDBB446E97205DA206C49C (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::get_Count()
inline int32_t List_1_get_Count_mCDEC89B2EB171FB3B8DE932158BC505ADC3C1C16_inline (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C *, const RuntimeMethod*))List_1_get_Count_mCDEC89B2EB171FB3B8DE932158BC505ADC3C1C16_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>::get_Item(System.Int32)
inline FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  List_1_get_Item_m59B4DED04CE74CDA40ED7067E22E8D8BF8EE9F72_inline (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  (*) (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C *, int32_t, const RuntimeMethod*))List_1_get_Item_m59B4DED04CE74CDA40ED7067E22E8D8BF8EE9F72_gshared_inline)(__this, ___index0, method);
}
// System.Void Tobii.G2OM.G2OM_PostTicker::UpdateFocusableComponents(UnityEngine.GameObject,UnityEngine.GameObject&,System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_PostTicker_UpdateFocusableComponents_m77BDB869629ECD2ABE62375F8AAEB914ED0A046E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___focusedObject0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** ___previousFocusedObject1, List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * ___gazeFocusableComponents2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>::GetEnumerator()
inline Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A  List_1_GetEnumerator_m23991899E2477DD9A3F79FBDADBA319A2297D065 (List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A  (*) (List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Tobii.G2OM.IGazeFocusable>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mA512F8CD40848044A35C75D34991E6F18AD3A452_inline (Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Tobii.G2OM.IGazeFocusable>::MoveNext()
inline bool Enumerator_MoveNext_m49483B538F6952C08CE81F8447169816E1991D2B (Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Tobii.G2OM.IGazeFocusable>::Dispose()
inline void Enumerator_Dispose_mA1C37F88C2F5DE21ACDB87535F85256A4E1DA310 (Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>::Clear()
inline void List_1_Clear_m0AFC962BC8563D0CEB1EA5B1D39CC6130B0A8DFB (List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::GetComponents<Tobii.G2OM.IGazeFocusable>(System.Collections.Generic.List`1<!!0>)
inline void GameObject_GetComponents_TisIGazeFocusable_t6AE88CC8132B6BE9E45FFD4CDD3929557250481F_m99B8B9B7C23BA9F43677F5F19CA5C687F3D0FCE3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * ___results0, const RuntimeMethod* method)
{
	((  void (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 *, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m05916636D3EA83EDCD2E5DE7CFF6FC53F182A71D_gshared)(__this, ___results0, method);
}
// System.Void System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>::.ctor(System.Int32)
inline void List_1__ctor_mFFC9DB51A8DE8C9DC75BC85A0FB833D218C3C3FD (List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_InitializeOptions(Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_InitializeOptions_m5B3B1CCC75312227E69143F8A427518D8385DFAF (G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 * ___options0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC (int32_t ___cb0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m05D5F5A9F9BA4C1B748AAE7266B3C0E9D9EE2012 (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method);
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_ContextCreateEx(System.IntPtr&,Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_ContextCreateEx_m961B15C68A6B7A7968F722F93BCDD90C9C902E8F (intptr_t* ___context0, G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 * ___options1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
inline bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared)(__this, ___item0, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL g2om_context_options_init(G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL g2om_context_create_ex(intptr_t*, G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL g2om_process(intptr_t, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *, G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8 *, uint32_t, G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057 *, G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08 *);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL g2om_context_destroy(intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL g2om_get_candidate_search_pattern(intptr_t, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *, uint32_t, G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA *);
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
// Conversion methods for marshalling of: Tobii.G2OM.FocusedCandidate
IL2CPP_EXTERN_C void FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442_marshal_pinvoke(const FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442& unmarshaled, FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442_marshaled_pinvoke& marshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'FocusedCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442_marshal_pinvoke_back(const FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442_marshaled_pinvoke& marshaled, FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442& unmarshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'FocusedCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Tobii.G2OM.FocusedCandidate
IL2CPP_EXTERN_C void FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442_marshal_pinvoke_cleanup(FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Tobii.G2OM.FocusedCandidate
IL2CPP_EXTERN_C void FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442_marshal_com(const FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442& unmarshaled, FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442_marshaled_com& marshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'FocusedCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442_marshal_com_back(const FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442_marshaled_com& marshaled, FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442& unmarshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'FocusedCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Tobii.G2OM.FocusedCandidate
IL2CPP_EXTERN_C void FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442_marshal_com_cleanup(FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442_marshaled_com& marshaled)
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
// Tobii.G2OM.G2OM Tobii.G2OM.G2OM::Create(Tobii.G2OM.G2OM_Description)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * G2OM_Create_m05896AB723E3055BB7A95264064C56C6EFF22C5B (G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * ___description0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new G2OM(description);
		G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * L_0 = ___description0;
		G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * L_1 = (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C *)il2cpp_codegen_object_new(G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C_il2cpp_TypeInfo_var);
		G2OM__ctor_m2D2FAC3AF98AC67CBBA406AE5E2B12043A2C304D(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single Tobii.G2OM.G2OM::get_MaxHistoryInSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float G2OM_get_MaxHistoryInSeconds_mBE37AA467A7AE86592155402DB38F653981998D3 (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * __this, const RuntimeMethod* method)
{
	{
		// public float MaxHistoryInSeconds { get { return _howLongToKeepCandidatesInMemory; } }
		float L_0 = __this->get__howLongToKeepCandidatesInMemory_6();
		return L_0;
	}
}
// System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate> Tobii.G2OM.G2OM::get_GazeFocusedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * G2OM_get_GazeFocusedObjects_mCC8E75B3D0A877B8E999F238EF0DF616AB8D274B (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * __this, const RuntimeMethod* method)
{
	{
		// public List<FocusedCandidate> GazeFocusedObjects { get { return _gazeFocusedObjects; } }
		List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * L_0 = __this->get__gazeFocusedObjects_10();
		return L_0;
	}
}
// System.Void Tobii.G2OM.G2OM::.ctor(Tobii.G2OM.G2OM_Description)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM__ctor_m2D2FAC3AF98AC67CBBA406AE5E2B12043A2C304D (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * __this, G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * ___description0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0D4EBC4081ED9D92C85A98F6381A2A260E141C50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m246DDEBE7436911EF460597C67CB507217C9E44D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_Context_t76A1678AB05CC3E9530C8AEA2D90DE68D4136722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_ObjectFinder_tDE13D081D582DC99781887DF958EF7D474C94445_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC5E16D024F1EAA95A174859EAB1C192A596FC849_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private G2OM(G2OM_Description description)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _internalCapacity = (int)description.Options.capacity;
		G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * L_0 = ___description0;
		NullCheck(L_0);
		G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724 * L_1 = L_0->get_address_of_Options_7();
		uint32_t L_2 = L_1->get_capacity_0();
		__this->set__internalCapacity_7(L_2);
		// _howLongToKeepCandidatesInMemory = description.HowLongToKeepCandidatesInSeconds;
		G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * L_3 = ___description0;
		NullCheck(L_3);
		float L_4 = L_3->get_HowLongToKeepCandidatesInSeconds_0();
		__this->set__howLongToKeepCandidatesInMemory_6(L_4);
		// _context = description.Context;
		G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * L_5 = ___description0;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->get_Context_6();
		__this->set__context_4(L_6);
		// _context.Setup(description.Options);
		RuntimeObject* L_7 = __this->get__context_4();
		G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * L_8 = ___description0;
		NullCheck(L_8);
		G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724  L_9 = L_8->get_Options_7();
		NullCheck(L_7);
		bool L_10;
		L_10 = InterfaceFuncInvoker1< bool, G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724  >::Invoke(0 /* System.Boolean Tobii.G2OM.IG2OM_Context::Setup(Tobii.G2OM.G2OM_ContextCreateOptions) */, IG2OM_Context_t76A1678AB05CC3E9530C8AEA2D90DE68D4136722_il2cpp_TypeInfo_var, L_7, L_9);
		// _objectFinder = description.ObjectFinder;
		G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * L_11 = ___description0;
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->get_ObjectFinder_2();
		__this->set__objectFinder_0(L_12);
		// _objectFinder.Setup(_context, description.LayerMask);
		RuntimeObject* L_13 = __this->get__objectFinder_0();
		RuntimeObject* L_14 = __this->get__context_4();
		G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * L_15 = ___description0;
		NullCheck(L_15);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_16 = L_15->get_LayerMask_1();
		NullCheck(L_13);
		InterfaceActionInvoker2< RuntimeObject*, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(2 /* System.Void Tobii.G2OM.IG2OM_ObjectFinder::Setup(Tobii.G2OM.IG2OM_Context,UnityEngine.LayerMask) */, IG2OM_ObjectFinder_tDE13D081D582DC99781887DF958EF7D474C94445_il2cpp_TypeInfo_var, L_13, L_14, L_16);
		// _colliderDataProvider = description.ColliderDataProvider;
		G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * L_17 = ___description0;
		NullCheck(L_17);
		RuntimeObject* L_18 = L_17->get_ColliderDataProvider_3();
		__this->set__colliderDataProvider_1(L_18);
		// _distinguisher = description.Distinguisher;
		G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * L_19 = ___description0;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->get_Distinguisher_4();
		__this->set__distinguisher_2(L_20);
		// _postTicker = description.PostTicker;
		G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * L_21 = ___description0;
		NullCheck(L_21);
		RuntimeObject* L_22 = L_21->get_PostTicker_5();
		__this->set__postTicker_3(L_22);
		// _newCandidates = new Dictionary<int, GameObject>(_internalCapacity);
		int32_t L_23 = __this->get__internalCapacity_7();
		Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * L_24 = (Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 *)il2cpp_codegen_object_new(Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0D4EBC4081ED9D92C85A98F6381A2A260E141C50(L_24, L_23, /*hidden argument*/Dictionary_2__ctor_m0D4EBC4081ED9D92C85A98F6381A2A260E141C50_RuntimeMethod_var);
		__this->set__newCandidates_8(L_24);
		// _internalCandidates = new Dictionary<int, InternalCandidate>(_internalCapacity);
		int32_t L_25 = __this->get__internalCapacity_7();
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_26 = (Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 *)il2cpp_codegen_object_new(Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m246DDEBE7436911EF460597C67CB507217C9E44D(L_26, L_25, /*hidden argument*/Dictionary_2__ctor_m246DDEBE7436911EF460597C67CB507217C9E44D_RuntimeMethod_var);
		__this->set__internalCandidates_5(L_26);
		// _gazeFocusedObjects = new List<FocusedCandidate>(_internalCapacity);
		int32_t L_27 = __this->get__internalCapacity_7();
		List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * L_28 = (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C *)il2cpp_codegen_object_new(List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C_il2cpp_TypeInfo_var);
		List_1__ctor_mC5E16D024F1EAA95A174859EAB1C192A596FC849(L_28, L_27, /*hidden argument*/List_1__ctor_mC5E16D024F1EAA95A174859EAB1C192A596FC849_RuntimeMethod_var);
		__this->set__gazeFocusedObjects_10(L_28);
		// _keysToRemove = new List<int>(_internalCapacity);
		int32_t L_29 = __this->get__internalCapacity_7();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_30 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91(L_30, L_29, /*hidden argument*/List_1__ctor_m2E6FAF166391779F0D33F6E8282BA71222DA1A91_RuntimeMethod_var);
		__this->set__keysToRemove_9(L_30);
		// _nativeCandidates = new G2OM_Candidate[_internalCapacity];
		int32_t L_31 = __this->get__internalCapacity_7();
		G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* L_32 = (G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E*)(G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E*)SZArrayNew(G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E_il2cpp_TypeInfo_var, (uint32_t)L_31);
		__this->set__nativeCandidates_12(L_32);
		// _nativeCandidatesResult = new G2OM_CandidateResult[_internalCapacity];
		int32_t L_33 = __this->get__internalCapacity_7();
		G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* L_34 = (G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02*)(G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02*)SZArrayNew(G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02_il2cpp_TypeInfo_var, (uint32_t)L_33);
		__this->set__nativeCandidatesResult_13(L_34);
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Clear_m48E4F43C0E2A2CDC1561AE39EA38FDEC49382E66 (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m72AA6A3E6BEB604A7417604A6541872EF8919009_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _internalCandidates.Clear();
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_0 = __this->get__internalCandidates_5();
		NullCheck(L_0);
		Dictionary_2_Clear_m72AA6A3E6BEB604A7417604A6541872EF8919009(L_0, /*hidden argument*/Dictionary_2_Clear_m72AA6A3E6BEB604A7417604A6541872EF8919009_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM::Tick(Tobii.G2OM.G2OM_DeviceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Tick_m8CFFB902FA6305285F141FCF85BAAE440CCAE12E (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * __this, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  ___deviceData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_ColliderDataProvider_t902B64FB6CC49EB5144558A308B6AD50CF8518B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_Context_t76A1678AB05CC3E9530C8AEA2D90DE68D4136722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_ObjectFinder_tDE13D081D582DC99781887DF958EF7D474C94445_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_PostTicker_t20B92D25A8EB1162F7B58A942D165501F94C7CC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _deviceData = deviceData;
		G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14  L_0 = ___deviceData0;
		__this->set__deviceData_11(L_0);
		// var now = _deviceData.timestamp;
		G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * L_1 = __this->get_address_of__deviceData_11();
		float L_2 = L_1->get_timestamp_0();
		// _objectFinder.GetRelevantGazeObjects(ref _deviceData, _newCandidates, _distinguisher);
		RuntimeObject* L_3 = __this->get__objectFinder_0();
		G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * L_4 = __this->get_address_of__deviceData_11();
		Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * L_5 = __this->get__newCandidates_8();
		RuntimeObject* L_6 = __this->get__distinguisher_2();
		NullCheck(L_3);
		InterfaceActionInvoker3< G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *, Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 *, RuntimeObject* >::Invoke(0 /* System.Void Tobii.G2OM.IG2OM_ObjectFinder::GetRelevantGazeObjects(Tobii.G2OM.G2OM_DeviceData&,System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>,Tobii.G2OM.IG2OM_ObjectDistinguisher) */, IG2OM_ObjectFinder_tDE13D081D582DC99781887DF958EF7D474C94445_il2cpp_TypeInfo_var, L_3, (G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *)L_4, L_5, L_6);
		// AddNewCandidates(now, _internalCandidates, _newCandidates);
		float L_7 = L_2;
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_8 = __this->get__internalCandidates_5();
		Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * L_9 = __this->get__newCandidates_8();
		G2OM_AddNewCandidates_mD0DD33BAC8EEFB61C34301F07BC3A52CD193667B(L_7, L_8, L_9, /*hidden argument*/NULL);
		// RemoveOldCandidates(now, _internalCandidates, MaxHistoryInSeconds, _keysToRemove, _internalCapacity);
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_10 = __this->get__internalCandidates_5();
		float L_11;
		L_11 = G2OM_get_MaxHistoryInSeconds_mBE37AA467A7AE86592155402DB38F653981998D3_inline(__this, /*hidden argument*/NULL);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_12 = __this->get__keysToRemove_9();
		int32_t L_13 = __this->get__internalCapacity_7();
		G2OM_RemoveOldCandidates_mD1528FA2FBD6EF7AF02E42EF205F6E2FA835496B(L_7, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		// if (_internalCandidates.Count > _nativeCandidates.Length)
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_14 = __this->get__internalCandidates_5();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7(L_14, /*hidden argument*/Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7_RuntimeMethod_var);
		G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* L_16 = __this->get__nativeCandidates_12();
		NullCheck(L_16);
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_009f;
		}
	}
	{
		// _nativeCandidates = new G2OM_Candidate[_internalCandidates.Count];
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_17 = __this->get__internalCandidates_5();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7(L_17, /*hidden argument*/Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7_RuntimeMethod_var);
		G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* L_19 = (G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E*)(G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E*)SZArrayNew(G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->set__nativeCandidates_12(L_19);
		// _nativeCandidatesResult = new G2OM_CandidateResult[_internalCandidates.Count];
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_20 = __this->get__internalCandidates_5();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7(L_20, /*hidden argument*/Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7_RuntimeMethod_var);
		G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* L_22 = (G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02*)(G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02*)SZArrayNew(G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->set__nativeCandidatesResult_13(L_22);
	}

IL_009f:
	{
		// _colliderDataProvider.GetColliderData(_internalCandidates, _nativeCandidates);
		RuntimeObject* L_23 = __this->get__colliderDataProvider_1();
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_24 = __this->get__internalCandidates_5();
		G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* L_25 = __this->get__nativeCandidates_12();
		NullCheck(L_23);
		InterfaceActionInvoker2< Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 *, G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* >::Invoke(0 /* System.Void Tobii.G2OM.IG2OM_ColliderDataProvider::GetColliderData(System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,Tobii.G2OM.G2OM_Candidate[]) */, IG2OM_ColliderDataProvider_t902B64FB6CC49EB5144558A308B6AD50CF8518B3_il2cpp_TypeInfo_var, L_23, L_24, L_25);
		// var raycastResult = _objectFinder.GetRaycastResult(ref _deviceData, _distinguisher);
		RuntimeObject* L_26 = __this->get__objectFinder_0();
		G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * L_27 = __this->get_address_of__deviceData_11();
		RuntimeObject* L_28 = __this->get__distinguisher_2();
		NullCheck(L_26);
		G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8  L_29;
		L_29 = InterfaceFuncInvoker2< G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8 , G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *, RuntimeObject* >::Invoke(1 /* Tobii.G2OM.G2OM_RaycastResult Tobii.G2OM.IG2OM_ObjectFinder::GetRaycastResult(Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.IG2OM_ObjectDistinguisher) */, IG2OM_ObjectFinder_tDE13D081D582DC99781887DF958EF7D474C94445_il2cpp_TypeInfo_var, L_26, (G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *)L_27, L_28);
		V_0 = L_29;
		// _context.Process(ref _deviceData, ref raycastResult, _internalCandidates.Count, _nativeCandidates, _nativeCandidatesResult); // TODO: What to do if this call fails??
		RuntimeObject* L_30 = __this->get__context_4();
		G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * L_31 = __this->get_address_of__deviceData_11();
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_32 = __this->get__internalCandidates_5();
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7(L_32, /*hidden argument*/Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7_RuntimeMethod_var);
		G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* L_34 = __this->get__nativeCandidates_12();
		G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* L_35 = __this->get__nativeCandidatesResult_13();
		NullCheck(L_30);
		bool L_36;
		L_36 = InterfaceFuncInvoker5< bool, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *, G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8 *, int32_t, G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E*, G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* >::Invoke(1 /* System.Boolean Tobii.G2OM.IG2OM_Context::Process(Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.G2OM_RaycastResult&,System.Int32,Tobii.G2OM.G2OM_Candidate[],Tobii.G2OM.G2OM_CandidateResult[]) */, IG2OM_Context_t76A1678AB05CC3E9530C8AEA2D90DE68D4136722_il2cpp_TypeInfo_var, L_30, (G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *)L_31, (G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8 *)(&V_0), L_33, L_34, L_35);
		// UpdateListOfFocusedCandidates(_nativeCandidatesResult, _internalCandidates, _gazeFocusedObjects);
		G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* L_37 = __this->get__nativeCandidatesResult_13();
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_38 = __this->get__internalCandidates_5();
		List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * L_39 = __this->get__gazeFocusedObjects_10();
		G2OM_UpdateListOfFocusedCandidates_mC2A41938EFEA4765183A3961C723AC944085DCCD(L_37, L_38, L_39, /*hidden argument*/NULL);
		// _postTicker.TickComplete(_gazeFocusedObjects);
		RuntimeObject* L_40 = __this->get__postTicker_3();
		List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * L_41 = __this->get__gazeFocusedObjects_10();
		NullCheck(L_40);
		InterfaceActionInvoker1< List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * >::Invoke(0 /* System.Void Tobii.G2OM.IG2OM_PostTicker::TickComplete(System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>) */, IG2OM_PostTicker_t20B92D25A8EB1162F7B58A942D165501F94C7CC4_il2cpp_TypeInfo_var, L_40, L_41);
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Destroy_mF71BC3363C4702D18EB5E4664D8020C7C2D44449 (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_Context_t76A1678AB05CC3E9530C8AEA2D90DE68D4136722_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _context.Destroy();
		RuntimeObject* L_0 = __this->get__context_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Tobii.G2OM.IG2OM_Context::Destroy() */, IG2OM_Context_t76A1678AB05CC3E9530C8AEA2D90DE68D4136722_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM::AddNewCandidates(System.Single,System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_AddNewCandidates_mD0DD33BAC8EEFB61C34301F07BC3A52CD193667B (float ___now0, Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * ___allCandidates1, Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * ___newCandidates2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mDE9A7354DA43E5437FC711CB6543E7D1266AE536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m70FD0317C637CC892E0EF411E72E61744D936489_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m814AC0C584D059CEF22EAF2514890B45F72BA25C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE5180AAAC16603E71993A8F46CCDB13BAF23CC55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7854A3FE002BF0D4937196B8F05B75EF5170310B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEE3F2E6C3CBBB5F2377D2D86DE3C62CC016800A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m98F82DCCF5C9518973A5FB956F7CAAB87854279E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m7E4E0342C7361DDA09C8554ED99B8AB2875980EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mF17844CADA24FB37E362DCEA74951CFF0D53942B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  V_3;
	memset((&V_3), 0, sizeof(V_3));
	InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		// foreach (var newCandidate in newCandidates)
		Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * L_0 = ___newCandidates2;
		NullCheck(L_0);
		Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796  L_1;
		L_1 = Dictionary_2_GetEnumerator_m70FD0317C637CC892E0EF411E72E61744D936489(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m70FD0317C637CC892E0EF411E72E61744D936489_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0054;
		}

IL_0009:
		{
			// foreach (var newCandidate in newCandidates)
			KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B  L_2;
			L_2 = Enumerator_get_Current_m98F82DCCF5C9518973A5FB956F7CAAB87854279E_inline((Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m98F82DCCF5C9518973A5FB956F7CAAB87854279E_RuntimeMethod_var);
			V_1 = L_2;
			// var id = newCandidate.Key;
			int32_t L_3;
			L_3 = KeyValuePair_2_get_Key_m7E4E0342C7361DDA09C8554ED99B8AB2875980EC_inline((KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m7E4E0342C7361DDA09C8554ED99B8AB2875980EC_RuntimeMethod_var);
			V_2 = L_3;
			// var candidate = allCandidates.ContainsKey(id) ? allCandidates[id] : new InternalCandidate { GameObject = newCandidate.Value };
			Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_4 = ___allCandidates1;
			int32_t L_5 = V_2;
			NullCheck(L_4);
			bool L_6;
			L_6 = Dictionary_2_ContainsKey_mDE9A7354DA43E5437FC711CB6543E7D1266AE536(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_mDE9A7354DA43E5437FC711CB6543E7D1266AE536_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_003c;
			}
		}

IL_0022:
		{
			il2cpp_codegen_initobj((&V_4), sizeof(InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895 ));
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
			L_7 = KeyValuePair_2_get_Value_mF17844CADA24FB37E362DCEA74951CFF0D53942B_inline((KeyValuePair_2_t59FDC87FFE346248E82C0337FFC4C4B623C59F5B *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mF17844CADA24FB37E362DCEA74951CFF0D53942B_RuntimeMethod_var);
			(&V_4)->set_GameObject_0(L_7);
			InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  L_8 = V_4;
			G_B5_0 = L_8;
			goto IL_0043;
		}

IL_003c:
		{
			Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_9 = ___allCandidates1;
			int32_t L_10 = V_2;
			NullCheck(L_9);
			InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  L_11;
			L_11 = Dictionary_2_get_Item_m814AC0C584D059CEF22EAF2514890B45F72BA25C(L_9, L_10, /*hidden argument*/Dictionary_2_get_Item_m814AC0C584D059CEF22EAF2514890B45F72BA25C_RuntimeMethod_var);
			G_B5_0 = L_11;
		}

IL_0043:
		{
			V_3 = G_B5_0;
			// candidate.Timestamp = now;
			float L_12 = ___now0;
			(&V_3)->set_Timestamp_1(L_12);
			// allCandidates[id] = candidate;
			Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_13 = ___allCandidates1;
			int32_t L_14 = V_2;
			InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  L_15 = V_3;
			NullCheck(L_13);
			Dictionary_2_set_Item_mE5180AAAC16603E71993A8F46CCDB13BAF23CC55(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_set_Item_mE5180AAAC16603E71993A8F46CCDB13BAF23CC55_RuntimeMethod_var);
		}

IL_0054:
		{
			// foreach (var newCandidate in newCandidates)
			bool L_16;
			L_16 = Enumerator_MoveNext_mEE3F2E6C3CBBB5F2377D2D86DE3C62CC016800A4((Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mEE3F2E6C3CBBB5F2377D2D86DE3C62CC016800A4_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_0009;
			}
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x6D, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7854A3FE002BF0D4937196B8F05B75EF5170310B((Enumerator_t020DF360FF7CFE80217938F94CC07655643AD796 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7854A3FE002BF0D4937196B8F05B75EF5170310B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6D, IL_006d)
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM::RemoveOldCandidates(System.Single,System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Single,System.Collections.Generic.List`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_RemoveOldCandidates_mD1528FA2FBD6EF7AF02E42EF205F6E2FA835496B (float ___now0, Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * ___allCandidates1, float ___maxHistory2, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___keysToRemove3, int32_t ___maxKeysToKeep4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mB5E3CA5ADE783862DC4C62DA142911E9A83468D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m9AEECAEDEA37C29D6C803A6F2586A50C2306ACE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ElementAt_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_m58EFF427D0A4BF1CDDA3D7A3938A5F4CFB396064_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderByDescending_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m364E1901FA14B23AD8917580995A2DF897009A40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_mAF46F4D7D127A8A0A6B4526CC327ECD1291408D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m02CB645F41D85C58ACFFD33F64996A94648BF508_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m653B6CA12D885210321CFF5235AE4242C3A90C6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m480E622FFCF9A727BCFD4296D6E3EF2995D27BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m2E25CA9C65B74B28238645769A2EBC7D7CE538F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m4CE11EB5E08F6B77F11BFDDD751DC4C12053F556_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0B9D374790B8C9FDCA96A193ED205DE97A1AF798_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t75E51AFE956686E40D3DF8B08359799B6E2DF8A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mF77E84266CD7B5910C5C0C47D8DC3068DEB7B7C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__0_m6A8770DC7CCFEFC2B07955E8ADA3324A24297D34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__1_m59A0878B39A1F61375E0D38030F54894A99089E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4267DC00BD0088B83F322827C2C735288AFD6E8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7295D86B191797D130C4ABB7DDB1EB6E2F69410D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9F78FA22EEAB5B4404E19906FD7CA028B2F9ADA);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t36794CEF849490921D061F887DE469134992B045  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  V_3;
	memset((&V_3), 0, sizeof(V_3));
	InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	int32_t V_7 = 0;
	KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * L_0 = (U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass32_0__ctor_m4BEDACEAB740212DA9A0F65626C3083973B1BD6F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * L_1 = V_0;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2 = ___keysToRemove3;
		NullCheck(L_1);
		L_1->set_keysToRemove_0(L_2);
		U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * L_3 = V_0;
		float L_4 = ___now0;
		NullCheck(L_3);
		L_3->set_now_1(L_4);
		// keysToRemove.Clear();
		U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * L_5 = V_0;
		NullCheck(L_5);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_6 = L_5->get_keysToRemove_0();
		NullCheck(L_6);
		List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A(L_6, /*hidden argument*/List_1_Clear_m508B72E5229FAE7042D99A04555F66F10C597C7A_RuntimeMethod_var);
		// foreach (var candidate in allCandidates)
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_7 = ___allCandidates1;
		NullCheck(L_7);
		Enumerator_t36794CEF849490921D061F887DE469134992B045  L_8;
		L_8 = Dictionary_2_GetEnumerator_mB5E3CA5ADE783862DC4C62DA142911E9A83468D4(L_7, /*hidden argument*/Dictionary_2_GetEnumerator_mB5E3CA5ADE783862DC4C62DA142911E9A83468D4_RuntimeMethod_var);
		V_2 = L_8;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006b;
		}

IL_0028:
		{
			// foreach (var candidate in allCandidates)
			KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  L_9;
			L_9 = Enumerator_get_Current_m480E622FFCF9A727BCFD4296D6E3EF2995D27BDC_inline((Enumerator_t36794CEF849490921D061F887DE469134992B045 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m480E622FFCF9A727BCFD4296D6E3EF2995D27BDC_RuntimeMethod_var);
			V_3 = L_9;
			// var internalCandidate = candidate.Value;
			InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  L_10;
			L_10 = KeyValuePair_2_get_Value_mF77E84266CD7B5910C5C0C47D8DC3068DEB7B7C5_inline((KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mF77E84266CD7B5910C5C0C47D8DC3068DEB7B7C5_RuntimeMethod_var);
			V_4 = L_10;
			// var diff = now - internalCandidate.Timestamp;
			U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * L_11 = V_0;
			NullCheck(L_11);
			float L_12 = L_11->get_now_1();
			InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  L_13 = V_4;
			float L_14 = L_13.get_Timestamp_1();
			// if (diff <= maxHistory && internalCandidate.GameObject != null) continue;
			float L_15 = ___maxHistory2;
			if ((!(((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14))) <= ((float)L_15))))
			{
				goto IL_0059;
			}
		}

IL_004a:
		{
			InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  L_16 = V_4;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = L_16.get_GameObject_0();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_18;
			L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (L_18)
			{
				goto IL_006b;
			}
		}

IL_0059:
		{
			// keysToRemove.Add(candidate.Key);
			U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * L_19 = V_0;
			NullCheck(L_19);
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_20 = L_19->get_keysToRemove_0();
			int32_t L_21;
			L_21 = KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_inline((KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_RuntimeMethod_var);
			NullCheck(L_20);
			List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_20, L_21, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		}

IL_006b:
		{
			// foreach (var candidate in allCandidates)
			bool L_22;
			L_22 = Enumerator_MoveNext_m653B6CA12D885210321CFF5235AE4242C3A90C6C((Enumerator_t36794CEF849490921D061F887DE469134992B045 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m653B6CA12D885210321CFF5235AE4242C3A90C6C_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0028;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x84, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m02CB645F41D85C58ACFFD33F64996A94648BF508((Enumerator_t36794CEF849490921D061F887DE469134992B045 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m02CB645F41D85C58ACFFD33F64996A94648BF508_RuntimeMethod_var);
		IL2CPP_END_FINALLY(118)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x84, IL_0084)
	}

IL_0084:
	{
		// var remainCount = allCandidates.Count - keysToRemove.Count;
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_23 = ___allCandidates1;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7(L_23, /*hidden argument*/Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7_RuntimeMethod_var);
		U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * L_25 = V_0;
		NullCheck(L_25);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_26 = L_25->get_keysToRemove_0();
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_26, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_27));
		// if(remainCount > maxKeysToKeep)
		int32_t L_28 = V_1;
		int32_t L_29 = ___maxKeysToKeep4;
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_013c;
		}
	}
	{
		// var removeCount = remainCount - maxKeysToKeep;
		int32_t L_30 = V_1;
		int32_t L_31 = ___maxKeysToKeep4;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31));
		// var ordered = allCandidates.Where(k => keysToRemove.Contains(k.Key) == false).OrderByDescending(k => now - k.Value.Timestamp);
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_32 = ___allCandidates1;
		U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * L_33 = V_0;
		Func_2_t0B9D374790B8C9FDCA96A193ED205DE97A1AF798 * L_34 = (Func_2_t0B9D374790B8C9FDCA96A193ED205DE97A1AF798 *)il2cpp_codegen_object_new(Func_2_t0B9D374790B8C9FDCA96A193ED205DE97A1AF798_il2cpp_TypeInfo_var);
		Func_2__ctor_m4CE11EB5E08F6B77F11BFDDD751DC4C12053F556(L_34, L_33, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__0_m6A8770DC7CCFEFC2B07955E8ADA3324A24297D34_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m4CE11EB5E08F6B77F11BFDDD751DC4C12053F556_RuntimeMethod_var);
		RuntimeObject* L_35;
		L_35 = Enumerable_Where_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_mAF46F4D7D127A8A0A6B4526CC327ECD1291408D7(L_32, L_34, /*hidden argument*/Enumerable_Where_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_mAF46F4D7D127A8A0A6B4526CC327ECD1291408D7_RuntimeMethod_var);
		U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * L_36 = V_0;
		Func_2_t75E51AFE956686E40D3DF8B08359799B6E2DF8A8 * L_37 = (Func_2_t75E51AFE956686E40D3DF8B08359799B6E2DF8A8 *)il2cpp_codegen_object_new(Func_2_t75E51AFE956686E40D3DF8B08359799B6E2DF8A8_il2cpp_TypeInfo_var);
		Func_2__ctor_m2E25CA9C65B74B28238645769A2EBC7D7CE538F0(L_37, L_36, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__1_m59A0878B39A1F61375E0D38030F54894A99089E9_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m2E25CA9C65B74B28238645769A2EBC7D7CE538F0_RuntimeMethod_var);
		RuntimeObject* L_38;
		L_38 = Enumerable_OrderByDescending_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m364E1901FA14B23AD8917580995A2DF897009A40(L_35, L_37, /*hidden argument*/Enumerable_OrderByDescending_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m364E1901FA14B23AD8917580995A2DF897009A40_RuntimeMethod_var);
		V_6 = L_38;
		// for(int i = 0; i < removeCount; i++)
		V_7 = 0;
		goto IL_00f2;
	}

IL_00cf:
	{
		// keysToRemove.Add(ordered.ElementAt(i).Key);
		U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * L_39 = V_0;
		NullCheck(L_39);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_40 = L_39->get_keysToRemove_0();
		RuntimeObject* L_41 = V_6;
		int32_t L_42 = V_7;
		KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  L_43;
		L_43 = Enumerable_ElementAt_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_m58EFF427D0A4BF1CDDA3D7A3938A5F4CFB396064(L_41, L_42, /*hidden argument*/Enumerable_ElementAt_TisKeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00_m58EFF427D0A4BF1CDDA3D7A3938A5F4CFB396064_RuntimeMethod_var);
		V_8 = L_43;
		int32_t L_44;
		L_44 = KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_inline((KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_RuntimeMethod_var);
		NullCheck(L_40);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_40, L_44, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// for(int i = 0; i < removeCount; i++)
		int32_t L_45 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_00f2:
	{
		// for(int i = 0; i < removeCount; i++)
		int32_t L_46 = V_7;
		int32_t L_47 = V_5;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_00cf;
		}
	}
	{
		// Debug.LogWarning("G2OM was initialized with a capacity of " + maxKeysToKeep + ", but was supplied with " + allCandidates.Count + ". Purging overflowing elements.");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = L_48;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, _stringLiteral7295D86B191797D130C4ABB7DDB1EB6E2F69410D);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7295D86B191797D130C4ABB7DDB1EB6E2F69410D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_50 = L_49;
		String_t* L_51;
		L_51 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___maxKeysToKeep4), /*hidden argument*/NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_51);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = L_50;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteralC9F78FA22EEAB5B4404E19906FD7CA028B2F9ADA);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC9F78FA22EEAB5B4404E19906FD7CA028B2F9ADA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53 = L_52;
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_54 = ___allCandidates1;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7(L_54, /*hidden argument*/Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7_RuntimeMethod_var);
		V_9 = L_55;
		String_t* L_56;
		L_56 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_9), /*hidden argument*/NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_56);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_56);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = L_53;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteral4267DC00BD0088B83F322827C2C735288AFD6E8A);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4267DC00BD0088B83F322827C2C735288AFD6E8A);
		String_t* L_58;
		L_58 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_58, /*hidden argument*/NULL);
	}

IL_013c:
	{
		// foreach (var key in keysToRemove)
		U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * L_59 = V_0;
		NullCheck(L_59);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_60 = L_59->get_keysToRemove_0();
		NullCheck(L_60);
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_61;
		L_61 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_60, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		V_10 = L_61;
	}

IL_0149:
	try
	{ // begin try (depth: 1)
		{
			goto IL_015d;
		}

IL_014b:
		{
			// foreach (var key in keysToRemove)
			int32_t L_62;
			L_62 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_10), /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
			V_11 = L_62;
			// allCandidates.Remove(key);
			Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_63 = ___allCandidates1;
			int32_t L_64 = V_11;
			NullCheck(L_63);
			bool L_65;
			L_65 = Dictionary_2_Remove_m9AEECAEDEA37C29D6C803A6F2586A50C2306ACE7(L_63, L_64, /*hidden argument*/Dictionary_2_Remove_m9AEECAEDEA37C29D6C803A6F2586A50C2306ACE7_RuntimeMethod_var);
		}

IL_015d:
		{
			// foreach (var key in keysToRemove)
			bool L_66;
			L_66 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_10), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
			if (L_66)
			{
				goto IL_014b;
			}
		}

IL_0166:
		{
			IL2CPP_LEAVE(0x176, FINALLY_0168);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0168;
	}

FINALLY_0168:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_10), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		IL2CPP_END_FINALLY(360)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(360)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x176, IL_0176)
	}

IL_0176:
	{
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM::UpdateListOfFocusedCandidates(Tobii.G2OM.G2OM_CandidateResult[],System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_UpdateListOfFocusedCandidates_mC2A41938EFEA4765183A3961C723AC944085DCCD (G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* ___candidateResult0, Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * ___allCandidates1, List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * ___gazeFocusedObjects2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mDE9A7354DA43E5437FC711CB6543E7D1266AE536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m814AC0C584D059CEF22EAF2514890B45F72BA25C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m260090E50EDC1DB0A8300240D63CCCF7E48692FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5490D531ACEAC668B2AC2FB5DA74CED478593AF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0FFC6F0B394A5845018E5A614F136DB3D9632DE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  V_3;
	memset((&V_3), 0, sizeof(V_3));
	FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// gazeFocusedObjects.Clear();
		List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * L_0 = ___gazeFocusedObjects2;
		NullCheck(L_0);
		List_1_Clear_m5490D531ACEAC668B2AC2FB5DA74CED478593AF9(L_0, /*hidden argument*/List_1_Clear_m5490D531ACEAC668B2AC2FB5DA74CED478593AF9_RuntimeMethod_var);
		// for (int i = 0; i < allCandidates.Count; i++)
		V_0 = 0;
		goto IL_00ba;
	}

IL_000d:
	{
		// var candidate = candidateResult[i];
		G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* L_1 = ___candidateResult0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// if (candidate.score <= Mathf.Epsilon) break;
		G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08  L_5 = V_1;
		float L_6 = L_5.get_score_1();
		float L_7 = ((Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var))->get_Epsilon_0();
		if ((((float)L_6) <= ((float)L_7)))
		{
			goto IL_00c6;
		}
	}
	{
		// var id = (int) candidate.candidate_id;
		G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08  L_8 = V_1;
		uint64_t L_9 = L_8.get_candidate_id_0();
		V_2 = ((int32_t)((int32_t)L_9));
		// if (allCandidates.ContainsKey(id) == false)
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_10 = ___allCandidates1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		bool L_12;
		L_12 = Dictionary_2_ContainsKey_mDE9A7354DA43E5437FC711CB6543E7D1266AE536(L_10, L_11, /*hidden argument*/Dictionary_2_ContainsKey_mDE9A7354DA43E5437FC711CB6543E7D1266AE536_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0042;
		}
	}
	{
		// Debug.LogError("This should not happen"); // TODO: What should we do if this happens? -- swik 2019-09-04
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralD0FFC6F0B394A5845018E5A614F136DB3D9632DE, /*hidden argument*/NULL);
		// continue;
		goto IL_00b6;
	}

IL_0042:
	{
		// var gazeFocusedObject = new FocusedCandidate
		// {
		//     GameObject = allCandidates[id].GameObject,
		//     IsRayValid = candidate.adjusted_gaze_ray_world_space.is_valid.ToBool(),
		//     Direction = candidate.adjusted_gaze_ray_world_space.ray.direction.Vector(),
		//     Origin = candidate.adjusted_gaze_ray_world_space.ray.origin.Vector(),
		// };
		il2cpp_codegen_initobj((&V_4), sizeof(FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442 ));
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_13 = ___allCandidates1;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  L_15;
		L_15 = Dictionary_2_get_Item_m814AC0C584D059CEF22EAF2514890B45F72BA25C(L_13, L_14, /*hidden argument*/Dictionary_2_get_Item_m814AC0C584D059CEF22EAF2514890B45F72BA25C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = L_15.get_GameObject_0();
		(&V_4)->set_GameObject_0(L_16);
		G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08  L_17 = V_1;
		G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  L_18 = L_17.get_adjusted_gaze_ray_world_space_2();
		uint8_t L_19 = L_18.get_is_valid_1();
		bool L_20;
		L_20 = G2OM_ExtensionMethods_ToBool_m0DBD316C67F26A342CCC33C6F9F48141874DD39D(L_19, /*hidden argument*/NULL);
		(&V_4)->set_IsRayValid_1(L_20);
		G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08  L_21 = V_1;
		G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  L_22 = L_21.get_adjusted_gaze_ray_world_space_2();
		G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9  L_23 = L_22.get_ray_0();
		G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  L_24 = L_23.get_direction_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = G2OM_UnityExtensionMethods_Vector_mCEEA5AF945BEBF2504D3A64B1C6D3114AEC1FBA4(L_24, /*hidden argument*/NULL);
		(&V_4)->set_Direction_3(L_25);
		G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08  L_26 = V_1;
		G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA  L_27 = L_26.get_adjusted_gaze_ray_world_space_2();
		G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9  L_28 = L_27.get_ray_0();
		G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  L_29 = L_28.get_origin_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = G2OM_UnityExtensionMethods_Vector_mCEEA5AF945BEBF2504D3A64B1C6D3114AEC1FBA4(L_29, /*hidden argument*/NULL);
		(&V_4)->set_Origin_2(L_30);
		FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  L_31 = V_4;
		V_3 = L_31;
		// gazeFocusedObjects.Add(gazeFocusedObject);
		List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * L_32 = ___gazeFocusedObjects2;
		FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  L_33 = V_3;
		NullCheck(L_32);
		List_1_Add_m260090E50EDC1DB0A8300240D63CCCF7E48692FD(L_32, L_33, /*hidden argument*/List_1_Add_m260090E50EDC1DB0A8300240D63CCCF7E48692FD_RuntimeMethod_var);
	}

IL_00b6:
	{
		// for (int i = 0; i < allCandidates.Count; i++)
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00ba:
	{
		// for (int i = 0; i < allCandidates.Count; i++)
		int32_t L_35 = V_0;
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_36 = ___allCandidates1;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7(L_36, /*hidden argument*/Dictionary_2_get_Count_m4DDEEF36A543DDCB3AFA797C636AB34637634AC7_RuntimeMethod_var);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_000d;
		}
	}

IL_00c6:
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
// System.Void Tobii.G2OM.G2OM_ColliderDataProvider::GetColliderData(System.Collections.Generic.Dictionary`2<System.Int32,Tobii.G2OM.InternalCandidate>,Tobii.G2OM.G2OM_Candidate[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ColliderDataProvider_GetColliderData_m7C34B2BD84F1B87043006E2018BC3420C9B490A2 (G2OM_ColliderDataProvider_t8A1B9B2716DB0CEED380194C4228207DCE0676EC * __this, Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * ___gameObjects0, G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* ___candidates1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mB5E3CA5ADE783862DC4C62DA142911E9A83468D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m02CB645F41D85C58ACFFD33F64996A94648BF508_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m653B6CA12D885210321CFF5235AE4242C3A90C6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m480E622FFCF9A727BCFD4296D6E3EF2995D27BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mF77E84266CD7B5910C5C0C47D8DC3068DEB7B7C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral416CD7784FACF85FBEDA83A8E1A615217DEE0BDD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t36794CEF849490921D061F887DE469134992B045  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * V_5 = NULL;
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * V_6 = NULL;
	CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * V_7 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_10 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_13;
	memset((&V_13), 0, sizeof(V_13));
	float V_14 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_15;
	memset((&V_15), 0, sizeof(V_15));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_16;
	memset((&V_16), 0, sizeof(V_16));
	float V_17 = 0.0f;
	int32_t V_18 = 0;
	float V_19 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_20;
	memset((&V_20), 0, sizeof(V_20));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_21;
	memset((&V_21), 0, sizeof(V_21));
	MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * V_22 = NULL;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_23;
	memset((&V_23), 0, sizeof(V_23));
	G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057  V_24;
	memset((&V_24), 0, sizeof(V_24));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var i = 0;
		V_0 = 0;
		// foreach (var candidate in gameObjects)
		Dictionary_2_t8FC2BC25179A9203196FC37EE94428CF8F4CC0F9 * L_0 = ___gameObjects0;
		NullCheck(L_0);
		Enumerator_t36794CEF849490921D061F887DE469134992B045  L_1;
		L_1 = Dictionary_2_GetEnumerator_mB5E3CA5ADE783862DC4C62DA142911E9A83468D4(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_mB5E3CA5ADE783862DC4C62DA142911E9A83468D4_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			goto IL_028c;
		}

IL_000e:
		{
			// foreach (var candidate in gameObjects)
			KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  L_2;
			L_2 = Enumerator_get_Current_m480E622FFCF9A727BCFD4296D6E3EF2995D27BDC_inline((Enumerator_t36794CEF849490921D061F887DE469134992B045 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m480E622FFCF9A727BCFD4296D6E3EF2995D27BDC_RuntimeMethod_var);
			V_2 = L_2;
			// var id = candidate.Key;
			int32_t L_3;
			L_3 = KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_inline((KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_RuntimeMethod_var);
			V_3 = L_3;
			// var go = candidate.Value.GameObject;
			InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  L_4;
			L_4 = KeyValuePair_2_get_Value_mF77E84266CD7B5910C5C0C47D8DC3068DEB7B7C5_inline((KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mF77E84266CD7B5910C5C0C47D8DC3068DEB7B7C5_RuntimeMethod_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4.get_GameObject_0();
			V_4 = L_5;
			// var collider = go.GetComponent<Collider>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_4;
			NullCheck(L_6);
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_7;
			L_7 = GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08(L_6, /*hidden argument*/GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
			// var box = collider as BoxCollider;
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_8 = L_7;
			V_5 = ((BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 *)IsInstClass((RuntimeObject*)L_8, BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_il2cpp_TypeInfo_var));
			// var sphereCollider = collider as SphereCollider;
			Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_9 = L_8;
			V_6 = ((SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A *)IsInstClass((RuntimeObject*)L_9, SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A_il2cpp_TypeInfo_var));
			// var capsuleCollider = collider as CapsuleCollider;
			V_7 = ((CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 *)IsInstClass((RuntimeObject*)L_9, CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_il2cpp_TypeInfo_var));
			// if (box != null)
			BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_10 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_11;
			L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_009a;
			}
		}

IL_0054:
		{
			// var size = box.size;
			BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_12 = V_5;
			NullCheck(L_12);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
			L_13 = BoxCollider_get_size_mBC38D4926D4BE54A6532F6E1D642F363CA3A58A1(L_12, /*hidden argument*/NULL);
			V_11 = L_13;
			// var center = box.center;
			BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_14 = V_5;
			NullCheck(L_14);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
			L_15 = BoxCollider_get_center_m832B93439717C72D4A3B427C6E8F5B54E2DBD669(L_14, /*hidden argument*/NULL);
			V_12 = L_15;
			// min = -size / 2 + center;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_11;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
			L_17 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_16, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
			L_18 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_17, (2.0f), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_12;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
			L_20 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_18, L_19, /*hidden argument*/NULL);
			V_8 = L_20;
			// max = size / 2 + center;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_11;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
			L_22 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_21, (2.0f), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_12;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			L_24 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_22, L_23, /*hidden argument*/NULL);
			V_9 = L_24;
			// }
			goto IL_0223;
		}

IL_009a:
		{
			// else if (sphereCollider != null)
			SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * L_25 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_26;
			L_26 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_26)
			{
				goto IL_00e9;
			}
		}

IL_00a4:
		{
			// var center = sphereCollider.center;
			SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * L_27 = V_6;
			NullCheck(L_27);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
			L_28 = SphereCollider_get_center_mBFAE4FFFC76B8FD8F1B2B2F12C52A30470443D3A(L_27, /*hidden argument*/NULL);
			V_13 = L_28;
			// var r = sphereCollider.radius;
			SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * L_29 = V_6;
			NullCheck(L_29);
			float L_30;
			L_30 = SphereCollider_get_radius_m403989140BDAD513299276953B481167CF08D02F(L_29, /*hidden argument*/NULL);
			V_14 = L_30;
			// var radius = new Vector3(r, r, r);
			float L_31 = V_14;
			float L_32 = V_14;
			float L_33 = V_14;
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_15), L_31, L_32, L_33, /*hidden argument*/NULL);
			// radius = Vector3.ClampMagnitude(radius, r);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_15;
			float L_35 = V_14;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
			L_36 = Vector3_ClampMagnitude_mF85598307D6CF3B4E5BEEB218CEDDCE39CDF3336(L_34, L_35, /*hidden argument*/NULL);
			V_15 = L_36;
			// min = center - radius;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_13;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = V_15;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
			L_39 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_37, L_38, /*hidden argument*/NULL);
			V_8 = L_39;
			// max = center + radius;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_13;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_15;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
			L_42 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_40, L_41, /*hidden argument*/NULL);
			V_9 = L_42;
			// }
			goto IL_0223;
		}

IL_00e9:
		{
			// else if (capsuleCollider != null)
			CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_43 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_44;
			L_44 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_43, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_44)
			{
				goto IL_01ca;
			}
		}

IL_00f6:
		{
			// var center = capsuleCollider.center;
			CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_45 = V_7;
			NullCheck(L_45);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
			L_46 = CapsuleCollider_get_center_m6374F7457A9450CAFFAD2DF0C9D1419BF9E304CB(L_45, /*hidden argument*/NULL);
			V_16 = L_46;
			// var height = capsuleCollider.height;
			CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_47 = V_7;
			NullCheck(L_47);
			float L_48;
			L_48 = CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526(L_47, /*hidden argument*/NULL);
			V_17 = L_48;
			// var direction = capsuleCollider.direction;
			CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_49 = V_7;
			NullCheck(L_49);
			int32_t L_50;
			L_50 = CapsuleCollider_get_direction_m2C5110BBCA2CC1C63183CDBD73B6D11CC89B0918(L_49, /*hidden argument*/NULL);
			V_18 = L_50;
			// var r = capsuleCollider.radius;
			CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_51 = V_7;
			NullCheck(L_51);
			float L_52;
			L_52 = CapsuleCollider_get_radius_m5746DDE5E6A099269FC9DAD253887C58E8A064D0(L_51, /*hidden argument*/NULL);
			V_19 = L_52;
			// var radius = new Vector3(r, r, r);
			float L_53 = V_19;
			float L_54 = V_19;
			float L_55 = V_19;
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_20), L_53, L_54, L_55, /*hidden argument*/NULL);
			// height -= r * 2;
			float L_56 = V_17;
			float L_57 = V_19;
			V_17 = ((float)il2cpp_codegen_subtract((float)L_56, (float)((float)il2cpp_codegen_multiply((float)L_57, (float)(2.0f)))));
			// radius = Vector3.ClampMagnitude(radius, r);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = V_20;
			float L_59 = V_19;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
			L_60 = Vector3_ClampMagnitude_mF85598307D6CF3B4E5BEEB218CEDDCE39CDF3336(L_58, L_59, /*hidden argument*/NULL);
			V_20 = L_60;
			// height -= (r - radius.x) * 2;
			float L_61 = V_17;
			float L_62 = V_19;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = V_20;
			float L_64 = L_63.get_x_2();
			V_17 = ((float)il2cpp_codegen_subtract((float)L_61, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_62, (float)L_64)), (float)(2.0f)))));
			int32_t L_65 = V_18;
			switch (L_65)
			{
				case 0:
				{
					goto IL_0169;
				}
				case 1:
				{
					goto IL_0179;
				}
				case 2:
				{
					goto IL_0189;
				}
			}
		}

IL_0167:
		{
			goto IL_0199;
		}

IL_0169:
		{
			// offset = Vector3.right * height;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
			L_66 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
			float L_67 = V_17;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68;
			L_68 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_66, L_67, /*hidden argument*/NULL);
			V_21 = L_68;
			// break;
			goto IL_01a4;
		}

IL_0179:
		{
			// offset = Vector3.up * height;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
			L_69 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
			float L_70 = V_17;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
			L_71 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_69, L_70, /*hidden argument*/NULL);
			V_21 = L_71;
			// break;
			goto IL_01a4;
		}

IL_0189:
		{
			// offset = Vector3.forward * height;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
			L_72 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
			float L_73 = V_17;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74;
			L_74 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_72, L_73, /*hidden argument*/NULL);
			V_21 = L_74;
			// break;
			goto IL_01a4;
		}

IL_0199:
		{
			// throw new Exception("This should never happen! If it does check Unity documentation for capsule colliders direction.");
			Exception_t * L_75 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
			Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_75, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA47B4D74A80D7EF612B02030F48C705DEAF5E1E)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_75, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&G2OM_ColliderDataProvider_GetColliderData_m7C34B2BD84F1B87043006E2018BC3420C9B490A2_RuntimeMethod_var)));
		}

IL_01a4:
		{
			// min = center - radius - offset;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = V_16;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77 = V_20;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
			L_78 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_76, L_77, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79 = V_21;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80;
			L_80 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_78, L_79, /*hidden argument*/NULL);
			V_8 = L_80;
			// max = center + radius + offset;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_81 = V_16;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82 = V_20;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
			L_83 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_81, L_82, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84 = V_21;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_85;
			L_85 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_83, L_84, /*hidden argument*/NULL);
			V_9 = L_85;
			// }
			goto IL_0223;
		}

IL_01ca:
		{
			// var meshFilter = go.GetComponent<MeshFilter>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_86 = V_4;
			NullCheck(L_86);
			MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_87;
			L_87 = GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4(L_86, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_mD924C79C3DA2B286ACB091AAC225DA91675E62A4_RuntimeMethod_var);
			V_22 = L_87;
			// if (meshFilter != null)
			MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_88 = V_22;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_89;
			L_89 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_88, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_89)
			{
				goto IL_01ff;
			}
		}

IL_01dd:
		{
			// var mesh = meshFilter.mesh;
			MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A * L_90 = V_22;
			NullCheck(L_90);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_91;
			L_91 = MeshFilter_get_mesh_mFC1DF5AFBC1E4269D08628DB83C954882FD2B417(L_90, /*hidden argument*/NULL);
			// var bounds = mesh.bounds;
			NullCheck(L_91);
			Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_92;
			L_92 = Mesh_get_bounds_m8704A23E8BA2D77C89FD4BF4379238062B1BE5DF(L_91, /*hidden argument*/NULL);
			V_23 = L_92;
			// min = bounds.min;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
			L_93 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_23), /*hidden argument*/NULL);
			V_8 = L_93;
			// max = bounds.max;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_94;
			L_94 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_23), /*hidden argument*/NULL);
			V_9 = L_94;
			// }
			goto IL_0223;
		}

IL_01ff:
		{
			// min = Vector3.zero;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
			L_95 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			V_8 = L_95;
			// max = Vector3.zero;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
			L_96 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
			V_9 = L_96;
			// Debug.LogWarning(string.Format("Failed to find bounds for object {0}. Reverting to zero bounds. Please fix this issue.", go.name));
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_97 = V_4;
			NullCheck(L_97);
			String_t* L_98;
			L_98 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_97, /*hidden argument*/NULL);
			String_t* L_99;
			L_99 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral416CD7784FACF85FBEDA83A8E1A615217DEE0BDD, L_98, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_99, /*hidden argument*/NULL);
		}

IL_0223:
		{
			// var transform = go.transform;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100 = V_4;
			NullCheck(L_100);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101;
			L_101 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_100, /*hidden argument*/NULL);
			V_10 = L_101;
			// candidates[i] = new G2OM_Candidate
			// {
			//     candidate_id = (ulong)id,
			//     aabb_max_local_space = max.AsG2OMVector3(),
			//     aabb_min_local_space = min.AsG2OMVector3(),
			//     local_to_world_matrix = transform.localToWorldMatrix.AsG2OMMatrix4x4(),
			//     world_to_local_matrix = transform.worldToLocalMatrix.AsG2OMMatrix4x4(),
			// };
			G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* L_102 = ___candidates1;
			int32_t L_103 = V_0;
			il2cpp_codegen_initobj((&V_24), sizeof(G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057 ));
			int32_t L_104 = V_3;
			(&V_24)->set_candidate_id_0(((int64_t)((int64_t)L_104)));
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105 = V_9;
			G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  L_106;
			L_106 = G2OM_UnityExtensionMethods_AsG2OMVector3_m285727854FC4760794F7B4EA667B3F3C0EA9DB06(L_105, /*hidden argument*/NULL);
			(&V_24)->set_aabb_max_local_space_1(L_106);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_107 = V_8;
			G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  L_108;
			L_108 = G2OM_UnityExtensionMethods_AsG2OMVector3_m285727854FC4760794F7B4EA667B3F3C0EA9DB06(L_107, /*hidden argument*/NULL);
			(&V_24)->set_aabb_min_local_space_2(L_108);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_109 = V_10;
			NullCheck(L_109);
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_110;
			L_110 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_109, /*hidden argument*/NULL);
			G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2  L_111;
			L_111 = G2OM_UnityExtensionMethods_AsG2OMMatrix4x4_m94ED5422DE280A850560B08E082B024D67559802(L_110, /*hidden argument*/NULL);
			(&V_24)->set_local_to_world_matrix_4(L_111);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_112 = V_10;
			NullCheck(L_112);
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_113;
			L_113 = Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D(L_112, /*hidden argument*/NULL);
			G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2  L_114;
			L_114 = G2OM_UnityExtensionMethods_AsG2OMMatrix4x4_m94ED5422DE280A850560B08E082B024D67559802(L_113, /*hidden argument*/NULL);
			(&V_24)->set_world_to_local_matrix_3(L_114);
			G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057  L_115 = V_24;
			NullCheck(L_102);
			(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057 )L_115);
			// i++;
			int32_t L_116 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		}

IL_028c:
		{
			// foreach (var candidate in gameObjects)
			bool L_117;
			L_117 = Enumerator_MoveNext_m653B6CA12D885210321CFF5235AE4242C3A90C6C((Enumerator_t36794CEF849490921D061F887DE469134992B045 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m653B6CA12D885210321CFF5235AE4242C3A90C6C_RuntimeMethod_var);
			if (L_117)
			{
				goto IL_000e;
			}
		}

IL_0298:
		{
			IL2CPP_LEAVE(0x2A8, FINALLY_029a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_029a;
	}

FINALLY_029a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m02CB645F41D85C58ACFFD33F64996A94648BF508((Enumerator_t36794CEF849490921D061F887DE469134992B045 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m02CB645F41D85C58ACFFD33F64996A94648BF508_RuntimeMethod_var);
		IL2CPP_END_FINALLY(666)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(666)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2A8, IL_02a8)
	}

IL_02a8:
	{
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM_ColliderDataProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ColliderDataProvider__ctor_m8C394A0798E21E138E2EC37A610CEDA661A41823 (G2OM_ColliderDataProvider_t8A1B9B2716DB0CEED380194C4228207DCE0676EC * __this, const RuntimeMethod* method)
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
// System.Boolean Tobii.G2OM.G2OM_Context::Setup(Tobii.G2OM.G2OM_ContextCreateOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool G2OM_Context_Setup_m59CB371130ADED30FC0AA6ED7AA8C6F8DF45295F (G2OM_Context_t1E356FC3F10BB40EE80360B60208B56E4FA1E8F5 * __this, G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724  ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_Error_tD5A05A0B06B00BF8E08890A27682FED4AD072A2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAB23CCB98895143359167F61DE647BB288C8617);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4E462BC9DC120BFC793A317769C9C55CD84D332);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var result = Interop.G2OM_ContextCreateEx(out _context, ref options);
		intptr_t* L_0 = __this->get_address_of__context_0();
		int32_t L_1;
		L_1 = Interop_G2OM_ContextCreateEx_m1B9DDAA52521BD4442611D32EB4CC3523E97B005((intptr_t*)L_0, (G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724 *)(&___options0), /*hidden argument*/NULL);
		V_0 = L_1;
		// if (result == G2OM_Error.Ok)
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		// Debug.Log("Created G2OM context.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBAB23CCB98895143359167F61DE647BB288C8617, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_001d:
	{
		// Debug.LogError("Failed to create G2OM context. Error code " + result);
		RuntimeObject * L_3 = Box(G2OM_Error_tD5A05A0B06B00BF8E08890A27682FED4AD072A2F_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		V_0 = *(int32_t*)UnBox(L_3);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE4E462BC9DC120BFC793A317769C9C55CD84D332, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_5, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Tobii.G2OM.G2OM_Context::Process(Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.G2OM_RaycastResult&,System.Int32,Tobii.G2OM.G2OM_Candidate[],Tobii.G2OM.G2OM_CandidateResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool G2OM_Context_Process_mC27C4B96BBBD45F99D1364CAFAC351661F0E6B47 (G2OM_Context_t1E356FC3F10BB40EE80360B60208B56E4FA1E8F5 * __this, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * ___deviceData0, G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8 * ___raycastResult1, int32_t ___candidateCount2, G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* ___candidates3, G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* ___candidateResults4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_Error_tD5A05A0B06B00BF8E08890A27682FED4AD072A2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF077DE34F8D000C950F1CF5F29A4D148ABDAB85);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var result = Interop.G2OM_Process(_context, ref deviceData, ref raycastResult, (uint)candidateCount, candidates, candidateResults);
		intptr_t L_0 = __this->get__context_0();
		G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * L_1 = ___deviceData0;
		G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8 * L_2 = ___raycastResult1;
		int32_t L_3 = ___candidateCount2;
		G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* L_4 = ___candidates3;
		G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* L_5 = ___candidateResults4;
		int32_t L_6;
		L_6 = Interop_G2OM_Process_mE05755CF4B7B4F32ACDDBD946B393C59EF32BB3D((intptr_t)L_0, (G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *)L_1, (G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8 *)L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (result == G2OM_Error.Ok) return true;
		int32_t L_7 = V_0;
		if (L_7)
		{
			goto IL_0018;
		}
	}
	{
		// if (result == G2OM_Error.Ok) return true;
		return (bool)1;
	}

IL_0018:
	{
		// Debug.LogError("Failed to process G2OM. Error code " + result);
		RuntimeObject * L_8 = Box(G2OM_Error_tD5A05A0B06B00BF8E08890A27682FED4AD072A2F_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		V_0 = *(int32_t*)UnBox(L_8);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDF077DE34F8D000C950F1CF5F29A4D148ABDAB85, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_10, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Tobii.G2OM.G2OM_Context::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool G2OM_Context_Destroy_mC5F39D91F120A82CDBD984654CC3C9122D288DF4 (G2OM_Context_t1E356FC3F10BB40EE80360B60208B56E4FA1E8F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_Error_tD5A05A0B06B00BF8E08890A27682FED4AD072A2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB77AEA6B66613896145DC025F0AD1733A45CF12E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB7B05EBF47D4A2FDC065778B7A7FBBA2170A9EE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_context == IntPtr.Zero) return true;
		intptr_t L_0 = __this->get__context_0();
		bool L_1;
		L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (_context == IntPtr.Zero) return true;
		return (bool)1;
	}

IL_0014:
	{
		// var result = Interop.G2OM_ContextDestroy(ref _context);
		intptr_t* L_2 = __this->get_address_of__context_0();
		int32_t L_3;
		L_3 = Interop_G2OM_ContextDestroy_mCB317F7B57994D659486C60C6A21750C26B93918((intptr_t*)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// _context = IntPtr.Zero;
		__this->set__context_0((intptr_t)(0));
		// if (result == G2OM_Error.Ok)
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		// Debug.Log("Destroyed G2OM context.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBB7B05EBF47D4A2FDC065778B7A7FBBA2170A9EE, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_003a:
	{
		// Debug.LogError("Failed to destroy G2OM context. Error code " + result);
		RuntimeObject * L_5 = Box(G2OM_Error_tD5A05A0B06B00BF8E08890A27682FED4AD072A2F_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_0 = *(int32_t*)UnBox(L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB77AEA6B66613896145DC025F0AD1733A45CF12E, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_7, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.G2OM_Context::GetCandidateSearchPattern(Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.G2OM_GazeRay[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t G2OM_Context_GetCandidateSearchPattern_mF519C4EC3367B23E2FD3F8EDF7BE152328E9B2C1 (G2OM_Context_t1E356FC3F10BB40EE80360B60208B56E4FA1E8F5 * __this, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * ___deviceData0, G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* ___rays1, const RuntimeMethod* method)
{
	{
		// return Interop.G2OM_GetCandidateSearchPattern(_context, ref deviceData, (uint)rays.Length, rays);
		intptr_t L_0 = __this->get__context_0();
		G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * L_1 = ___deviceData0;
		G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* L_2 = ___rays1;
		NullCheck(L_2);
		G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* L_3 = ___rays1;
		int32_t L_4;
		L_4 = Interop_G2OM_GetCandidateSearchPattern_mAE6A42A99E3BFEDA11F27EAD72F96C601E1C548A((intptr_t)L_0, (G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *)L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Tobii.G2OM.G2OM_Context::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Context__ctor_mB393A9751F24EEB36D7062C90D6586D6D5613160 (G2OM_Context_t1E356FC3F10BB40EE80360B60208B56E4FA1E8F5 * __this, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Tobii.G2OM.G2OM_ContextCreateOptions
IL2CPP_EXTERN_C void G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshal_pinvoke(const G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724& unmarshaled, G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshaled_pinvoke& marshaled)
{
	marshaled.___capacity_0 = unmarshaled.get_capacity_0();
	marshaled.___thread_count_1 = unmarshaled.get_thread_count_1();
	marshaled.___license_content_2 = il2cpp_codegen_marshal_string(unmarshaled.get_license_content_2());
}
IL2CPP_EXTERN_C void G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshal_pinvoke_back(const G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshaled_pinvoke& marshaled, G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724& unmarshaled)
{
	uint32_t unmarshaled_capacity_temp_0 = 0;
	unmarshaled_capacity_temp_0 = marshaled.___capacity_0;
	unmarshaled.set_capacity_0(unmarshaled_capacity_temp_0);
	uint32_t unmarshaled_thread_count_temp_1 = 0;
	unmarshaled_thread_count_temp_1 = marshaled.___thread_count_1;
	unmarshaled.set_thread_count_1(unmarshaled_thread_count_temp_1);
	unmarshaled.set_license_content_2(il2cpp_codegen_marshal_string_result(marshaled.___license_content_2));
}
// Conversion method for clean up from marshalling of: Tobii.G2OM.G2OM_ContextCreateOptions
IL2CPP_EXTERN_C void G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshal_pinvoke_cleanup(G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___license_content_2);
	marshaled.___license_content_2 = NULL;
}
// Conversion methods for marshalling of: Tobii.G2OM.G2OM_ContextCreateOptions
IL2CPP_EXTERN_C void G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshal_com(const G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724& unmarshaled, G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshaled_com& marshaled)
{
	marshaled.___capacity_0 = unmarshaled.get_capacity_0();
	marshaled.___thread_count_1 = unmarshaled.get_thread_count_1();
	marshaled.___license_content_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_license_content_2());
}
IL2CPP_EXTERN_C void G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshal_com_back(const G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshaled_com& marshaled, G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724& unmarshaled)
{
	uint32_t unmarshaled_capacity_temp_0 = 0;
	unmarshaled_capacity_temp_0 = marshaled.___capacity_0;
	unmarshaled.set_capacity_0(unmarshaled_capacity_temp_0);
	uint32_t unmarshaled_thread_count_temp_1 = 0;
	unmarshaled_thread_count_temp_1 = marshaled.___thread_count_1;
	unmarshaled.set_thread_count_1(unmarshaled_thread_count_temp_1);
	unmarshaled.set_license_content_2(il2cpp_codegen_marshal_bstring_result(marshaled.___license_content_2));
}
// Conversion method for clean up from marshalling of: Tobii.G2OM.G2OM_ContextCreateOptions
IL2CPP_EXTERN_C void G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshal_com_cleanup(G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___license_content_2);
	marshaled.___license_content_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.G2OM.G2OM_Description::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_Description__ctor_mA17739FD04B984F3F6A14F277415421273D1E8F7 (G2OM_Description_tDDC3E7F8747B6FC42E6B44F4302D67374D28F2DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_ColliderDataProvider_t8A1B9B2716DB0CEED380194C4228207DCE0676EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_Context_t1E356FC3F10BB40EE80360B60208B56E4FA1E8F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_ObjectDistinguisher_1__ctor_mF12467B2434FC26D70C5F92219C4551AB71313CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_ObjectDistinguisher_1_tD07485647985E763F438B7499D89F0340453759E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_PostTicker_tAAA7AB0665B1DBC0BF5C43AADE66C7E1EF8A0906_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float HowLongToKeepCandidatesInSeconds = DefaultCandidateMemoryInSeconds;
		__this->set_HowLongToKeepCandidatesInSeconds_0((1.0f));
		// public LayerMask LayerMask = DefaultLayerMask;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0;
		L_0 = LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C((-1), /*hidden argument*/NULL);
		__this->set_LayerMask_1(L_0);
		// public IG2OM_ObjectFinder ObjectFinder = new G2OM_ObjectFinder();
		G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05 * L_1 = (G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05 *)il2cpp_codegen_object_new(G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05_il2cpp_TypeInfo_var);
		G2OM_ObjectFinder__ctor_m62AF547F70665623C64A51ABBBD67B3CF28D756E(L_1, (0.0f), /*hidden argument*/NULL);
		__this->set_ObjectFinder_2(L_1);
		// public IG2OM_ColliderDataProvider ColliderDataProvider = new G2OM_ColliderDataProvider();
		G2OM_ColliderDataProvider_t8A1B9B2716DB0CEED380194C4228207DCE0676EC * L_2 = (G2OM_ColliderDataProvider_t8A1B9B2716DB0CEED380194C4228207DCE0676EC *)il2cpp_codegen_object_new(G2OM_ColliderDataProvider_t8A1B9B2716DB0CEED380194C4228207DCE0676EC_il2cpp_TypeInfo_var);
		G2OM_ColliderDataProvider__ctor_m8C394A0798E21E138E2EC37A610CEDA661A41823(L_2, /*hidden argument*/NULL);
		__this->set_ColliderDataProvider_3(L_2);
		// public IG2OM_ObjectDistinguisher Distinguisher = new G2OM_ObjectDistinguisher<IGazeFocusable>();
		G2OM_ObjectDistinguisher_1_tD07485647985E763F438B7499D89F0340453759E * L_3 = (G2OM_ObjectDistinguisher_1_tD07485647985E763F438B7499D89F0340453759E *)il2cpp_codegen_object_new(G2OM_ObjectDistinguisher_1_tD07485647985E763F438B7499D89F0340453759E_il2cpp_TypeInfo_var);
		G2OM_ObjectDistinguisher_1__ctor_mF12467B2434FC26D70C5F92219C4551AB71313CF(L_3, /*hidden argument*/G2OM_ObjectDistinguisher_1__ctor_mF12467B2434FC26D70C5F92219C4551AB71313CF_RuntimeMethod_var);
		__this->set_Distinguisher_4(L_3);
		// public IG2OM_PostTicker PostTicker = new G2OM_PostTicker();
		G2OM_PostTicker_tAAA7AB0665B1DBC0BF5C43AADE66C7E1EF8A0906 * L_4 = (G2OM_PostTicker_tAAA7AB0665B1DBC0BF5C43AADE66C7E1EF8A0906 *)il2cpp_codegen_object_new(G2OM_PostTicker_tAAA7AB0665B1DBC0BF5C43AADE66C7E1EF8A0906_il2cpp_TypeInfo_var);
		G2OM_PostTicker__ctor_m94F6CCD8D684BFFC9EB6FC2D8BE36722FA7A6957(L_4, /*hidden argument*/NULL);
		__this->set_PostTicker_5(L_4);
		// public IG2OM_Context Context = new G2OM_Context();
		G2OM_Context_t1E356FC3F10BB40EE80360B60208B56E4FA1E8F5 * L_5 = (G2OM_Context_t1E356FC3F10BB40EE80360B60208B56E4FA1E8F5 *)il2cpp_codegen_object_new(G2OM_Context_t1E356FC3F10BB40EE80360B60208B56E4FA1E8F5_il2cpp_TypeInfo_var);
		G2OM_Context__ctor_mB393A9751F24EEB36D7062C90D6586D6D5613160(L_5, /*hidden argument*/NULL);
		__this->set_Context_6(L_5);
		// public G2OM_ContextCreateOptions Options = Interop.G2OM_InitializeOptions();
		G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724  L_6;
		L_6 = Interop_G2OM_InitializeOptions_m178C3D46C58F6DBEDE9448403EE0B7BAE0929C0A(/*hidden argument*/NULL);
		__this->set_Options_7(L_6);
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
// System.Byte Tobii.G2OM.G2OM_ExtensionMethods::ToByte(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t G2OM_ExtensionMethods_ToByte_m9F6BF5ADFF7FFEE00E444B180D3A752743D3A914 (bool ___b0, const RuntimeMethod* method)
{
	{
		// return b ? (byte) 1 : (byte) 0;
		bool L_0 = ___b0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (uint8_t)0;
	}

IL_0005:
	{
		return (uint8_t)1;
	}
}
// System.Boolean Tobii.G2OM.G2OM_ExtensionMethods::ToBool(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool G2OM_ExtensionMethods_ToBool_m0DBD316C67F26A342CCC33C6F9F48141874DD39D (uint8_t ___b0, const RuntimeMethod* method)
{
	{
		// return b == 1;
		uint8_t L_0 = ___b0;
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
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
// System.Void Tobii.G2OM.G2OM_ObjectFinder::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectFinder__ctor_m62AF547F70665623C64A51ABBBD67B3CF28D756E (G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05 * __this, float ___now0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly G2OM_GazeRay[] _rays = new G2OM_GazeRay[MaxRaysPerFrame];
		G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* L_0 = (G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526*)(G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526*)SZArrayNew(G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		__this->set__rays_0(L_0);
		// private LayerMask _layerMask = ~0;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_1;
		L_1 = LayerMask_op_Implicit_mC7EE32122D2A4786D3C00B93E41604B71BF1397C((-1), /*hidden argument*/NULL);
		__this->set__layerMask_1(L_1);
		// public G2OM_ObjectFinder(float now = 0)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _previousTimestamp = now;
		float L_2 = ___now0;
		__this->set__previousTimestamp_2(L_2);
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM_ObjectFinder::GetRelevantGazeObjects(Tobii.G2OM.G2OM_DeviceData&,System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>,Tobii.G2OM.IG2OM_ObjectDistinguisher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectFinder_GetRelevantGazeObjects_m8A1F9F7998EC4E97513597A89D354C4C90CB1A4A (G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05 * __this, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * ___deviceData0, Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * ___foundObjects1, RuntimeObject* ___distinguisher2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&G2OM_Error_tD5A05A0B06B00BF8E08890A27682FED4AD072A2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_Context_t76A1678AB05CC3E9530C8AEA2D90DE68D4136722_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB89372175E5CFDD9BFADE2FD7CC661A545D8F71);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var result = _context.GetCandidateSearchPattern(ref deviceData, _rays);
		RuntimeObject* L_0 = __this->get__context_3();
		G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * L_1 = ___deviceData0;
		G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* L_2 = __this->get__rays_0();
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *, G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* >::Invoke(2 /* Tobii.G2OM.G2OM_Error Tobii.G2OM.IG2OM_Context::GetCandidateSearchPattern(Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.G2OM_GazeRay[]) */, IG2OM_Context_t76A1678AB05CC3E9530C8AEA2D90DE68D4136722_il2cpp_TypeInfo_var, L_0, (G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *)L_1, L_2);
		V_0 = L_3;
		// if (result != G2OM_Error.Ok)
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.LogError("GetCandidateSearchPattern failed with error: " + result);
		RuntimeObject * L_5 = Box(G2OM_Error_tD5A05A0B06B00BF8E08890A27682FED4AD072A2F_il2cpp_TypeInfo_var, (&V_0));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_0 = *(int32_t*)UnBox(L_5);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralAB89372175E5CFDD9BFADE2FD7CC661A545D8F71, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_7, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0033:
	{
		// var numberOfRaysThisFrame = GetNumberOfRays(deviceData.timestamp - _previousTimestamp);
		G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * L_8 = ___deviceData0;
		float L_9 = L_8->get_timestamp_0();
		float L_10 = __this->get__previousTimestamp_2();
		int32_t L_11;
		L_11 = G2OM_ObjectFinder_GetNumberOfRays_m2E376699E7189E9DE24EB101419E666E2A4BA7B2(((float)il2cpp_codegen_subtract((float)L_9, (float)L_10)), /*hidden argument*/NULL);
		V_1 = L_11;
		// _previousTimestamp = deviceData.timestamp;
		G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * L_12 = ___deviceData0;
		float L_13 = L_12->get_timestamp_0();
		__this->set__previousTimestamp_2(L_13);
		// FindObjects(_rays, foundObjects, distinguisher, _layerMask, numberOfRaysThisFrame);
		G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* L_14 = __this->get__rays_0();
		Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * L_15 = ___foundObjects1;
		RuntimeObject* L_16 = ___distinguisher2;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_17 = __this->get__layerMask_1();
		int32_t L_18 = V_1;
		G2OM_ObjectFinder_FindObjects_m3AF03E7D68174C416419C87AB2FD3FD9A101FB30(L_14, L_15, L_16, L_17, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Tobii.G2OM.G2OM_RaycastResult Tobii.G2OM.G2OM_ObjectFinder::GetRaycastResult(Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.IG2OM_ObjectDistinguisher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8  G2OM_ObjectFinder_GetRaycastResult_m61DB1CC626FE045F69F7B865F6EE7987A8572ABA (G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05 * __this, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * ___deviceData0, RuntimeObject* ___distinguisher1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_ObjectDistinguisher_t54814829C953800054E5898D73F2099C0E0F1952_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	G2OM_Raycast_t880D39AB15506A0A32FFFD984B53034CDDFB2016  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var raycastResult = new G2OM_RaycastResult();
		il2cpp_codegen_initobj((&V_0), sizeof(G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8 ));
		// var result = FindGameObject(ref deviceData.gaze_ray_world_space.ray, _layerMask, out go);
		G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * L_0 = ___deviceData0;
		G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA * L_1 = L_0->get_address_of_gaze_ray_world_space_1();
		G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9 * L_2 = L_1->get_address_of_ray_0();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_3 = __this->get__layerMask_1();
		bool L_4;
		L_4 = G2OM_ObjectFinder_FindGameObject_mA35B3E9A0CB57BECDB49BC94B6E46B443D21C0E3((G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9 *)L_2, L_3, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)(&V_1), /*hidden argument*/NULL);
		// if (result)
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		// var id = go.GetInstanceID();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// var hitACandidate = distinguisher.IsGameObjectGazeFocusable(id, go);
		RuntimeObject* L_7 = ___distinguisher1;
		int32_t L_8 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_1;
		NullCheck(L_7);
		bool L_10;
		L_10 = InterfaceFuncInvoker2< bool, int32_t, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(0 /* System.Boolean Tobii.G2OM.IG2OM_ObjectDistinguisher::IsGameObjectGazeFocusable(System.Int32,UnityEngine.GameObject) */, IG2OM_ObjectDistinguisher_t54814829C953800054E5898D73F2099C0E0F1952_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		V_3 = L_10;
		// raycastResult.gaze_ray = new G2OM_Raycast
		// {
		//     candidate_id = (ulong)id,
		//     is_raycast_id_valid = hitACandidate.ToByte()
		// };
		il2cpp_codegen_initobj((&V_4), sizeof(G2OM_Raycast_t880D39AB15506A0A32FFFD984B53034CDDFB2016 ));
		int32_t L_11 = V_2;
		(&V_4)->set_candidate_id_1(((int64_t)((int64_t)L_11)));
		bool L_12 = V_3;
		uint8_t L_13;
		L_13 = G2OM_ExtensionMethods_ToByte_m9F6BF5ADFF7FFEE00E444B180D3A752743D3A914(L_12, /*hidden argument*/NULL);
		(&V_4)->set_is_raycast_id_valid_0(L_13);
		G2OM_Raycast_t880D39AB15506A0A32FFFD984B53034CDDFB2016  L_14 = V_4;
		(&V_0)->set_gaze_ray_0(L_14);
	}

IL_0059:
	{
		// return raycastResult;
		G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8  L_15 = V_0;
		return L_15;
	}
}
// System.Void Tobii.G2OM.G2OM_ObjectFinder::Setup(Tobii.G2OM.IG2OM_Context,UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectFinder_Setup_m815A5F1662DA5A881255AD674404FB53D09B4A79 (G2OM_ObjectFinder_t22BDC0C45E221D792A50A5155C3BC90ACE2D0D05 * __this, RuntimeObject* ___context0, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___layerMask1, const RuntimeMethod* method)
{
	{
		// _layerMask = layerMask;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0 = ___layerMask1;
		__this->set__layerMask_1(L_0);
		// _context = context;
		RuntimeObject* L_1 = ___context0;
		__this->set__context_3(L_1);
		// }
		return;
	}
}
// System.Int32 Tobii.G2OM.G2OM_ObjectFinder::GetNumberOfRays(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t G2OM_ObjectFinder_GetNumberOfRays_m2E376699E7189E9DE24EB101419E666E2A4BA7B2 (float ___dt0, const RuntimeMethod* method)
{
	{
		// var rays = Mathf.CeilToInt(RaysPerSecond * dt);
		float L_0 = ___dt0;
		int32_t L_1;
		L_1 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(((float)il2cpp_codegen_multiply((float)(900.0f), (float)L_0)), /*hidden argument*/NULL);
		// return Mathf.Clamp(rays, MinimumRaysPerFrame, MaxRaysPerFrame);
		int32_t L_2;
		L_2 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_1, 3, ((int32_t)15), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Tobii.G2OM.G2OM_ObjectFinder::FindObjects(Tobii.G2OM.G2OM_GazeRay[],System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GameObject>,Tobii.G2OM.IG2OM_ObjectDistinguisher,UnityEngine.LayerMask,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_ObjectFinder_FindObjects_m3AF03E7D68174C416419C87AB2FD3FD9A101FB30 (G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* ___rays0, Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * ___foundObjects1, RuntimeObject* ___distinguisher2, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___layerMask3, int32_t ___numberOfRaysThisFrame4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA610FFDDFC70D85D351F86D009E64CD61E3EF886_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m36D039052B9BF2DDF9D0EA0B92FEC0735BE2EB7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m66775372D34FFF649F9BE8E446C5D89F511FFF3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IG2OM_ObjectDistinguisher_t54814829C953800054E5898D73F2099C0E0F1952_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// foundObjects.Clear();
		Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * L_0 = ___foundObjects1;
		NullCheck(L_0);
		Dictionary_2_Clear_m36D039052B9BF2DDF9D0EA0B92FEC0735BE2EB7E(L_0, /*hidden argument*/Dictionary_2_Clear_m36D039052B9BF2DDF9D0EA0B92FEC0735BE2EB7E_RuntimeMethod_var);
		// for (int i = 0; i < numberOfRaysThisFrame; i++)
		V_0 = 0;
		goto IL_0059;
	}

IL_000a:
	{
		// if (rays[i].is_valid.ToBool() == false) break;
		G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* L_1 = ___rays0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		uint8_t L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))->get_is_valid_1();
		bool L_4;
		L_4 = G2OM_ExtensionMethods_ToBool_m0DBD316C67F26A342CCC33C6F9F48141874DD39D(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		// if (FindGameObject(ref rays[i].ray, layerMask, out go) == false) continue;
		G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* L_5 = ___rays0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9 * L_7 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->get_address_of_ray_0();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_8 = ___layerMask3;
		bool L_9;
		L_9 = G2OM_ObjectFinder_FindGameObject_mA35B3E9A0CB57BECDB49BC94B6E46B443D21C0E3((G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9 *)L_7, L_8, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)(&V_1), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		// var id = go.GetInstanceID();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// if (foundObjects.ContainsKey(id)) continue;
		Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * L_12 = ___foundObjects1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_ContainsKey_m66775372D34FFF649F9BE8E446C5D89F511FFF3E(L_12, L_13, /*hidden argument*/Dictionary_2_ContainsKey_m66775372D34FFF649F9BE8E446C5D89F511FFF3E_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		// if (distinguisher.IsGameObjectGazeFocusable(id, go) == false) continue;
		RuntimeObject* L_15 = ___distinguisher2;
		int32_t L_16 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_1;
		NullCheck(L_15);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, int32_t, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(0 /* System.Boolean Tobii.G2OM.IG2OM_ObjectDistinguisher::IsGameObjectGazeFocusable(System.Int32,UnityEngine.GameObject) */, IG2OM_ObjectDistinguisher_t54814829C953800054E5898D73F2099C0E0F1952_il2cpp_TypeInfo_var, L_15, L_16, L_17);
		if (!L_18)
		{
			goto IL_0055;
		}
	}
	{
		// foundObjects.Add(id, go);
		Dictionary_2_t62F8E88182F28FE8A3E61CDA9445309B4DE28C09 * L_19 = ___foundObjects1;
		int32_t L_20 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_1;
		NullCheck(L_19);
		Dictionary_2_Add_mA610FFDDFC70D85D351F86D009E64CD61E3EF886(L_19, L_20, L_21, /*hidden argument*/Dictionary_2_Add_mA610FFDDFC70D85D351F86D009E64CD61E3EF886_RuntimeMethod_var);
	}

IL_0055:
	{
		// for (int i = 0; i < numberOfRaysThisFrame; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0059:
	{
		// for (int i = 0; i < numberOfRaysThisFrame; i++)
		int32_t L_23 = V_0;
		int32_t L_24 = ___numberOfRaysThisFrame4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_000a;
		}
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Boolean Tobii.G2OM.G2OM_ObjectFinder::FindGameObject(Tobii.G2OM.G2OM_Ray&,UnityEngine.LayerMask,UnityEngine.GameObject&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool G2OM_ObjectFinder_FindGameObject_mA35B3E9A0CB57BECDB49BC94B6E46B443D21C0E3 (G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9 * ___ray0, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___layerMask1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** ___gameObject2, const RuntimeMethod* method)
{
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// gameObject = null;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** L_0 = ___gameObject2;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// if (Physics.Raycast(ray.origin.Vector(), ray.direction.Vector(), out hit, RaycastLength, layerMask) == false) return false;
		G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9 * L_1 = ___ray0;
		G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  L_2 = L_1->get_origin_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = G2OM_UnityExtensionMethods_Vector_mCEEA5AF945BEBF2504D3A64B1C6D3114AEC1FBA4(L_2, /*hidden argument*/NULL);
		G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9 * L_4 = ___ray0;
		G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  L_5 = L_4->get_direction_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = G2OM_UnityExtensionMethods_Vector_mCEEA5AF945BEBF2504D3A64B1C6D3114AEC1FBA4(L_5, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_7 = ___layerMask1;
		int32_t L_8;
		L_8 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = Physics_Raycast_mCBD5F7D498C246713EDDBB446E97205DA206C49C(L_3, L_6, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), ((std::numeric_limits<float>::max)()), L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_002f;
		}
	}
	{
		// if (Physics.Raycast(ray.origin.Vector(), ray.direction.Vector(), out hit, RaycastLength, layerMask) == false) return false;
		return (bool)0;
	}

IL_002f:
	{
		// gameObject = hit.collider.gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** L_10 = ___gameObject2;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_11;
		L_11 = RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		*((RuntimeObject **)L_10) = (RuntimeObject *)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_10, (void*)(RuntimeObject *)L_12);
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
// System.Void Tobii.G2OM.G2OM_PostTicker::TickComplete(System.Collections.Generic.List`1<Tobii.G2OM.FocusedCandidate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_PostTicker_TickComplete_m4C1DE8809E5301AA33B7FCBF718AF0BF97805F90 (G2OM_PostTicker_tAAA7AB0665B1DBC0BF5C43AADE66C7E1EF8A0906 * __this, List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * ___focusedObjects0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mCDEC89B2EB171FB3B8DE932158BC505ADC3C1C16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m59B4DED04CE74CDA40ED7067E22E8D8BF8EE9F72_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	{
		// GameObject focusedObject = focusedObjects.Count == 0 ? null : focusedObjects[0].GameObject;
		List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * L_0 = ___focusedObjects0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mCDEC89B2EB171FB3B8DE932158BC505ADC3C1C16_inline(L_0, /*hidden argument*/List_1_get_Count_mCDEC89B2EB171FB3B8DE932158BC505ADC3C1C16_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * L_2 = ___focusedObjects0;
		NullCheck(L_2);
		FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  L_3;
		L_3 = List_1_get_Item_m59B4DED04CE74CDA40ED7067E22E8D8BF8EE9F72_inline(L_2, 0, /*hidden argument*/List_1_get_Item_m59B4DED04CE74CDA40ED7067E22E8D8BF8EE9F72_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3.get_GameObject_0();
		G_B3_0 = L_4;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)(NULL));
	}

IL_0017:
	{
		// UpdateFocusableComponents(focusedObject, ref _previousGazeFocusedObject, _gazeFocusableComponents);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** L_5 = __this->get_address_of__previousGazeFocusedObject_0();
		List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * L_6 = __this->get__gazeFocusableComponents_1();
		G2OM_PostTicker_UpdateFocusableComponents_m77BDB869629ECD2ABE62375F8AAEB914ED0A046E(G_B3_0, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM_PostTicker::UpdateFocusableComponents(UnityEngine.GameObject,UnityEngine.GameObject&,System.Collections.Generic.List`1<Tobii.G2OM.IGazeFocusable>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_PostTicker_UpdateFocusableComponents_m77BDB869629ECD2ABE62375F8AAEB914ED0A046E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___focusedObject0, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** ___previousFocusedObject1, List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * ___gazeFocusableComponents2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA1C37F88C2F5DE21ACDB87535F85256A4E1DA310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m49483B538F6952C08CE81F8447169816E1991D2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA512F8CD40848044A35C75D34991E6F18AD3A452_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisIGazeFocusable_t6AE88CC8132B6BE9E45FFD4CDD3929557250481F_m99B8B9B7C23BA9F43677F5F19CA5C687F3D0FCE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGazeFocusable_t6AE88CC8132B6BE9E45FFD4CDD3929557250481F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m0AFC962BC8563D0CEB1EA5B1D39CC6130B0A8DFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m23991899E2477DD9A3F79FBDADBA319A2297D065_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (focusedObject == previousFocusedObject) return;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___focusedObject0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** L_1 = ___previousFocusedObject1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = *((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_000b;
		}
	}
	{
		// if (focusedObject == previousFocusedObject) return;
		return;
	}

IL_000b:
	{
		// if (previousFocusedObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** L_4 = ___previousFocusedObject1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = *((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// foreach (var focusableComponent in gazeFocusableComponents)
		List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * L_7 = ___gazeFocusableComponents2;
		NullCheck(L_7);
		Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A  L_8;
		L_8 = List_1_GetEnumerator_m23991899E2477DD9A3F79FBDADBA319A2297D065(L_7, /*hidden argument*/List_1_GetEnumerator_m23991899E2477DD9A3F79FBDADBA319A2297D065_RuntimeMethod_var);
		V_0 = L_8;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_001e:
		{
			// foreach (var focusableComponent in gazeFocusableComponents)
			RuntimeObject* L_9;
			L_9 = Enumerator_get_Current_mA512F8CD40848044A35C75D34991E6F18AD3A452_inline((Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA512F8CD40848044A35C75D34991E6F18AD3A452_RuntimeMethod_var);
			// focusableComponent.GazeFocusChanged(false);
			NullCheck(L_9);
			InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Tobii.G2OM.IGazeFocusable::GazeFocusChanged(System.Boolean) */, IGazeFocusable_t6AE88CC8132B6BE9E45FFD4CDD3929557250481F_il2cpp_TypeInfo_var, L_9, (bool)0);
		}

IL_002b:
		{
			// foreach (var focusableComponent in gazeFocusableComponents)
			bool L_10;
			L_10 = Enumerator_MoveNext_m49483B538F6952C08CE81F8447169816E1991D2B((Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m49483B538F6952C08CE81F8447169816E1991D2B_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_001e;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x44, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mA1C37F88C2F5DE21ACDB87535F85256A4E1DA310((Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A *)(&V_0), /*hidden argument*/Enumerator_Dispose_mA1C37F88C2F5DE21ACDB87535F85256A4E1DA310_RuntimeMethod_var);
		IL2CPP_END_FINALLY(54)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x44, IL_0044)
	}

IL_0044:
	{
		// gazeFocusableComponents.Clear();
		List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * L_11 = ___gazeFocusableComponents2;
		NullCheck(L_11);
		List_1_Clear_m0AFC962BC8563D0CEB1EA5B1D39CC6130B0A8DFB(L_11, /*hidden argument*/List_1_Clear_m0AFC962BC8563D0CEB1EA5B1D39CC6130B0A8DFB_RuntimeMethod_var);
	}

IL_004a:
	{
		// if (focusedObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = ___focusedObject0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		// focusedObject.GetComponents(gazeFocusableComponents);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = ___focusedObject0;
		List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * L_15 = ___gazeFocusableComponents2;
		NullCheck(L_14);
		GameObject_GetComponents_TisIGazeFocusable_t6AE88CC8132B6BE9E45FFD4CDD3929557250481F_m99B8B9B7C23BA9F43677F5F19CA5C687F3D0FCE3(L_14, L_15, /*hidden argument*/GameObject_GetComponents_TisIGazeFocusable_t6AE88CC8132B6BE9E45FFD4CDD3929557250481F_m99B8B9B7C23BA9F43677F5F19CA5C687F3D0FCE3_RuntimeMethod_var);
		// foreach (var focusableComponent in gazeFocusableComponents)
		List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * L_16 = ___gazeFocusableComponents2;
		NullCheck(L_16);
		Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A  L_17;
		L_17 = List_1_GetEnumerator_m23991899E2477DD9A3F79FBDADBA319A2297D065(L_16, /*hidden argument*/List_1_GetEnumerator_m23991899E2477DD9A3F79FBDADBA319A2297D065_RuntimeMethod_var);
		V_0 = L_17;
	}

IL_0061:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0070;
		}

IL_0063:
		{
			// foreach (var focusableComponent in gazeFocusableComponents)
			RuntimeObject* L_18;
			L_18 = Enumerator_get_Current_mA512F8CD40848044A35C75D34991E6F18AD3A452_inline((Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA512F8CD40848044A35C75D34991E6F18AD3A452_RuntimeMethod_var);
			// focusableComponent.GazeFocusChanged(true);
			NullCheck(L_18);
			InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Tobii.G2OM.IGazeFocusable::GazeFocusChanged(System.Boolean) */, IGazeFocusable_t6AE88CC8132B6BE9E45FFD4CDD3929557250481F_il2cpp_TypeInfo_var, L_18, (bool)1);
		}

IL_0070:
		{
			// foreach (var focusableComponent in gazeFocusableComponents)
			bool L_19;
			L_19 = Enumerator_MoveNext_m49483B538F6952C08CE81F8447169816E1991D2B((Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m49483B538F6952C08CE81F8447169816E1991D2B_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0063;
			}
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x89, FINALLY_007b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007b;
	}

FINALLY_007b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mA1C37F88C2F5DE21ACDB87535F85256A4E1DA310((Enumerator_t4CEA8E950BAAC36C8DF62B0C8D1802F8AEF8CB4A *)(&V_0), /*hidden argument*/Enumerator_Dispose_mA1C37F88C2F5DE21ACDB87535F85256A4E1DA310_RuntimeMethod_var);
		IL2CPP_END_FINALLY(123)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(123)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x89, IL_0089)
	}

IL_0089:
	{
		// previousFocusedObject = focusedObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** L_20 = ___previousFocusedObject1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = ___focusedObject0;
		*((RuntimeObject **)L_20) = (RuntimeObject *)L_21;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_20, (void*)(RuntimeObject *)L_21);
		// }
		return;
	}
}
// System.Void Tobii.G2OM.G2OM_PostTicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void G2OM_PostTicker__ctor_m94F6CCD8D684BFFC9EB6FC2D8BE36722FA7A6957 (G2OM_PostTicker_tAAA7AB0665B1DBC0BF5C43AADE66C7E1EF8A0906 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFFC9DB51A8DE8C9DC75BC85A0FB833D218C3C3FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<IGazeFocusable> _gazeFocusableComponents = new List<IGazeFocusable>(ExpectedNumerOfGazeFocusableComponentsPerObject);
		List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 * L_0 = (List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39 *)il2cpp_codegen_object_new(List_1_t7087559B38E0BD4DE695E456267A490D9A0F6F39_il2cpp_TypeInfo_var);
		List_1__ctor_mFFC9DB51A8DE8C9DC75BC85A0FB833D218C3C3FD(L_0, 6, /*hidden argument*/List_1__ctor_mFFC9DB51A8DE8C9DC75BC85A0FB833D218C3C3FD_RuntimeMethod_var);
		__this->set__gazeFocusableComponents_1(L_0);
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
// Tobii.G2OM.G2OM_Matrix4x4 Tobii.G2OM.G2OM_UnityExtensionMethods::AsG2OMMatrix4x4(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2  G2OM_UnityExtensionMethods_AsG2OMMatrix4x4_m94ED5422DE280A850560B08E082B024D67559802 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix0, const RuntimeMethod* method)
{
	G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new G2OM_Matrix4x4
		// {
		//     m00 = matrix.m00,
		//     m01 = matrix.m01,
		//     m02 = matrix.m02,
		//     m03 = matrix.m03,
		//     m10 = matrix.m10,
		//     m11 = matrix.m11,
		//     m12 = matrix.m12,
		//     m13 = matrix.m13,
		//     m20 = matrix.m20,
		//     m21 = matrix.m21,
		//     m22 = matrix.m22,
		//     m23 = matrix.m23,
		//     m30 = matrix.m30,
		//     m31 = matrix.m31,
		//     m32 = matrix.m32,
		//     m33 = matrix.m33,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2 ));
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_0 = ___matrix0;
		float L_1 = L_0.get_m00_0();
		(&V_0)->set_m00_0(L_1);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2 = ___matrix0;
		float L_3 = L_2.get_m01_4();
		(&V_0)->set_m01_4(L_3);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_4 = ___matrix0;
		float L_5 = L_4.get_m02_8();
		(&V_0)->set_m02_8(L_5);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_6 = ___matrix0;
		float L_7 = L_6.get_m03_12();
		(&V_0)->set_m03_12(L_7);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8 = ___matrix0;
		float L_9 = L_8.get_m10_1();
		(&V_0)->set_m10_1(L_9);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10 = ___matrix0;
		float L_11 = L_10.get_m11_5();
		(&V_0)->set_m11_5(L_11);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_12 = ___matrix0;
		float L_13 = L_12.get_m12_9();
		(&V_0)->set_m12_9(L_13);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14 = ___matrix0;
		float L_15 = L_14.get_m13_13();
		(&V_0)->set_m13_13(L_15);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_16 = ___matrix0;
		float L_17 = L_16.get_m20_2();
		(&V_0)->set_m20_2(L_17);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_18 = ___matrix0;
		float L_19 = L_18.get_m21_6();
		(&V_0)->set_m21_6(L_19);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_20 = ___matrix0;
		float L_21 = L_20.get_m22_10();
		(&V_0)->set_m22_10(L_21);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_22 = ___matrix0;
		float L_23 = L_22.get_m23_14();
		(&V_0)->set_m23_14(L_23);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_24 = ___matrix0;
		float L_25 = L_24.get_m30_3();
		(&V_0)->set_m30_3(L_25);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_26 = ___matrix0;
		float L_27 = L_26.get_m31_7();
		(&V_0)->set_m31_7(L_27);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_28 = ___matrix0;
		float L_29 = L_28.get_m32_11();
		(&V_0)->set_m32_11(L_29);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_30 = ___matrix0;
		float L_31 = L_30.get_m33_15();
		(&V_0)->set_m33_15(L_31);
		G2OM_Matrix4x4_tBE6A4D4EE40B3D70A5E9A6079EAF6DC99BD6BEF2  L_32 = V_0;
		return L_32;
	}
}
// Tobii.G2OM.G2OM_Vector3 Tobii.G2OM.G2OM_UnityExtensionMethods::AsG2OMVector3(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  G2OM_UnityExtensionMethods_AsG2OMVector3_m285727854FC4760794F7B4EA667B3F3C0EA9DB06 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method)
{
	G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new G2OM_Vector3
		// {
		//     x = vector.x,
		//     y = vector.y,
		//     z = vector.z,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___vector0;
		float L_1 = L_0.get_x_2();
		(&V_0)->set_x_0(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___vector0;
		float L_3 = L_2.get_y_3();
		(&V_0)->set_y_1(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___vector0;
		float L_5 = L_4.get_z_4();
		(&V_0)->set_z_2(L_5);
		G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Vector3 Tobii.G2OM.G2OM_UnityExtensionMethods::Vector(Tobii.G2OM.G2OM_Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G2OM_UnityExtensionMethods_Vector_mCEEA5AF945BEBF2504D3A64B1C6D3114AEC1FBA4 (G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  ___vector0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector3
		// {
		//     x = vector.x,
		//     y = vector.y,
		//     z = vector.z,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  L_0 = ___vector0;
		float L_1 = L_0.get_x_0();
		(&V_0)->set_x_2(L_1);
		G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  L_2 = ___vector0;
		float L_3 = L_2.get_y_1();
		(&V_0)->set_y_3(L_3);
		G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  L_4 = ___vector0;
		float L_5 = L_4.get_z_2();
		(&V_0)->set_z_4(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		return L_6;
	}
}
// Tobii.G2OM.G2OM_Ray Tobii.G2OM.G2OM_UnityExtensionMethods::CreateRay(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9  G2OM_UnityExtensionMethods_CreateRay_m6FB164055DD7C1891C9B42E12B610CE06B6B5D30 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayOrigin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rayDirection1, const RuntimeMethod* method)
{
	G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new G2OM_Ray
		// {
		//     origin = rayOrigin.AsG2OMVector3(),
		//     direction = rayDirection.AsG2OMVector3(),
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9 ));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___rayOrigin0;
		G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  L_1;
		L_1 = G2OM_UnityExtensionMethods_AsG2OMVector3_m285727854FC4760794F7B4EA667B3F3C0EA9DB06(L_0, /*hidden argument*/NULL);
		(&V_0)->set_origin_0(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___rayDirection1;
		G2OM_Vector3_t4A77F0BA70F165BC6C86E4545C09318A62F40A4D  L_3;
		L_3 = G2OM_UnityExtensionMethods_AsG2OMVector3_m285727854FC4760794F7B4EA667B3F3C0EA9DB06(L_2, /*hidden argument*/NULL);
		(&V_0)->set_direction_1(L_3);
		G2OM_Ray_t5B49A5A55B51DA9DF39338656E6841A0BD844FB9  L_4 = V_0;
		return L_4;
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
// Conversion methods for marshalling of: Tobii.G2OM.InternalCandidate
IL2CPP_EXTERN_C void InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895_marshal_pinvoke(const InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895& unmarshaled, InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895_marshaled_pinvoke& marshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'InternalCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895_marshal_pinvoke_back(const InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895_marshaled_pinvoke& marshaled, InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895& unmarshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'InternalCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Tobii.G2OM.InternalCandidate
IL2CPP_EXTERN_C void InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895_marshal_pinvoke_cleanup(InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Tobii.G2OM.InternalCandidate
IL2CPP_EXTERN_C void InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895_marshal_com(const InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895& unmarshaled, InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895_marshaled_com& marshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'InternalCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895_marshal_com_back(const InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895_marshaled_com& marshaled, InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895& unmarshaled)
{
	Exception_t* ___GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'GameObject' of type 'InternalCandidate': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___GameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Tobii.G2OM.InternalCandidate
IL2CPP_EXTERN_C void InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895_marshal_com_cleanup(InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895_marshaled_com& marshaled)
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
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_InitializeOptions(Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_InitializeOptions_m5B3B1CCC75312227E69143F8A427518D8385DFAF (G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 * ___options0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_tobii_g2om_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("tobii_g2om"), "g2om_context_options_init", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(g2om_context_options_init)(___options0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___options0);
	#endif

	return returnValue;
}
// Tobii.G2OM.G2OM_ContextCreateOptions Tobii.G2OM.Interop::G2OM_InitializeOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724  Interop_G2OM_InitializeOptions_m178C3D46C58F6DBEDE9448403EE0B7BAE0929C0A (const RuntimeMethod* method)
{
	G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691  V_0;
	memset((&V_0), 0, sizeof(V_0));
	G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var internalOptions = new G2OM_Internal_ContextCreateOptions();
		il2cpp_codegen_initobj((&V_0), sizeof(G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 ));
		// var options = new G2OM_ContextCreateOptions();
		il2cpp_codegen_initobj((&V_1), sizeof(G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724 ));
		// var result = G2OM_InitializeOptions(ref internalOptions);
		int32_t L_0;
		L_0 = Interop_G2OM_InitializeOptions_m5B3B1CCC75312227E69143F8A427518D8385DFAF((G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 *)(&V_0), /*hidden argument*/NULL);
		// if(result == G2OM_Error.Ok) // What to do if this fails?
		if (L_0)
		{
			goto IL_0033;
		}
	}
	{
		// options.capacity = internalOptions.capacity;
		G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691  L_1 = V_0;
		uint32_t L_2 = L_1.get_capacity_0();
		(&V_1)->set_capacity_0(L_2);
		// options.thread_count = internalOptions.thread_count;
		G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691  L_3 = V_0;
		uint32_t L_4 = L_3.get_thread_count_1();
		(&V_1)->set_thread_count_1(L_4);
	}

IL_0033:
	{
		// return options;
		G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724  L_5 = V_1;
		return L_5;
	}
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_ContextCreateEx(System.IntPtr&,Tobii.G2OM.Interop/G2OM_Internal_ContextCreateOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_ContextCreateEx_m961B15C68A6B7A7968F722F93BCDD90C9C902E8F (intptr_t* ___context0, G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 * ___options1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t*, G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_tobii_g2om_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("tobii_g2om"), "g2om_context_create_ex", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(g2om_context_create_ex)(___context0, ___options1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___context0, ___options1);
	#endif

	return returnValue;
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_ContextCreateEx(System.IntPtr&,Tobii.G2OM.G2OM_ContextCreateOptions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_ContextCreateEx_m1B9DDAA52521BD4442611D32EB4CC3523E97B005 (intptr_t* ___context0, G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724 * ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* G_B3_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* G_B6_0 = NULL;
	G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 * G_B8_0 = NULL;
	G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 * G_B7_0 = NULL;
	intptr_t G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 * G_B9_1 = NULL;
	{
		// var has_license = !string.IsNullOrEmpty(options.license_content);
		G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724 * L_0 = ___options1;
		String_t* L_1 = L_0->get_license_content_2();
		bool L_2;
		L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		// var internalOptions = new G2OM_Internal_ContextCreateOptions();
		il2cpp_codegen_initobj((&V_1), sizeof(G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 ));
		// var license = has_license ? options.license_content : "" ;
		bool L_3 = V_0;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0027;
	}

IL_0021:
	{
		G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724 * L_4 = ___options1;
		String_t* L_5 = L_4->get_license_content_2();
		G_B3_0 = L_5;
	}

IL_0027:
	{
		V_2 = G_B3_0;
		// var bytes = has_license ? Encoding.UTF8.GetBytes(options.license_content) : new byte[0];
		bool L_6 = V_0;
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)0);
		G_B6_0 = L_7;
		goto IL_0043;
	}

IL_0033:
	{
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_8;
		L_8 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724 * L_9 = ___options1;
		String_t* L_10 = L_9->get_license_content_2();
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(15 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, L_10);
		G_B6_0 = L_11;
	}

IL_0043:
	{
		V_3 = G_B6_0;
		// var ptr = Marshal.AllocHGlobal(license.Length);
		String_t* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_14;
		L_14 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(L_13, /*hidden argument*/NULL);
		V_4 = (intptr_t)L_14;
		// Marshal.Copy(bytes, 0, ptr, bytes.Length);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = V_3;
		intptr_t L_16 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = V_3;
		NullCheck(L_17);
		Marshal_Copy_m05D5F5A9F9BA4C1B748AAE7266B3C0E9D9EE2012(L_15, 0, (intptr_t)L_16, ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))), /*hidden argument*/NULL);
		// internalOptions.capacity = options.capacity;
		G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724 * L_18 = ___options1;
		uint32_t L_19 = L_18->get_capacity_0();
		(&V_1)->set_capacity_0(L_19);
		// internalOptions.license_length = (uint) license.Length;
		String_t* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_20, /*hidden argument*/NULL);
		(&V_1)->set_license_length_3(L_21);
		// internalOptions.thread_count = options.thread_count;
		G2OM_ContextCreateOptions_t4309561974C46E5E7EF46973F10D5149A0610724 * L_22 = ___options1;
		uint32_t L_23 = L_22->get_thread_count_1();
		(&V_1)->set_thread_count_1(L_23);
		// internalOptions.license_ptr = has_license ? ptr : IntPtr.Zero;
		bool L_24 = V_0;
		G_B7_0 = (&V_1);
		if (L_24)
		{
			G_B8_0 = (&V_1);
			goto IL_0090;
		}
	}
	{
		G_B9_0 = (0);
		G_B9_1 = G_B7_0;
		goto IL_0092;
	}

IL_0090:
	{
		intptr_t L_25 = V_4;
		G_B9_0 = L_25;
		G_B9_1 = G_B8_0;
	}

IL_0092:
	{
		G_B9_1->set_license_ptr_2((intptr_t)G_B9_0);
		// var result = G2OM_ContextCreateEx(out context, ref internalOptions);
		intptr_t* L_26 = ___context0;
		int32_t L_27;
		L_27 = Interop_G2OM_ContextCreateEx_m961B15C68A6B7A7968F722F93BCDD90C9C902E8F((intptr_t*)L_26, (G2OM_Internal_ContextCreateOptions_t7C4B9989B0DEEF529C27A74F024705F41DFA5691 *)(&V_1), /*hidden argument*/NULL);
		// Marshal.FreeHGlobal(ptr);
		intptr_t L_28 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_28, /*hidden argument*/NULL);
		// return result;
		return L_27;
	}
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_Process(System.IntPtr,Tobii.G2OM.G2OM_DeviceData&,Tobii.G2OM.G2OM_RaycastResult&,System.UInt32,Tobii.G2OM.G2OM_Candidate[],Tobii.G2OM.G2OM_CandidateResult[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_Process_mE05755CF4B7B4F32ACDDBD946B393C59EF32BB3D (intptr_t ___context0, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * ___deviceData1, G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8 * ___raycastResult2, uint32_t ___candidatesCount3, G2OM_CandidateU5BU5D_t7CEC092C766EEA7361EF48AA914B042BC20BFF1E* ___candidates4, G2OM_CandidateResultU5BU5D_tAB848527789DB0EBAD0DD5B7914AAFFEC0EEEC02* ___candidateResults5, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *, G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8 *, uint32_t, G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057 *, G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08 *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_tobii_g2om_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *) + sizeof(G2OM_RaycastResult_tCC0C2E6332A3EF7AD3FD830AA610BAFFAE1240E8 *) + sizeof(uint32_t) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("tobii_g2om"), "g2om_process", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___candidates4' to native representation
	G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057 * ____candidates4_marshaled = NULL;
	if (___candidates4 != NULL)
	{
		____candidates4_marshaled = reinterpret_cast<G2OM_Candidate_t31ADC0CF3CF35073EC1BC52BCACB3F9AD74E2057 *>((___candidates4)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___candidateResults5' to native representation
	G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08 * ____candidateResults5_marshaled = NULL;
	if (___candidateResults5 != NULL)
	{
		____candidateResults5_marshaled = reinterpret_cast<G2OM_CandidateResult_tA0A33A7DEECDBAB42D8ACA5D57410CB51E605C08 *>((___candidateResults5)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(g2om_process)(___context0, ___deviceData1, ___raycastResult2, ___candidatesCount3, ____candidates4_marshaled, ____candidateResults5_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___context0, ___deviceData1, ___raycastResult2, ___candidatesCount3, ____candidates4_marshaled, ____candidateResults5_marshaled);
	#endif

	return returnValue;
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_ContextDestroy(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_ContextDestroy_mCB317F7B57994D659486C60C6A21750C26B93918 (intptr_t* ___context0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_tobii_g2om_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("tobii_g2om"), "g2om_context_destroy", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(g2om_context_destroy)(___context0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___context0);
	#endif

	return returnValue;
}
// Tobii.G2OM.G2OM_Error Tobii.G2OM.Interop::G2OM_GetCandidateSearchPattern(System.IntPtr,Tobii.G2OM.G2OM_DeviceData&,System.UInt32,Tobii.G2OM.G2OM_GazeRay[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interop_G2OM_GetCandidateSearchPattern_mAE6A42A99E3BFEDA11F27EAD72F96C601E1C548A (intptr_t ___context0, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 * ___deviceData1, uint32_t ___numberOfRays2, G2OM_GazeRayU5BU5D_t70636B1252A031E4E69422546355CBA8ACF46526* ___mutatedRays3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *, uint32_t, G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA *);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_tobii_g2om_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(G2OM_DeviceData_t89D8C181AD591B39B1DB1F185A0252ACCF616F14 *) + sizeof(uint32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("tobii_g2om"), "g2om_get_candidate_search_pattern", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___mutatedRays3' to native representation
	G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA * ____mutatedRays3_marshaled = NULL;
	if (___mutatedRays3 != NULL)
	{
		____mutatedRays3_marshaled = reinterpret_cast<G2OM_GazeRay_t58E094CB5E4078AB25F3A3857BF5049FF04342EA *>((___mutatedRays3)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_tobii_g2om_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(g2om_get_candidate_search_pattern)(___context0, ___deviceData1, ___numberOfRays2, ____mutatedRays3_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___context0, ___deviceData1, ___numberOfRays2, ____mutatedRays3_marshaled);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tobii.G2OM.G2OM/<>c__DisplayClass32_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass32_0__ctor_m4BEDACEAB740212DA9A0F65626C3083973B1BD6F (U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Tobii.G2OM.G2OM/<>c__DisplayClass32_0::<RemoveOldCandidates>b__0(System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__0_m6A8770DC7CCFEFC2B07955E8ADA3324A24297D34 (U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * __this, KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var ordered = allCandidates.Where(k => keysToRemove.Contains(k.Key) == false).OrderByDescending(k => now - k.Value.Timestamp);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_keysToRemove_0();
		int32_t L_1;
		L_1 = KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_inline((KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 *)(&___k0), /*hidden argument*/KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_0, L_1, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Single Tobii.G2OM.G2OM/<>c__DisplayClass32_0::<RemoveOldCandidates>b__1(System.Collections.Generic.KeyValuePair`2<System.Int32,Tobii.G2OM.InternalCandidate>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec__DisplayClass32_0_U3CRemoveOldCandidatesU3Eb__1_m59A0878B39A1F61375E0D38030F54894A99089E9 (U3CU3Ec__DisplayClass32_0_tE3DBD189C5094F940020F873BC693FF85F9F4342 * __this, KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mF77E84266CD7B5910C5C0C47D8DC3068DEB7B7C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var ordered = allCandidates.Where(k => keysToRemove.Contains(k.Key) == false).OrderByDescending(k => now - k.Value.Timestamp);
		float L_0 = __this->get_now_1();
		InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  L_1;
		L_1 = KeyValuePair_2_get_Value_mF77E84266CD7B5910C5C0C47D8DC3068DEB7B7C5_inline((KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 *)(&___k0), /*hidden argument*/KeyValuePair_2_get_Value_mF77E84266CD7B5910C5C0C47D8DC3068DEB7B7C5_RuntimeMethod_var);
		float L_2 = L_1.get_Timestamp_1();
		return ((float)il2cpp_codegen_subtract((float)L_0, (float)L_2));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float G2OM_get_MaxHistoryInSeconds_mBE37AA467A7AE86592155402DB38F653981998D3_inline (G2OM_t5043007D3745FDB3328C80D03E185E41BA8FBC9C * __this, const RuntimeMethod* method)
{
	{
		// public float MaxHistoryInSeconds { get { return _howLongToKeepCandidatesInMemory; } }
		float L_0 = __this->get__howLongToKeepCandidatesInMemory_6();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  L_0 = (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )__this->get_current_3();
		return (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  Enumerator_get_Current_m480E622FFCF9A727BCFD4296D6E3EF2995D27BDC_gshared_inline (Enumerator_t36794CEF849490921D061F887DE469134992B045 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00  L_0 = (KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 )__this->get_current_3();
		return (KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  KeyValuePair_2_get_Value_mF77E84266CD7B5910C5C0C47D8DC3068DEB7B7C5_gshared_inline (KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 * __this, const RuntimeMethod* method)
{
	{
		InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895  L_0 = (InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895 )__this->get_value_1();
		return (InternalCandidate_tC2AA012378D30425F5B992C74D8EECDA68326895 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m05202E1FE38D229FE77CE95F6CD68E88437256D9_gshared_inline (KeyValuePair_2_t44A84E2349A208E12BE80716F569EEA788515B00 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mCDEC89B2EB171FB3B8DE932158BC505ADC3C1C16_gshared_inline (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  List_1_get_Item_m59B4DED04CE74CDA40ED7067E22E8D8BF8EE9F72_gshared_inline (List_1_t7E9A6184435C919A8A19E15BAF9B49C4D831B68C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585* L_2 = (FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585*)__this->get__items_1();
		int32_t L_3 = ___index0;
		FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((FocusedCandidateU5BU5D_t0FF1AF1620D956D5317F919CCEC07FE9D5220585*)L_2, (int32_t)L_3);
		return (FocusedCandidate_t1D2CE67AA8C36A991244707B30DD3A95412D1442 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}

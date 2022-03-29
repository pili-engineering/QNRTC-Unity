#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086;
// System.Collections.Generic.Dictionary`2<System.String,qnrtc.QNMediaRelayState>
struct Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<qnrtc.QNLiveStreamingListener>
struct IEnumerable_1_tDE174BE0FDE213FB22535B6D6A000BBBD3A61059;
// System.Collections.Generic.IEnumerable`1<qnrtc.QNMediaRelayListener>
struct IEnumerable_1_t35F88B2B0A7D1FFD777CFFFAA818203F601A130C;
// System.Collections.Generic.IEnumerable`1<qnrtc.QNNetworkQualityListener>
struct IEnumerable_1_t7CE78365DCFE0D28A743B201498099DD2733D2E8;
// System.Collections.Generic.IEnumerable`1<qnrtc.QNPublishResultListener>
struct IEnumerable_1_t2DC3F6172567796117C4B3AA285FFC28851D1C9D;
// System.Collections.Generic.IEnumerable`1<qnrtc.QNRTCClientEventListener>
struct IEnumerable_1_t16930E39FADFC7C3BDA5EC5CDA3E4637EBC25BBF;
// System.Collections.Generic.IEnumerable`1<qnrtc.QNRTCClientRoleEventListener>
struct IEnumerable_1_tF2088FCE821088BBE8CA34C7BCDA7D33CCEA4376;
// System.Collections.Generic.IEnumerable`1<qnrtc.QNRTCEventListener>
struct IEnumerable_1_t99F12D0CCFD4B1F99F0DE2E1CB96F6D2C963CC1E;
// System.Collections.Generic.IEnumerable`1<qnrtc.QNTrackInfoChangedListener>
struct IEnumerable_1_t68F10BAD51C20AFF3BBFF49ABD86AB72A17327EF;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyCollection_tFDE7FE6F6A0AE461D4FD5935445ADF914C9610C8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,qnrtc.QNMediaRelayState>
struct KeyCollection_tC1E3B23A0A5430A5BBC1531603598B58EB8DACD9;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<qnrtc.QNLiveStreamingListener>
struct List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB;
// System.Collections.Generic.List`1<qnrtc.QNLocalTrack>
struct List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E;
// System.Collections.Generic.List`1<qnrtc.QNMediaRelayInfo>
struct List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B;
// System.Collections.Generic.List`1<qnrtc.QNMediaRelayListener>
struct List_1_t183BB96555952E7D5EB933BDC2D880925C92665D;
// System.Collections.Generic.List`1<qnrtc.QNNetworkQualityListener>
struct List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF;
// System.Collections.Generic.List`1<qnrtc.QNPublishResultListener>
struct List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE;
// System.Collections.Generic.List`1<qnrtc.QNRTCClientEventListener>
struct List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC;
// System.Collections.Generic.List`1<qnrtc.QNRTCClientRoleEventListener>
struct List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D;
// System.Collections.Generic.List`1<qnrtc.QNRTCEventListener>
struct List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114;
// System.Collections.Generic.List`1<qnrtc.QNRemoteAudioMixedFrameListener>
struct List_1_t73046A2A36BF866EAD8C4C3E0EED64FAB2FFEC94;
// System.Collections.Generic.List`1<qnrtc.QNRemoteAudioTrack>
struct List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93;
// System.Collections.Generic.List`1<qnrtc.QNRemoteTrack>
struct List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29;
// System.Collections.Generic.List`1<qnrtc.QNRemoteUser>
struct List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6;
// System.Collections.Generic.List`1<qnrtc.QNTrackInfoChangedListener>
struct List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D;
// System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingImage>
struct List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1;
// System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingTrack>
struct List_1_t64043FA015632E81188D51414F588390CCCBB5D5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<QNRTCUnityDemo.UserTableViewCell>
struct List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4;
// System.Predicate`1<qnrtc.QNLiveStreamingListener>
struct Predicate_1_tB070488740BE16FBBA974A350C45ADD4A9AF5497;
// System.Predicate`1<qnrtc.QNLocalAudioTrack>
struct Predicate_1_t3B328A84E48C8F4D360F926E5024330CB7C6EF23;
// System.Predicate`1<qnrtc.QNMediaRelayListener>
struct Predicate_1_t1C6434AC096ABA8C5D8C2CFF68D91EE1BA2435E5;
// System.Predicate`1<qnrtc.QNNetworkQualityListener>
struct Predicate_1_t9E775160E1B0C4656A484850857A4DA14F20DE76;
// System.Predicate`1<qnrtc.QNPublishResultListener>
struct Predicate_1_tA9CF5AEF781D5CA692FDCAC585DE4729A029F52A;
// System.Predicate`1<qnrtc.QNRTCClientEventListener>
struct Predicate_1_tAD60A78CAD9ED4F7E1EE5385A32844F095B7A165;
// System.Predicate`1<qnrtc.QNRTCClientRoleEventListener>
struct Predicate_1_t729D51C84BBD7E21734C9342DE577C92FED15B08;
// System.Predicate`1<qnrtc.QNRTCEventListener>
struct Predicate_1_tE3E8C36266DF71265E76E7E547E37ED9FE02A872;
// System.Predicate`1<qnrtc.QNRemoteAudioMixedFrameListener>
struct Predicate_1_tE9CC18A97DC95E9A13695E11D594F4F10C785310;
// System.Predicate`1<qnrtc.QNRemoteTrack>
struct Predicate_1_tC9D6355CCF52D9DB9BD1DAA9B961A3379D7D26B2;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct ValueCollection_t3C26F2C1F184437F9AF9918EEA4CE247BD559468;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,qnrtc.QNMediaRelayState>
struct ValueCollection_t7C09E65A4AE6D54395AE03EAD7878AE4A52640F1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.String>>[]
struct EntryU5BU5D_tEB1A6A782C0FB4D167EF4299967371DCD8A5FDB7;
// System.Collections.Generic.Dictionary`2/Entry<System.String,qnrtc.QNMediaRelayState>[]
struct EntryU5BU5D_tCBEC1CEA9EEB1E602C8F9C92439C6FFF5CCADD80;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// qnrtc.QNLiveStreamingListener[]
struct QNLiveStreamingListenerU5BU5D_t12C9DB8AF40F8B4E70EEB9AE0A5C39AC75655425;
// qnrtc.QNLocalTrack[]
struct QNLocalTrackU5BU5D_tB82B7AF7C0E378F5C2B86448A927DEE5DEE77546;
// qnrtc.QNMediaRelayInfo[]
struct QNMediaRelayInfoU5BU5D_t27D85C4062A1FBF847BD25A52A0E1985EEC469DD;
// qnrtc.QNMediaRelayListener[]
struct QNMediaRelayListenerU5BU5D_t9EC5916569F7BCCD26F925E9F446C34589DE985A;
// qnrtc.QNNetworkQualityListener[]
struct QNNetworkQualityListenerU5BU5D_tED1D0FD7CFC177D572F815228C165D1C25315B7D;
// qnrtc.QNPublishResultListener[]
struct QNPublishResultListenerU5BU5D_t111BA26C7A24669500CED0C12CEA9AEB36B1F016;
// qnrtc.QNRTCClientEventListener[]
struct QNRTCClientEventListenerU5BU5D_tEB5A9165BF119F1F6CBE4D390A9BF785B7A66B1E;
// qnrtc.QNRTCClientRoleEventListener[]
struct QNRTCClientRoleEventListenerU5BU5D_tCDA3EA7F233FE14A01FE7A2A11A44911E10B7C72;
// qnrtc.QNRTCEventListener[]
struct QNRTCEventListenerU5BU5D_t493927EAFD1FB488E1E4BDECA9E0C5D51CF6BFC8;
// qnrtc.QNRemoteAudioTrack[]
struct QNRemoteAudioTrackU5BU5D_tB3DDD972D255A04E107C17907898713F76730A2D;
// qnrtc.QNRemoteTrack[]
struct QNRemoteTrackU5BU5D_tB3E6B20AD502B060B2890E0D3D333CC9000AB6B4;
// qnrtc.QNRemoteUser[]
struct QNRemoteUserU5BU5D_t58474541AFFC51FA17903D7602110E757654ACE1;
// qnrtc.QNTrackInfoChangedListener[]
struct QNTrackInfoChangedListenerU5BU5D_t16647F116B154DE63DCAF847F9F9BB2D0FE79591;
// qnrtc.QNTranscodingLiveStreamingImage[]
struct QNTranscodingLiveStreamingImageU5BU5D_t8AC6AFCC6E695EE979D08EF50CE12133A3F75F4A;
// qnrtc.QNTranscodingLiveStreamingTrack[]
struct QNTranscodingLiveStreamingTrackU5BU5D_t82ED63347B3097FB77C8022C917274B11CFE5B35;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// QNRTCUnityDemo.UserTableViewCell[]
struct UserTableViewCellU5BU5D_tB321A4BFCF3C1725ED8091A47C694EC2D0E5D38F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// QNRTCUnityDemo.Config
struct Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// UnityEngine.Event
struct Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// qnrtc.QNLiveStreamingListener
struct QNLiveStreamingListener_tDB0E3344386E1345F94C97798E3A933A486C121C;
// qnrtc.QNLocalAudioTrack
struct QNLocalAudioTrack_tDC6273EDB0E517A7C77BB02AFFA09FAF65DBA473;
// qnrtc.QNLocalTrack
struct QNLocalTrack_t736D4B1BE700FA5758B9B7A470DF939A9F508DFB;
// qnrtc.QNMediaRelayListener
struct QNMediaRelayListener_t0E3334272C3DD40A918FDFC4251EA2C5891915C1;
// qnrtc.QNNetworkQualityListener
struct QNNetworkQualityListener_t4176D3AB2F3C7CED81AD05A44440FCA3F9D36AD0;
// qnrtc.QNPublishResultListener
struct QNPublishResultListener_tF68D1E6213DF9CD41CE1642176E4C3A9BBE43690;
// qnrtc.QNRTCClientEventListener
struct QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17;
// qnrtc.QNRTCClientRoleEventListener
struct QNRTCClientRoleEventListener_t508418F360F990CE05BC456095B1565BB07A10B6;
// qnrtc.QNRTCEventListener
struct QNRTCEventListener_t28A5400C8F7D67B52EE80A307404CE10AD2887AE;
// qnrtc.QNRemoteAudioMixedFrameListener
struct QNRemoteAudioMixedFrameListener_t3F288A00B2EE29638CFE068A62930B5DD8DDF4D0;
// qnrtc.QNRemoteAudioTrack
struct QNRemoteAudioTrack_tC90F78CB3D363A3524B6E5CCEE8EA06071AC371F;
// qnrtc.QNRemoteTrack
struct QNRemoteTrack_t54EBE387AE6D1BE3DF7A34C50FE0DE193FAB542E;
// qnrtc.QNRemoteTrackImpl
struct QNRemoteTrackImpl_t14FE838E8A5E61143C8C4914B9546ACA84A19E1C;
// qnrtc.QNTrack
struct QNTrack_tCBB63F01DA410C442F9E1D5A46DA32815F8C9516;
// qnrtc.QNTrackInfoChangedListener
struct QNTrackInfoChangedListener_tE8EF67475410CB05EB828057754F28FD6FE7DDBC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E;
// QNRTCUnityDemo.TranscodingLiveView
struct TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// QNRTCUnityDemo.UserTableView
struct UserTableView_tEAFEF96CEAE936FE20CAD291181817909AA9FF03;
// QNRTCUnityDemo.UserTableViewCell
struct UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40;
// QNRTCUnityDemo.AudioDataReader/OnReaderAudioDataCallBack
struct OnReaderAudioDataCallBack_tE4A99284DABD08897B1E8DE788AA4A73F9C1F29A;
// QNRTCUnityDemo.DirectLiveView/<>c
struct U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7;
// QNRTCUnityDemo.DirectLiveView/OnDirectLiveStartButtonClickHandler
struct OnDirectLiveStartButtonClickHandler_t9D8854DEA103C0805927C277EEE353FD4632CBE0;
// QNRTCUnityDemo.DirectLiveView/OnDirectLiveStopButtonClickHandler
struct OnDirectLiveStopButtonClickHandler_tC0252230E09F0E8FC2C33432F6441D44620F2016;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// QNRTCUnityDemo.MediaRelayView/OnStartMediaRelayButtonClickHandler
struct OnStartMediaRelayButtonClickHandler_t558B0CC8A062B3B10A5BB2D794F3E73B1C0E7DF5;
// QNRTCUnityDemo.MediaRelayView/OnStopMediaRelayButtonClickHandler
struct OnStopMediaRelayButtonClickHandler_t5B01D96AD12B06710B032B2922DF3F90CD20A23E;
// QNRTCUnityDemo.MediaRelayView/OnUpdateMediaRelayButtonClickHandler
struct OnUpdateMediaRelayButtonClickHandler_tB4B8FB8EDF5E3A663FC8CD1F70CC2498BCB7C966;
// qnrtc.QNRTCClientImpl/<>c
struct U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_t2AAD50119D08DD1B4C771B864F598FF746DCD24E;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass51_1
struct U3CU3Ec__DisplayClass51_1_t6DF4D7A3D25AFAEF15D62BEDD49FA54F55E351A3;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t0155E618B89F27AD9168AC5C2BD2A25C0043D2C5;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass53_0
struct U3CU3Ec__DisplayClass53_0_tCDA2A72004C7830004AC73E4E306EA9848399E7C;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass54_0
struct U3CU3Ec__DisplayClass54_0_tD3E0AC0B1A3EEF64541C29AF46EBCBCD42B80529;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass55_0
struct U3CU3Ec__DisplayClass55_0_t6DE2A2FFDD5E39BC586AAA5D450EBBBF7399C7DE;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass56_0
struct U3CU3Ec__DisplayClass56_0_tB70C8F9755D9ECD9666594B0A4E74768E38C203C;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_tB3F7A4EA9305DE17A1A3D4B2D1019B29C4750A92;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_t65A05DD4FF38946C9A94C72515864691EF4A4ADF;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_t825FAFFA8C19B6B38892BCD6398591FEFB9617EB;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass60_0
struct U3CU3Ec__DisplayClass60_0_t4732A4138C3C22DC19115BFABE43FAD11FEBA1C7;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass61_0
struct U3CU3Ec__DisplayClass61_0_t553E661F40DDF9E29024F7C49694CFEB4B818F2E;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t532BC37CFB1031A03F016F5AD79778FA66D21B74;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_t7A03CBB5927CDC7CB5B43405D5B2B710C231D75C;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass64_0
struct U3CU3Ec__DisplayClass64_0_t46BA0CC0C2F9D187D3EFCDCA5A566E4295EC9D81;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass66_0
struct U3CU3Ec__DisplayClass66_0_tCDFD49F55861F898FA96CBBD565A49B81BD8318A;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_t5DC3CEE62D4F40329FC4FEEC576419629A5533D7;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass68_0
struct U3CU3Ec__DisplayClass68_0_tCED900DFACCAB707B4F58B802DEF2995046D9DFF;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_t723537D1DF7948FC6AD565DB31369BCEABDAEDF1;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass70_0
struct U3CU3Ec__DisplayClass70_0_t8F8426DD7AF0AB06D09638977B4AAC40E4B173D8;
// qnrtc.QNRTCClientImpl/<>c__DisplayClass72_0
struct U3CU3Ec__DisplayClass72_0_tAF91F0180EED25870CF1C79D3D788F2CD37AC089;
// qnrtc.QNRTCImpl/<>c
struct U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F;
// qnrtc.QNRTCImpl/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t37D297C8DACF8D6FC987909A195471863B7DC562;
// qnrtc.QNRemoteTrackImpl/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t3DE3E818AE8FC6236EDA869728ACD2E5171444C4;
// qnrtc.QNRemoteTrackImpl/<>c__DisplayClass5_1
struct U3CU3Ec__DisplayClass5_1_t805B9AD3F21643880F37A41293C6DECEC5248578;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// QNRTCUnityDemo.SendMessageView/OnSendMessageButtonClickHandler
struct OnSendMessageButtonClickHandler_t5AB3F1ED1EA3BFA96752ABA6798E8BB3509F2BDA;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;
// QNRTCUnityDemo.TranscodingLiveView/OnRemoveLayoutButtonClickHandler
struct OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613;
// QNRTCUnityDemo.TranscodingLiveView/OnStartTranscodingButtonClickHandler
struct OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F;
// QNRTCUnityDemo.TranscodingLiveView/OnStopTranscodingButtonClickHandler
struct OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77;
// QNRTCUnityDemo.TranscodingLiveView/OnUpdateLayoutButtonClickHandler
struct OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133;

IL2CPP_EXTERN_C RuntimeClass* Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t183BB96555952E7D5EB933BDC2D880925C92665D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t64043FA015632E81188D51414F588390CCCBB5D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNLiveStreamingListener_tDB0E3344386E1345F94C97798E3A933A486C121C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNLocalAudioTrack_tDC6273EDB0E517A7C77BB02AFFA09FAF65DBA473_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNMediaRelayListener_t0E3334272C3DD40A918FDFC4251EA2C5891915C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNNetworkQualityListener_t4176D3AB2F3C7CED81AD05A44440FCA3F9D36AD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNPublishResultListener_tF68D1E6213DF9CD41CE1642176E4C3A9BBE43690_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNRTCClientRoleEventListener_t508418F360F990CE05BC456095B1565BB07A10B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNRTCEventListener_t28A5400C8F7D67B52EE80A307404CE10AD2887AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNRTCImpl_t4298BAC84342C1C7718406E69CF48C20D68938B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNRemoteAudioTrack_tC90F78CB3D363A3524B6E5CCEE8EA06071AC371F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNRemoteTrack_t54EBE387AE6D1BE3DF7A34C50FE0DE193FAB542E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNTrackInfoChangedListener_tE8EF67475410CB05EB828057754F28FD6FE7DDBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNTrack_tCBB63F01DA410C442F9E1D5A46DA32815F8C9516_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral002FA105EC4D27973F317DAEE7979F11ECC32897;
IL2CPP_EXTERN_C String_t* _stringLiteral04E9EBE1F00A77E549A2B09F449656118F2B3197;
IL2CPP_EXTERN_C String_t* _stringLiteral144476A4F3FDA0821138BA3DDDC482B386191EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral1B9BE6C16D64724D521E1E4EDFADCBD3F3B3D30D;
IL2CPP_EXTERN_C String_t* _stringLiteral1F4330F2354B690F80985F8452721328765B2266;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral46E7D1F61DCF4E1B662DDCA7492F5BE6C811BC05;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8648CBFBB0D15E23BF34C272F2BC3B30AF8E6C;
IL2CPP_EXTERN_C String_t* _stringLiteral7CC484D2E992FF2D2B483D2DB758D10306065E7E;
IL2CPP_EXTERN_C String_t* _stringLiteral7D49C5F8F138498710654AF049AD55DA907A2575;
IL2CPP_EXTERN_C String_t* _stringLiteral7F846AB4F417E1761170BAE0449870C5EAAD9551;
IL2CPP_EXTERN_C String_t* _stringLiteral9037918EF368FDB9869069C353AC1D0AA985BD83;
IL2CPP_EXTERN_C String_t* _stringLiteral911B8DC0EC81740565D2658934AA8BF26C1133DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB764D8088C91610AE249F77AD0FBAC9723356275;
IL2CPP_EXTERN_C String_t* _stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E;
IL2CPP_EXTERN_C String_t* _stringLiteralD9C98B16A321321696C5F49E8C753494C4A314F7;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD8D195854FE6A5448A819D605C3800954C75B0F;
IL2CPP_EXTERN_C String_t* _stringLiteralDDAD0CFDCC830DE0947EAAFE19F345FC62C1BBA6;
IL2CPP_EXTERN_C String_t* _stringLiteralE40979FEA1161A35E136977FD4D7D1D9B5CDF8BF;
IL2CPP_EXTERN_C String_t* _stringLiteralEA7A676433CAB71F816C191BA6205A79CA64BAF8;
IL2CPP_EXTERN_C String_t* _stringLiteralEFA253F2C998B1AC53F3639A779725E517E309C7;
IL2CPP_EXTERN_C String_t* _stringLiteralF664BC362F785467AF01E143BB02490C507AC2DB;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralF9DAD52CE6B8B3819DC538FE3CF1BDBA1CDA215A;
IL2CPP_EXTERN_C String_t* _stringLiteralFB3E2E45E3697C91835CFBCA547A1B38DF6A850D;
IL2CPP_EXTERN_C String_t* _stringLiteralFCCC35CA69F27BCBA19D01BED1F530EDB44B4BB2;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mED59F97035E345E8002F6D93ECFECE9951826ED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m425604D2739C474CBA676076F44F5063BD2AAB53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m3F404F41E893885498C2323ED9494138BC74C93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4BF4B650B2E69D5D783B9AE68644355C271BE54C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1AF1B85572FAD8E8BBCC9FF0D4D87BCDB0F2C8E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m27211F2A3800AF0A3448F440C119A168EA003FF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4CB17774AE68A306344B0FD3B66A28F25259BBCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m509AD172D60A88DCD619ACAB5B30CDFF87D8251C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m567511193E958A85553B6FD293F29AEB3CE77787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m655A72FF4001D0349FFDEC9C6DB1155D017DCB0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7CDF85738533C50CE7BEBAF8D8B7F513B88D587D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m919CB9DB84E6EFF184E07D0BD6BBE2467C0F7C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBC190F6E473609692A5838152AC9E12062A5C666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC64A3087CF95F5E75C819788C5EE67AB1C86A7C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC8D4D1D09052360F0F9BD31CB15A548D107D05FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mED6A8CE5267E5A2E7914601170C62ABA154494BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m07527679FE6FC19F5013C9BA30EA9165D4CD17FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m190544484A48339ACEDE62C253203E1FC290E07E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4571AE6BE4BC4203E66E05DE4063747A1A419D81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m488A8BBC2E2D1DA6D7C6F66D80ACB57B239AE301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m555A0F300B3B327881B35FD27F7CFD17D8ED3F59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m58E6B27644EB1B3E426FEA2A6467475FD0062EA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96A9A53B02C242C7F50165172300672643D984DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9F739327A743D5D29DB8F39004367C995C3ED7D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC014308FDBBE80C5C817F077AB549A409D0A9AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB8FA6E6D670047E9722562DB1FC66E8C60E1631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF3164FEDEFD99EE7201EE8B0C4CD3CB9D7AA9D0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF9C9F8F6F3645D656F370B466F47D26958EC167A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0A0046F4A50F2FBE6135D1F19CA079552615508C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0A7AD8B388E6D93B5196E4A582115AB0EF7E1400_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0DF8252E6DEED7F95DA26E68E0AC1D77F01F7C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6E51D13DEC26073094BBB5921FE214ACAD7E5155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7712355670628CB2A30D130CA8978941A90B5179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8CE37972C881E04537AC2B2A1F032287BBB513BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9C6EF56836A8AC40883493E188F555E56F4D324C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mABF02AAAE3E781AE769DF5D1A39EC5477286ED01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCC898BB1D66DD9AC65AC57AA841F0C99063FFE7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF1F92F90DAC2FA71E7B0C8F31C1799A8417CBA57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF5B301818F6809411D542653BE2B429C19951CC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFE9D3E68D170EA875D9D72B5D38CE0E10AD392A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473_m7CD09D5C7A35ABC908FFD4EE388E8D310C02145D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m86200A8B43D292421BC3B199566D853D3CCA5469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mEC73C6A3E984121B1E7E04B873425C7DAD592B8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3C6CBA554C764A00A29A7E058DFEEF4AB2CC2D30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m924A4B2071DE3E3B514C00F3EE22847998EF6FFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBEABE2989AF74E7AE6A19E73FE0F4CC7884BBCB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1A90E7283FEE3F060AA16D4CA4EEA4C20666A7F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1AAC23DA0423523B66518FFCF418D97F6D9C66FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m233127B2FD7FB17E19B524AAFB01F064FF3E0838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m259F2D883AF5EAB5011683FD0AD2B55D45C94536_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6840C1FCE31BA67AE1AD6C97C5D5E58E0151CA33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m68921A1CA160CBEF9C9CC7F2B9629AE8F268ABEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mAA443355D31D4C0FA0CB80B3E7A7809765C6ED92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC03A75F234608E1577BE892E483C8F4410BAAE40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCAF8E519CD695F78836BB6E1BE8D6080FBD648CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE0A886DC7F076DD1BC18417BE08178E0A2A18BE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF5D2EA640AC107EE2975A91E72F793EC3E1A813A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m112EE5E24B5FAC36376ADA45530FE7C1F72021E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m14958CB962C5DF9EC5F177B527E7004E3C40857D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6E3850089516E6A589C702728C5901492AACC138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6FD5C1CEC04F4B7F562C230E4316CB096518538C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAACDAE5411021F02DF758D8B4F9CFB958637BA3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC026BA2FCCD384B2C4BDF09101D93D7071A54EAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD7BB035F6F834F8B9E2C45E327315ABA888364A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC235CE79C93224F87D62F638217E2595B3E4DB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE046C24CE5FBCB336E613DF5DB099EDFE7CE2387_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE89ADE68BA3F3BFEC27CAABE2BCA2D1C8C1C0C74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFDF51C5ED04D26C8A6ABAC0E91FFC3524D0FB8D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1130BA06F0639CDBFD654EEF92750660961B0B23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9F9E83010C430850E4D42972632054BBC1474D4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE2235F330993765A44161830D01C4BF0EE83927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF94C99CA8A7C06B0F4229E3D942E4E0A44C8F270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4DB893F1E9539A119FFA46CDDCB923AB40B5332D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mE97E7C747525382E79523EB25EE88B02A64C7AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tEB1A6A782C0FB4D167EF4299967371DCD8A5FDB7* ___entries_1;
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
	KeyCollection_tFDE7FE6F6A0AE461D4FD5935445ADF914C9610C8 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3C26F2C1F184437F9AF9918EEA4CE247BD559468 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___entries_1)); }
	inline EntryU5BU5D_tEB1A6A782C0FB4D167EF4299967371DCD8A5FDB7* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tEB1A6A782C0FB4D167EF4299967371DCD8A5FDB7** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tEB1A6A782C0FB4D167EF4299967371DCD8A5FDB7* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___keys_7)); }
	inline KeyCollection_tFDE7FE6F6A0AE461D4FD5935445ADF914C9610C8 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tFDE7FE6F6A0AE461D4FD5935445ADF914C9610C8 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tFDE7FE6F6A0AE461D4FD5935445ADF914C9610C8 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ___values_8)); }
	inline ValueCollection_t3C26F2C1F184437F9AF9918EEA4CE247BD559468 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3C26F2C1F184437F9AF9918EEA4CE247BD559468 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3C26F2C1F184437F9AF9918EEA4CE247BD559468 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,qnrtc.QNMediaRelayState>
struct Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCBEC1CEA9EEB1E602C8F9C92439C6FFF5CCADD80* ___entries_1;
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
	KeyCollection_tC1E3B23A0A5430A5BBC1531603598B58EB8DACD9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7C09E65A4AE6D54395AE03EAD7878AE4A52640F1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0, ___entries_1)); }
	inline EntryU5BU5D_tCBEC1CEA9EEB1E602C8F9C92439C6FFF5CCADD80* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCBEC1CEA9EEB1E602C8F9C92439C6FFF5CCADD80** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCBEC1CEA9EEB1E602C8F9C92439C6FFF5CCADD80* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0, ___keys_7)); }
	inline KeyCollection_tC1E3B23A0A5430A5BBC1531603598B58EB8DACD9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC1E3B23A0A5430A5BBC1531603598B58EB8DACD9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC1E3B23A0A5430A5BBC1531603598B58EB8DACD9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0, ___values_8)); }
	inline ValueCollection_t7C09E65A4AE6D54395AE03EAD7878AE4A52640F1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7C09E65A4AE6D54395AE03EAD7878AE4A52640F1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7C09E65A4AE6D54395AE03EAD7878AE4A52640F1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNLiveStreamingListener>
struct List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNLiveStreamingListenerU5BU5D_t12C9DB8AF40F8B4E70EEB9AE0A5C39AC75655425* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB, ____items_1)); }
	inline QNLiveStreamingListenerU5BU5D_t12C9DB8AF40F8B4E70EEB9AE0A5C39AC75655425* get__items_1() const { return ____items_1; }
	inline QNLiveStreamingListenerU5BU5D_t12C9DB8AF40F8B4E70EEB9AE0A5C39AC75655425** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNLiveStreamingListenerU5BU5D_t12C9DB8AF40F8B4E70EEB9AE0A5C39AC75655425* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNLiveStreamingListenerU5BU5D_t12C9DB8AF40F8B4E70EEB9AE0A5C39AC75655425* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB_StaticFields, ____emptyArray_5)); }
	inline QNLiveStreamingListenerU5BU5D_t12C9DB8AF40F8B4E70EEB9AE0A5C39AC75655425* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNLiveStreamingListenerU5BU5D_t12C9DB8AF40F8B4E70EEB9AE0A5C39AC75655425** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNLiveStreamingListenerU5BU5D_t12C9DB8AF40F8B4E70EEB9AE0A5C39AC75655425* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNLocalTrack>
struct List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNLocalTrackU5BU5D_tB82B7AF7C0E378F5C2B86448A927DEE5DEE77546* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E, ____items_1)); }
	inline QNLocalTrackU5BU5D_tB82B7AF7C0E378F5C2B86448A927DEE5DEE77546* get__items_1() const { return ____items_1; }
	inline QNLocalTrackU5BU5D_tB82B7AF7C0E378F5C2B86448A927DEE5DEE77546** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNLocalTrackU5BU5D_tB82B7AF7C0E378F5C2B86448A927DEE5DEE77546* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNLocalTrackU5BU5D_tB82B7AF7C0E378F5C2B86448A927DEE5DEE77546* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E_StaticFields, ____emptyArray_5)); }
	inline QNLocalTrackU5BU5D_tB82B7AF7C0E378F5C2B86448A927DEE5DEE77546* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNLocalTrackU5BU5D_tB82B7AF7C0E378F5C2B86448A927DEE5DEE77546** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNLocalTrackU5BU5D_tB82B7AF7C0E378F5C2B86448A927DEE5DEE77546* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNMediaRelayInfo>
struct List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNMediaRelayInfoU5BU5D_t27D85C4062A1FBF847BD25A52A0E1985EEC469DD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B, ____items_1)); }
	inline QNMediaRelayInfoU5BU5D_t27D85C4062A1FBF847BD25A52A0E1985EEC469DD* get__items_1() const { return ____items_1; }
	inline QNMediaRelayInfoU5BU5D_t27D85C4062A1FBF847BD25A52A0E1985EEC469DD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNMediaRelayInfoU5BU5D_t27D85C4062A1FBF847BD25A52A0E1985EEC469DD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNMediaRelayInfoU5BU5D_t27D85C4062A1FBF847BD25A52A0E1985EEC469DD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B_StaticFields, ____emptyArray_5)); }
	inline QNMediaRelayInfoU5BU5D_t27D85C4062A1FBF847BD25A52A0E1985EEC469DD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNMediaRelayInfoU5BU5D_t27D85C4062A1FBF847BD25A52A0E1985EEC469DD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNMediaRelayInfoU5BU5D_t27D85C4062A1FBF847BD25A52A0E1985EEC469DD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNMediaRelayListener>
struct List_1_t183BB96555952E7D5EB933BDC2D880925C92665D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNMediaRelayListenerU5BU5D_t9EC5916569F7BCCD26F925E9F446C34589DE985A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t183BB96555952E7D5EB933BDC2D880925C92665D, ____items_1)); }
	inline QNMediaRelayListenerU5BU5D_t9EC5916569F7BCCD26F925E9F446C34589DE985A* get__items_1() const { return ____items_1; }
	inline QNMediaRelayListenerU5BU5D_t9EC5916569F7BCCD26F925E9F446C34589DE985A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNMediaRelayListenerU5BU5D_t9EC5916569F7BCCD26F925E9F446C34589DE985A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t183BB96555952E7D5EB933BDC2D880925C92665D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t183BB96555952E7D5EB933BDC2D880925C92665D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t183BB96555952E7D5EB933BDC2D880925C92665D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t183BB96555952E7D5EB933BDC2D880925C92665D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNMediaRelayListenerU5BU5D_t9EC5916569F7BCCD26F925E9F446C34589DE985A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t183BB96555952E7D5EB933BDC2D880925C92665D_StaticFields, ____emptyArray_5)); }
	inline QNMediaRelayListenerU5BU5D_t9EC5916569F7BCCD26F925E9F446C34589DE985A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNMediaRelayListenerU5BU5D_t9EC5916569F7BCCD26F925E9F446C34589DE985A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNMediaRelayListenerU5BU5D_t9EC5916569F7BCCD26F925E9F446C34589DE985A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNNetworkQualityListener>
struct List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNNetworkQualityListenerU5BU5D_tED1D0FD7CFC177D572F815228C165D1C25315B7D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF, ____items_1)); }
	inline QNNetworkQualityListenerU5BU5D_tED1D0FD7CFC177D572F815228C165D1C25315B7D* get__items_1() const { return ____items_1; }
	inline QNNetworkQualityListenerU5BU5D_tED1D0FD7CFC177D572F815228C165D1C25315B7D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNNetworkQualityListenerU5BU5D_tED1D0FD7CFC177D572F815228C165D1C25315B7D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNNetworkQualityListenerU5BU5D_tED1D0FD7CFC177D572F815228C165D1C25315B7D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF_StaticFields, ____emptyArray_5)); }
	inline QNNetworkQualityListenerU5BU5D_tED1D0FD7CFC177D572F815228C165D1C25315B7D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNNetworkQualityListenerU5BU5D_tED1D0FD7CFC177D572F815228C165D1C25315B7D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNNetworkQualityListenerU5BU5D_tED1D0FD7CFC177D572F815228C165D1C25315B7D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNPublishResultListener>
struct List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNPublishResultListenerU5BU5D_t111BA26C7A24669500CED0C12CEA9AEB36B1F016* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE, ____items_1)); }
	inline QNPublishResultListenerU5BU5D_t111BA26C7A24669500CED0C12CEA9AEB36B1F016* get__items_1() const { return ____items_1; }
	inline QNPublishResultListenerU5BU5D_t111BA26C7A24669500CED0C12CEA9AEB36B1F016** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNPublishResultListenerU5BU5D_t111BA26C7A24669500CED0C12CEA9AEB36B1F016* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNPublishResultListenerU5BU5D_t111BA26C7A24669500CED0C12CEA9AEB36B1F016* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE_StaticFields, ____emptyArray_5)); }
	inline QNPublishResultListenerU5BU5D_t111BA26C7A24669500CED0C12CEA9AEB36B1F016* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNPublishResultListenerU5BU5D_t111BA26C7A24669500CED0C12CEA9AEB36B1F016** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNPublishResultListenerU5BU5D_t111BA26C7A24669500CED0C12CEA9AEB36B1F016* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNRTCClientEventListener>
struct List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNRTCClientEventListenerU5BU5D_tEB5A9165BF119F1F6CBE4D390A9BF785B7A66B1E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC, ____items_1)); }
	inline QNRTCClientEventListenerU5BU5D_tEB5A9165BF119F1F6CBE4D390A9BF785B7A66B1E* get__items_1() const { return ____items_1; }
	inline QNRTCClientEventListenerU5BU5D_tEB5A9165BF119F1F6CBE4D390A9BF785B7A66B1E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNRTCClientEventListenerU5BU5D_tEB5A9165BF119F1F6CBE4D390A9BF785B7A66B1E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNRTCClientEventListenerU5BU5D_tEB5A9165BF119F1F6CBE4D390A9BF785B7A66B1E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_StaticFields, ____emptyArray_5)); }
	inline QNRTCClientEventListenerU5BU5D_tEB5A9165BF119F1F6CBE4D390A9BF785B7A66B1E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNRTCClientEventListenerU5BU5D_tEB5A9165BF119F1F6CBE4D390A9BF785B7A66B1E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNRTCClientEventListenerU5BU5D_tEB5A9165BF119F1F6CBE4D390A9BF785B7A66B1E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNRTCClientRoleEventListener>
struct List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNRTCClientRoleEventListenerU5BU5D_tCDA3EA7F233FE14A01FE7A2A11A44911E10B7C72* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D, ____items_1)); }
	inline QNRTCClientRoleEventListenerU5BU5D_tCDA3EA7F233FE14A01FE7A2A11A44911E10B7C72* get__items_1() const { return ____items_1; }
	inline QNRTCClientRoleEventListenerU5BU5D_tCDA3EA7F233FE14A01FE7A2A11A44911E10B7C72** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNRTCClientRoleEventListenerU5BU5D_tCDA3EA7F233FE14A01FE7A2A11A44911E10B7C72* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNRTCClientRoleEventListenerU5BU5D_tCDA3EA7F233FE14A01FE7A2A11A44911E10B7C72* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D_StaticFields, ____emptyArray_5)); }
	inline QNRTCClientRoleEventListenerU5BU5D_tCDA3EA7F233FE14A01FE7A2A11A44911E10B7C72* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNRTCClientRoleEventListenerU5BU5D_tCDA3EA7F233FE14A01FE7A2A11A44911E10B7C72** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNRTCClientRoleEventListenerU5BU5D_tCDA3EA7F233FE14A01FE7A2A11A44911E10B7C72* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNRTCEventListener>
struct List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNRTCEventListenerU5BU5D_t493927EAFD1FB488E1E4BDECA9E0C5D51CF6BFC8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114, ____items_1)); }
	inline QNRTCEventListenerU5BU5D_t493927EAFD1FB488E1E4BDECA9E0C5D51CF6BFC8* get__items_1() const { return ____items_1; }
	inline QNRTCEventListenerU5BU5D_t493927EAFD1FB488E1E4BDECA9E0C5D51CF6BFC8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNRTCEventListenerU5BU5D_t493927EAFD1FB488E1E4BDECA9E0C5D51CF6BFC8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNRTCEventListenerU5BU5D_t493927EAFD1FB488E1E4BDECA9E0C5D51CF6BFC8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114_StaticFields, ____emptyArray_5)); }
	inline QNRTCEventListenerU5BU5D_t493927EAFD1FB488E1E4BDECA9E0C5D51CF6BFC8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNRTCEventListenerU5BU5D_t493927EAFD1FB488E1E4BDECA9E0C5D51CF6BFC8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNRTCEventListenerU5BU5D_t493927EAFD1FB488E1E4BDECA9E0C5D51CF6BFC8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNRemoteAudioTrack>
struct List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNRemoteAudioTrackU5BU5D_tB3DDD972D255A04E107C17907898713F76730A2D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93, ____items_1)); }
	inline QNRemoteAudioTrackU5BU5D_tB3DDD972D255A04E107C17907898713F76730A2D* get__items_1() const { return ____items_1; }
	inline QNRemoteAudioTrackU5BU5D_tB3DDD972D255A04E107C17907898713F76730A2D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNRemoteAudioTrackU5BU5D_tB3DDD972D255A04E107C17907898713F76730A2D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNRemoteAudioTrackU5BU5D_tB3DDD972D255A04E107C17907898713F76730A2D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93_StaticFields, ____emptyArray_5)); }
	inline QNRemoteAudioTrackU5BU5D_tB3DDD972D255A04E107C17907898713F76730A2D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNRemoteAudioTrackU5BU5D_tB3DDD972D255A04E107C17907898713F76730A2D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNRemoteAudioTrackU5BU5D_tB3DDD972D255A04E107C17907898713F76730A2D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNRemoteTrack>
struct List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNRemoteTrackU5BU5D_tB3E6B20AD502B060B2890E0D3D333CC9000AB6B4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29, ____items_1)); }
	inline QNRemoteTrackU5BU5D_tB3E6B20AD502B060B2890E0D3D333CC9000AB6B4* get__items_1() const { return ____items_1; }
	inline QNRemoteTrackU5BU5D_tB3E6B20AD502B060B2890E0D3D333CC9000AB6B4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNRemoteTrackU5BU5D_tB3E6B20AD502B060B2890E0D3D333CC9000AB6B4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNRemoteTrackU5BU5D_tB3E6B20AD502B060B2890E0D3D333CC9000AB6B4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29_StaticFields, ____emptyArray_5)); }
	inline QNRemoteTrackU5BU5D_tB3E6B20AD502B060B2890E0D3D333CC9000AB6B4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNRemoteTrackU5BU5D_tB3E6B20AD502B060B2890E0D3D333CC9000AB6B4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNRemoteTrackU5BU5D_tB3E6B20AD502B060B2890E0D3D333CC9000AB6B4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNRemoteUser>
struct List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNRemoteUserU5BU5D_t58474541AFFC51FA17903D7602110E757654ACE1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6, ____items_1)); }
	inline QNRemoteUserU5BU5D_t58474541AFFC51FA17903D7602110E757654ACE1* get__items_1() const { return ____items_1; }
	inline QNRemoteUserU5BU5D_t58474541AFFC51FA17903D7602110E757654ACE1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNRemoteUserU5BU5D_t58474541AFFC51FA17903D7602110E757654ACE1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNRemoteUserU5BU5D_t58474541AFFC51FA17903D7602110E757654ACE1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6_StaticFields, ____emptyArray_5)); }
	inline QNRemoteUserU5BU5D_t58474541AFFC51FA17903D7602110E757654ACE1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNRemoteUserU5BU5D_t58474541AFFC51FA17903D7602110E757654ACE1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNRemoteUserU5BU5D_t58474541AFFC51FA17903D7602110E757654ACE1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNTrackInfoChangedListener>
struct List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNTrackInfoChangedListenerU5BU5D_t16647F116B154DE63DCAF847F9F9BB2D0FE79591* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D, ____items_1)); }
	inline QNTrackInfoChangedListenerU5BU5D_t16647F116B154DE63DCAF847F9F9BB2D0FE79591* get__items_1() const { return ____items_1; }
	inline QNTrackInfoChangedListenerU5BU5D_t16647F116B154DE63DCAF847F9F9BB2D0FE79591** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNTrackInfoChangedListenerU5BU5D_t16647F116B154DE63DCAF847F9F9BB2D0FE79591* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNTrackInfoChangedListenerU5BU5D_t16647F116B154DE63DCAF847F9F9BB2D0FE79591* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D_StaticFields, ____emptyArray_5)); }
	inline QNTrackInfoChangedListenerU5BU5D_t16647F116B154DE63DCAF847F9F9BB2D0FE79591* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNTrackInfoChangedListenerU5BU5D_t16647F116B154DE63DCAF847F9F9BB2D0FE79591** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNTrackInfoChangedListenerU5BU5D_t16647F116B154DE63DCAF847F9F9BB2D0FE79591* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingImage>
struct List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNTranscodingLiveStreamingImageU5BU5D_t8AC6AFCC6E695EE979D08EF50CE12133A3F75F4A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1, ____items_1)); }
	inline QNTranscodingLiveStreamingImageU5BU5D_t8AC6AFCC6E695EE979D08EF50CE12133A3F75F4A* get__items_1() const { return ____items_1; }
	inline QNTranscodingLiveStreamingImageU5BU5D_t8AC6AFCC6E695EE979D08EF50CE12133A3F75F4A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNTranscodingLiveStreamingImageU5BU5D_t8AC6AFCC6E695EE979D08EF50CE12133A3F75F4A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNTranscodingLiveStreamingImageU5BU5D_t8AC6AFCC6E695EE979D08EF50CE12133A3F75F4A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1_StaticFields, ____emptyArray_5)); }
	inline QNTranscodingLiveStreamingImageU5BU5D_t8AC6AFCC6E695EE979D08EF50CE12133A3F75F4A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNTranscodingLiveStreamingImageU5BU5D_t8AC6AFCC6E695EE979D08EF50CE12133A3F75F4A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNTranscodingLiveStreamingImageU5BU5D_t8AC6AFCC6E695EE979D08EF50CE12133A3F75F4A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingTrack>
struct List_1_t64043FA015632E81188D51414F588390CCCBB5D5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	QNTranscodingLiveStreamingTrackU5BU5D_t82ED63347B3097FB77C8022C917274B11CFE5B35* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t64043FA015632E81188D51414F588390CCCBB5D5, ____items_1)); }
	inline QNTranscodingLiveStreamingTrackU5BU5D_t82ED63347B3097FB77C8022C917274B11CFE5B35* get__items_1() const { return ____items_1; }
	inline QNTranscodingLiveStreamingTrackU5BU5D_t82ED63347B3097FB77C8022C917274B11CFE5B35** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(QNTranscodingLiveStreamingTrackU5BU5D_t82ED63347B3097FB77C8022C917274B11CFE5B35* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t64043FA015632E81188D51414F588390CCCBB5D5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t64043FA015632E81188D51414F588390CCCBB5D5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t64043FA015632E81188D51414F588390CCCBB5D5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t64043FA015632E81188D51414F588390CCCBB5D5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	QNTranscodingLiveStreamingTrackU5BU5D_t82ED63347B3097FB77C8022C917274B11CFE5B35* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t64043FA015632E81188D51414F588390CCCBB5D5_StaticFields, ____emptyArray_5)); }
	inline QNTranscodingLiveStreamingTrackU5BU5D_t82ED63347B3097FB77C8022C917274B11CFE5B35* get__emptyArray_5() const { return ____emptyArray_5; }
	inline QNTranscodingLiveStreamingTrackU5BU5D_t82ED63347B3097FB77C8022C917274B11CFE5B35** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(QNTranscodingLiveStreamingTrackU5BU5D_t82ED63347B3097FB77C8022C917274B11CFE5B35* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<QNRTCUnityDemo.UserTableViewCell>
struct List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UserTableViewCellU5BU5D_tB321A4BFCF3C1725ED8091A47C694EC2D0E5D38F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B, ____items_1)); }
	inline UserTableViewCellU5BU5D_tB321A4BFCF3C1725ED8091A47C694EC2D0E5D38F* get__items_1() const { return ____items_1; }
	inline UserTableViewCellU5BU5D_tB321A4BFCF3C1725ED8091A47C694EC2D0E5D38F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UserTableViewCellU5BU5D_tB321A4BFCF3C1725ED8091A47C694EC2D0E5D38F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UserTableViewCellU5BU5D_tB321A4BFCF3C1725ED8091A47C694EC2D0E5D38F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B_StaticFields, ____emptyArray_5)); }
	inline UserTableViewCellU5BU5D_tB321A4BFCF3C1725ED8091A47C694EC2D0E5D38F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UserTableViewCellU5BU5D_tB321A4BFCF3C1725ED8091A47C694EC2D0E5D38F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UserTableViewCellU5BU5D_tB321A4BFCF3C1725ED8091A47C694EC2D0E5D38F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____items_1)); }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* get__items_1() const { return ____items_1; }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_StaticFields, ____emptyArray_5)); }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// qnrtc.QNRTCClient
struct QNRTCClient_tE6ACE8DA8CDB049880B6D28C1DFF24AFF8D677CE  : public RuntimeObject
{
public:

public:
};


// qnrtc.QNRTCImpl
struct QNRTCImpl_t4298BAC84342C1C7718406E69CF48C20D68938B7  : public RuntimeObject
{
public:

public:
};

struct QNRTCImpl_t4298BAC84342C1C7718406E69CF48C20D68938B7_StaticFields
{
public:
	// System.Collections.Generic.List`1<qnrtc.QNRTCEventListener> qnrtc.QNRTCImpl::eventListeners
	List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 * ___eventListeners_0;
	// System.Collections.Generic.List`1<qnrtc.QNLocalTrack> qnrtc.QNRTCImpl::LocalTrackList
	List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E * ___LocalTrackList_1;

public:
	inline static int32_t get_offset_of_eventListeners_0() { return static_cast<int32_t>(offsetof(QNRTCImpl_t4298BAC84342C1C7718406E69CF48C20D68938B7_StaticFields, ___eventListeners_0)); }
	inline List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 * get_eventListeners_0() const { return ___eventListeners_0; }
	inline List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 ** get_address_of_eventListeners_0() { return &___eventListeners_0; }
	inline void set_eventListeners_0(List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 * value)
	{
		___eventListeners_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventListeners_0), (void*)value);
	}

	inline static int32_t get_offset_of_LocalTrackList_1() { return static_cast<int32_t>(offsetof(QNRTCImpl_t4298BAC84342C1C7718406E69CF48C20D68938B7_StaticFields, ___LocalTrackList_1)); }
	inline List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E * get_LocalTrackList_1() const { return ___LocalTrackList_1; }
	inline List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E ** get_address_of_LocalTrackList_1() { return &___LocalTrackList_1; }
	inline void set_LocalTrackList_1(List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E * value)
	{
		___LocalTrackList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalTrackList_1), (void*)value);
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

// QNRTCUnityDemo.DirectLiveView/<>c
struct U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7_StaticFields
{
public:
	// QNRTCUnityDemo.DirectLiveView/<>c QNRTCUnityDemo.DirectLiveView/<>c::<>9
	U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7 * ___U3CU3E9_0;
	// System.Predicate`1<qnrtc.QNLocalAudioTrack> QNRTCUnityDemo.DirectLiveView/<>c::<>9__20_0
	Predicate_1_t3B328A84E48C8F4D360F926E5024330CB7C6EF23 * ___U3CU3E9__20_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7_StaticFields, ___U3CU3E9__20_0_1)); }
	inline Predicate_1_t3B328A84E48C8F4D360F926E5024330CB7C6EF23 * get_U3CU3E9__20_0_1() const { return ___U3CU3E9__20_0_1; }
	inline Predicate_1_t3B328A84E48C8F4D360F926E5024330CB7C6EF23 ** get_address_of_U3CU3E9__20_0_1() { return &___U3CU3E9__20_0_1; }
	inline void set_U3CU3E9__20_0_1(Predicate_1_t3B328A84E48C8F4D360F926E5024330CB7C6EF23 * value)
	{
		___U3CU3E9__20_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_0_1), (void*)value);
	}
};


// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857  : public RuntimeObject
{
public:
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Image_1;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857, ___m_Image_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Image_1() const { return ___m_Image_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c
struct U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_StaticFields
{
public:
	// qnrtc.QNRTCClientImpl/<>c qnrtc.QNRTCClientImpl/<>c::<>9
	U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * ___U3CU3E9_0;
	// System.Predicate`1<qnrtc.QNRemoteTrack> qnrtc.QNRTCClientImpl/<>c::<>9__13_0
	Predicate_1_tC9D6355CCF52D9DB9BD1DAA9B961A3379D7D26B2 * ___U3CU3E9__13_0_1;
	// System.Predicate`1<qnrtc.QNRTCClientEventListener> qnrtc.QNRTCClientImpl/<>c::<>9__13_1
	Predicate_1_tAD60A78CAD9ED4F7E1EE5385A32844F095B7A165 * ___U3CU3E9__13_1_2;
	// System.Predicate`1<qnrtc.QNRTCClientRoleEventListener> qnrtc.QNRTCClientImpl/<>c::<>9__13_2
	Predicate_1_t729D51C84BBD7E21734C9342DE577C92FED15B08 * ___U3CU3E9__13_2_3;
	// System.Predicate`1<qnrtc.QNMediaRelayListener> qnrtc.QNRTCClientImpl/<>c::<>9__13_3
	Predicate_1_t1C6434AC096ABA8C5D8C2CFF68D91EE1BA2435E5 * ___U3CU3E9__13_3_4;
	// System.Predicate`1<qnrtc.QNPublishResultListener> qnrtc.QNRTCClientImpl/<>c::<>9__13_4
	Predicate_1_tA9CF5AEF781D5CA692FDCAC585DE4729A029F52A * ___U3CU3E9__13_4_5;
	// System.Predicate`1<qnrtc.QNLiveStreamingListener> qnrtc.QNRTCClientImpl/<>c::<>9__13_5
	Predicate_1_tB070488740BE16FBBA974A350C45ADD4A9AF5497 * ___U3CU3E9__13_5_6;
	// System.Predicate`1<qnrtc.QNRemoteAudioMixedFrameListener> qnrtc.QNRTCClientImpl/<>c::<>9__13_6
	Predicate_1_tE9CC18A97DC95E9A13695E11D594F4F10C785310 * ___U3CU3E9__13_6_7;
	// System.Predicate`1<qnrtc.QNNetworkQualityListener> qnrtc.QNRTCClientImpl/<>c::<>9__13_7
	Predicate_1_t9E775160E1B0C4656A484850857A4DA14F20DE76 * ___U3CU3E9__13_7_8;
	// System.Predicate`1<qnrtc.QNRemoteTrack> qnrtc.QNRTCClientImpl/<>c::<>9__17_0
	Predicate_1_tC9D6355CCF52D9DB9BD1DAA9B961A3379D7D26B2 * ___U3CU3E9__17_0_9;
	// System.Action qnrtc.QNRTCClientImpl/<>c::<>9__65_0
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3CU3E9__65_0_10;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_StaticFields, ___U3CU3E9__13_0_1)); }
	inline Predicate_1_tC9D6355CCF52D9DB9BD1DAA9B961A3379D7D26B2 * get_U3CU3E9__13_0_1() const { return ___U3CU3E9__13_0_1; }
	inline Predicate_1_tC9D6355CCF52D9DB9BD1DAA9B961A3379D7D26B2 ** get_address_of_U3CU3E9__13_0_1() { return &___U3CU3E9__13_0_1; }
	inline void set_U3CU3E9__13_0_1(Predicate_1_tC9D6355CCF52D9DB9BD1DAA9B961A3379D7D26B2 * value)
	{
		___U3CU3E9__13_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_StaticFields, ___U3CU3E9__13_1_2)); }
	inline Predicate_1_tAD60A78CAD9ED4F7E1EE5385A32844F095B7A165 * get_U3CU3E9__13_1_2() const { return ___U3CU3E9__13_1_2; }
	inline Predicate_1_tAD60A78CAD9ED4F7E1EE5385A32844F095B7A165 ** get_address_of_U3CU3E9__13_1_2() { return &___U3CU3E9__13_1_2; }
	inline void set_U3CU3E9__13_1_2(Predicate_1_tAD60A78CAD9ED4F7E1EE5385A32844F095B7A165 * value)
	{
		___U3CU3E9__13_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_StaticFields, ___U3CU3E9__13_2_3)); }
	inline Predicate_1_t729D51C84BBD7E21734C9342DE577C92FED15B08 * get_U3CU3E9__13_2_3() const { return ___U3CU3E9__13_2_3; }
	inline Predicate_1_t729D51C84BBD7E21734C9342DE577C92FED15B08 ** get_address_of_U3CU3E9__13_2_3() { return &___U3CU3E9__13_2_3; }
	inline void set_U3CU3E9__13_2_3(Predicate_1_t729D51C84BBD7E21734C9342DE577C92FED15B08 * value)
	{
		___U3CU3E9__13_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_StaticFields, ___U3CU3E9__13_3_4)); }
	inline Predicate_1_t1C6434AC096ABA8C5D8C2CFF68D91EE1BA2435E5 * get_U3CU3E9__13_3_4() const { return ___U3CU3E9__13_3_4; }
	inline Predicate_1_t1C6434AC096ABA8C5D8C2CFF68D91EE1BA2435E5 ** get_address_of_U3CU3E9__13_3_4() { return &___U3CU3E9__13_3_4; }
	inline void set_U3CU3E9__13_3_4(Predicate_1_t1C6434AC096ABA8C5D8C2CFF68D91EE1BA2435E5 * value)
	{
		___U3CU3E9__13_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_StaticFields, ___U3CU3E9__13_4_5)); }
	inline Predicate_1_tA9CF5AEF781D5CA692FDCAC585DE4729A029F52A * get_U3CU3E9__13_4_5() const { return ___U3CU3E9__13_4_5; }
	inline Predicate_1_tA9CF5AEF781D5CA692FDCAC585DE4729A029F52A ** get_address_of_U3CU3E9__13_4_5() { return &___U3CU3E9__13_4_5; }
	inline void set_U3CU3E9__13_4_5(Predicate_1_tA9CF5AEF781D5CA692FDCAC585DE4729A029F52A * value)
	{
		___U3CU3E9__13_4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_5_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_StaticFields, ___U3CU3E9__13_5_6)); }
	inline Predicate_1_tB070488740BE16FBBA974A350C45ADD4A9AF5497 * get_U3CU3E9__13_5_6() const { return ___U3CU3E9__13_5_6; }
	inline Predicate_1_tB070488740BE16FBBA974A350C45ADD4A9AF5497 ** get_address_of_U3CU3E9__13_5_6() { return &___U3CU3E9__13_5_6; }
	inline void set_U3CU3E9__13_5_6(Predicate_1_tB070488740BE16FBBA974A350C45ADD4A9AF5497 * value)
	{
		___U3CU3E9__13_5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_6_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_StaticFields, ___U3CU3E9__13_6_7)); }
	inline Predicate_1_tE9CC18A97DC95E9A13695E11D594F4F10C785310 * get_U3CU3E9__13_6_7() const { return ___U3CU3E9__13_6_7; }
	inline Predicate_1_tE9CC18A97DC95E9A13695E11D594F4F10C785310 ** get_address_of_U3CU3E9__13_6_7() { return &___U3CU3E9__13_6_7; }
	inline void set_U3CU3E9__13_6_7(Predicate_1_tE9CC18A97DC95E9A13695E11D594F4F10C785310 * value)
	{
		___U3CU3E9__13_6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_6_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_7_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_StaticFields, ___U3CU3E9__13_7_8)); }
	inline Predicate_1_t9E775160E1B0C4656A484850857A4DA14F20DE76 * get_U3CU3E9__13_7_8() const { return ___U3CU3E9__13_7_8; }
	inline Predicate_1_t9E775160E1B0C4656A484850857A4DA14F20DE76 ** get_address_of_U3CU3E9__13_7_8() { return &___U3CU3E9__13_7_8; }
	inline void set_U3CU3E9__13_7_8(Predicate_1_t9E775160E1B0C4656A484850857A4DA14F20DE76 * value)
	{
		___U3CU3E9__13_7_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_7_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_0_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_StaticFields, ___U3CU3E9__17_0_9)); }
	inline Predicate_1_tC9D6355CCF52D9DB9BD1DAA9B961A3379D7D26B2 * get_U3CU3E9__17_0_9() const { return ___U3CU3E9__17_0_9; }
	inline Predicate_1_tC9D6355CCF52D9DB9BD1DAA9B961A3379D7D26B2 ** get_address_of_U3CU3E9__17_0_9() { return &___U3CU3E9__17_0_9; }
	inline void set_U3CU3E9__17_0_9(Predicate_1_tC9D6355CCF52D9DB9BD1DAA9B961A3379D7D26B2 * value)
	{
		___U3CU3E9__17_0_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__17_0_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__65_0_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_StaticFields, ___U3CU3E9__65_0_10)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3CU3E9__65_0_10() const { return ___U3CU3E9__65_0_10; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3CU3E9__65_0_10() { return &___U3CU3E9__65_0_10; }
	inline void set_U3CU3E9__65_0_10(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3CU3E9__65_0_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__65_0_10), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_t2AAD50119D08DD1B4C771B864F598FF746DCD24E  : public RuntimeObject
{
public:
	// System.Int32 qnrtc.QNRTCClientImpl/<>c__DisplayClass51_0::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass51_0_t2AAD50119D08DD1B4C771B864F598FF746DCD24E, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t0155E618B89F27AD9168AC5C2BD2A25C0043D2C5  : public RuntimeObject
{
public:
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass52_0::currentRemoteUserId
	String_t* ___currentRemoteUserId_0;
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass52_0::currentUserData
	String_t* ___currentUserData_1;

public:
	inline static int32_t get_offset_of_currentRemoteUserId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t0155E618B89F27AD9168AC5C2BD2A25C0043D2C5, ___currentRemoteUserId_0)); }
	inline String_t* get_currentRemoteUserId_0() const { return ___currentRemoteUserId_0; }
	inline String_t** get_address_of_currentRemoteUserId_0() { return &___currentRemoteUserId_0; }
	inline void set_currentRemoteUserId_0(String_t* value)
	{
		___currentRemoteUserId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentRemoteUserId_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentUserData_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t0155E618B89F27AD9168AC5C2BD2A25C0043D2C5, ___currentUserData_1)); }
	inline String_t* get_currentUserData_1() const { return ___currentUserData_1; }
	inline String_t** get_address_of_currentUserData_1() { return &___currentUserData_1; }
	inline void set_currentUserData_1(String_t* value)
	{
		___currentUserData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentUserData_1), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass53_0
struct U3CU3Ec__DisplayClass53_0_tCDA2A72004C7830004AC73E4E306EA9848399E7C  : public RuntimeObject
{
public:
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass53_0::currentRemoteUserId
	String_t* ___currentRemoteUserId_0;

public:
	inline static int32_t get_offset_of_currentRemoteUserId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass53_0_tCDA2A72004C7830004AC73E4E306EA9848399E7C, ___currentRemoteUserId_0)); }
	inline String_t* get_currentRemoteUserId_0() const { return ___currentRemoteUserId_0; }
	inline String_t** get_address_of_currentRemoteUserId_0() { return &___currentRemoteUserId_0; }
	inline void set_currentRemoteUserId_0(String_t* value)
	{
		___currentRemoteUserId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentRemoteUserId_0), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass54_0
struct U3CU3Ec__DisplayClass54_0_tD3E0AC0B1A3EEF64541C29AF46EBCBCD42B80529  : public RuntimeObject
{
public:
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass54_0::currentRemoteUserId
	String_t* ___currentRemoteUserId_0;

public:
	inline static int32_t get_offset_of_currentRemoteUserId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass54_0_tD3E0AC0B1A3EEF64541C29AF46EBCBCD42B80529, ___currentRemoteUserId_0)); }
	inline String_t* get_currentRemoteUserId_0() const { return ___currentRemoteUserId_0; }
	inline String_t** get_address_of_currentRemoteUserId_0() { return &___currentRemoteUserId_0; }
	inline void set_currentRemoteUserId_0(String_t* value)
	{
		___currentRemoteUserId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentRemoteUserId_0), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass55_0
struct U3CU3Ec__DisplayClass55_0_t6DE2A2FFDD5E39BC586AAA5D450EBBBF7399C7DE  : public RuntimeObject
{
public:
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass55_0::currentRemoteUserId
	String_t* ___currentRemoteUserId_0;

public:
	inline static int32_t get_offset_of_currentRemoteUserId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass55_0_t6DE2A2FFDD5E39BC586AAA5D450EBBBF7399C7DE, ___currentRemoteUserId_0)); }
	inline String_t* get_currentRemoteUserId_0() const { return ___currentRemoteUserId_0; }
	inline String_t** get_address_of_currentRemoteUserId_0() { return &___currentRemoteUserId_0; }
	inline void set_currentRemoteUserId_0(String_t* value)
	{
		___currentRemoteUserId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentRemoteUserId_0), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass56_0
struct U3CU3Ec__DisplayClass56_0_tB70C8F9755D9ECD9666594B0A4E74768E38C203C  : public RuntimeObject
{
public:
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass56_0::currentRemoteUserId
	String_t* ___currentRemoteUserId_0;
	// System.Collections.Generic.List`1<qnrtc.QNRemoteTrack> qnrtc.QNRTCClientImpl/<>c__DisplayClass56_0::remoteTrackList
	List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 * ___remoteTrackList_1;

public:
	inline static int32_t get_offset_of_currentRemoteUserId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass56_0_tB70C8F9755D9ECD9666594B0A4E74768E38C203C, ___currentRemoteUserId_0)); }
	inline String_t* get_currentRemoteUserId_0() const { return ___currentRemoteUserId_0; }
	inline String_t** get_address_of_currentRemoteUserId_0() { return &___currentRemoteUserId_0; }
	inline void set_currentRemoteUserId_0(String_t* value)
	{
		___currentRemoteUserId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentRemoteUserId_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteTrackList_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass56_0_tB70C8F9755D9ECD9666594B0A4E74768E38C203C, ___remoteTrackList_1)); }
	inline List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 * get_remoteTrackList_1() const { return ___remoteTrackList_1; }
	inline List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 ** get_address_of_remoteTrackList_1() { return &___remoteTrackList_1; }
	inline void set_remoteTrackList_1(List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 * value)
	{
		___remoteTrackList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteTrackList_1), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_tB3F7A4EA9305DE17A1A3D4B2D1019B29C4750A92  : public RuntimeObject
{
public:
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass57_0::currentRemoteUserId
	String_t* ___currentRemoteUserId_0;
	// System.Collections.Generic.List`1<qnrtc.QNRemoteTrack> qnrtc.QNRTCClientImpl/<>c__DisplayClass57_0::remoteTrackList
	List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 * ___remoteTrackList_1;

public:
	inline static int32_t get_offset_of_currentRemoteUserId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_tB3F7A4EA9305DE17A1A3D4B2D1019B29C4750A92, ___currentRemoteUserId_0)); }
	inline String_t* get_currentRemoteUserId_0() const { return ___currentRemoteUserId_0; }
	inline String_t** get_address_of_currentRemoteUserId_0() { return &___currentRemoteUserId_0; }
	inline void set_currentRemoteUserId_0(String_t* value)
	{
		___currentRemoteUserId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentRemoteUserId_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteTrackList_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_tB3F7A4EA9305DE17A1A3D4B2D1019B29C4750A92, ___remoteTrackList_1)); }
	inline List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 * get_remoteTrackList_1() const { return ___remoteTrackList_1; }
	inline List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 ** get_address_of_remoteTrackList_1() { return &___remoteTrackList_1; }
	inline void set_remoteTrackList_1(List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 * value)
	{
		___remoteTrackList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteTrackList_1), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_t65A05DD4FF38946C9A94C72515864691EF4A4ADF  : public RuntimeObject
{
public:
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass58_0::currentRemoteUserId
	String_t* ___currentRemoteUserId_0;
	// System.Collections.Generic.List`1<qnrtc.QNRemoteAudioTrack> qnrtc.QNRTCClientImpl/<>c__DisplayClass58_0::remoteAudioTrackList
	List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * ___remoteAudioTrackList_1;

public:
	inline static int32_t get_offset_of_currentRemoteUserId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t65A05DD4FF38946C9A94C72515864691EF4A4ADF, ___currentRemoteUserId_0)); }
	inline String_t* get_currentRemoteUserId_0() const { return ___currentRemoteUserId_0; }
	inline String_t** get_address_of_currentRemoteUserId_0() { return &___currentRemoteUserId_0; }
	inline void set_currentRemoteUserId_0(String_t* value)
	{
		___currentRemoteUserId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentRemoteUserId_0), (void*)value);
	}

	inline static int32_t get_offset_of_remoteAudioTrackList_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t65A05DD4FF38946C9A94C72515864691EF4A4ADF, ___remoteAudioTrackList_1)); }
	inline List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * get_remoteAudioTrackList_1() const { return ___remoteAudioTrackList_1; }
	inline List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 ** get_address_of_remoteAudioTrackList_1() { return &___remoteAudioTrackList_1; }
	inline void set_remoteAudioTrackList_1(List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * value)
	{
		___remoteAudioTrackList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteAudioTrackList_1), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass60_0
struct U3CU3Ec__DisplayClass60_0_t4732A4138C3C22DC19115BFABE43FAD11FEBA1C7  : public RuntimeObject
{
public:
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass60_0::currentRelayRoom
	String_t* ___currentRelayRoom_0;
	// System.Int32 qnrtc.QNRTCClientImpl/<>c__DisplayClass60_0::state
	int32_t ___state_1;

public:
	inline static int32_t get_offset_of_currentRelayRoom_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_t4732A4138C3C22DC19115BFABE43FAD11FEBA1C7, ___currentRelayRoom_0)); }
	inline String_t* get_currentRelayRoom_0() const { return ___currentRelayRoom_0; }
	inline String_t** get_address_of_currentRelayRoom_0() { return &___currentRelayRoom_0; }
	inline void set_currentRelayRoom_0(String_t* value)
	{
		___currentRelayRoom_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentRelayRoom_0), (void*)value);
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass60_0_t4732A4138C3C22DC19115BFABE43FAD11FEBA1C7, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass61_0
struct U3CU3Ec__DisplayClass61_0_t553E661F40DDF9E29024F7C49694CFEB4B818F2E  : public RuntimeObject
{
public:
	// System.Int32 qnrtc.QNRTCClientImpl/<>c__DisplayClass61_0::newRole
	int32_t ___newRole_0;

public:
	inline static int32_t get_offset_of_newRole_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass61_0_t553E661F40DDF9E29024F7C49694CFEB4B818F2E, ___newRole_0)); }
	inline int32_t get_newRole_0() const { return ___newRole_0; }
	inline int32_t* get_address_of_newRole_0() { return &___newRole_0; }
	inline void set_newRole_0(int32_t value)
	{
		___newRole_0 = value;
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t532BC37CFB1031A03F016F5AD79778FA66D21B74  : public RuntimeObject
{
public:
	// System.Int32 qnrtc.QNRTCClientImpl/<>c__DisplayClass62_0::errorCode
	int32_t ___errorCode_0;
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass62_0::currentErrorMessage
	String_t* ___currentErrorMessage_1;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_t532BC37CFB1031A03F016F5AD79778FA66D21B74, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}

	inline static int32_t get_offset_of_currentErrorMessage_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_t532BC37CFB1031A03F016F5AD79778FA66D21B74, ___currentErrorMessage_1)); }
	inline String_t* get_currentErrorMessage_1() const { return ___currentErrorMessage_1; }
	inline String_t** get_address_of_currentErrorMessage_1() { return &___currentErrorMessage_1; }
	inline void set_currentErrorMessage_1(String_t* value)
	{
		___currentErrorMessage_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentErrorMessage_1), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass63_0
struct U3CU3Ec__DisplayClass63_0_t7A03CBB5927CDC7CB5B43405D5B2B710C231D75C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,qnrtc.QNMediaRelayState> qnrtc.QNRTCClientImpl/<>c__DisplayClass63_0::result
	Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0 * ___result_0;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass63_0_t7A03CBB5927CDC7CB5B43405D5B2B710C231D75C, ___result_0)); }
	inline Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0 * get_result_0() const { return ___result_0; }
	inline Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass64_0
struct U3CU3Ec__DisplayClass64_0_t46BA0CC0C2F9D187D3EFCDCA5A566E4295EC9D81  : public RuntimeObject
{
public:
	// System.Int32 qnrtc.QNRTCClientImpl/<>c__DisplayClass64_0::errorCode
	int32_t ___errorCode_0;
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass64_0::currentErrorMessage
	String_t* ___currentErrorMessage_1;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass64_0_t46BA0CC0C2F9D187D3EFCDCA5A566E4295EC9D81, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}

	inline static int32_t get_offset_of_currentErrorMessage_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass64_0_t46BA0CC0C2F9D187D3EFCDCA5A566E4295EC9D81, ___currentErrorMessage_1)); }
	inline String_t* get_currentErrorMessage_1() const { return ___currentErrorMessage_1; }
	inline String_t** get_address_of_currentErrorMessage_1() { return &___currentErrorMessage_1; }
	inline void set_currentErrorMessage_1(String_t* value)
	{
		___currentErrorMessage_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentErrorMessage_1), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass66_0
struct U3CU3Ec__DisplayClass66_0_tCDFD49F55861F898FA96CBBD565A49B81BD8318A  : public RuntimeObject
{
public:
	// System.Int32 qnrtc.QNRTCClientImpl/<>c__DisplayClass66_0::errorCode
	int32_t ___errorCode_0;
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass66_0::currentErrorMessage
	String_t* ___currentErrorMessage_1;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass66_0_tCDFD49F55861F898FA96CBBD565A49B81BD8318A, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}

	inline static int32_t get_offset_of_currentErrorMessage_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass66_0_tCDFD49F55861F898FA96CBBD565A49B81BD8318A, ___currentErrorMessage_1)); }
	inline String_t* get_currentErrorMessage_1() const { return ___currentErrorMessage_1; }
	inline String_t** get_address_of_currentErrorMessage_1() { return &___currentErrorMessage_1; }
	inline void set_currentErrorMessage_1(String_t* value)
	{
		___currentErrorMessage_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentErrorMessage_1), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass67_0
struct U3CU3Ec__DisplayClass67_0_t5DC3CEE62D4F40329FC4FEEC576419629A5533D7  : public RuntimeObject
{
public:
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass67_0::currentStreamId
	String_t* ___currentStreamId_0;

public:
	inline static int32_t get_offset_of_currentStreamId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass67_0_t5DC3CEE62D4F40329FC4FEEC576419629A5533D7, ___currentStreamId_0)); }
	inline String_t* get_currentStreamId_0() const { return ___currentStreamId_0; }
	inline String_t** get_address_of_currentStreamId_0() { return &___currentStreamId_0; }
	inline void set_currentStreamId_0(String_t* value)
	{
		___currentStreamId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentStreamId_0), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass68_0
struct U3CU3Ec__DisplayClass68_0_tCED900DFACCAB707B4F58B802DEF2995046D9DFF  : public RuntimeObject
{
public:
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass68_0::currentStreamId
	String_t* ___currentStreamId_0;

public:
	inline static int32_t get_offset_of_currentStreamId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass68_0_tCED900DFACCAB707B4F58B802DEF2995046D9DFF, ___currentStreamId_0)); }
	inline String_t* get_currentStreamId_0() const { return ___currentStreamId_0; }
	inline String_t** get_address_of_currentStreamId_0() { return &___currentStreamId_0; }
	inline void set_currentStreamId_0(String_t* value)
	{
		___currentStreamId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentStreamId_0), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_t723537D1DF7948FC6AD565DB31369BCEABDAEDF1  : public RuntimeObject
{
public:
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass69_0::currentStreamId
	String_t* ___currentStreamId_0;

public:
	inline static int32_t get_offset_of_currentStreamId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass69_0_t723537D1DF7948FC6AD565DB31369BCEABDAEDF1, ___currentStreamId_0)); }
	inline String_t* get_currentStreamId_0() const { return ___currentStreamId_0; }
	inline String_t** get_address_of_currentStreamId_0() { return &___currentStreamId_0; }
	inline void set_currentStreamId_0(String_t* value)
	{
		___currentStreamId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentStreamId_0), (void*)value);
	}
};


// qnrtc.QNRTCImpl/<>c
struct U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F_StaticFields
{
public:
	// qnrtc.QNRTCImpl/<>c qnrtc.QNRTCImpl/<>c::<>9
	U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F * ___U3CU3E9_0;
	// System.Predicate`1<qnrtc.QNRTCEventListener> qnrtc.QNRTCImpl/<>c::<>9__5_0
	Predicate_1_tE3E8C36266DF71265E76E7E547E37ED9FE02A872 * ___U3CU3E9__5_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Predicate_1_tE3E8C36266DF71265E76E7E547E37ED9FE02A872 * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Predicate_1_tE3E8C36266DF71265E76E7E547E37ED9FE02A872 ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Predicate_1_tE3E8C36266DF71265E76E7E547E37ED9FE02A872 * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}
};


// qnrtc.QNRTCImpl/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t37D297C8DACF8D6FC987909A195471863B7DC562  : public RuntimeObject
{
public:
	// System.Int32 qnrtc.QNRTCImpl/<>c__DisplayClass17_0::device
	int32_t ___device_0;

public:
	inline static int32_t get_offset_of_device_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t37D297C8DACF8D6FC987909A195471863B7DC562, ___device_0)); }
	inline int32_t get_device_0() const { return ___device_0; }
	inline int32_t* get_address_of_device_0() { return &___device_0; }
	inline void set_device_0(int32_t value)
	{
		___device_0 = value;
	}
};


// qnrtc.QNRemoteTrackImpl/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_t3DE3E818AE8FC6236EDA869728ACD2E5171444C4  : public RuntimeObject
{
public:
	// System.String qnrtc.QNRemoteTrackImpl/<>c__DisplayClass5_0::currentUserId
	String_t* ___currentUserId_0;
	// System.String qnrtc.QNRemoteTrackImpl/<>c__DisplayClass5_0::currentTrackId
	String_t* ___currentTrackId_1;
	// System.Boolean qnrtc.QNRemoteTrackImpl/<>c__DisplayClass5_0::muted
	bool ___muted_2;

public:
	inline static int32_t get_offset_of_currentUserId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t3DE3E818AE8FC6236EDA869728ACD2E5171444C4, ___currentUserId_0)); }
	inline String_t* get_currentUserId_0() const { return ___currentUserId_0; }
	inline String_t** get_address_of_currentUserId_0() { return &___currentUserId_0; }
	inline void set_currentUserId_0(String_t* value)
	{
		___currentUserId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentUserId_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentTrackId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t3DE3E818AE8FC6236EDA869728ACD2E5171444C4, ___currentTrackId_1)); }
	inline String_t* get_currentTrackId_1() const { return ___currentTrackId_1; }
	inline String_t** get_address_of_currentTrackId_1() { return &___currentTrackId_1; }
	inline void set_currentTrackId_1(String_t* value)
	{
		___currentTrackId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTrackId_1), (void*)value);
	}

	inline static int32_t get_offset_of_muted_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_t3DE3E818AE8FC6236EDA869728ACD2E5171444C4, ___muted_2)); }
	inline bool get_muted_2() const { return ___muted_2; }
	inline bool* get_address_of_muted_2() { return &___muted_2; }
	inline void set_muted_2(bool value)
	{
		___muted_2 = value;
	}
};


// qnrtc.QNRemoteTrackImpl/<>c__DisplayClass5_1
struct U3CU3Ec__DisplayClass5_1_t805B9AD3F21643880F37A41293C6DECEC5248578  : public RuntimeObject
{
public:
	// qnrtc.QNRemoteTrackImpl qnrtc.QNRemoteTrackImpl/<>c__DisplayClass5_1::remoteTrackImpl
	QNRemoteTrackImpl_t14FE838E8A5E61143C8C4914B9546ACA84A19E1C * ___remoteTrackImpl_0;
	// qnrtc.QNRemoteTrackImpl/<>c__DisplayClass5_0 qnrtc.QNRemoteTrackImpl/<>c__DisplayClass5_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass5_0_t3DE3E818AE8FC6236EDA869728ACD2E5171444C4 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_remoteTrackImpl_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_1_t805B9AD3F21643880F37A41293C6DECEC5248578, ___remoteTrackImpl_0)); }
	inline QNRemoteTrackImpl_t14FE838E8A5E61143C8C4914B9546ACA84A19E1C * get_remoteTrackImpl_0() const { return ___remoteTrackImpl_0; }
	inline QNRemoteTrackImpl_t14FE838E8A5E61143C8C4914B9546ACA84A19E1C ** get_address_of_remoteTrackImpl_0() { return &___remoteTrackImpl_0; }
	inline void set_remoteTrackImpl_0(QNRemoteTrackImpl_t14FE838E8A5E61143C8C4914B9546ACA84A19E1C * value)
	{
		___remoteTrackImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteTrackImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_1_t805B9AD3F21643880F37A41293C6DECEC5248578, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass5_0_t3DE3E818AE8FC6236EDA869728ACD2E5171444C4 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass5_0_t3DE3E818AE8FC6236EDA869728ACD2E5171444C4 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass5_0_t3DE3E818AE8FC6236EDA869728ACD2E5171444C4 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
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


// System.Collections.Generic.List`1/Enumerator<qnrtc.QNLiveStreamingListener>
struct Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A, ___list_0)); }
	inline List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * get_list_0() const { return ___list_0; }
	inline List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<qnrtc.QNLocalTrack>
struct Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E, ___list_0)); }
	inline List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E * get_list_0() const { return ___list_0; }
	inline List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<qnrtc.QNMediaRelayListener>
struct Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D, ___list_0)); }
	inline List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * get_list_0() const { return ___list_0; }
	inline List_1_t183BB96555952E7D5EB933BDC2D880925C92665D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<qnrtc.QNNetworkQualityListener>
struct Enumerator_t018C604741829237B8E541F69B1144757220CFC9 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t018C604741829237B8E541F69B1144757220CFC9, ___list_0)); }
	inline List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF * get_list_0() const { return ___list_0; }
	inline List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t018C604741829237B8E541F69B1144757220CFC9, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t018C604741829237B8E541F69B1144757220CFC9, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t018C604741829237B8E541F69B1144757220CFC9, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<qnrtc.QNPublishResultListener>
struct Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E, ___list_0)); }
	inline List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * get_list_0() const { return ___list_0; }
	inline List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<qnrtc.QNRTCClientEventListener>
struct Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1, ___list_0)); }
	inline List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * get_list_0() const { return ___list_0; }
	inline List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<qnrtc.QNRTCClientRoleEventListener>
struct Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C, ___list_0)); }
	inline List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * get_list_0() const { return ___list_0; }
	inline List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<qnrtc.QNRTCEventListener>
struct Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216, ___list_0)); }
	inline List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 * get_list_0() const { return ___list_0; }
	inline List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<qnrtc.QNRemoteAudioTrack>
struct Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B, ___list_0)); }
	inline List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * get_list_0() const { return ___list_0; }
	inline List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<qnrtc.QNTrackInfoChangedListener>
struct Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073, ___list_0)); }
	inline List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D * get_list_0() const { return ___list_0; }
	inline List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<QNRTCUnityDemo.UserTableViewCell>
struct Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E, ___list_0)); }
	inline List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * get_list_0() const { return ___list_0; }
	inline List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E, ___current_3)); }
	inline UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * get_current_3() const { return ___current_3; }
	inline UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53, ___value_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_value_1() const { return ___value_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
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


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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


// qnrtc.QNCustomMessage
struct QNCustomMessage_t67035EE960F56165A47F49B3A5C7BE786D11CDE9 
{
public:
	// System.String qnrtc.QNCustomMessage::msgId
	String_t* ___msgId_0;
	// System.String qnrtc.QNCustomMessage::msgSendId
	String_t* ___msgSendId_1;
	// System.String qnrtc.QNCustomMessage::msgText
	String_t* ___msgText_2;
	// System.Int32 qnrtc.QNCustomMessage::msgTimestamp
	int32_t ___msgTimestamp_3;

public:
	inline static int32_t get_offset_of_msgId_0() { return static_cast<int32_t>(offsetof(QNCustomMessage_t67035EE960F56165A47F49B3A5C7BE786D11CDE9, ___msgId_0)); }
	inline String_t* get_msgId_0() const { return ___msgId_0; }
	inline String_t** get_address_of_msgId_0() { return &___msgId_0; }
	inline void set_msgId_0(String_t* value)
	{
		___msgId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msgId_0), (void*)value);
	}

	inline static int32_t get_offset_of_msgSendId_1() { return static_cast<int32_t>(offsetof(QNCustomMessage_t67035EE960F56165A47F49B3A5C7BE786D11CDE9, ___msgSendId_1)); }
	inline String_t* get_msgSendId_1() const { return ___msgSendId_1; }
	inline String_t** get_address_of_msgSendId_1() { return &___msgSendId_1; }
	inline void set_msgSendId_1(String_t* value)
	{
		___msgSendId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msgSendId_1), (void*)value);
	}

	inline static int32_t get_offset_of_msgText_2() { return static_cast<int32_t>(offsetof(QNCustomMessage_t67035EE960F56165A47F49B3A5C7BE786D11CDE9, ___msgText_2)); }
	inline String_t* get_msgText_2() const { return ___msgText_2; }
	inline String_t** get_address_of_msgText_2() { return &___msgText_2; }
	inline void set_msgText_2(String_t* value)
	{
		___msgText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msgText_2), (void*)value);
	}

	inline static int32_t get_offset_of_msgTimestamp_3() { return static_cast<int32_t>(offsetof(QNCustomMessage_t67035EE960F56165A47F49B3A5C7BE786D11CDE9, ___msgTimestamp_3)); }
	inline int32_t get_msgTimestamp_3() const { return ___msgTimestamp_3; }
	inline int32_t* get_address_of_msgTimestamp_3() { return &___msgTimestamp_3; }
	inline void set_msgTimestamp_3(int32_t value)
	{
		___msgTimestamp_3 = value;
	}
};

// Native definition for P/Invoke marshalling of qnrtc.QNCustomMessage
struct QNCustomMessage_t67035EE960F56165A47F49B3A5C7BE786D11CDE9_marshaled_pinvoke
{
	char* ___msgId_0;
	char* ___msgSendId_1;
	char* ___msgText_2;
	int32_t ___msgTimestamp_3;
};
// Native definition for COM marshalling of qnrtc.QNCustomMessage
struct QNCustomMessage_t67035EE960F56165A47F49B3A5C7BE786D11CDE9_marshaled_com
{
	Il2CppChar* ___msgId_0;
	Il2CppChar* ___msgSendId_1;
	Il2CppChar* ___msgText_2;
	int32_t ___msgTimestamp_3;
};

// qnrtc.QNDirectLiveStreamingConfig
struct QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30 
{
public:
	// qnrtc.QNLocalAudioTrack qnrtc.QNDirectLiveStreamingConfig::LocalAudioTrack
	RuntimeObject* ___LocalAudioTrack_0;
	// System.String qnrtc.QNDirectLiveStreamingConfig::StreamId
	String_t* ___StreamId_1;
	// System.String qnrtc.QNDirectLiveStreamingConfig::PublishUrl
	String_t* ___PublishUrl_2;

public:
	inline static int32_t get_offset_of_LocalAudioTrack_0() { return static_cast<int32_t>(offsetof(QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30, ___LocalAudioTrack_0)); }
	inline RuntimeObject* get_LocalAudioTrack_0() const { return ___LocalAudioTrack_0; }
	inline RuntimeObject** get_address_of_LocalAudioTrack_0() { return &___LocalAudioTrack_0; }
	inline void set_LocalAudioTrack_0(RuntimeObject* value)
	{
		___LocalAudioTrack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LocalAudioTrack_0), (void*)value);
	}

	inline static int32_t get_offset_of_StreamId_1() { return static_cast<int32_t>(offsetof(QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30, ___StreamId_1)); }
	inline String_t* get_StreamId_1() const { return ___StreamId_1; }
	inline String_t** get_address_of_StreamId_1() { return &___StreamId_1; }
	inline void set_StreamId_1(String_t* value)
	{
		___StreamId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StreamId_1), (void*)value);
	}

	inline static int32_t get_offset_of_PublishUrl_2() { return static_cast<int32_t>(offsetof(QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30, ___PublishUrl_2)); }
	inline String_t* get_PublishUrl_2() const { return ___PublishUrl_2; }
	inline String_t** get_address_of_PublishUrl_2() { return &___PublishUrl_2; }
	inline void set_PublishUrl_2(String_t* value)
	{
		___PublishUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PublishUrl_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of qnrtc.QNDirectLiveStreamingConfig
struct QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30_marshaled_pinvoke
{
	RuntimeObject* ___LocalAudioTrack_0;
	char* ___StreamId_1;
	char* ___PublishUrl_2;
};
// Native definition for COM marshalling of qnrtc.QNDirectLiveStreamingConfig
struct QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30_marshaled_com
{
	RuntimeObject* ___LocalAudioTrack_0;
	Il2CppChar* ___StreamId_1;
	Il2CppChar* ___PublishUrl_2;
};

// qnrtc.QNRemoteUser
struct QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10 
{
public:
	// System.String qnrtc.QNRemoteUser::UserId
	String_t* ___UserId_0;
	// System.String qnrtc.QNRemoteUser::UserData
	String_t* ___UserData_1;
	// System.Collections.Generic.List`1<qnrtc.QNRemoteAudioTrack> qnrtc.QNRemoteUser::RemoteAudioTrackList
	List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * ___RemoteAudioTrackList_2;

public:
	inline static int32_t get_offset_of_UserId_0() { return static_cast<int32_t>(offsetof(QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10, ___UserId_0)); }
	inline String_t* get_UserId_0() const { return ___UserId_0; }
	inline String_t** get_address_of_UserId_0() { return &___UserId_0; }
	inline void set_UserId_0(String_t* value)
	{
		___UserId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserId_0), (void*)value);
	}

	inline static int32_t get_offset_of_UserData_1() { return static_cast<int32_t>(offsetof(QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10, ___UserData_1)); }
	inline String_t* get_UserData_1() const { return ___UserData_1; }
	inline String_t** get_address_of_UserData_1() { return &___UserData_1; }
	inline void set_UserData_1(String_t* value)
	{
		___UserData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserData_1), (void*)value);
	}

	inline static int32_t get_offset_of_RemoteAudioTrackList_2() { return static_cast<int32_t>(offsetof(QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10, ___RemoteAudioTrackList_2)); }
	inline List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * get_RemoteAudioTrackList_2() const { return ___RemoteAudioTrackList_2; }
	inline List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 ** get_address_of_RemoteAudioTrackList_2() { return &___RemoteAudioTrackList_2; }
	inline void set_RemoteAudioTrackList_2(List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * value)
	{
		___RemoteAudioTrackList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteAudioTrackList_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of qnrtc.QNRemoteUser
struct QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10_marshaled_pinvoke
{
	char* ___UserId_0;
	char* ___UserData_1;
	List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * ___RemoteAudioTrackList_2;
};
// Native definition for COM marshalling of qnrtc.QNRemoteUser
struct QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10_marshaled_com
{
	Il2CppChar* ___UserId_0;
	Il2CppChar* ___UserData_1;
	List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * ___RemoteAudioTrackList_2;
};

// qnrtc.QNTranscodingLiveStreamingImage
struct QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422 
{
public:
	// System.String qnrtc.QNTranscodingLiveStreamingImage::LayerUrl
	String_t* ___LayerUrl_0;
	// System.Int32 qnrtc.QNTranscodingLiveStreamingImage::X
	int32_t ___X_1;
	// System.Int32 qnrtc.QNTranscodingLiveStreamingImage::Y
	int32_t ___Y_2;
	// System.Int32 qnrtc.QNTranscodingLiveStreamingImage::LayerWidth
	int32_t ___LayerWidth_3;
	// System.Int32 qnrtc.QNTranscodingLiveStreamingImage::LayerHeight
	int32_t ___LayerHeight_4;

public:
	inline static int32_t get_offset_of_LayerUrl_0() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422, ___LayerUrl_0)); }
	inline String_t* get_LayerUrl_0() const { return ___LayerUrl_0; }
	inline String_t** get_address_of_LayerUrl_0() { return &___LayerUrl_0; }
	inline void set_LayerUrl_0(String_t* value)
	{
		___LayerUrl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LayerUrl_0), (void*)value);
	}

	inline static int32_t get_offset_of_X_1() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422, ___X_1)); }
	inline int32_t get_X_1() const { return ___X_1; }
	inline int32_t* get_address_of_X_1() { return &___X_1; }
	inline void set_X_1(int32_t value)
	{
		___X_1 = value;
	}

	inline static int32_t get_offset_of_Y_2() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422, ___Y_2)); }
	inline int32_t get_Y_2() const { return ___Y_2; }
	inline int32_t* get_address_of_Y_2() { return &___Y_2; }
	inline void set_Y_2(int32_t value)
	{
		___Y_2 = value;
	}

	inline static int32_t get_offset_of_LayerWidth_3() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422, ___LayerWidth_3)); }
	inline int32_t get_LayerWidth_3() const { return ___LayerWidth_3; }
	inline int32_t* get_address_of_LayerWidth_3() { return &___LayerWidth_3; }
	inline void set_LayerWidth_3(int32_t value)
	{
		___LayerWidth_3 = value;
	}

	inline static int32_t get_offset_of_LayerHeight_4() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422, ___LayerHeight_4)); }
	inline int32_t get_LayerHeight_4() const { return ___LayerHeight_4; }
	inline int32_t* get_address_of_LayerHeight_4() { return &___LayerHeight_4; }
	inline void set_LayerHeight_4(int32_t value)
	{
		___LayerHeight_4 = value;
	}
};

// Native definition for P/Invoke marshalling of qnrtc.QNTranscodingLiveStreamingImage
struct QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422_marshaled_pinvoke
{
	char* ___LayerUrl_0;
	int32_t ___X_1;
	int32_t ___Y_2;
	int32_t ___LayerWidth_3;
	int32_t ___LayerHeight_4;
};
// Native definition for COM marshalling of qnrtc.QNTranscodingLiveStreamingImage
struct QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422_marshaled_com
{
	Il2CppChar* ___LayerUrl_0;
	int32_t ___X_1;
	int32_t ___Y_2;
	int32_t ___LayerWidth_3;
	int32_t ___LayerHeight_4;
};

// qnrtc.QNTranscodingLiveStreamingTrack
struct QNTranscodingLiveStreamingTrack_t94540D56E31AC536AEFD15679C8E5E74121E25BE 
{
public:
	// System.String qnrtc.QNTranscodingLiveStreamingTrack::TrackId
	String_t* ___TrackId_0;

public:
	inline static int32_t get_offset_of_TrackId_0() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingTrack_t94540D56E31AC536AEFD15679C8E5E74121E25BE, ___TrackId_0)); }
	inline String_t* get_TrackId_0() const { return ___TrackId_0; }
	inline String_t** get_address_of_TrackId_0() { return &___TrackId_0; }
	inline void set_TrackId_0(String_t* value)
	{
		___TrackId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackId_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of qnrtc.QNTranscodingLiveStreamingTrack
struct QNTranscodingLiveStreamingTrack_t94540D56E31AC536AEFD15679C8E5E74121E25BE_marshaled_pinvoke
{
	char* ___TrackId_0;
};
// Native definition for COM marshalling of qnrtc.QNTranscodingLiveStreamingTrack
struct QNTranscodingLiveStreamingTrack_t94540D56E31AC536AEFD15679C8E5E74121E25BE_marshaled_com
{
	Il2CppChar* ___TrackId_0;
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
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


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// System.Collections.Generic.List`1/Enumerator<qnrtc.QNRemoteUser>
struct Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0, ___list_0)); }
	inline List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6 * get_list_0() const { return ___list_0; }
	inline List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0, ___current_3)); }
	inline QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10  get_current_3() const { return ___current_3; }
	inline QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___UserId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___UserData_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___RemoteAudioTrackList_2), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>
struct Enumerator_t165535373A2C041075C388ED21DF73971A40816A 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t165535373A2C041075C388ED21DF73971A40816A, ___dictionary_0)); }
	inline Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t165535373A2C041075C388ED21DF73971A40816A, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t165535373A2C041075C388ED21DF73971A40816A, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t165535373A2C041075C388ED21DF73971A40816A, ___current_3)); }
	inline KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t165535373A2C041075C388ED21DF73971A40816A, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
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

// qnrtc.QNAudioDevice
struct QNAudioDevice_t1743F623BF860E0D3E9CFC496CCE9D6C993F6087 
{
public:
	// System.Int32 qnrtc.QNAudioDevice::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QNAudioDevice_t1743F623BF860E0D3E9CFC496CCE9D6C993F6087, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// qnrtc.QNClientMode
struct QNClientMode_tF5B701587D7A87BA71B7790913B9E0BB5ECC248D 
{
public:
	// System.Int32 qnrtc.QNClientMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QNClientMode_tF5B701587D7A87BA71B7790913B9E0BB5ECC248D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// qnrtc.QNClientRole
struct QNClientRole_t2AE42C48B498DA2D60FFF19CF9A2338167BD6293 
{
public:
	// System.Int32 qnrtc.QNClientRole::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QNClientRole_t2AE42C48B498DA2D60FFF19CF9A2338167BD6293, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// qnrtc.QNConnectionState
struct QNConnectionState_t4A7004B4EB40F297DB36F00A8B9F496EC1EB6DFF 
{
public:
	// System.Int32 qnrtc.QNConnectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QNConnectionState_t4A7004B4EB40F297DB36F00A8B9F496EC1EB6DFF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// qnrtc.QNDisconnectReason
struct QNDisconnectReason_tF8E4B7ED01EC23190E308AE89DA8BF94B469F498 
{
public:
	// System.Int32 qnrtc.QNDisconnectReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QNDisconnectReason_tF8E4B7ED01EC23190E308AE89DA8BF94B469F498, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// qnrtc.QNLiveStreamingErrorType
struct QNLiveStreamingErrorType_tBBD723B778225C2E11E0E09D0403BF6E459CE3A2 
{
public:
	// System.Int32 qnrtc.QNLiveStreamingErrorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QNLiveStreamingErrorType_tBBD723B778225C2E11E0E09D0403BF6E459CE3A2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// qnrtc.QNLogLevel
struct QNLogLevel_t528994739E36F830857706DC80A74632F8D5B5B8 
{
public:
	// System.Int32 qnrtc.QNLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QNLogLevel_t528994739E36F830857706DC80A74632F8D5B5B8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// qnrtc.QNMediaRelayState
struct QNMediaRelayState_t8210EDA31CE70D35A4310C4742F04CCC97647A09 
{
public:
	// System.Int32 qnrtc.QNMediaRelayState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QNMediaRelayState_t8210EDA31CE70D35A4310C4742F04CCC97647A09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// qnrtc.QNNetworkGrade
struct QNNetworkGrade_tF4AD78AF44A365EA8F0952361103FB460FE984CD 
{
public:
	// System.Int32 qnrtc.QNNetworkGrade::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QNNetworkGrade_tF4AD78AF44A365EA8F0952361103FB460FE984CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// qnrtc.QNRTCClientImpl
struct QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129  : public QNRTCClient_tE6ACE8DA8CDB049880B6D28C1DFF24AFF8D677CE
{
public:
	// System.IntPtr qnrtc.QNRTCClientImpl::nativeInstance
	intptr_t ___nativeInstance_0;
	// System.Collections.Generic.List`1<qnrtc.QNRemoteTrack> qnrtc.QNRTCClientImpl::remoteTracks
	List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 * ___remoteTracks_1;
	// System.Collections.Generic.List`1<qnrtc.QNRTCClientEventListener> qnrtc.QNRTCClientImpl::clientEventListeners
	List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * ___clientEventListeners_3;
	// System.Collections.Generic.List`1<qnrtc.QNRTCClientRoleEventListener> qnrtc.QNRTCClientImpl::clientRoleEventListeners
	List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * ___clientRoleEventListeners_4;
	// System.Collections.Generic.List`1<qnrtc.QNMediaRelayListener> qnrtc.QNRTCClientImpl::mediaRelayListeners
	List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * ___mediaRelayListeners_5;
	// System.Collections.Generic.List`1<qnrtc.QNPublishResultListener> qnrtc.QNRTCClientImpl::publishResultListeners
	List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * ___publishResultListeners_6;
	// System.Collections.Generic.List`1<qnrtc.QNLiveStreamingListener> qnrtc.QNRTCClientImpl::liveStreamingListeners
	List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * ___liveStreamingListeners_7;
	// System.Collections.Generic.List`1<qnrtc.QNRemoteAudioMixedFrameListener> qnrtc.QNRTCClientImpl::remoteAudioMixedFrameListeners
	List_1_t73046A2A36BF866EAD8C4C3E0EED64FAB2FFEC94 * ___remoteAudioMixedFrameListeners_8;
	// System.Collections.Generic.List`1<qnrtc.QNNetworkQualityListener> qnrtc.QNRTCClientImpl::networkQualityListeners
	List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF * ___networkQualityListeners_9;

public:
	inline static int32_t get_offset_of_nativeInstance_0() { return static_cast<int32_t>(offsetof(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129, ___nativeInstance_0)); }
	inline intptr_t get_nativeInstance_0() const { return ___nativeInstance_0; }
	inline intptr_t* get_address_of_nativeInstance_0() { return &___nativeInstance_0; }
	inline void set_nativeInstance_0(intptr_t value)
	{
		___nativeInstance_0 = value;
	}

	inline static int32_t get_offset_of_remoteTracks_1() { return static_cast<int32_t>(offsetof(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129, ___remoteTracks_1)); }
	inline List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 * get_remoteTracks_1() const { return ___remoteTracks_1; }
	inline List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 ** get_address_of_remoteTracks_1() { return &___remoteTracks_1; }
	inline void set_remoteTracks_1(List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 * value)
	{
		___remoteTracks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteTracks_1), (void*)value);
	}

	inline static int32_t get_offset_of_clientEventListeners_3() { return static_cast<int32_t>(offsetof(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129, ___clientEventListeners_3)); }
	inline List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * get_clientEventListeners_3() const { return ___clientEventListeners_3; }
	inline List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC ** get_address_of_clientEventListeners_3() { return &___clientEventListeners_3; }
	inline void set_clientEventListeners_3(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * value)
	{
		___clientEventListeners_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientEventListeners_3), (void*)value);
	}

	inline static int32_t get_offset_of_clientRoleEventListeners_4() { return static_cast<int32_t>(offsetof(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129, ___clientRoleEventListeners_4)); }
	inline List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * get_clientRoleEventListeners_4() const { return ___clientRoleEventListeners_4; }
	inline List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D ** get_address_of_clientRoleEventListeners_4() { return &___clientRoleEventListeners_4; }
	inline void set_clientRoleEventListeners_4(List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * value)
	{
		___clientRoleEventListeners_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientRoleEventListeners_4), (void*)value);
	}

	inline static int32_t get_offset_of_mediaRelayListeners_5() { return static_cast<int32_t>(offsetof(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129, ___mediaRelayListeners_5)); }
	inline List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * get_mediaRelayListeners_5() const { return ___mediaRelayListeners_5; }
	inline List_1_t183BB96555952E7D5EB933BDC2D880925C92665D ** get_address_of_mediaRelayListeners_5() { return &___mediaRelayListeners_5; }
	inline void set_mediaRelayListeners_5(List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * value)
	{
		___mediaRelayListeners_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mediaRelayListeners_5), (void*)value);
	}

	inline static int32_t get_offset_of_publishResultListeners_6() { return static_cast<int32_t>(offsetof(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129, ___publishResultListeners_6)); }
	inline List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * get_publishResultListeners_6() const { return ___publishResultListeners_6; }
	inline List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE ** get_address_of_publishResultListeners_6() { return &___publishResultListeners_6; }
	inline void set_publishResultListeners_6(List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * value)
	{
		___publishResultListeners_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publishResultListeners_6), (void*)value);
	}

	inline static int32_t get_offset_of_liveStreamingListeners_7() { return static_cast<int32_t>(offsetof(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129, ___liveStreamingListeners_7)); }
	inline List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * get_liveStreamingListeners_7() const { return ___liveStreamingListeners_7; }
	inline List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB ** get_address_of_liveStreamingListeners_7() { return &___liveStreamingListeners_7; }
	inline void set_liveStreamingListeners_7(List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * value)
	{
		___liveStreamingListeners_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___liveStreamingListeners_7), (void*)value);
	}

	inline static int32_t get_offset_of_remoteAudioMixedFrameListeners_8() { return static_cast<int32_t>(offsetof(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129, ___remoteAudioMixedFrameListeners_8)); }
	inline List_1_t73046A2A36BF866EAD8C4C3E0EED64FAB2FFEC94 * get_remoteAudioMixedFrameListeners_8() const { return ___remoteAudioMixedFrameListeners_8; }
	inline List_1_t73046A2A36BF866EAD8C4C3E0EED64FAB2FFEC94 ** get_address_of_remoteAudioMixedFrameListeners_8() { return &___remoteAudioMixedFrameListeners_8; }
	inline void set_remoteAudioMixedFrameListeners_8(List_1_t73046A2A36BF866EAD8C4C3E0EED64FAB2FFEC94 * value)
	{
		___remoteAudioMixedFrameListeners_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteAudioMixedFrameListeners_8), (void*)value);
	}

	inline static int32_t get_offset_of_networkQualityListeners_9() { return static_cast<int32_t>(offsetof(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129, ___networkQualityListeners_9)); }
	inline List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF * get_networkQualityListeners_9() const { return ___networkQualityListeners_9; }
	inline List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF ** get_address_of_networkQualityListeners_9() { return &___networkQualityListeners_9; }
	inline void set_networkQualityListeners_9(List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF * value)
	{
		___networkQualityListeners_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___networkQualityListeners_9), (void*)value);
	}
};

struct QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields
{
public:
	// qnrtc.QNRTCClientImpl qnrtc.QNRTCClientImpl::sInstance
	QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * ___sInstance_2;

public:
	inline static int32_t get_offset_of_sInstance_2() { return static_cast<int32_t>(offsetof(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields, ___sInstance_2)); }
	inline QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * get_sInstance_2() const { return ___sInstance_2; }
	inline QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 ** get_address_of_sInstance_2() { return &___sInstance_2; }
	inline void set_sInstance_2(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * value)
	{
		___sInstance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_2), (void*)value);
	}
};


// qnrtc.QNStretchMode
struct QNStretchMode_t4F1C4C400C4F56632437DC492E2F675243E70973 
{
public:
	// System.Int32 qnrtc.QNStretchMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QNStretchMode_t4F1C4C400C4F56632437DC492E2F675243E70973, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// qnrtc.QNTrackImpl
struct QNTrackImpl_t71241FE62F13083D414CF58D8FA33B8883229805  : public RuntimeObject
{
public:
	// System.IntPtr qnrtc.QNTrackImpl::nativeInstance
	intptr_t ___nativeInstance_0;

public:
	inline static int32_t get_offset_of_nativeInstance_0() { return static_cast<int32_t>(offsetof(QNTrackImpl_t71241FE62F13083D414CF58D8FA33B8883229805, ___nativeInstance_0)); }
	inline intptr_t get_nativeInstance_0() const { return ___nativeInstance_0; }
	inline intptr_t* get_address_of_nativeInstance_0() { return &___nativeInstance_0; }
	inline void set_nativeInstance_0(intptr_t value)
	{
		___nativeInstance_0 = value;
	}
};


// qnrtc.QNTransportPolicy
struct QNTransportPolicy_t1FE219D60567FF4BCBB175E2D58BCBCC979BBC01 
{
public:
	// System.Int32 qnrtc.QNTransportPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QNTransportPolicy_t1FE219D60567FF4BCBB175E2D58BCBCC979BBC01, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tBD90DFB07923EC19E5EA59FAF26292AC2799A932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharacterValidation_t03AFB752BBD6215579765978CE67D7159431FC41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/ContentType
struct ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContentType_t15FD47A38F32CADD417E3A07C787F1B3997B9AC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/InputType
struct InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputType_t43FE97C0C3EE1F7DB81E2F34420780D1DFBF03D2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.InputField/LineType
struct LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LineType_t3249F1C248D9D12DE265C49F371F2C3618AFEFCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_t825FAFFA8C19B6B38892BCD6398591FEFB9617EB  : public RuntimeObject
{
public:
	// qnrtc.QNCustomMessage qnrtc.QNRTCClientImpl/<>c__DisplayClass59_0::message
	QNCustomMessage_t67035EE960F56165A47F49B3A5C7BE786D11CDE9  ___message_0;

public:
	inline static int32_t get_offset_of_message_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass59_0_t825FAFFA8C19B6B38892BCD6398591FEFB9617EB, ___message_0)); }
	inline QNCustomMessage_t67035EE960F56165A47F49B3A5C7BE786D11CDE9  get_message_0() const { return ___message_0; }
	inline QNCustomMessage_t67035EE960F56165A47F49B3A5C7BE786D11CDE9 * get_address_of_message_0() { return &___message_0; }
	inline void set_message_0(QNCustomMessage_t67035EE960F56165A47F49B3A5C7BE786D11CDE9  value)
	{
		___message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___message_0))->___msgId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___message_0))->___msgSendId_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___message_0))->___msgText_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
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


// QNRTCUnityDemo.Config
struct Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5  : public RuntimeObject
{
public:
	// System.String QNRTCUnityDemo.Config::Token
	String_t* ___Token_1;
	// System.String QNRTCUnityDemo.Config::AppId
	String_t* ___AppId_2;
	// System.String QNRTCUnityDemo.Config::RoomName
	String_t* ___RoomName_3;
	// System.String QNRTCUnityDemo.Config::UserId
	String_t* ___UserId_4;
	// qnrtc.QNTransportPolicy QNRTCUnityDemo.Config::Policy
	int32_t ___Policy_5;
	// qnrtc.QNLogLevel QNRTCUnityDemo.Config::LogLevel
	int32_t ___LogLevel_6;
	// System.Boolean QNRTCUnityDemo.Config::IsAEC3Enabled
	bool ___IsAEC3Enabled_7;
	// System.Boolean QNRTCUnityDemo.Config::IsRedEnabled
	bool ___IsRedEnabled_8;
	// qnrtc.QNClientMode QNRTCUnityDemo.Config::Mode
	int32_t ___Mode_9;
	// qnrtc.QNClientRole QNRTCUnityDemo.Config::Role
	int32_t ___Role_10;
	// System.Boolean QNRTCUnityDemo.Config::IsCustomAudio
	bool ___IsCustomAudio_11;

public:
	inline static int32_t get_offset_of_Token_1() { return static_cast<int32_t>(offsetof(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5, ___Token_1)); }
	inline String_t* get_Token_1() const { return ___Token_1; }
	inline String_t** get_address_of_Token_1() { return &___Token_1; }
	inline void set_Token_1(String_t* value)
	{
		___Token_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Token_1), (void*)value);
	}

	inline static int32_t get_offset_of_AppId_2() { return static_cast<int32_t>(offsetof(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5, ___AppId_2)); }
	inline String_t* get_AppId_2() const { return ___AppId_2; }
	inline String_t** get_address_of_AppId_2() { return &___AppId_2; }
	inline void set_AppId_2(String_t* value)
	{
		___AppId_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppId_2), (void*)value);
	}

	inline static int32_t get_offset_of_RoomName_3() { return static_cast<int32_t>(offsetof(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5, ___RoomName_3)); }
	inline String_t* get_RoomName_3() const { return ___RoomName_3; }
	inline String_t** get_address_of_RoomName_3() { return &___RoomName_3; }
	inline void set_RoomName_3(String_t* value)
	{
		___RoomName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RoomName_3), (void*)value);
	}

	inline static int32_t get_offset_of_UserId_4() { return static_cast<int32_t>(offsetof(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5, ___UserId_4)); }
	inline String_t* get_UserId_4() const { return ___UserId_4; }
	inline String_t** get_address_of_UserId_4() { return &___UserId_4; }
	inline void set_UserId_4(String_t* value)
	{
		___UserId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserId_4), (void*)value);
	}

	inline static int32_t get_offset_of_Policy_5() { return static_cast<int32_t>(offsetof(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5, ___Policy_5)); }
	inline int32_t get_Policy_5() const { return ___Policy_5; }
	inline int32_t* get_address_of_Policy_5() { return &___Policy_5; }
	inline void set_Policy_5(int32_t value)
	{
		___Policy_5 = value;
	}

	inline static int32_t get_offset_of_LogLevel_6() { return static_cast<int32_t>(offsetof(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5, ___LogLevel_6)); }
	inline int32_t get_LogLevel_6() const { return ___LogLevel_6; }
	inline int32_t* get_address_of_LogLevel_6() { return &___LogLevel_6; }
	inline void set_LogLevel_6(int32_t value)
	{
		___LogLevel_6 = value;
	}

	inline static int32_t get_offset_of_IsAEC3Enabled_7() { return static_cast<int32_t>(offsetof(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5, ___IsAEC3Enabled_7)); }
	inline bool get_IsAEC3Enabled_7() const { return ___IsAEC3Enabled_7; }
	inline bool* get_address_of_IsAEC3Enabled_7() { return &___IsAEC3Enabled_7; }
	inline void set_IsAEC3Enabled_7(bool value)
	{
		___IsAEC3Enabled_7 = value;
	}

	inline static int32_t get_offset_of_IsRedEnabled_8() { return static_cast<int32_t>(offsetof(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5, ___IsRedEnabled_8)); }
	inline bool get_IsRedEnabled_8() const { return ___IsRedEnabled_8; }
	inline bool* get_address_of_IsRedEnabled_8() { return &___IsRedEnabled_8; }
	inline void set_IsRedEnabled_8(bool value)
	{
		___IsRedEnabled_8 = value;
	}

	inline static int32_t get_offset_of_Mode_9() { return static_cast<int32_t>(offsetof(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5, ___Mode_9)); }
	inline int32_t get_Mode_9() const { return ___Mode_9; }
	inline int32_t* get_address_of_Mode_9() { return &___Mode_9; }
	inline void set_Mode_9(int32_t value)
	{
		___Mode_9 = value;
	}

	inline static int32_t get_offset_of_Role_10() { return static_cast<int32_t>(offsetof(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5, ___Role_10)); }
	inline int32_t get_Role_10() const { return ___Role_10; }
	inline int32_t* get_address_of_Role_10() { return &___Role_10; }
	inline void set_Role_10(int32_t value)
	{
		___Role_10 = value;
	}

	inline static int32_t get_offset_of_IsCustomAudio_11() { return static_cast<int32_t>(offsetof(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5, ___IsCustomAudio_11)); }
	inline bool get_IsCustomAudio_11() const { return ___IsCustomAudio_11; }
	inline bool* get_address_of_IsCustomAudio_11() { return &___IsCustomAudio_11; }
	inline void set_IsCustomAudio_11(bool value)
	{
		___IsCustomAudio_11 = value;
	}
};

struct Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5_StaticFields
{
public:
	// QNRTCUnityDemo.Config QNRTCUnityDemo.Config::shareInstance
	Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5 * ___shareInstance_0;

public:
	inline static int32_t get_offset_of_shareInstance_0() { return static_cast<int32_t>(offsetof(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5_StaticFields, ___shareInstance_0)); }
	inline Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5 * get_shareInstance_0() const { return ___shareInstance_0; }
	inline Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5 ** get_address_of_shareInstance_0() { return &___shareInstance_0; }
	inline void set_shareInstance_0(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5 * value)
	{
		___shareInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shareInstance_0), (void*)value);
	}
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// qnrtc.QNConnectionDisconnectedInfo
struct QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493 
{
public:
	// qnrtc.QNDisconnectReason qnrtc.QNConnectionDisconnectedInfo::Reason
	int32_t ___Reason_0;
	// System.Int32 qnrtc.QNConnectionDisconnectedInfo::ErrorCode
	int32_t ___ErrorCode_1;
	// System.String qnrtc.QNConnectionDisconnectedInfo::ErrorMessage
	String_t* ___ErrorMessage_2;

public:
	inline static int32_t get_offset_of_Reason_0() { return static_cast<int32_t>(offsetof(QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493, ___Reason_0)); }
	inline int32_t get_Reason_0() const { return ___Reason_0; }
	inline int32_t* get_address_of_Reason_0() { return &___Reason_0; }
	inline void set_Reason_0(int32_t value)
	{
		___Reason_0 = value;
	}

	inline static int32_t get_offset_of_ErrorCode_1() { return static_cast<int32_t>(offsetof(QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493, ___ErrorCode_1)); }
	inline int32_t get_ErrorCode_1() const { return ___ErrorCode_1; }
	inline int32_t* get_address_of_ErrorCode_1() { return &___ErrorCode_1; }
	inline void set_ErrorCode_1(int32_t value)
	{
		___ErrorCode_1 = value;
	}

	inline static int32_t get_offset_of_ErrorMessage_2() { return static_cast<int32_t>(offsetof(QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493, ___ErrorMessage_2)); }
	inline String_t* get_ErrorMessage_2() const { return ___ErrorMessage_2; }
	inline String_t** get_address_of_ErrorMessage_2() { return &___ErrorMessage_2; }
	inline void set_ErrorMessage_2(String_t* value)
	{
		___ErrorMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorMessage_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of qnrtc.QNConnectionDisconnectedInfo
struct QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493_marshaled_pinvoke
{
	int32_t ___Reason_0;
	int32_t ___ErrorCode_1;
	char* ___ErrorMessage_2;
};
// Native definition for COM marshalling of qnrtc.QNConnectionDisconnectedInfo
struct QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493_marshaled_com
{
	int32_t ___Reason_0;
	int32_t ___ErrorCode_1;
	Il2CppChar* ___ErrorMessage_2;
};

// qnrtc.QNLiveStreamingErrorInfo
struct QNLiveStreamingErrorInfo_t226B16E3A0455EF6B7DBE3C375AE111E7F1BEA42 
{
public:
	// qnrtc.QNLiveStreamingErrorType qnrtc.QNLiveStreamingErrorInfo::Type
	int32_t ___Type_0;
	// System.Int32 qnrtc.QNLiveStreamingErrorInfo::Code
	int32_t ___Code_1;
	// System.String qnrtc.QNLiveStreamingErrorInfo::Message
	String_t* ___Message_2;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(QNLiveStreamingErrorInfo_t226B16E3A0455EF6B7DBE3C375AE111E7F1BEA42, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Code_1() { return static_cast<int32_t>(offsetof(QNLiveStreamingErrorInfo_t226B16E3A0455EF6B7DBE3C375AE111E7F1BEA42, ___Code_1)); }
	inline int32_t get_Code_1() const { return ___Code_1; }
	inline int32_t* get_address_of_Code_1() { return &___Code_1; }
	inline void set_Code_1(int32_t value)
	{
		___Code_1 = value;
	}

	inline static int32_t get_offset_of_Message_2() { return static_cast<int32_t>(offsetof(QNLiveStreamingErrorInfo_t226B16E3A0455EF6B7DBE3C375AE111E7F1BEA42, ___Message_2)); }
	inline String_t* get_Message_2() const { return ___Message_2; }
	inline String_t** get_address_of_Message_2() { return &___Message_2; }
	inline void set_Message_2(String_t* value)
	{
		___Message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of qnrtc.QNLiveStreamingErrorInfo
struct QNLiveStreamingErrorInfo_t226B16E3A0455EF6B7DBE3C375AE111E7F1BEA42_marshaled_pinvoke
{
	int32_t ___Type_0;
	int32_t ___Code_1;
	char* ___Message_2;
};
// Native definition for COM marshalling of qnrtc.QNLiveStreamingErrorInfo
struct QNLiveStreamingErrorInfo_t226B16E3A0455EF6B7DBE3C375AE111E7F1BEA42_marshaled_com
{
	int32_t ___Type_0;
	int32_t ___Code_1;
	Il2CppChar* ___Message_2;
};

// qnrtc.QNNetworkQuality
struct QNNetworkQuality_t2DA9536D971051323B4FE00DE465B50EB91B56C1 
{
public:
	// qnrtc.QNNetworkGrade qnrtc.QNNetworkQuality::UplinkNetworkGrade
	int32_t ___UplinkNetworkGrade_0;
	// qnrtc.QNNetworkGrade qnrtc.QNNetworkQuality::DownlinkNetworkGrade
	int32_t ___DownlinkNetworkGrade_1;

public:
	inline static int32_t get_offset_of_UplinkNetworkGrade_0() { return static_cast<int32_t>(offsetof(QNNetworkQuality_t2DA9536D971051323B4FE00DE465B50EB91B56C1, ___UplinkNetworkGrade_0)); }
	inline int32_t get_UplinkNetworkGrade_0() const { return ___UplinkNetworkGrade_0; }
	inline int32_t* get_address_of_UplinkNetworkGrade_0() { return &___UplinkNetworkGrade_0; }
	inline void set_UplinkNetworkGrade_0(int32_t value)
	{
		___UplinkNetworkGrade_0 = value;
	}

	inline static int32_t get_offset_of_DownlinkNetworkGrade_1() { return static_cast<int32_t>(offsetof(QNNetworkQuality_t2DA9536D971051323B4FE00DE465B50EB91B56C1, ___DownlinkNetworkGrade_1)); }
	inline int32_t get_DownlinkNetworkGrade_1() const { return ___DownlinkNetworkGrade_1; }
	inline int32_t* get_address_of_DownlinkNetworkGrade_1() { return &___DownlinkNetworkGrade_1; }
	inline void set_DownlinkNetworkGrade_1(int32_t value)
	{
		___DownlinkNetworkGrade_1 = value;
	}
};


// qnrtc.QNRemoteTrackImpl
struct QNRemoteTrackImpl_t14FE838E8A5E61143C8C4914B9546ACA84A19E1C  : public QNTrackImpl_t71241FE62F13083D414CF58D8FA33B8883229805
{
public:
	// System.Collections.Generic.List`1<qnrtc.QNTrackInfoChangedListener> qnrtc.QNRemoteTrackImpl::trackInfoChangedListeners
	List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D * ___trackInfoChangedListeners_1;

public:
	inline static int32_t get_offset_of_trackInfoChangedListeners_1() { return static_cast<int32_t>(offsetof(QNRemoteTrackImpl_t14FE838E8A5E61143C8C4914B9546ACA84A19E1C, ___trackInfoChangedListeners_1)); }
	inline List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D * get_trackInfoChangedListeners_1() const { return ___trackInfoChangedListeners_1; }
	inline List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D ** get_address_of_trackInfoChangedListeners_1() { return &___trackInfoChangedListeners_1; }
	inline void set_trackInfoChangedListeners_1(List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D * value)
	{
		___trackInfoChangedListeners_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackInfoChangedListeners_1), (void*)value);
	}
};


// qnrtc.QNTranscodingLiveStreamingConfig
struct QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F 
{
public:
	// System.String qnrtc.QNTranscodingLiveStreamingConfig::StreamId
	String_t* ___StreamId_0;
	// System.String qnrtc.QNTranscodingLiveStreamingConfig::PublishUrl
	String_t* ___PublishUrl_1;
	// qnrtc.QNTranscodingLiveStreamingImage qnrtc.QNTranscodingLiveStreamingConfig::MergeBackground
	QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422  ___MergeBackground_2;
	// System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingImage> qnrtc.QNTranscodingLiveStreamingConfig::MergeWatermark
	List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 * ___MergeWatermark_3;
	// System.Int32 qnrtc.QNTranscodingLiveStreamingConfig::Width
	int32_t ___Width_4;
	// System.Int32 qnrtc.QNTranscodingLiveStreamingConfig::Height
	int32_t ___Height_5;
	// System.Int32 qnrtc.QNTranscodingLiveStreamingConfig::Fps
	int32_t ___Fps_6;
	// System.Int32 qnrtc.QNTranscodingLiveStreamingConfig::Bitrate
	int32_t ___Bitrate_7;
	// System.Int32 qnrtc.QNTranscodingLiveStreamingConfig::MinBitrate
	int32_t ___MinBitrate_8;
	// System.Int32 qnrtc.QNTranscodingLiveStreamingConfig::MaxBitrate
	int32_t ___MaxBitrate_9;
	// System.Boolean qnrtc.QNTranscodingLiveStreamingConfig::IsHoldLastFrame
	bool ___IsHoldLastFrame_10;
	// qnrtc.QNStretchMode qnrtc.QNTranscodingLiveStreamingConfig::StretchMode
	int32_t ___StretchMode_11;

public:
	inline static int32_t get_offset_of_StreamId_0() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F, ___StreamId_0)); }
	inline String_t* get_StreamId_0() const { return ___StreamId_0; }
	inline String_t** get_address_of_StreamId_0() { return &___StreamId_0; }
	inline void set_StreamId_0(String_t* value)
	{
		___StreamId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StreamId_0), (void*)value);
	}

	inline static int32_t get_offset_of_PublishUrl_1() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F, ___PublishUrl_1)); }
	inline String_t* get_PublishUrl_1() const { return ___PublishUrl_1; }
	inline String_t** get_address_of_PublishUrl_1() { return &___PublishUrl_1; }
	inline void set_PublishUrl_1(String_t* value)
	{
		___PublishUrl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PublishUrl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MergeBackground_2() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F, ___MergeBackground_2)); }
	inline QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422  get_MergeBackground_2() const { return ___MergeBackground_2; }
	inline QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422 * get_address_of_MergeBackground_2() { return &___MergeBackground_2; }
	inline void set_MergeBackground_2(QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422  value)
	{
		___MergeBackground_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___MergeBackground_2))->___LayerUrl_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_MergeWatermark_3() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F, ___MergeWatermark_3)); }
	inline List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 * get_MergeWatermark_3() const { return ___MergeWatermark_3; }
	inline List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 ** get_address_of_MergeWatermark_3() { return &___MergeWatermark_3; }
	inline void set_MergeWatermark_3(List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 * value)
	{
		___MergeWatermark_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MergeWatermark_3), (void*)value);
	}

	inline static int32_t get_offset_of_Width_4() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F, ___Width_4)); }
	inline int32_t get_Width_4() const { return ___Width_4; }
	inline int32_t* get_address_of_Width_4() { return &___Width_4; }
	inline void set_Width_4(int32_t value)
	{
		___Width_4 = value;
	}

	inline static int32_t get_offset_of_Height_5() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F, ___Height_5)); }
	inline int32_t get_Height_5() const { return ___Height_5; }
	inline int32_t* get_address_of_Height_5() { return &___Height_5; }
	inline void set_Height_5(int32_t value)
	{
		___Height_5 = value;
	}

	inline static int32_t get_offset_of_Fps_6() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F, ___Fps_6)); }
	inline int32_t get_Fps_6() const { return ___Fps_6; }
	inline int32_t* get_address_of_Fps_6() { return &___Fps_6; }
	inline void set_Fps_6(int32_t value)
	{
		___Fps_6 = value;
	}

	inline static int32_t get_offset_of_Bitrate_7() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F, ___Bitrate_7)); }
	inline int32_t get_Bitrate_7() const { return ___Bitrate_7; }
	inline int32_t* get_address_of_Bitrate_7() { return &___Bitrate_7; }
	inline void set_Bitrate_7(int32_t value)
	{
		___Bitrate_7 = value;
	}

	inline static int32_t get_offset_of_MinBitrate_8() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F, ___MinBitrate_8)); }
	inline int32_t get_MinBitrate_8() const { return ___MinBitrate_8; }
	inline int32_t* get_address_of_MinBitrate_8() { return &___MinBitrate_8; }
	inline void set_MinBitrate_8(int32_t value)
	{
		___MinBitrate_8 = value;
	}

	inline static int32_t get_offset_of_MaxBitrate_9() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F, ___MaxBitrate_9)); }
	inline int32_t get_MaxBitrate_9() const { return ___MaxBitrate_9; }
	inline int32_t* get_address_of_MaxBitrate_9() { return &___MaxBitrate_9; }
	inline void set_MaxBitrate_9(int32_t value)
	{
		___MaxBitrate_9 = value;
	}

	inline static int32_t get_offset_of_IsHoldLastFrame_10() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F, ___IsHoldLastFrame_10)); }
	inline bool get_IsHoldLastFrame_10() const { return ___IsHoldLastFrame_10; }
	inline bool* get_address_of_IsHoldLastFrame_10() { return &___IsHoldLastFrame_10; }
	inline void set_IsHoldLastFrame_10(bool value)
	{
		___IsHoldLastFrame_10 = value;
	}

	inline static int32_t get_offset_of_StretchMode_11() { return static_cast<int32_t>(offsetof(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F, ___StretchMode_11)); }
	inline int32_t get_StretchMode_11() const { return ___StretchMode_11; }
	inline int32_t* get_address_of_StretchMode_11() { return &___StretchMode_11; }
	inline void set_StretchMode_11(int32_t value)
	{
		___StretchMode_11 = value;
	}
};

// Native definition for P/Invoke marshalling of qnrtc.QNTranscodingLiveStreamingConfig
struct QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F_marshaled_pinvoke
{
	char* ___StreamId_0;
	char* ___PublishUrl_1;
	QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422_marshaled_pinvoke ___MergeBackground_2;
	List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 * ___MergeWatermark_3;
	int32_t ___Width_4;
	int32_t ___Height_5;
	int32_t ___Fps_6;
	int32_t ___Bitrate_7;
	int32_t ___MinBitrate_8;
	int32_t ___MaxBitrate_9;
	int32_t ___IsHoldLastFrame_10;
	int32_t ___StretchMode_11;
};
// Native definition for COM marshalling of qnrtc.QNTranscodingLiveStreamingConfig
struct QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F_marshaled_com
{
	Il2CppChar* ___StreamId_0;
	Il2CppChar* ___PublishUrl_1;
	QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422_marshaled_com ___MergeBackground_2;
	List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 * ___MergeWatermark_3;
	int32_t ___Width_4;
	int32_t ___Height_5;
	int32_t ___Fps_6;
	int32_t ___Bitrate_7;
	int32_t ___MinBitrate_8;
	int32_t ___MaxBitrate_9;
	int32_t ___IsHoldLastFrame_10;
	int32_t ___StretchMode_11;
};

// System.Nullable`1<qnrtc.QNConnectionDisconnectedInfo>
struct Nullable_1_tB40BABD0644B5F97F6A9700D5EE18379A8781D25 
{
public:
	// T System.Nullable`1::value
	QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tB40BABD0644B5F97F6A9700D5EE18379A8781D25, ___value_0)); }
	inline QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493  get_value_0() const { return ___value_0; }
	inline QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___ErrorMessage_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tB40BABD0644B5F97F6A9700D5EE18379A8781D25, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// QNRTCUnityDemo.AudioDataReader/OnReaderAudioDataCallBack
struct OnReaderAudioDataCallBack_tE4A99284DABD08897B1E8DE788AA4A73F9C1F29A  : public MulticastDelegate_t
{
public:

public:
};


// QNRTCUnityDemo.DirectLiveView/OnDirectLiveStartButtonClickHandler
struct OnDirectLiveStartButtonClickHandler_t9D8854DEA103C0805927C277EEE353FD4632CBE0  : public MulticastDelegate_t
{
public:

public:
};


// QNRTCUnityDemo.DirectLiveView/OnDirectLiveStopButtonClickHandler
struct OnDirectLiveStopButtonClickHandler_tC0252230E09F0E8FC2C33432F6441D44620F2016  : public MulticastDelegate_t
{
public:

public:
};


// QNRTCUnityDemo.MediaRelayView/OnStartMediaRelayButtonClickHandler
struct OnStartMediaRelayButtonClickHandler_t558B0CC8A062B3B10A5BB2D794F3E73B1C0E7DF5  : public MulticastDelegate_t
{
public:

public:
};


// QNRTCUnityDemo.MediaRelayView/OnStopMediaRelayButtonClickHandler
struct OnStopMediaRelayButtonClickHandler_t5B01D96AD12B06710B032B2922DF3F90CD20A23E  : public MulticastDelegate_t
{
public:

public:
};


// QNRTCUnityDemo.MediaRelayView/OnUpdateMediaRelayButtonClickHandler
struct OnUpdateMediaRelayButtonClickHandler_tB4B8FB8EDF5E3A663FC8CD1F70CC2498BCB7C966  : public MulticastDelegate_t
{
public:

public:
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass51_1
struct U3CU3Ec__DisplayClass51_1_t6DF4D7A3D25AFAEF15D62BEDD49FA54F55E351A3  : public RuntimeObject
{
public:
	// qnrtc.QNConnectionDisconnectedInfo qnrtc.QNRTCClientImpl/<>c__DisplayClass51_1::info
	QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493  ___info_0;
	// qnrtc.QNRTCClientImpl/<>c__DisplayClass51_0 qnrtc.QNRTCClientImpl/<>c__DisplayClass51_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass51_0_t2AAD50119D08DD1B4C771B864F598FF746DCD24E * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass51_1_t6DF4D7A3D25AFAEF15D62BEDD49FA54F55E351A3, ___info_0)); }
	inline QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493  get_info_0() const { return ___info_0; }
	inline QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493  value)
	{
		___info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_0))->___ErrorMessage_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass51_1_t6DF4D7A3D25AFAEF15D62BEDD49FA54F55E351A3, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass51_0_t2AAD50119D08DD1B4C771B864F598FF746DCD24E * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass51_0_t2AAD50119D08DD1B4C771B864F598FF746DCD24E ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass51_0_t2AAD50119D08DD1B4C771B864F598FF746DCD24E * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass70_0
struct U3CU3Ec__DisplayClass70_0_t8F8426DD7AF0AB06D09638977B4AAC40E4B173D8  : public RuntimeObject
{
public:
	// System.String qnrtc.QNRTCClientImpl/<>c__DisplayClass70_0::currentStreamId
	String_t* ___currentStreamId_0;
	// qnrtc.QNLiveStreamingErrorInfo qnrtc.QNRTCClientImpl/<>c__DisplayClass70_0::info
	QNLiveStreamingErrorInfo_t226B16E3A0455EF6B7DBE3C375AE111E7F1BEA42  ___info_1;

public:
	inline static int32_t get_offset_of_currentStreamId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass70_0_t8F8426DD7AF0AB06D09638977B4AAC40E4B173D8, ___currentStreamId_0)); }
	inline String_t* get_currentStreamId_0() const { return ___currentStreamId_0; }
	inline String_t** get_address_of_currentStreamId_0() { return &___currentStreamId_0; }
	inline void set_currentStreamId_0(String_t* value)
	{
		___currentStreamId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentStreamId_0), (void*)value);
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass70_0_t8F8426DD7AF0AB06D09638977B4AAC40E4B173D8, ___info_1)); }
	inline QNLiveStreamingErrorInfo_t226B16E3A0455EF6B7DBE3C375AE111E7F1BEA42  get_info_1() const { return ___info_1; }
	inline QNLiveStreamingErrorInfo_t226B16E3A0455EF6B7DBE3C375AE111E7F1BEA42 * get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(QNLiveStreamingErrorInfo_t226B16E3A0455EF6B7DBE3C375AE111E7F1BEA42  value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___info_1))->___Message_2), (void*)NULL);
	}
};


// qnrtc.QNRTCClientImpl/<>c__DisplayClass72_0
struct U3CU3Ec__DisplayClass72_0_tAF91F0180EED25870CF1C79D3D788F2CD37AC089  : public RuntimeObject
{
public:
	// qnrtc.QNNetworkQuality qnrtc.QNRTCClientImpl/<>c__DisplayClass72_0::quality
	QNNetworkQuality_t2DA9536D971051323B4FE00DE465B50EB91B56C1  ___quality_0;

public:
	inline static int32_t get_offset_of_quality_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass72_0_tAF91F0180EED25870CF1C79D3D788F2CD37AC089, ___quality_0)); }
	inline QNNetworkQuality_t2DA9536D971051323B4FE00DE465B50EB91B56C1  get_quality_0() const { return ___quality_0; }
	inline QNNetworkQuality_t2DA9536D971051323B4FE00DE465B50EB91B56C1 * get_address_of_quality_0() { return &___quality_0; }
	inline void set_quality_0(QNNetworkQuality_t2DA9536D971051323B4FE00DE465B50EB91B56C1  value)
	{
		___quality_0 = value;
	}
};


// QNRTCUnityDemo.SendMessageView/OnSendMessageButtonClickHandler
struct OnSendMessageButtonClickHandler_t5AB3F1ED1EA3BFA96752ABA6798E8BB3509F2BDA  : public MulticastDelegate_t
{
public:

public:
};


// QNRTCUnityDemo.TranscodingLiveView/OnRemoveLayoutButtonClickHandler
struct OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613  : public MulticastDelegate_t
{
public:

public:
};


// QNRTCUnityDemo.TranscodingLiveView/OnStartTranscodingButtonClickHandler
struct OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F  : public MulticastDelegate_t
{
public:

public:
};


// QNRTCUnityDemo.TranscodingLiveView/OnStopTranscodingButtonClickHandler
struct OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77  : public MulticastDelegate_t
{
public:

public:
};


// QNRTCUnityDemo.TranscodingLiveView/OnUpdateLayoutButtonClickHandler
struct OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133  : public MulticastDelegate_t
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


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// QNRTCUnityDemo.TranscodingLiveView
struct TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// QNRTCUnityDemo.TranscodingLiveView/OnStartTranscodingButtonClickHandler QNRTCUnityDemo.TranscodingLiveView::OnStartTranscodingHandler
	OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * ___OnStartTranscodingHandler_4;
	// QNRTCUnityDemo.TranscodingLiveView/OnStopTranscodingButtonClickHandler QNRTCUnityDemo.TranscodingLiveView::OnStopTranscodingHandler
	OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * ___OnStopTranscodingHandler_5;
	// QNRTCUnityDemo.TranscodingLiveView/OnUpdateLayoutButtonClickHandler QNRTCUnityDemo.TranscodingLiveView::OnUpdateLayoutHandler
	OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * ___OnUpdateLayoutHandler_6;
	// QNRTCUnityDemo.TranscodingLiveView/OnRemoveLayoutButtonClickHandler QNRTCUnityDemo.TranscodingLiveView::OnRemoveLayoutHandler
	OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * ___OnRemoveLayoutHandler_7;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::StreamIdInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___StreamIdInputField_8;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::PublishUrlInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___PublishUrlInputField_9;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::TranscodingWidthInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___TranscodingWidthInputField_10;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::TranscodingHeightInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___TranscodingHeightInputField_11;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::FpsInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___FpsInputField_12;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::BitrateInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___BitrateInputField_13;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::MinBitrateInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___MinBitrateInputField_14;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::MaxBitrateInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___MaxBitrateInputField_15;
	// UnityEngine.UI.Toggle QNRTCUnityDemo.TranscodingLiveView::IsHoldLastFrameToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___IsHoldLastFrameToggle_16;
	// UnityEngine.UI.Dropdown QNRTCUnityDemo.TranscodingLiveView::StretchModeDropdown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___StretchModeDropdown_17;
	// UnityEngine.UI.Toggle QNRTCUnityDemo.TranscodingLiveView::BackgroundImageToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___BackgroundImageToggle_18;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::BackgroundUrlInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___BackgroundUrlInputField_19;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::BackgroundXInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___BackgroundXInputField_20;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::BackgroundYInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___BackgroundYInputField_21;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::BackgroundWidthInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___BackgroundWidthInputField_22;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::BackgroundHeightInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___BackgroundHeightInputField_23;
	// UnityEngine.UI.Toggle QNRTCUnityDemo.TranscodingLiveView::WatermarkImageToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___WatermarkImageToggle_24;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::WatermarkUrlInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___WatermarkUrlInputField_25;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::WatermarkXInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___WatermarkXInputField_26;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::WatermarkYInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___WatermarkYInputField_27;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::WatermarkWidthInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___WatermarkWidthInputField_28;
	// UnityEngine.UI.InputField QNRTCUnityDemo.TranscodingLiveView::WatermarkHeightInputField
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___WatermarkHeightInputField_29;
	// UnityEngine.UI.Button QNRTCUnityDemo.TranscodingLiveView::StartTranscodingButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___StartTranscodingButton_30;
	// UnityEngine.UI.Button QNRTCUnityDemo.TranscodingLiveView::StopTranscodingButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___StopTranscodingButton_31;
	// UnityEngine.UI.Dropdown QNRTCUnityDemo.TranscodingLiveView::SelectUserDropdown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___SelectUserDropdown_32;
	// UnityEngine.UI.Dropdown QNRTCUnityDemo.TranscodingLiveView::SelectTrackDropdown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___SelectTrackDropdown_33;
	// UnityEngine.UI.Button QNRTCUnityDemo.TranscodingLiveView::UpdateLayoutButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___UpdateLayoutButton_34;
	// UnityEngine.UI.Button QNRTCUnityDemo.TranscodingLiveView::RemoveLayoutButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___RemoveLayoutButton_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> QNRTCUnityDemo.TranscodingLiveView::userInfoList
	Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * ___userInfoList_36;

public:
	inline static int32_t get_offset_of_OnStartTranscodingHandler_4() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___OnStartTranscodingHandler_4)); }
	inline OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * get_OnStartTranscodingHandler_4() const { return ___OnStartTranscodingHandler_4; }
	inline OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F ** get_address_of_OnStartTranscodingHandler_4() { return &___OnStartTranscodingHandler_4; }
	inline void set_OnStartTranscodingHandler_4(OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * value)
	{
		___OnStartTranscodingHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartTranscodingHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnStopTranscodingHandler_5() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___OnStopTranscodingHandler_5)); }
	inline OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * get_OnStopTranscodingHandler_5() const { return ___OnStopTranscodingHandler_5; }
	inline OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 ** get_address_of_OnStopTranscodingHandler_5() { return &___OnStopTranscodingHandler_5; }
	inline void set_OnStopTranscodingHandler_5(OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * value)
	{
		___OnStopTranscodingHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStopTranscodingHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnUpdateLayoutHandler_6() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___OnUpdateLayoutHandler_6)); }
	inline OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * get_OnUpdateLayoutHandler_6() const { return ___OnUpdateLayoutHandler_6; }
	inline OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 ** get_address_of_OnUpdateLayoutHandler_6() { return &___OnUpdateLayoutHandler_6; }
	inline void set_OnUpdateLayoutHandler_6(OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * value)
	{
		___OnUpdateLayoutHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnUpdateLayoutHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnRemoveLayoutHandler_7() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___OnRemoveLayoutHandler_7)); }
	inline OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * get_OnRemoveLayoutHandler_7() const { return ___OnRemoveLayoutHandler_7; }
	inline OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 ** get_address_of_OnRemoveLayoutHandler_7() { return &___OnRemoveLayoutHandler_7; }
	inline void set_OnRemoveLayoutHandler_7(OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * value)
	{
		___OnRemoveLayoutHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRemoveLayoutHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_StreamIdInputField_8() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___StreamIdInputField_8)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_StreamIdInputField_8() const { return ___StreamIdInputField_8; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_StreamIdInputField_8() { return &___StreamIdInputField_8; }
	inline void set_StreamIdInputField_8(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___StreamIdInputField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StreamIdInputField_8), (void*)value);
	}

	inline static int32_t get_offset_of_PublishUrlInputField_9() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___PublishUrlInputField_9)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_PublishUrlInputField_9() const { return ___PublishUrlInputField_9; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_PublishUrlInputField_9() { return &___PublishUrlInputField_9; }
	inline void set_PublishUrlInputField_9(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___PublishUrlInputField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PublishUrlInputField_9), (void*)value);
	}

	inline static int32_t get_offset_of_TranscodingWidthInputField_10() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___TranscodingWidthInputField_10)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_TranscodingWidthInputField_10() const { return ___TranscodingWidthInputField_10; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_TranscodingWidthInputField_10() { return &___TranscodingWidthInputField_10; }
	inline void set_TranscodingWidthInputField_10(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___TranscodingWidthInputField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TranscodingWidthInputField_10), (void*)value);
	}

	inline static int32_t get_offset_of_TranscodingHeightInputField_11() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___TranscodingHeightInputField_11)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_TranscodingHeightInputField_11() const { return ___TranscodingHeightInputField_11; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_TranscodingHeightInputField_11() { return &___TranscodingHeightInputField_11; }
	inline void set_TranscodingHeightInputField_11(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___TranscodingHeightInputField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TranscodingHeightInputField_11), (void*)value);
	}

	inline static int32_t get_offset_of_FpsInputField_12() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___FpsInputField_12)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_FpsInputField_12() const { return ___FpsInputField_12; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_FpsInputField_12() { return &___FpsInputField_12; }
	inline void set_FpsInputField_12(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___FpsInputField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FpsInputField_12), (void*)value);
	}

	inline static int32_t get_offset_of_BitrateInputField_13() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___BitrateInputField_13)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_BitrateInputField_13() const { return ___BitrateInputField_13; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_BitrateInputField_13() { return &___BitrateInputField_13; }
	inline void set_BitrateInputField_13(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___BitrateInputField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BitrateInputField_13), (void*)value);
	}

	inline static int32_t get_offset_of_MinBitrateInputField_14() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___MinBitrateInputField_14)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_MinBitrateInputField_14() const { return ___MinBitrateInputField_14; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_MinBitrateInputField_14() { return &___MinBitrateInputField_14; }
	inline void set_MinBitrateInputField_14(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___MinBitrateInputField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinBitrateInputField_14), (void*)value);
	}

	inline static int32_t get_offset_of_MaxBitrateInputField_15() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___MaxBitrateInputField_15)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_MaxBitrateInputField_15() const { return ___MaxBitrateInputField_15; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_MaxBitrateInputField_15() { return &___MaxBitrateInputField_15; }
	inline void set_MaxBitrateInputField_15(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___MaxBitrateInputField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxBitrateInputField_15), (void*)value);
	}

	inline static int32_t get_offset_of_IsHoldLastFrameToggle_16() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___IsHoldLastFrameToggle_16)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_IsHoldLastFrameToggle_16() const { return ___IsHoldLastFrameToggle_16; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_IsHoldLastFrameToggle_16() { return &___IsHoldLastFrameToggle_16; }
	inline void set_IsHoldLastFrameToggle_16(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___IsHoldLastFrameToggle_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsHoldLastFrameToggle_16), (void*)value);
	}

	inline static int32_t get_offset_of_StretchModeDropdown_17() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___StretchModeDropdown_17)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_StretchModeDropdown_17() const { return ___StretchModeDropdown_17; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_StretchModeDropdown_17() { return &___StretchModeDropdown_17; }
	inline void set_StretchModeDropdown_17(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___StretchModeDropdown_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StretchModeDropdown_17), (void*)value);
	}

	inline static int32_t get_offset_of_BackgroundImageToggle_18() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___BackgroundImageToggle_18)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_BackgroundImageToggle_18() const { return ___BackgroundImageToggle_18; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_BackgroundImageToggle_18() { return &___BackgroundImageToggle_18; }
	inline void set_BackgroundImageToggle_18(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___BackgroundImageToggle_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundImageToggle_18), (void*)value);
	}

	inline static int32_t get_offset_of_BackgroundUrlInputField_19() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___BackgroundUrlInputField_19)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_BackgroundUrlInputField_19() const { return ___BackgroundUrlInputField_19; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_BackgroundUrlInputField_19() { return &___BackgroundUrlInputField_19; }
	inline void set_BackgroundUrlInputField_19(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___BackgroundUrlInputField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundUrlInputField_19), (void*)value);
	}

	inline static int32_t get_offset_of_BackgroundXInputField_20() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___BackgroundXInputField_20)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_BackgroundXInputField_20() const { return ___BackgroundXInputField_20; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_BackgroundXInputField_20() { return &___BackgroundXInputField_20; }
	inline void set_BackgroundXInputField_20(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___BackgroundXInputField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundXInputField_20), (void*)value);
	}

	inline static int32_t get_offset_of_BackgroundYInputField_21() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___BackgroundYInputField_21)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_BackgroundYInputField_21() const { return ___BackgroundYInputField_21; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_BackgroundYInputField_21() { return &___BackgroundYInputField_21; }
	inline void set_BackgroundYInputField_21(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___BackgroundYInputField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundYInputField_21), (void*)value);
	}

	inline static int32_t get_offset_of_BackgroundWidthInputField_22() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___BackgroundWidthInputField_22)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_BackgroundWidthInputField_22() const { return ___BackgroundWidthInputField_22; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_BackgroundWidthInputField_22() { return &___BackgroundWidthInputField_22; }
	inline void set_BackgroundWidthInputField_22(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___BackgroundWidthInputField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundWidthInputField_22), (void*)value);
	}

	inline static int32_t get_offset_of_BackgroundHeightInputField_23() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___BackgroundHeightInputField_23)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_BackgroundHeightInputField_23() const { return ___BackgroundHeightInputField_23; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_BackgroundHeightInputField_23() { return &___BackgroundHeightInputField_23; }
	inline void set_BackgroundHeightInputField_23(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___BackgroundHeightInputField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundHeightInputField_23), (void*)value);
	}

	inline static int32_t get_offset_of_WatermarkImageToggle_24() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___WatermarkImageToggle_24)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_WatermarkImageToggle_24() const { return ___WatermarkImageToggle_24; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_WatermarkImageToggle_24() { return &___WatermarkImageToggle_24; }
	inline void set_WatermarkImageToggle_24(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___WatermarkImageToggle_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WatermarkImageToggle_24), (void*)value);
	}

	inline static int32_t get_offset_of_WatermarkUrlInputField_25() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___WatermarkUrlInputField_25)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_WatermarkUrlInputField_25() const { return ___WatermarkUrlInputField_25; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_WatermarkUrlInputField_25() { return &___WatermarkUrlInputField_25; }
	inline void set_WatermarkUrlInputField_25(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___WatermarkUrlInputField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WatermarkUrlInputField_25), (void*)value);
	}

	inline static int32_t get_offset_of_WatermarkXInputField_26() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___WatermarkXInputField_26)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_WatermarkXInputField_26() const { return ___WatermarkXInputField_26; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_WatermarkXInputField_26() { return &___WatermarkXInputField_26; }
	inline void set_WatermarkXInputField_26(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___WatermarkXInputField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WatermarkXInputField_26), (void*)value);
	}

	inline static int32_t get_offset_of_WatermarkYInputField_27() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___WatermarkYInputField_27)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_WatermarkYInputField_27() const { return ___WatermarkYInputField_27; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_WatermarkYInputField_27() { return &___WatermarkYInputField_27; }
	inline void set_WatermarkYInputField_27(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___WatermarkYInputField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WatermarkYInputField_27), (void*)value);
	}

	inline static int32_t get_offset_of_WatermarkWidthInputField_28() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___WatermarkWidthInputField_28)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_WatermarkWidthInputField_28() const { return ___WatermarkWidthInputField_28; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_WatermarkWidthInputField_28() { return &___WatermarkWidthInputField_28; }
	inline void set_WatermarkWidthInputField_28(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___WatermarkWidthInputField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WatermarkWidthInputField_28), (void*)value);
	}

	inline static int32_t get_offset_of_WatermarkHeightInputField_29() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___WatermarkHeightInputField_29)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_WatermarkHeightInputField_29() const { return ___WatermarkHeightInputField_29; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_WatermarkHeightInputField_29() { return &___WatermarkHeightInputField_29; }
	inline void set_WatermarkHeightInputField_29(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___WatermarkHeightInputField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WatermarkHeightInputField_29), (void*)value);
	}

	inline static int32_t get_offset_of_StartTranscodingButton_30() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___StartTranscodingButton_30)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_StartTranscodingButton_30() const { return ___StartTranscodingButton_30; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_StartTranscodingButton_30() { return &___StartTranscodingButton_30; }
	inline void set_StartTranscodingButton_30(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___StartTranscodingButton_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartTranscodingButton_30), (void*)value);
	}

	inline static int32_t get_offset_of_StopTranscodingButton_31() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___StopTranscodingButton_31)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_StopTranscodingButton_31() const { return ___StopTranscodingButton_31; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_StopTranscodingButton_31() { return &___StopTranscodingButton_31; }
	inline void set_StopTranscodingButton_31(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___StopTranscodingButton_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StopTranscodingButton_31), (void*)value);
	}

	inline static int32_t get_offset_of_SelectUserDropdown_32() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___SelectUserDropdown_32)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_SelectUserDropdown_32() const { return ___SelectUserDropdown_32; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_SelectUserDropdown_32() { return &___SelectUserDropdown_32; }
	inline void set_SelectUserDropdown_32(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___SelectUserDropdown_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectUserDropdown_32), (void*)value);
	}

	inline static int32_t get_offset_of_SelectTrackDropdown_33() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___SelectTrackDropdown_33)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_SelectTrackDropdown_33() const { return ___SelectTrackDropdown_33; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_SelectTrackDropdown_33() { return &___SelectTrackDropdown_33; }
	inline void set_SelectTrackDropdown_33(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___SelectTrackDropdown_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectTrackDropdown_33), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateLayoutButton_34() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___UpdateLayoutButton_34)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_UpdateLayoutButton_34() const { return ___UpdateLayoutButton_34; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_UpdateLayoutButton_34() { return &___UpdateLayoutButton_34; }
	inline void set_UpdateLayoutButton_34(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___UpdateLayoutButton_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateLayoutButton_34), (void*)value);
	}

	inline static int32_t get_offset_of_RemoveLayoutButton_35() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___RemoveLayoutButton_35)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_RemoveLayoutButton_35() const { return ___RemoveLayoutButton_35; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_RemoveLayoutButton_35() { return &___RemoveLayoutButton_35; }
	inline void set_RemoveLayoutButton_35(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___RemoveLayoutButton_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoveLayoutButton_35), (void*)value);
	}

	inline static int32_t get_offset_of_userInfoList_36() { return static_cast<int32_t>(offsetof(TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38, ___userInfoList_36)); }
	inline Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * get_userInfoList_36() const { return ___userInfoList_36; }
	inline Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 ** get_address_of_userInfoList_36() { return &___userInfoList_36; }
	inline void set_userInfoList_36(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * value)
	{
		___userInfoList_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userInfoList_36), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// QNRTCUnityDemo.UserTableView
struct UserTableView_tEAFEF96CEAE936FE20CAD291181817909AA9FF03  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RectTransform QNRTCUnityDemo.UserTableView::tableView
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___tableView_4;
	// UnityEngine.RectTransform QNRTCUnityDemo.UserTableView::contentView
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___contentView_5;
	// UnityEngine.GameObject QNRTCUnityDemo.UserTableView::tableViewCell
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tableViewCell_6;
	// System.Collections.Generic.List`1<QNRTCUnityDemo.UserTableViewCell> QNRTCUnityDemo.UserTableView::userCells
	List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * ___userCells_7;

public:
	inline static int32_t get_offset_of_tableView_4() { return static_cast<int32_t>(offsetof(UserTableView_tEAFEF96CEAE936FE20CAD291181817909AA9FF03, ___tableView_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_tableView_4() const { return ___tableView_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_tableView_4() { return &___tableView_4; }
	inline void set_tableView_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___tableView_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tableView_4), (void*)value);
	}

	inline static int32_t get_offset_of_contentView_5() { return static_cast<int32_t>(offsetof(UserTableView_tEAFEF96CEAE936FE20CAD291181817909AA9FF03, ___contentView_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_contentView_5() const { return ___contentView_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_contentView_5() { return &___contentView_5; }
	inline void set_contentView_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___contentView_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentView_5), (void*)value);
	}

	inline static int32_t get_offset_of_tableViewCell_6() { return static_cast<int32_t>(offsetof(UserTableView_tEAFEF96CEAE936FE20CAD291181817909AA9FF03, ___tableViewCell_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tableViewCell_6() const { return ___tableViewCell_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tableViewCell_6() { return &___tableViewCell_6; }
	inline void set_tableViewCell_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tableViewCell_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tableViewCell_6), (void*)value);
	}

	inline static int32_t get_offset_of_userCells_7() { return static_cast<int32_t>(offsetof(UserTableView_tEAFEF96CEAE936FE20CAD291181817909AA9FF03, ___userCells_7)); }
	inline List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * get_userCells_7() const { return ___userCells_7; }
	inline List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B ** get_address_of_userCells_7() { return &___userCells_7; }
	inline void set_userCells_7(List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * value)
	{
		___userCells_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userCells_7), (void*)value);
	}
};


// QNRTCUnityDemo.UserTableViewCell
struct UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text QNRTCUnityDemo.UserTableViewCell::TrackKindText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TrackKindText_4;
	// UnityEngine.UI.Text QNRTCUnityDemo.UserTableViewCell::UserIDText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___UserIDText_5;
	// UnityEngine.UI.Text QNRTCUnityDemo.UserTableViewCell::TrackIDText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TrackIDText_6;
	// UnityEngine.UI.Text QNRTCUnityDemo.UserTableViewCell::TagText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TagText_7;
	// UnityEngine.UI.Text QNRTCUnityDemo.UserTableViewCell::VolumeLevelText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___VolumeLevelText_8;
	// UnityEngine.UI.Text QNRTCUnityDemo.UserTableViewCell::OperationButtonText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___OperationButtonText_9;
	// UnityEngine.UI.Slider QNRTCUnityDemo.UserTableViewCell::VolumeSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___VolumeSlider_10;
	// qnrtc.QNTrack QNRTCUnityDemo.UserTableViewCell::track
	RuntimeObject* ___track_11;
	// System.Boolean QNRTCUnityDemo.UserTableViewCell::isLocal
	bool ___isLocal_12;
	// System.Single QNRTCUnityDemo.UserTableViewCell::timerInterval
	float ___timerInterval_13;

public:
	inline static int32_t get_offset_of_TrackKindText_4() { return static_cast<int32_t>(offsetof(UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473, ___TrackKindText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TrackKindText_4() const { return ___TrackKindText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TrackKindText_4() { return &___TrackKindText_4; }
	inline void set_TrackKindText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TrackKindText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackKindText_4), (void*)value);
	}

	inline static int32_t get_offset_of_UserIDText_5() { return static_cast<int32_t>(offsetof(UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473, ___UserIDText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_UserIDText_5() const { return ___UserIDText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_UserIDText_5() { return &___UserIDText_5; }
	inline void set_UserIDText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___UserIDText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserIDText_5), (void*)value);
	}

	inline static int32_t get_offset_of_TrackIDText_6() { return static_cast<int32_t>(offsetof(UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473, ___TrackIDText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TrackIDText_6() const { return ___TrackIDText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TrackIDText_6() { return &___TrackIDText_6; }
	inline void set_TrackIDText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TrackIDText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackIDText_6), (void*)value);
	}

	inline static int32_t get_offset_of_TagText_7() { return static_cast<int32_t>(offsetof(UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473, ___TagText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TagText_7() const { return ___TagText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TagText_7() { return &___TagText_7; }
	inline void set_TagText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TagText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TagText_7), (void*)value);
	}

	inline static int32_t get_offset_of_VolumeLevelText_8() { return static_cast<int32_t>(offsetof(UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473, ___VolumeLevelText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_VolumeLevelText_8() const { return ___VolumeLevelText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_VolumeLevelText_8() { return &___VolumeLevelText_8; }
	inline void set_VolumeLevelText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___VolumeLevelText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VolumeLevelText_8), (void*)value);
	}

	inline static int32_t get_offset_of_OperationButtonText_9() { return static_cast<int32_t>(offsetof(UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473, ___OperationButtonText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_OperationButtonText_9() const { return ___OperationButtonText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_OperationButtonText_9() { return &___OperationButtonText_9; }
	inline void set_OperationButtonText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___OperationButtonText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OperationButtonText_9), (void*)value);
	}

	inline static int32_t get_offset_of_VolumeSlider_10() { return static_cast<int32_t>(offsetof(UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473, ___VolumeSlider_10)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_VolumeSlider_10() const { return ___VolumeSlider_10; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_VolumeSlider_10() { return &___VolumeSlider_10; }
	inline void set_VolumeSlider_10(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___VolumeSlider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VolumeSlider_10), (void*)value);
	}

	inline static int32_t get_offset_of_track_11() { return static_cast<int32_t>(offsetof(UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473, ___track_11)); }
	inline RuntimeObject* get_track_11() const { return ___track_11; }
	inline RuntimeObject** get_address_of_track_11() { return &___track_11; }
	inline void set_track_11(RuntimeObject* value)
	{
		___track_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___track_11), (void*)value);
	}

	inline static int32_t get_offset_of_isLocal_12() { return static_cast<int32_t>(offsetof(UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473, ___isLocal_12)); }
	inline bool get_isLocal_12() const { return ___isLocal_12; }
	inline bool* get_address_of_isLocal_12() { return &___isLocal_12; }
	inline void set_isLocal_12(bool value)
	{
		___isLocal_12 = value;
	}

	inline static int32_t get_offset_of_timerInterval_13() { return static_cast<int32_t>(offsetof(UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473, ___timerInterval_13)); }
	inline float get_timerInterval_13() const { return ___timerInterval_13; }
	inline float* get_address_of_timerInterval_13() { return &___timerInterval_13; }
	inline void set_timerInterval_13(float value)
	{
		___timerInterval_13 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Template_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionImage_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemImage_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Options_26)); }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_OnValueChanged_27)); }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Dropdown_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Blocker_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Items_31)); }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___s_NoOptionData_34;

public:
	inline static int32_t get_offset_of_s_NoOptionData_34() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields, ___s_NoOptionData_34)); }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * get_s_NoOptionData_34() const { return ___s_NoOptionData_34; }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 ** get_address_of_s_NoOptionData_34() { return &___s_NoOptionData_34; }
	inline void set_s_NoOptionData_34(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * value)
	{
		___s_NoOptionData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_34), (void*)value);
	}
};


// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * ___m_OnEndEdit_32;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * ___m_OnValueChanged_33;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * ___m_OnValidateInput_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_CaretColor_35;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectionColor_37;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_38;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_40;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_41;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_44;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___caretRectTrans_45;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_CursorVerts_46;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_InputTextCache_47;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CachedInputRenderer_48;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_49;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_50;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_51;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_52;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_53;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_54;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_57;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_BlinkCoroutine_58;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_59;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_61;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DragCoroutine_62;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_63;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_64;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_65;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * ___m_WaitForSecondsRealtime_66;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_67;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * ___m_ProcessingEvent_69;

public:
	inline static int32_t get_offset_of_m_Keyboard_20() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Keyboard_20)); }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * get_m_Keyboard_20() const { return ___m_Keyboard_20; }
	inline TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E ** get_address_of_m_Keyboard_20() { return &___m_Keyboard_20; }
	inline void set_m_Keyboard_20(TouchScreenKeyboard_t7964B2E9E52C4E095B14F01C32774B98CA11711E * value)
	{
		___m_Keyboard_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keyboard_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextComponent_22() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TextComponent_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_TextComponent_22() const { return ___m_TextComponent_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_TextComponent_22() { return &___m_TextComponent_22; }
	inline void set_m_TextComponent_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_TextComponent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextComponent_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_Placeholder_23() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Placeholder_23)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Placeholder_23() const { return ___m_Placeholder_23; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Placeholder_23() { return &___m_Placeholder_23; }
	inline void set_m_Placeholder_23(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Placeholder_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Placeholder_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentType_24() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ContentType_24)); }
	inline int32_t get_m_ContentType_24() const { return ___m_ContentType_24; }
	inline int32_t* get_address_of_m_ContentType_24() { return &___m_ContentType_24; }
	inline void set_m_ContentType_24(int32_t value)
	{
		___m_ContentType_24 = value;
	}

	inline static int32_t get_offset_of_m_InputType_25() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputType_25)); }
	inline int32_t get_m_InputType_25() const { return ___m_InputType_25; }
	inline int32_t* get_address_of_m_InputType_25() { return &___m_InputType_25; }
	inline void set_m_InputType_25(int32_t value)
	{
		___m_InputType_25 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_26() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AsteriskChar_26)); }
	inline Il2CppChar get_m_AsteriskChar_26() const { return ___m_AsteriskChar_26; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_26() { return &___m_AsteriskChar_26; }
	inline void set_m_AsteriskChar_26(Il2CppChar value)
	{
		___m_AsteriskChar_26 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_27() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_KeyboardType_27)); }
	inline int32_t get_m_KeyboardType_27() const { return ___m_KeyboardType_27; }
	inline int32_t* get_address_of_m_KeyboardType_27() { return &___m_KeyboardType_27; }
	inline void set_m_KeyboardType_27(int32_t value)
	{
		___m_KeyboardType_27 = value;
	}

	inline static int32_t get_offset_of_m_LineType_28() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_LineType_28)); }
	inline int32_t get_m_LineType_28() const { return ___m_LineType_28; }
	inline int32_t* get_address_of_m_LineType_28() { return &___m_LineType_28; }
	inline void set_m_LineType_28(int32_t value)
	{
		___m_LineType_28 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_29() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HideMobileInput_29)); }
	inline bool get_m_HideMobileInput_29() const { return ___m_HideMobileInput_29; }
	inline bool* get_address_of_m_HideMobileInput_29() { return &___m_HideMobileInput_29; }
	inline void set_m_HideMobileInput_29(bool value)
	{
		___m_HideMobileInput_29 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_30() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterValidation_30)); }
	inline int32_t get_m_CharacterValidation_30() const { return ___m_CharacterValidation_30; }
	inline int32_t* get_address_of_m_CharacterValidation_30() { return &___m_CharacterValidation_30; }
	inline void set_m_CharacterValidation_30(int32_t value)
	{
		___m_CharacterValidation_30 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_31() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CharacterLimit_31)); }
	inline int32_t get_m_CharacterLimit_31() const { return ___m_CharacterLimit_31; }
	inline int32_t* get_address_of_m_CharacterLimit_31() { return &___m_CharacterLimit_31; }
	inline void set_m_CharacterLimit_31(int32_t value)
	{
		___m_CharacterLimit_31 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_32() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnEndEdit_32)); }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * get_m_OnEndEdit_32() const { return ___m_OnEndEdit_32; }
	inline SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 ** get_address_of_m_OnEndEdit_32() { return &___m_OnEndEdit_32; }
	inline void set_m_OnEndEdit_32(SubmitEvent_t3FD30F627DF2ADEC87C0BE69EE632AAB99F3B8A9 * value)
	{
		___m_OnEndEdit_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEndEdit_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_33() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValueChanged_33)); }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * get_m_OnValueChanged_33() const { return ___m_OnValueChanged_33; }
	inline OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 ** get_address_of_m_OnValueChanged_33() { return &___m_OnValueChanged_33; }
	inline void set_m_OnValueChanged_33(OnChangeEvent_t2E59014A56EA94168140F0585834954B40D716F7 * value)
	{
		___m_OnValueChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_34() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OnValidateInput_34)); }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * get_m_OnValidateInput_34() const { return ___m_OnValidateInput_34; }
	inline OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F ** get_address_of_m_OnValidateInput_34() { return &___m_OnValidateInput_34; }
	inline void set_m_OnValidateInput_34(OnValidateInput_t721D2C2A7710D113E4909B36D9893CC6B1C69B9F * value)
	{
		___m_OnValidateInput_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValidateInput_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretColor_35() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretColor_35)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_CaretColor_35() const { return ___m_CaretColor_35; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_CaretColor_35() { return &___m_CaretColor_35; }
	inline void set_m_CaretColor_35(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_CaretColor_35 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_36() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CustomCaretColor_36)); }
	inline bool get_m_CustomCaretColor_36() const { return ___m_CustomCaretColor_36; }
	inline bool* get_address_of_m_CustomCaretColor_36() { return &___m_CustomCaretColor_36; }
	inline void set_m_CustomCaretColor_36(bool value)
	{
		___m_CustomCaretColor_36 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_37() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_SelectionColor_37)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectionColor_37() const { return ___m_SelectionColor_37; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectionColor_37() { return &___m_SelectionColor_37; }
	inline void set_m_SelectionColor_37(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectionColor_37 = value;
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_39() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretBlinkRate_39)); }
	inline float get_m_CaretBlinkRate_39() const { return ___m_CaretBlinkRate_39; }
	inline float* get_address_of_m_CaretBlinkRate_39() { return &___m_CaretBlinkRate_39; }
	inline void set_m_CaretBlinkRate_39(float value)
	{
		___m_CaretBlinkRate_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_40() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretWidth_40)); }
	inline int32_t get_m_CaretWidth_40() const { return ___m_CaretWidth_40; }
	inline int32_t* get_address_of_m_CaretWidth_40() { return &___m_CaretWidth_40; }
	inline void set_m_CaretWidth_40(int32_t value)
	{
		___m_CaretWidth_40 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_41() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ReadOnly_41)); }
	inline bool get_m_ReadOnly_41() const { return ___m_ReadOnly_41; }
	inline bool* get_address_of_m_ReadOnly_41() { return &___m_ReadOnly_41; }
	inline void set_m_ReadOnly_41(bool value)
	{
		___m_ReadOnly_41 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateOnSelect_42() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateOnSelect_42)); }
	inline bool get_m_ShouldActivateOnSelect_42() const { return ___m_ShouldActivateOnSelect_42; }
	inline bool* get_address_of_m_ShouldActivateOnSelect_42() { return &___m_ShouldActivateOnSelect_42; }
	inline void set_m_ShouldActivateOnSelect_42(bool value)
	{
		___m_ShouldActivateOnSelect_42 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_43() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretPosition_43)); }
	inline int32_t get_m_CaretPosition_43() const { return ___m_CaretPosition_43; }
	inline int32_t* get_address_of_m_CaretPosition_43() { return &___m_CaretPosition_43; }
	inline void set_m_CaretPosition_43(int32_t value)
	{
		___m_CaretPosition_43 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_44() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretSelectPosition_44)); }
	inline int32_t get_m_CaretSelectPosition_44() const { return ___m_CaretSelectPosition_44; }
	inline int32_t* get_address_of_m_CaretSelectPosition_44() { return &___m_CaretSelectPosition_44; }
	inline void set_m_CaretSelectPosition_44(int32_t value)
	{
		___m_CaretSelectPosition_44 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_45() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___caretRectTrans_45)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_caretRectTrans_45() const { return ___caretRectTrans_45; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_caretRectTrans_45() { return &___caretRectTrans_45; }
	inline void set_caretRectTrans_45(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___caretRectTrans_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caretRectTrans_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_46() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CursorVerts_46)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_CursorVerts_46() const { return ___m_CursorVerts_46; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_CursorVerts_46() { return &___m_CursorVerts_46; }
	inline void set_m_CursorVerts_46(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_CursorVerts_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CursorVerts_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_47() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_InputTextCache_47)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_InputTextCache_47() const { return ___m_InputTextCache_47; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_InputTextCache_47() { return &___m_InputTextCache_47; }
	inline void set_m_InputTextCache_47(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_InputTextCache_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InputTextCache_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_48() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CachedInputRenderer_48)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CachedInputRenderer_48() const { return ___m_CachedInputRenderer_48; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CachedInputRenderer_48() { return &___m_CachedInputRenderer_48; }
	inline void set_m_CachedInputRenderer_48(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CachedInputRenderer_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedInputRenderer_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_49() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_PreventFontCallback_49)); }
	inline bool get_m_PreventFontCallback_49() const { return ___m_PreventFontCallback_49; }
	inline bool* get_address_of_m_PreventFontCallback_49() { return &___m_PreventFontCallback_49; }
	inline void set_m_PreventFontCallback_49(bool value)
	{
		___m_PreventFontCallback_49 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_50() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_Mesh_50)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_50() const { return ___m_Mesh_50; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_50() { return &___m_Mesh_50; }
	inline void set_m_Mesh_50(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllowInput_51() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_AllowInput_51)); }
	inline bool get_m_AllowInput_51() const { return ___m_AllowInput_51; }
	inline bool* get_address_of_m_AllowInput_51() { return &___m_AllowInput_51; }
	inline void set_m_AllowInput_51(bool value)
	{
		___m_AllowInput_51 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_52() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ShouldActivateNextUpdate_52)); }
	inline bool get_m_ShouldActivateNextUpdate_52() const { return ___m_ShouldActivateNextUpdate_52; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_52() { return &___m_ShouldActivateNextUpdate_52; }
	inline void set_m_ShouldActivateNextUpdate_52(bool value)
	{
		___m_ShouldActivateNextUpdate_52 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_53() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_UpdateDrag_53)); }
	inline bool get_m_UpdateDrag_53() const { return ___m_UpdateDrag_53; }
	inline bool* get_address_of_m_UpdateDrag_53() { return &___m_UpdateDrag_53; }
	inline void set_m_UpdateDrag_53(bool value)
	{
		___m_UpdateDrag_53 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_54() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragPositionOutOfBounds_54)); }
	inline bool get_m_DragPositionOutOfBounds_54() const { return ___m_DragPositionOutOfBounds_54; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_54() { return &___m_DragPositionOutOfBounds_54; }
	inline void set_m_DragPositionOutOfBounds_54(bool value)
	{
		___m_DragPositionOutOfBounds_54 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_57() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_CaretVisible_57)); }
	inline bool get_m_CaretVisible_57() const { return ___m_CaretVisible_57; }
	inline bool* get_address_of_m_CaretVisible_57() { return &___m_CaretVisible_57; }
	inline void set_m_CaretVisible_57(bool value)
	{
		___m_CaretVisible_57 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_58() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkCoroutine_58)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_BlinkCoroutine_58() const { return ___m_BlinkCoroutine_58; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_BlinkCoroutine_58() { return &___m_BlinkCoroutine_58; }
	inline void set_m_BlinkCoroutine_58(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_BlinkCoroutine_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BlinkCoroutine_58), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_59() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_BlinkStartTime_59)); }
	inline float get_m_BlinkStartTime_59() const { return ___m_BlinkStartTime_59; }
	inline float* get_address_of_m_BlinkStartTime_59() { return &___m_BlinkStartTime_59; }
	inline void set_m_BlinkStartTime_59(float value)
	{
		___m_BlinkStartTime_59 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_60() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawStart_60)); }
	inline int32_t get_m_DrawStart_60() const { return ___m_DrawStart_60; }
	inline int32_t* get_address_of_m_DrawStart_60() { return &___m_DrawStart_60; }
	inline void set_m_DrawStart_60(int32_t value)
	{
		___m_DrawStart_60 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_61() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DrawEnd_61)); }
	inline int32_t get_m_DrawEnd_61() const { return ___m_DrawEnd_61; }
	inline int32_t* get_address_of_m_DrawEnd_61() { return &___m_DrawEnd_61; }
	inline void set_m_DrawEnd_61(int32_t value)
	{
		___m_DrawEnd_61 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_62() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_DragCoroutine_62)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DragCoroutine_62() const { return ___m_DragCoroutine_62; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DragCoroutine_62() { return &___m_DragCoroutine_62; }
	inline void set_m_DragCoroutine_62(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DragCoroutine_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DragCoroutine_62), (void*)value);
	}

	inline static int32_t get_offset_of_m_OriginalText_63() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_OriginalText_63)); }
	inline String_t* get_m_OriginalText_63() const { return ___m_OriginalText_63; }
	inline String_t** get_address_of_m_OriginalText_63() { return &___m_OriginalText_63; }
	inline void set_m_OriginalText_63(String_t* value)
	{
		___m_OriginalText_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OriginalText_63), (void*)value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_64() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WasCanceled_64)); }
	inline bool get_m_WasCanceled_64() const { return ___m_WasCanceled_64; }
	inline bool* get_address_of_m_WasCanceled_64() { return &___m_WasCanceled_64; }
	inline void set_m_WasCanceled_64(bool value)
	{
		___m_WasCanceled_64 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_65() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_HasDoneFocusTransition_65)); }
	inline bool get_m_HasDoneFocusTransition_65() const { return ___m_HasDoneFocusTransition_65; }
	inline bool* get_address_of_m_HasDoneFocusTransition_65() { return &___m_HasDoneFocusTransition_65; }
	inline void set_m_HasDoneFocusTransition_65(bool value)
	{
		___m_HasDoneFocusTransition_65 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_66() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_WaitForSecondsRealtime_66)); }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * get_m_WaitForSecondsRealtime_66() const { return ___m_WaitForSecondsRealtime_66; }
	inline WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 ** get_address_of_m_WaitForSecondsRealtime_66() { return &___m_WaitForSecondsRealtime_66; }
	inline void set_m_WaitForSecondsRealtime_66(WaitForSecondsRealtime_t04F2884A9814C3E4E415E788AFE56B5928577C40 * value)
	{
		___m_WaitForSecondsRealtime_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitForSecondsRealtime_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_TouchKeyboardAllowsInPlaceEditing_67)); }
	inline bool get_m_TouchKeyboardAllowsInPlaceEditing_67() const { return ___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline bool* get_address_of_m_TouchKeyboardAllowsInPlaceEditing_67() { return &___m_TouchKeyboardAllowsInPlaceEditing_67; }
	inline void set_m_TouchKeyboardAllowsInPlaceEditing_67(bool value)
	{
		___m_TouchKeyboardAllowsInPlaceEditing_67 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_69() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0, ___m_ProcessingEvent_69)); }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * get_m_ProcessingEvent_69() const { return ___m_ProcessingEvent_69; }
	inline Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E ** get_address_of_m_ProcessingEvent_69() { return &___m_ProcessingEvent_69; }
	inline void set_m_ProcessingEvent_69(Event_tED49F8EC5A2514F6E877E301B1AB7ABE4647253E * value)
	{
		___m_ProcessingEvent_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProcessingEvent_69), (void*)value);
	}
};

struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___kSeparators_21;

public:
	inline static int32_t get_offset_of_kSeparators_21() { return static_cast<int32_t>(offsetof(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0_StaticFields, ___kSeparators_21)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_kSeparators_21() const { return ___kSeparators_21; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_kSeparators_21() { return &___kSeparators_21; }
	inline void set_kSeparators_21(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___kSeparators_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kSeparators_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingImage>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6FD5C1CEC04F4B7F562C230E4316CB096518538C_gshared (List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingImage>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m3C6CBA554C764A00A29A7E058DFEEF4AB2CC2D30_gshared (List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 * __this, QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingTrack>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD7BB035F6F834F8B9E2C45E327315ABA888364A8_gshared (List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingTrack>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m924A4B2071DE3E3B514C00F3EE22847998EF6FFA_gshared (List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * __this, QNTranscodingLiveStreamingTrack_t94540D56E31AC536AEFD15679C8E5E74121E25BE  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<qnrtc.QNRemoteUser>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m1130BA06F0639CDBFD654EEF92750660961B0B23_gshared_inline (List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<qnrtc.QNRemoteUser>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0  List_1_GetEnumerator_m1AAC23DA0423523B66518FFCF418D97F6D9C66FA_gshared (List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<qnrtc.QNRemoteUser>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10  Enumerator_get_Current_m8CE37972C881E04537AC2B2A1F032287BBB513BC_gshared_inline (Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<qnrtc.QNRemoteUser>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m58E6B27644EB1B3E426FEA2A6467475FD0062EA3_gshared (Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<qnrtc.QNRemoteUser>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m509AD172D60A88DCD619ACAB5B30CDFF87D8251C_gshared (Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Nullable`1<qnrtc.QNConnectionDisconnectedInfo>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mE97E7C747525382E79523EB25EE88B02A64C7AE7_gshared (Nullable_1_tB40BABD0644B5F97F6A9700D5EE18379A8781D25 * __this, QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493  ___value0, const RuntimeMethod* method);

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507 (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_mE4418D205D53F8A3AD23B957D1A8CD71489CB3B9 (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::.ctor()
inline void List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0 (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Item(System.Int32)
inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * (*) (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String UnityEngine.UI.Dropdown/OptionData::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232 (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::GetEnumerator()
inline Enumerator_t165535373A2C041075C388ED21DF73971A40816A  Dictionary_2_GetEnumerator_m3F404F41E893885498C2323ED9494138BC74C93F (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t165535373A2C041075C388ED21DF73971A40816A  (*) (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::get_Current()
inline KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  Enumerator_get_Current_m0DF8252E6DEED7F95DA26E68E0AC1D77F01F7C76_inline (Enumerator_t165535373A2C041075C388ED21DF73971A40816A * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  (*) (Enumerator_t165535373A2C041075C388ED21DF73971A40816A *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m86200A8B43D292421BC3B199566D853D3CCA5469_inline (KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Value()
inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * KeyValuePair_2_get_Value_mEC73C6A3E984121B1E7E04B873425C7DAD592B8C_inline (KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 * __this, const RuntimeMethod* method)
{
	return ((  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * (*) (KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m5AF14BD8BBF6118AC51A7A9A38AE3AB2DE3C2675 (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Add(!0)
inline void List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * __this, OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *, OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::MoveNext()
inline bool Enumerator_MoveNext_m190544484A48339ACEDE62C253203E1FC290E07E (Enumerator_t165535373A2C041075C388ED21DF73971A40816A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t165535373A2C041075C388ED21DF73971A40816A *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<System.String>>::Dispose()
inline void Enumerator_Dispose_mC64A3087CF95F5E75C819788C5EE67AB1C86A7C5 (Enumerator_t165535373A2C041075C388ED21DF73971A40816A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t165535373A2C041075C388ED21DF73971A40816A *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Count()
inline int32_t List_1_get_Count_mE2235F330993765A44161830D01C4BF0EE83927A_inline (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Dropdown::set_options(System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_options_m64FE183D8C988AC643870012A98F3095E2C2C14B (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * ___value0, const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C (InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.Dropdown::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26 (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingImage>::.ctor()
inline void List_1__ctor_m6FD5C1CEC04F4B7F562C230E4316CB096518538C (List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 *, const RuntimeMethod*))List_1__ctor_m6FD5C1CEC04F4B7F562C230E4316CB096518538C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingImage>::Add(!0)
inline void List_1_Add_m3C6CBA554C764A00A29A7E058DFEEF4AB2CC2D30 (List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 * __this, QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 *, QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422 , const RuntimeMethod*))List_1_Add_m3C6CBA554C764A00A29A7E058DFEEF4AB2CC2D30_gshared)(__this, ___item0, method);
}
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnStartTranscodingButtonClickHandler::Invoke(qnrtc.QNTranscodingLiveStreamingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartTranscodingButtonClickHandler_Invoke_m95A2F50839A4E77AFD6825ABBA572261E81F602A (OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * __this, QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  ___config0, const RuntimeMethod* method);
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnStopTranscodingButtonClickHandler::Invoke(qnrtc.QNTranscodingLiveStreamingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStopTranscodingButtonClickHandler_Invoke_m899C9BC34C2787F68B32928A9FF714C3F457C222 (OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * __this, QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  ___config0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingTrack>::.ctor()
inline void List_1__ctor_mD7BB035F6F834F8B9E2C45E327315ABA888364A8 (List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t64043FA015632E81188D51414F588390CCCBB5D5 *, const RuntimeMethod*))List_1__ctor_mD7BB035F6F834F8B9E2C45E327315ABA888364A8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingTrack>::Add(!0)
inline void List_1_Add_m924A4B2071DE3E3B514C00F3EE22847998EF6FFA (List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * __this, QNTranscodingLiveStreamingTrack_t94540D56E31AC536AEFD15679C8E5E74121E25BE  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t64043FA015632E81188D51414F588390CCCBB5D5 *, QNTranscodingLiveStreamingTrack_t94540D56E31AC536AEFD15679C8E5E74121E25BE , const RuntimeMethod*))List_1_Add_m924A4B2071DE3E3B514C00F3EE22847998EF6FFA_gshared)(__this, ___item0, method);
}
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnUpdateLayoutButtonClickHandler::Invoke(System.String,System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingTrack>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUpdateLayoutButtonClickHandler_Invoke_m5E0ED6BDF0E8B78BCA8176D32B2C11B9B407B20B (OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * __this, String_t* ___streamId0, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * ___layouts1, const RuntimeMethod* method);
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnRemoveLayoutButtonClickHandler::Invoke(System.String,System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingTrack>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRemoveLayoutButtonClickHandler_Invoke_m68167B49FAEC4A4E6240CB58170E1A49C5614898 (OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * __this, String_t* ___streamId0, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * ___layouts1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::Clear()
inline void Dictionary_2_Clear_m425604D2739C474CBA676076F44F5063BD2AAB53 (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 *, const RuntimeMethod*))Dictionary_2_Clear_m883E91BB19072DD91E8FA3BEDA31D0FA095667EA_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<qnrtc.QNLocalTrack>::get_Count()
inline int32_t List_1_get_Count_mF94C99CA8A7C06B0F4229E3D942E4E0A44C8F270_inline (List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<qnrtc.QNLocalTrack>::GetEnumerator()
inline Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E  List_1_GetEnumerator_m6840C1FCE31BA67AE1AD6C97C5D5E58E0151CA33 (List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E  (*) (List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<qnrtc.QNLocalTrack>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m9C6EF56836A8AC40883493E188F555E56F4D324C_inline (Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<qnrtc.QNLocalTrack>::MoveNext()
inline bool Enumerator_MoveNext_mC014308FDBBE80C5C817F077AB549A409D0A9AE1 (Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<qnrtc.QNLocalTrack>::Dispose()
inline void Enumerator_Dispose_m567511193E958A85553B6FD293F29AEB3CE77787 (Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// QNRTCUnityDemo.Config QNRTCUnityDemo.Config::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5 * Config_GetInstance_m4ADF5B95DB3B635D960136F2BED8FBD36514A7DF (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::Add(!0,!1)
inline void Dictionary_2_Add_mED59F97035E345E8002F6D93ECFECE9951826ED3 (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * __this, String_t* ___key0, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 *, String_t*, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<qnrtc.QNRemoteUser>::get_Count()
inline int32_t List_1_get_Count_m1130BA06F0639CDBFD654EEF92750660961B0B23_inline (List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6 *, const RuntimeMethod*))List_1_get_Count_m1130BA06F0639CDBFD654EEF92750660961B0B23_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<qnrtc.QNRemoteUser>::GetEnumerator()
inline Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0  List_1_GetEnumerator_m1AAC23DA0423523B66518FFCF418D97F6D9C66FA (List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0  (*) (List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6 *, const RuntimeMethod*))List_1_GetEnumerator_m1AAC23DA0423523B66518FFCF418D97F6D9C66FA_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<qnrtc.QNRemoteUser>::get_Current()
inline QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10  Enumerator_get_Current_m8CE37972C881E04537AC2B2A1F032287BBB513BC_inline (Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0 * __this, const RuntimeMethod* method)
{
	return ((  QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10  (*) (Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0 *, const RuntimeMethod*))Enumerator_get_Current_m8CE37972C881E04537AC2B2A1F032287BBB513BC_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<qnrtc.QNRemoteAudioTrack>::GetEnumerator()
inline Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B  List_1_GetEnumerator_mF5D2EA640AC107EE2975A91E72F793EC3E1A813A (List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B  (*) (List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<qnrtc.QNRemoteAudioTrack>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mF5B301818F6809411D542653BE2B429C19951CC3_inline (Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<qnrtc.QNRemoteAudioTrack>::MoveNext()
inline bool Enumerator_MoveNext_mDB8FA6E6D670047E9722562DB1FC66E8C60E1631 (Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<qnrtc.QNRemoteAudioTrack>::Dispose()
inline void Enumerator_Dispose_m7CDF85738533C50CE7BEBAF8D8B7F513B88D587D (Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<qnrtc.QNRemoteUser>::MoveNext()
inline bool Enumerator_MoveNext_m58E6B27644EB1B3E426FEA2A6467475FD0062EA3 (Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0 *, const RuntimeMethod*))Enumerator_MoveNext_m58E6B27644EB1B3E426FEA2A6467475FD0062EA3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<qnrtc.QNRemoteUser>::Dispose()
inline void Enumerator_Dispose_m509AD172D60A88DCD619ACAB5B30CDFF87D8251C (Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0 *, const RuntimeMethod*))Enumerator_Dispose_m509AD172D60A88DCD619ACAB5B30CDFF87D8251C_gshared)(__this, method);
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::OnSelectUserDropdownValueChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_OnSelectUserDropdownValueChanged_m98D4D218055088FCB3F811DEF0CD8FA3E7442C18 (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_m4BF4B650B2E69D5D783B9AE68644355C271BE54C (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<QNRTCUnityDemo.UserTableViewCell>::GetEnumerator()
inline Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E  List_1_GetEnumerator_mE0A886DC7F076DD1BC18417BE08178E0A2A18BE5 (List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E  (*) (List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<QNRTCUnityDemo.UserTableViewCell>::get_Current()
inline UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * Enumerator_get_Current_mABF02AAAE3E781AE769DF5D1A39EC5477286ED01_inline (Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E * __this, const RuntimeMethod* method)
{
	return ((  UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * (*) (Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// qnrtc.QNTrack QNRTCUnityDemo.UserTableViewCell::GetCurrentTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UserTableViewCell_GetCurrentTrack_m04571C31078F209A86CEEB083BDB38985B1C3502 (UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<QNRTCUnityDemo.UserTableViewCell>::MoveNext()
inline bool Enumerator_MoveNext_m555A0F300B3B327881B35FD27F7CFD17D8ED3F59 (Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<QNRTCUnityDemo.UserTableViewCell>::Dispose()
inline void Enumerator_Dispose_m655A72FF4001D0349FFDEC9C6DB1155D017DCB0C (Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<QNRTCUnityDemo.UserTableViewCell>()
inline UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * GameObject_GetComponent_TisUserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473_m7CD09D5C7A35ABC908FFD4EE388E8D310C02145D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void QNRTCUnityDemo.UserTableViewCell::Initialize(qnrtc.QNTrack,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableViewCell_Initialize_mE873B1F0E926F6646AB01D7D6824A4F17957D5E5 (UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * __this, RuntimeObject* ___track0, bool ___isLocal1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<QNRTCUnityDemo.UserTableViewCell>::Add(!0)
inline void List_1_Add_mBEABE2989AF74E7AE6A19E73FE0F4CC7884BBCB0 (List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * __this, UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B *, UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<QNRTCUnityDemo.UserTableViewCell>::get_Item(System.Int32)
inline UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * List_1_get_Item_m4DB893F1E9539A119FFA46CDDCB923AB40B5332D_inline (List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * (*) (List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<QNRTCUnityDemo.UserTableViewCell>::Remove(!0)
inline bool List_1_Remove_m112EE5E24B5FAC36376ADA45530FE7C1F72021E5 (List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * __this, UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B *, UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<QNRTCUnityDemo.UserTableViewCell>::get_Count()
inline int32_t List_1_get_Count_m9F9E83010C430850E4D42972632054BBC1474D4A_inline (List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<QNRTCUnityDemo.UserTableViewCell>::.ctor()
inline void List_1__ctor_m14958CB962C5DF9EC5F177B527E7004E3C40857D (List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void QNRTCUnityDemo.UserTableViewCell::UpdateTrackInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableViewCell_UpdateTrackInfo_mC4C68EA27ED71E944ED08F34D920BCE73B022DEF (UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * __this, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Void QNRTCUnityDemo.DirectLiveView/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0A13C3626CCC012C91D6382752CFFC676D2ABB61 (U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void qnrtc.QNRTCClientImpl/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD9460A91BF63F5B76CACCA6CF28D8B68E69168DB (U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<qnrtc.QNPublishResultListener>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mAACDAE5411021F02DF758D8B4F9CFB958637BA3A (List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<qnrtc.QNPublishResultListener>::GetEnumerator()
inline Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E  List_1_GetEnumerator_mAA443355D31D4C0FA0CB80B3E7A7809765C6ED92 (List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E  (*) (List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<qnrtc.QNPublishResultListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mF1F92F90DAC2FA71E7B0C8F31C1799A8417CBA57_inline (Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<qnrtc.QNPublishResultListener>::MoveNext()
inline bool Enumerator_MoveNext_m488A8BBC2E2D1DA6D7C6F66D80ACB57B239AE301 (Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<qnrtc.QNPublishResultListener>::Dispose()
inline void Enumerator_Dispose_mBC190F6E473609692A5838152AC9E12062A5C666 (Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<qnrtc.QNRTCClientEventListener>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<qnrtc.QNRTCClientEventListener>::GetEnumerator()
inline Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89 (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  (*) (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<qnrtc.QNRTCClientEventListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_inline (Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<qnrtc.QNRTCClientEventListener>::MoveNext()
inline bool Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478 (Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<qnrtc.QNRTCClientEventListener>::Dispose()
inline void Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE (Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Nullable`1<qnrtc.QNConnectionDisconnectedInfo>::.ctor(!0)
inline void Nullable_1__ctor_mE97E7C747525382E79523EB25EE88B02A64C7AE7 (Nullable_1_tB40BABD0644B5F97F6A9700D5EE18379A8781D25 * __this, QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tB40BABD0644B5F97F6A9700D5EE18379A8781D25 *, QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493 , const RuntimeMethod*))Nullable_1__ctor_mE97E7C747525382E79523EB25EE88B02A64C7AE7_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.List`1<qnrtc.QNRTCClientRoleEventListener>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mFDF51C5ED04D26C8A6ABAC0E91FFC3524D0FB8D4 (List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<qnrtc.QNRTCClientRoleEventListener>::GetEnumerator()
inline Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C  List_1_GetEnumerator_m233127B2FD7FB17E19B524AAFB01F064FF3E0838 (List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C  (*) (List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<qnrtc.QNRTCClientRoleEventListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m7712355670628CB2A30D130CA8978941A90B5179_inline (Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<qnrtc.QNRTCClientRoleEventListener>::MoveNext()
inline bool Enumerator_MoveNext_m07527679FE6FC19F5013C9BA30EA9165D4CD17FF (Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<qnrtc.QNRTCClientRoleEventListener>::Dispose()
inline void Enumerator_Dispose_mED6A8CE5267E5A2E7914601170C62ABA154494BA (Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<qnrtc.QNMediaRelayListener>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mE046C24CE5FBCB336E613DF5DB099EDFE7CE2387 (List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t183BB96555952E7D5EB933BDC2D880925C92665D *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<qnrtc.QNMediaRelayListener>::GetEnumerator()
inline Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D  List_1_GetEnumerator_mCAF8E519CD695F78836BB6E1BE8D6080FBD648CA (List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D  (*) (List_1_t183BB96555952E7D5EB933BDC2D880925C92665D *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<qnrtc.QNMediaRelayListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mCC898BB1D66DD9AC65AC57AA841F0C99063FFE7E_inline (Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<qnrtc.QNMediaRelayListener>::MoveNext()
inline bool Enumerator_MoveNext_m9F739327A743D5D29DB8F39004367C995C3ED7D2 (Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<qnrtc.QNMediaRelayListener>::Dispose()
inline void Enumerator_Dispose_mC8D4D1D09052360F0F9BD31CB15A548D107D05FF (Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<qnrtc.QNLiveStreamingListener>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mC026BA2FCCD384B2C4BDF09101D93D7071A54EAF (List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<qnrtc.QNLiveStreamingListener>::GetEnumerator()
inline Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A  List_1_GetEnumerator_m1A90E7283FEE3F060AA16D4CA4EEA4C20666A7F7 (List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A  (*) (List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<qnrtc.QNLiveStreamingListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m0A0046F4A50F2FBE6135D1F19CA079552615508C_inline (Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<qnrtc.QNLiveStreamingListener>::MoveNext()
inline bool Enumerator_MoveNext_m96A9A53B02C242C7F50165172300672643D984DC (Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<qnrtc.QNLiveStreamingListener>::Dispose()
inline void Enumerator_Dispose_m919CB9DB84E6EFF184E07D0BD6BBE2467C0F7C35 (Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<qnrtc.QNNetworkQualityListener>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mDC235CE79C93224F87D62F638217E2595B3E4DB4 (List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<qnrtc.QNNetworkQualityListener>::GetEnumerator()
inline Enumerator_t018C604741829237B8E541F69B1144757220CFC9  List_1_GetEnumerator_m68921A1CA160CBEF9C9CC7F2B9629AE8F268ABEA (List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t018C604741829237B8E541F69B1144757220CFC9  (*) (List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<qnrtc.QNNetworkQualityListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m0A7AD8B388E6D93B5196E4A582115AB0EF7E1400_inline (Enumerator_t018C604741829237B8E541F69B1144757220CFC9 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t018C604741829237B8E541F69B1144757220CFC9 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<qnrtc.QNNetworkQualityListener>::MoveNext()
inline bool Enumerator_MoveNext_mF9C9F8F6F3645D656F370B466F47D26958EC167A (Enumerator_t018C604741829237B8E541F69B1144757220CFC9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t018C604741829237B8E541F69B1144757220CFC9 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<qnrtc.QNNetworkQualityListener>::Dispose()
inline void Enumerator_Dispose_m1AF1B85572FAD8E8BBCC9FF0D4D87BCDB0F2C8E3 (Enumerator_t018C604741829237B8E541F69B1144757220CFC9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t018C604741829237B8E541F69B1144757220CFC9 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void qnrtc.QNRTCImpl/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m887CB908EDA6014064509B36B279E81664A2ED1C (U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<qnrtc.QNRTCEventListener>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m6E3850089516E6A589C702728C5901492AACC138 (List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<qnrtc.QNRTCEventListener>::GetEnumerator()
inline Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216  List_1_GetEnumerator_mC03A75F234608E1577BE892E483C8F4410BAAE40 (List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216  (*) (List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<qnrtc.QNRTCEventListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mFE9D3E68D170EA875D9D72B5D38CE0E10AD392A7_inline (Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<qnrtc.QNRTCEventListener>::MoveNext()
inline bool Enumerator_MoveNext_m4571AE6BE4BC4203E66E05DE4063747A1A419D81 (Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<qnrtc.QNRTCEventListener>::Dispose()
inline void Enumerator_Dispose_m4CB17774AE68A306344B0FD3B66A28F25259BBCF (Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<qnrtc.QNTrackInfoChangedListener>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_mE89ADE68BA3F3BFEC27CAABE2BCA2D1C8C1C0C74 (List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<qnrtc.QNTrackInfoChangedListener>::GetEnumerator()
inline Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073  List_1_GetEnumerator_m259F2D883AF5EAB5011683FD0AD2B55D45C94536 (List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073  (*) (List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<qnrtc.QNTrackInfoChangedListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6E51D13DEC26073094BBB5921FE214ACAD7E5155_inline (Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<qnrtc.QNTrackInfoChangedListener>::MoveNext()
inline bool Enumerator_MoveNext_mF3164FEDEFD99EE7201EE8B0C4CD3CB9D7AA9D0E (Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<qnrtc.QNTrackInfoChangedListener>::Dispose()
inline void Enumerator_Dispose_m27211F2A3800AF0A3448F440C119A168EA003FF1 (Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QNRTCUnityDemo.TranscodingLiveView::add_OnStartTranscodingHandler(QNRTCUnityDemo.TranscodingLiveView/OnStartTranscodingButtonClickHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_add_OnStartTranscodingHandler_mCD14CC7D0273567C995E73ABD7C6F9AA28C4AFF7 (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * V_0 = NULL;
	OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * V_1 = NULL;
	OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * V_2 = NULL;
	{
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_0 = __this->get_OnStartTranscodingHandler_4();
		V_0 = L_0;
	}

IL_0007:
	{
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_1 = V_0;
		V_1 = L_1;
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_2 = V_1;
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F *)CastclassSealed((RuntimeObject*)L_4, OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F_il2cpp_TypeInfo_var));
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F ** L_5 = __this->get_address_of_OnStartTranscodingHandler_4();
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_6 = V_2;
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_7 = V_1;
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F *>((OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F **)L_5, L_6, L_7);
		V_0 = L_8;
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_9 = V_0;
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F *)L_9) == ((RuntimeObject*)(OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::remove_OnStartTranscodingHandler(QNRTCUnityDemo.TranscodingLiveView/OnStartTranscodingButtonClickHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_remove_OnStartTranscodingHandler_m3C61339464DF2DC4FA17AA891FA6F3D514774879 (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * V_0 = NULL;
	OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * V_1 = NULL;
	OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * V_2 = NULL;
	{
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_0 = __this->get_OnStartTranscodingHandler_4();
		V_0 = L_0;
	}

IL_0007:
	{
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_1 = V_0;
		V_1 = L_1;
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_2 = V_1;
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F *)CastclassSealed((RuntimeObject*)L_4, OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F_il2cpp_TypeInfo_var));
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F ** L_5 = __this->get_address_of_OnStartTranscodingHandler_4();
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_6 = V_2;
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_7 = V_1;
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F *>((OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F **)L_5, L_6, L_7);
		V_0 = L_8;
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_9 = V_0;
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F *)L_9) == ((RuntimeObject*)(OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::add_OnStopTranscodingHandler(QNRTCUnityDemo.TranscodingLiveView/OnStopTranscodingButtonClickHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_add_OnStopTranscodingHandler_mC83BF3C32E19724B1D04D7824F99866386FCFBAF (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * V_0 = NULL;
	OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * V_1 = NULL;
	OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * V_2 = NULL;
	{
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_0 = __this->get_OnStopTranscodingHandler_5();
		V_0 = L_0;
	}

IL_0007:
	{
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_1 = V_0;
		V_1 = L_1;
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_2 = V_1;
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 *)CastclassSealed((RuntimeObject*)L_4, OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77_il2cpp_TypeInfo_var));
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 ** L_5 = __this->get_address_of_OnStopTranscodingHandler_5();
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_6 = V_2;
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_7 = V_1;
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 *>((OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_9 = V_0;
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 *)L_9) == ((RuntimeObject*)(OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::remove_OnStopTranscodingHandler(QNRTCUnityDemo.TranscodingLiveView/OnStopTranscodingButtonClickHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_remove_OnStopTranscodingHandler_m83C36CDBBF13BC34738FBB02DECA1BE886406D6F (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * V_0 = NULL;
	OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * V_1 = NULL;
	OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * V_2 = NULL;
	{
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_0 = __this->get_OnStopTranscodingHandler_5();
		V_0 = L_0;
	}

IL_0007:
	{
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_1 = V_0;
		V_1 = L_1;
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_2 = V_1;
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 *)CastclassSealed((RuntimeObject*)L_4, OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77_il2cpp_TypeInfo_var));
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 ** L_5 = __this->get_address_of_OnStopTranscodingHandler_5();
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_6 = V_2;
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_7 = V_1;
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 *>((OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_9 = V_0;
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 *)L_9) == ((RuntimeObject*)(OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::add_OnUpdateLayoutHandler(QNRTCUnityDemo.TranscodingLiveView/OnUpdateLayoutButtonClickHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_add_OnUpdateLayoutHandler_m8D7E0B828236B5BFEAC8D1143ED8B544ED294890 (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * V_0 = NULL;
	OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * V_1 = NULL;
	OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * V_2 = NULL;
	{
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_0 = __this->get_OnUpdateLayoutHandler_6();
		V_0 = L_0;
	}

IL_0007:
	{
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_1 = V_0;
		V_1 = L_1;
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_2 = V_1;
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 *)CastclassSealed((RuntimeObject*)L_4, OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133_il2cpp_TypeInfo_var));
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 ** L_5 = __this->get_address_of_OnUpdateLayoutHandler_6();
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_6 = V_2;
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_7 = V_1;
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 *>((OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_9 = V_0;
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 *)L_9) == ((RuntimeObject*)(OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::remove_OnUpdateLayoutHandler(QNRTCUnityDemo.TranscodingLiveView/OnUpdateLayoutButtonClickHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_remove_OnUpdateLayoutHandler_mDBF88A3494595AC39CDBBBEF314BC93457ECFB94 (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * V_0 = NULL;
	OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * V_1 = NULL;
	OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * V_2 = NULL;
	{
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_0 = __this->get_OnUpdateLayoutHandler_6();
		V_0 = L_0;
	}

IL_0007:
	{
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_1 = V_0;
		V_1 = L_1;
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_2 = V_1;
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 *)CastclassSealed((RuntimeObject*)L_4, OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133_il2cpp_TypeInfo_var));
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 ** L_5 = __this->get_address_of_OnUpdateLayoutHandler_6();
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_6 = V_2;
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_7 = V_1;
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 *>((OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_9 = V_0;
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 *)L_9) == ((RuntimeObject*)(OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::add_OnRemoveLayoutHandler(QNRTCUnityDemo.TranscodingLiveView/OnRemoveLayoutButtonClickHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_add_OnRemoveLayoutHandler_mFABCDAC3A2BAA1CFD94ACAD7B1AFD0B87ADC019C (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * V_0 = NULL;
	OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * V_1 = NULL;
	OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * V_2 = NULL;
	{
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_0 = __this->get_OnRemoveLayoutHandler_7();
		V_0 = L_0;
	}

IL_0007:
	{
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_1 = V_0;
		V_1 = L_1;
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_2 = V_1;
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 *)CastclassSealed((RuntimeObject*)L_4, OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613_il2cpp_TypeInfo_var));
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 ** L_5 = __this->get_address_of_OnRemoveLayoutHandler_7();
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_6 = V_2;
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_7 = V_1;
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 *>((OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_9 = V_0;
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 *)L_9) == ((RuntimeObject*)(OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::remove_OnRemoveLayoutHandler(QNRTCUnityDemo.TranscodingLiveView/OnRemoveLayoutButtonClickHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_remove_OnRemoveLayoutHandler_mAC973D1D57B6B9543A8D26E396D037F47945E5C4 (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * V_0 = NULL;
	OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * V_1 = NULL;
	OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * V_2 = NULL;
	{
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_0 = __this->get_OnRemoveLayoutHandler_7();
		V_0 = L_0;
	}

IL_0007:
	{
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_1 = V_0;
		V_1 = L_1;
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_2 = V_1;
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 *)CastclassSealed((RuntimeObject*)L_4, OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613_il2cpp_TypeInfo_var));
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 ** L_5 = __this->get_address_of_OnRemoveLayoutHandler_7();
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_6 = V_2;
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_7 = V_1;
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 *>((OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_9 = V_0;
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 *)L_9) == ((RuntimeObject*)(OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_Start_m0E083FDD9967E666CB354D604E854F527C34C51D (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04E9EBE1F00A77E549A2B09F449656118F2B3197);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8648CBFBB0D15E23BF34C272F2BC3B30AF8E6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F846AB4F417E1761170BAE0449870C5EAAD9551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9037918EF368FDB9869069C353AC1D0AA985BD83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral911B8DC0EC81740565D2658934AA8BF26C1133DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB764D8088C91610AE249F77AD0FBAC9723356275);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD8D195854FE6A5448A819D605C3800954C75B0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDAD0CFDCC830DE0947EAAFE19F345FC62C1BBA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA7A676433CAB71F816C191BA6205A79CA64BAF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB3E2E45E3697C91835CFBCA547A1B38DF6A850D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StreamIdInputField.text = "stream_id_transcoding";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_StreamIdInputField_8();
		NullCheck(L_0);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_0, _stringLiteral7F846AB4F417E1761170BAE0449870C5EAAD9551, /*hidden argument*/NULL);
		// PublishUrlInputField.text = "rtmp://pili-publish.live.qiniu.pursue.show/pursue-online/Sun";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_1 = __this->get_PublishUrlInputField_9();
		NullCheck(L_1);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_1, _stringLiteral911B8DC0EC81740565D2658934AA8BF26C1133DB, /*hidden argument*/NULL);
		// TranscodingWidthInputField.text = "720";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2 = __this->get_TranscodingWidthInputField_10();
		NullCheck(L_2);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_2, _stringLiteral04E9EBE1F00A77E549A2B09F449656118F2B3197, /*hidden argument*/NULL);
		// TranscodingHeightInputField.text = "1280";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_3 = __this->get_TranscodingHeightInputField_11();
		NullCheck(L_3);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_3, _stringLiteralDDAD0CFDCC830DE0947EAAFE19F345FC62C1BBA6, /*hidden argument*/NULL);
		// FpsInputField.text = "24";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_4 = __this->get_FpsInputField_12();
		NullCheck(L_4);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_4, _stringLiteralFB3E2E45E3697C91835CFBCA547A1B38DF6A850D, /*hidden argument*/NULL);
		// BitrateInputField.text = "1500";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_5 = __this->get_BitrateInputField_13();
		NullCheck(L_5);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_5, _stringLiteralEA7A676433CAB71F816C191BA6205A79CA64BAF8, /*hidden argument*/NULL);
		// MinBitrateInputField.text = "1500";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_6 = __this->get_MinBitrateInputField_14();
		NullCheck(L_6);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_6, _stringLiteralEA7A676433CAB71F816C191BA6205A79CA64BAF8, /*hidden argument*/NULL);
		// MaxBitrateInputField.text = "1500";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_7 = __this->get_MaxBitrateInputField_15();
		NullCheck(L_7);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_7, _stringLiteralEA7A676433CAB71F816C191BA6205A79CA64BAF8, /*hidden argument*/NULL);
		// IsHoldLastFrameToggle.isOn = true;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_8 = __this->get_IsHoldLastFrameToggle_16();
		NullCheck(L_8);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(L_8, (bool)1, /*hidden argument*/NULL);
		// StretchModeDropdown.value = 0;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_9 = __this->get_StretchModeDropdown_17();
		NullCheck(L_9);
		Dropdown_set_value_mE4418D205D53F8A3AD23B957D1A8CD71489CB3B9(L_9, 0, /*hidden argument*/NULL);
		// BackgroundImageToggle.isOn = true;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_10 = __this->get_BackgroundImageToggle_18();
		NullCheck(L_10);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(L_10, (bool)1, /*hidden argument*/NULL);
		// BackgroundUrlInputField.text = "http://pili-playback.qnsdk.com/ivs_background_1280x720.png";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_11 = __this->get_BackgroundUrlInputField_19();
		NullCheck(L_11);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_11, _stringLiteralB764D8088C91610AE249F77AD0FBAC9723356275, /*hidden argument*/NULL);
		// BackgroundXInputField.text = "0";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_12 = __this->get_BackgroundXInputField_20();
		NullCheck(L_12);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_12, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		// BackgroundYInputField.text = "0";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_13 = __this->get_BackgroundYInputField_21();
		NullCheck(L_13);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_13, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, /*hidden argument*/NULL);
		// BackgroundWidthInputField.text = "720";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_14 = __this->get_BackgroundWidthInputField_22();
		NullCheck(L_14);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_14, _stringLiteral04E9EBE1F00A77E549A2B09F449656118F2B3197, /*hidden argument*/NULL);
		// BackgroundHeightInputField.text = "1280";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_15 = __this->get_BackgroundHeightInputField_23();
		NullCheck(L_15);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_15, _stringLiteralDDAD0CFDCC830DE0947EAAFE19F345FC62C1BBA6, /*hidden argument*/NULL);
		// WatermarkImageToggle.isOn = true;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_16 = __this->get_WatermarkImageToggle_24();
		NullCheck(L_16);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(L_16, (bool)1, /*hidden argument*/NULL);
		// WatermarkUrlInputField.text = "http://pili-playback.qnsdk.com/qiniu-logo-110-34.png";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_17 = __this->get_WatermarkUrlInputField_25();
		NullCheck(L_17);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_17, _stringLiteral4B8648CBFBB0D15E23BF34C272F2BC3B30AF8E6C, /*hidden argument*/NULL);
		// WatermarkXInputField.text = "30";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_18 = __this->get_WatermarkXInputField_26();
		NullCheck(L_18);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_18, _stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E, /*hidden argument*/NULL);
		// WatermarkYInputField.text = "30";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_19 = __this->get_WatermarkYInputField_27();
		NullCheck(L_19);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_19, _stringLiteralC9D407B87C1FD4BF475E75F2CFCFF119FB45D40E, /*hidden argument*/NULL);
		// WatermarkWidthInputField.text = "110";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_20 = __this->get_WatermarkWidthInputField_28();
		NullCheck(L_20);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_20, _stringLiteral9037918EF368FDB9869069C353AC1D0AA985BD83, /*hidden argument*/NULL);
		// WatermarkHeightInputField.text = "34";
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_21 = __this->get_WatermarkHeightInputField_29();
		NullCheck(L_21);
		InputField_set_text_m30EE95E064474DFA2842CA2DD6E831FF3F3500BF(L_21, _stringLiteralDD8D195854FE6A5448A819D605C3800954C75B0F, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_Update_mEDAB5A12E7D6286BF69A54C01691A5B9C1DBA07C (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_OnDestroy_m1C2A1E84132F954A4117AE6D6B6778B098B2553A (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::OnSelectUserDropdownValueChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_OnSelectUserDropdownValueChanged_m98D4D218055088FCB3F811DEF0CD8FA3E7442C18 (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m3F404F41E893885498C2323ED9494138BC74C93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC64A3087CF95F5E75C819788C5EE67AB1C86A7C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m190544484A48339ACEDE62C253203E1FC290E07E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0DF8252E6DEED7F95DA26E68E0AC1D77F01F7C76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m86200A8B43D292421BC3B199566D853D3CCA5469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mEC73C6A3E984121B1E7E04B873425C7DAD592B8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2235F330993765A44161830D01C4BF0EE83927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral144476A4F3FDA0821138BA3DDDC482B386191EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CC484D2E992FF2D2B483D2DB758D10306065E7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA253F2C998B1AC53F3639A779725E517E309C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCCC35CA69F27BCBA19D01BED1F530EDB44B4BB2);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * V_0 = NULL;
	String_t* V_1 = NULL;
	Enumerator_t165535373A2C041075C388ED21DF73971A40816A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * V_7 = NULL;
	bool V_8 = false;
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// List<Dropdown.OptionData> options = new List<Dropdown.OptionData>();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_0 = (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *)il2cpp_codegen_object_new(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_il2cpp_TypeInfo_var);
		List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD(L_0, /*hidden argument*/List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD_RuntimeMethod_var);
		V_0 = L_0;
		// string selectedUserId = SelectUserDropdown.options[index].text;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_1 = __this->get_SelectUserDropdown_32();
		NullCheck(L_1);
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_2;
		L_2 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_4;
		L_4 = List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// Debug.Log("selectedUserId: " + selectedUserId + " index: " + index);
		String_t* L_6 = V_1;
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___index0), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral144476A4F3FDA0821138BA3DDDC482B386191EAF, L_6, _stringLiteralFCCC35CA69F27BCBA19D01BED1F530EDB44B4BB2, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// foreach (var userInfo in userInfoList)
		Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * L_9 = __this->get_userInfoList_36();
		NullCheck(L_9);
		Enumerator_t165535373A2C041075C388ED21DF73971A40816A  L_10;
		L_10 = Dictionary_2_GetEnumerator_m3F404F41E893885498C2323ED9494138BC74C93F(L_9, /*hidden argument*/Dictionary_2_GetEnumerator_m3F404F41E893885498C2323ED9494138BC74C93F_RuntimeMethod_var);
		V_2 = L_10;
	}

IL_0048:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00de;
		}

IL_004d:
		{
			// foreach (var userInfo in userInfoList)
			KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  L_11;
			L_11 = Enumerator_get_Current_m0DF8252E6DEED7F95DA26E68E0AC1D77F01F7C76_inline((Enumerator_t165535373A2C041075C388ED21DF73971A40816A *)(&V_2), /*hidden argument*/Enumerator_get_Current_m0DF8252E6DEED7F95DA26E68E0AC1D77F01F7C76_RuntimeMethod_var);
			V_3 = L_11;
			// Debug.Log("userInfo.Key: " + userInfo.Key);
			String_t* L_12;
			L_12 = KeyValuePair_2_get_Key_m86200A8B43D292421BC3B199566D853D3CCA5469_inline((KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m86200A8B43D292421BC3B199566D853D3CCA5469_RuntimeMethod_var);
			String_t* L_13;
			L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralEFA253F2C998B1AC53F3639A779725E517E309C7, L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_13, /*hidden argument*/NULL);
			// if (userInfo.Key.Equals(selectedUserId))
			String_t* L_14;
			L_14 = KeyValuePair_2_get_Key_m86200A8B43D292421BC3B199566D853D3CCA5469_inline((KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m86200A8B43D292421BC3B199566D853D3CCA5469_RuntimeMethod_var);
			String_t* L_15 = V_1;
			NullCheck(L_14);
			bool L_16;
			L_16 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_14, L_15, /*hidden argument*/NULL);
			V_4 = L_16;
			bool L_17 = V_4;
			if (!L_17)
			{
				goto IL_00dd;
			}
		}

IL_0080:
		{
			// foreach (string trackId in userInfo.Value)
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18;
			L_18 = KeyValuePair_2_get_Value_mEC73C6A3E984121B1E7E04B873425C7DAD592B8C_inline((KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mEC73C6A3E984121B1E7E04B873425C7DAD592B8C_RuntimeMethod_var);
			NullCheck(L_18);
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_19;
			L_19 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_18, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
			V_5 = L_19;
		}

IL_0090:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00c1;
			}

IL_0092:
			{
				// foreach (string trackId in userInfo.Value)
				String_t* L_20;
				L_20 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_5), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
				V_6 = L_20;
				// Debug.Log("trackId: " + trackId);
				String_t* L_21 = V_6;
				String_t* L_22;
				L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7CC484D2E992FF2D2B483D2DB758D10306065E7E, L_21, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_22, /*hidden argument*/NULL);
				// Dropdown.OptionData option = new Dropdown.OptionData(trackId);
				String_t* L_23 = V_6;
				OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_24 = (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 *)il2cpp_codegen_object_new(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var);
				OptionData__ctor_m5AF14BD8BBF6118AC51A7A9A38AE3AB2DE3C2675(L_24, L_23, /*hidden argument*/NULL);
				V_7 = L_24;
				// options.Add(option);
				List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_25 = V_0;
				OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_26 = V_7;
				NullCheck(L_25);
				List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC(L_25, L_26, /*hidden argument*/List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var);
			}

IL_00c1:
			{
				// foreach (string trackId in userInfo.Value)
				bool L_27;
				L_27 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_5), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0092;
				}
			}

IL_00ca:
			{
				IL2CPP_LEAVE(0xDB, FINALLY_00cc);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00cc;
		}

FINALLY_00cc:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_5), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
			IL2CPP_END_FINALLY(204)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(204)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0xDB, IL_00db)
		}

IL_00db:
		{
			// break;
			goto IL_00ea;
		}

IL_00dd:
		{
		}

IL_00de:
		{
			// foreach (var userInfo in userInfoList)
			bool L_28;
			L_28 = Enumerator_MoveNext_m190544484A48339ACEDE62C253203E1FC290E07E((Enumerator_t165535373A2C041075C388ED21DF73971A40816A *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m190544484A48339ACEDE62C253203E1FC290E07E_RuntimeMethod_var);
			if (L_28)
			{
				goto IL_004d;
			}
		}

IL_00ea:
		{
			IL2CPP_LEAVE(0xFB, FINALLY_00ec);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ec;
	}

FINALLY_00ec:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC64A3087CF95F5E75C819788C5EE67AB1C86A7C5((Enumerator_t165535373A2C041075C388ED21DF73971A40816A *)(&V_2), /*hidden argument*/Enumerator_Dispose_mC64A3087CF95F5E75C819788C5EE67AB1C86A7C5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(236)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(236)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xFB, IL_00fb)
	}

IL_00fb:
	{
		// if (0 == options.Count)
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_mE2235F330993765A44161830D01C4BF0EE83927A_inline(L_29, /*hidden argument*/List_1_get_Count_mE2235F330993765A44161830D01C4BF0EE83927A_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_0121;
		}
	}
	{
		// Dropdown.OptionData option = new Dropdown.OptionData("-");
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_32 = (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 *)il2cpp_codegen_object_new(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var);
		OptionData__ctor_m5AF14BD8BBF6118AC51A7A9A38AE3AB2DE3C2675(L_32, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, /*hidden argument*/NULL);
		V_9 = L_32;
		// options.Add(option);
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_33 = V_0;
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_34 = V_9;
		NullCheck(L_33);
		List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC(L_33, L_34, /*hidden argument*/List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var);
	}

IL_0121:
	{
		// SelectTrackDropdown.options = options;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_35 = __this->get_SelectTrackDropdown_33();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_36 = V_0;
		NullCheck(L_35);
		Dropdown_set_options_m64FE183D8C988AC643870012A98F3095E2C2C14B(L_35, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::OnStartTranscodingButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_OnStartTranscodingButtonClick_mABBAD98A27460148363D71B1D77BC0DB2A7E423F (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3C6CBA554C764A00A29A7E058DFEEF4AB2CC2D30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6FD5C1CEC04F4B7F562C230E4316CB096518538C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// QNTranscodingLiveStreamingConfig config = new QNTranscodingLiveStreamingConfig();
		il2cpp_codegen_initobj((&V_0), sizeof(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F ));
		// config.StreamId = StreamIdInputField.text;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_StreamIdInputField_8();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_0, /*hidden argument*/NULL);
		(&V_0)->set_StreamId_0(L_1);
		// config.PublishUrl = PublishUrlInputField.text;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_2 = __this->get_PublishUrlInputField_9();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_2, /*hidden argument*/NULL);
		(&V_0)->set_PublishUrl_1(L_3);
		// config.Width = Int32.Parse(TranscodingWidthInputField.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_4 = __this->get_TranscodingWidthInputField_10();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_4, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_5, /*hidden argument*/NULL);
		(&V_0)->set_Width_4(L_6);
		// config.Height = Int32.Parse(TranscodingHeightInputField.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_7 = __this->get_TranscodingHeightInputField_11();
		NullCheck(L_7);
		String_t* L_8;
		L_8 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_8, /*hidden argument*/NULL);
		(&V_0)->set_Height_5(L_9);
		// config.Fps = Int32.Parse(FpsInputField.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_10 = __this->get_FpsInputField_12();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_10, /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_11, /*hidden argument*/NULL);
		(&V_0)->set_Fps_6(L_12);
		// config.Bitrate = Int32.Parse(BitrateInputField.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_13 = __this->get_BitrateInputField_13();
		NullCheck(L_13);
		String_t* L_14;
		L_14 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_13, /*hidden argument*/NULL);
		int32_t L_15;
		L_15 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_14, /*hidden argument*/NULL);
		(&V_0)->set_Bitrate_7(L_15);
		// config.MinBitrate = Int32.Parse(MinBitrateInputField.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_16 = __this->get_MinBitrateInputField_14();
		NullCheck(L_16);
		String_t* L_17;
		L_17 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_16, /*hidden argument*/NULL);
		int32_t L_18;
		L_18 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_17, /*hidden argument*/NULL);
		(&V_0)->set_MinBitrate_8(L_18);
		// config.MaxBitrate = Int32.Parse(MaxBitrateInputField.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_19 = __this->get_MaxBitrateInputField_15();
		NullCheck(L_19);
		String_t* L_20;
		L_20 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_19, /*hidden argument*/NULL);
		int32_t L_21;
		L_21 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_20, /*hidden argument*/NULL);
		(&V_0)->set_MaxBitrate_9(L_21);
		// config.IsHoldLastFrame = IsHoldLastFrameToggle.isOn;
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_22 = __this->get_IsHoldLastFrameToggle_16();
		NullCheck(L_22);
		bool L_23;
		L_23 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C(L_22, /*hidden argument*/NULL);
		(&V_0)->set_IsHoldLastFrame_10(L_23);
		// config.StretchMode = (QNStretchMode)StretchModeDropdown.value;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_24 = __this->get_StretchModeDropdown_17();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26(L_24, /*hidden argument*/NULL);
		(&V_0)->set_StretchMode_11(L_25);
		// if (BackgroundImageToggle.isOn)
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_26 = __this->get_BackgroundImageToggle_18();
		NullCheck(L_26);
		bool L_27;
		L_27 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C(L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		bool L_28 = V_1;
		if (!L_28)
		{
			goto IL_0176;
		}
	}
	{
		// config.MergeBackground.LayerUrl = BackgroundUrlInputField.text;
		QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422 * L_29 = (&V_0)->get_address_of_MergeBackground_2();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_30 = __this->get_BackgroundUrlInputField_19();
		NullCheck(L_30);
		String_t* L_31;
		L_31 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_30, /*hidden argument*/NULL);
		L_29->set_LayerUrl_0(L_31);
		// config.MergeBackground.X = Int32.Parse(BackgroundXInputField.text);
		QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422 * L_32 = (&V_0)->get_address_of_MergeBackground_2();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_33 = __this->get_BackgroundXInputField_20();
		NullCheck(L_33);
		String_t* L_34;
		L_34 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_33, /*hidden argument*/NULL);
		int32_t L_35;
		L_35 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_34, /*hidden argument*/NULL);
		L_32->set_X_1(L_35);
		// config.MergeBackground.Y = Int32.Parse(BackgroundYInputField.text);
		QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422 * L_36 = (&V_0)->get_address_of_MergeBackground_2();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_37 = __this->get_BackgroundYInputField_21();
		NullCheck(L_37);
		String_t* L_38;
		L_38 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_37, /*hidden argument*/NULL);
		int32_t L_39;
		L_39 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_38, /*hidden argument*/NULL);
		L_36->set_Y_2(L_39);
		// config.MergeBackground.LayerWidth = Int32.Parse(BackgroundWidthInputField.text);
		QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422 * L_40 = (&V_0)->get_address_of_MergeBackground_2();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_41 = __this->get_BackgroundWidthInputField_22();
		NullCheck(L_41);
		String_t* L_42;
		L_42 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_41, /*hidden argument*/NULL);
		int32_t L_43;
		L_43 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_42, /*hidden argument*/NULL);
		L_40->set_LayerWidth_3(L_43);
		// config.MergeBackground.LayerHeight = Int32.Parse(BackgroundHeightInputField.text);
		QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422 * L_44 = (&V_0)->get_address_of_MergeBackground_2();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_45 = __this->get_BackgroundHeightInputField_23();
		NullCheck(L_45);
		String_t* L_46;
		L_46 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_45, /*hidden argument*/NULL);
		int32_t L_47;
		L_47 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_46, /*hidden argument*/NULL);
		L_44->set_LayerHeight_4(L_47);
	}

IL_0176:
	{
		// if (WatermarkImageToggle.isOn)
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_48 = __this->get_WatermarkImageToggle_24();
		NullCheck(L_48);
		bool L_49;
		L_49 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C(L_48, /*hidden argument*/NULL);
		V_2 = L_49;
		bool L_50 = V_2;
		if (!L_50)
		{
			goto IL_0219;
		}
	}
	{
		// config.MergeWatermark = new List<QNTranscodingLiveStreamingImage>();
		List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 * L_51 = (List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 *)il2cpp_codegen_object_new(List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1_il2cpp_TypeInfo_var);
		List_1__ctor_m6FD5C1CEC04F4B7F562C230E4316CB096518538C(L_51, /*hidden argument*/List_1__ctor_m6FD5C1CEC04F4B7F562C230E4316CB096518538C_RuntimeMethod_var);
		(&V_0)->set_MergeWatermark_3(L_51);
		// QNTranscodingLiveStreamingImage watermark = new QNTranscodingLiveStreamingImage();
		il2cpp_codegen_initobj((&V_3), sizeof(QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422 ));
		// watermark.LayerUrl = WatermarkUrlInputField.text;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_52 = __this->get_WatermarkUrlInputField_25();
		NullCheck(L_52);
		String_t* L_53;
		L_53 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_52, /*hidden argument*/NULL);
		(&V_3)->set_LayerUrl_0(L_53);
		// watermark.X = Int32.Parse(WatermarkXInputField.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_54 = __this->get_WatermarkXInputField_26();
		NullCheck(L_54);
		String_t* L_55;
		L_55 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_54, /*hidden argument*/NULL);
		int32_t L_56;
		L_56 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_55, /*hidden argument*/NULL);
		(&V_3)->set_X_1(L_56);
		// watermark.Y = Int32.Parse(WatermarkYInputField.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_57 = __this->get_WatermarkYInputField_27();
		NullCheck(L_57);
		String_t* L_58;
		L_58 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_57, /*hidden argument*/NULL);
		int32_t L_59;
		L_59 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_58, /*hidden argument*/NULL);
		(&V_3)->set_Y_2(L_59);
		// watermark.LayerWidth = Int32.Parse(WatermarkWidthInputField.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_60 = __this->get_WatermarkWidthInputField_28();
		NullCheck(L_60);
		String_t* L_61;
		L_61 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_60, /*hidden argument*/NULL);
		int32_t L_62;
		L_62 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_61, /*hidden argument*/NULL);
		(&V_3)->set_LayerWidth_3(L_62);
		// watermark.LayerHeight = Int32.Parse(WatermarkHeightInputField.text);
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_63 = __this->get_WatermarkHeightInputField_29();
		NullCheck(L_63);
		String_t* L_64;
		L_64 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_63, /*hidden argument*/NULL);
		int32_t L_65;
		L_65 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_64, /*hidden argument*/NULL);
		(&V_3)->set_LayerHeight_4(L_65);
		// config.MergeWatermark.Add(watermark);
		QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  L_66 = V_0;
		List_1_tF0DDCAEA36EDED1FF7051A687CB2B3E81BE50CA1 * L_67 = L_66.get_MergeWatermark_3();
		QNTranscodingLiveStreamingImage_tCB50420CB4AFBE3AD61AEF0D87E0CDC91EBE7422  L_68 = V_3;
		NullCheck(L_67);
		List_1_Add_m3C6CBA554C764A00A29A7E058DFEEF4AB2CC2D30(L_67, L_68, /*hidden argument*/List_1_Add_m3C6CBA554C764A00A29A7E058DFEEF4AB2CC2D30_RuntimeMethod_var);
	}

IL_0219:
	{
		// OnStartTranscodingHandler(config);
		OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * L_69 = __this->get_OnStartTranscodingHandler_4();
		QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  L_70 = V_0;
		NullCheck(L_69);
		OnStartTranscodingButtonClickHandler_Invoke_m95A2F50839A4E77AFD6825ABBA572261E81F602A(L_69, L_70, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::OnStopTranscodingButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_OnStopTranscodingButtonClick_m966B2FF9832861A88356105EF6D0E279C8BA872A (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, const RuntimeMethod* method)
{
	QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// QNTranscodingLiveStreamingConfig config = new QNTranscodingLiveStreamingConfig();
		il2cpp_codegen_initobj((&V_0), sizeof(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F ));
		// config.StreamId = StreamIdInputField.text;
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_0 = __this->get_StreamIdInputField_8();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_0, /*hidden argument*/NULL);
		(&V_0)->set_StreamId_0(L_1);
		// OnStopTranscodingHandler(config);
		OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * L_2 = __this->get_OnStopTranscodingHandler_5();
		QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  L_3 = V_0;
		NullCheck(L_2);
		OnStopTranscodingButtonClickHandler_Invoke_m899C9BC34C2787F68B32928A9FF714C3F457C222(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::OnUpdateLayoutButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_OnUpdateLayoutButtonClick_m5B4BF265B16DD3E333C5233FB1EDF4A834B0AD6A (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m924A4B2071DE3E3B514C00F3EE22847998EF6FFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD7BB035F6F834F8B9E2C45E327315ABA888364A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t64043FA015632E81188D51414F588390CCCBB5D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * V_1 = NULL;
	QNTranscodingLiveStreamingTrack_t94540D56E31AC536AEFD15679C8E5E74121E25BE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// string selectedTrackId = SelectTrackDropdown.options[SelectTrackDropdown.value].text;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_0 = __this->get_SelectTrackDropdown_33();
		NullCheck(L_0);
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_1;
		L_1 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_0, /*hidden argument*/NULL);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_2 = __this->get_SelectTrackDropdown_33();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_4;
		L_4 = List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline(L_1, L_3, /*hidden argument*/List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (selectedTrackId.Equals("-"))
		String_t* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_6, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		// return;
		goto IL_006a;
	}

IL_0034:
	{
		// List<QNTranscodingLiveStreamingTrack> layouts = new List<QNTranscodingLiveStreamingTrack>();
		List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * L_9 = (List_1_t64043FA015632E81188D51414F588390CCCBB5D5 *)il2cpp_codegen_object_new(List_1_t64043FA015632E81188D51414F588390CCCBB5D5_il2cpp_TypeInfo_var);
		List_1__ctor_mD7BB035F6F834F8B9E2C45E327315ABA888364A8(L_9, /*hidden argument*/List_1__ctor_mD7BB035F6F834F8B9E2C45E327315ABA888364A8_RuntimeMethod_var);
		V_1 = L_9;
		// QNTranscodingLiveStreamingTrack layout = new QNTranscodingLiveStreamingTrack();
		il2cpp_codegen_initobj((&V_2), sizeof(QNTranscodingLiveStreamingTrack_t94540D56E31AC536AEFD15679C8E5E74121E25BE ));
		// layout.TrackId = selectedTrackId;
		String_t* L_10 = V_0;
		(&V_2)->set_TrackId_0(L_10);
		// layouts.Add(layout);
		List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * L_11 = V_1;
		QNTranscodingLiveStreamingTrack_t94540D56E31AC536AEFD15679C8E5E74121E25BE  L_12 = V_2;
		NullCheck(L_11);
		List_1_Add_m924A4B2071DE3E3B514C00F3EE22847998EF6FFA(L_11, L_12, /*hidden argument*/List_1_Add_m924A4B2071DE3E3B514C00F3EE22847998EF6FFA_RuntimeMethod_var);
		// OnUpdateLayoutHandler(StreamIdInputField.text, layouts);
		OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * L_13 = __this->get_OnUpdateLayoutHandler_6();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_14 = __this->get_StreamIdInputField_8();
		NullCheck(L_14);
		String_t* L_15;
		L_15 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_14, /*hidden argument*/NULL);
		List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * L_16 = V_1;
		NullCheck(L_13);
		OnUpdateLayoutButtonClickHandler_Invoke_m5E0ED6BDF0E8B78BCA8176D32B2C11B9B407B20B(L_13, L_15, L_16, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::OnRemoveLayoutButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_OnRemoveLayoutButtonClick_m3FED4403BD1551E8C3EC48668664148B13BC3956 (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m924A4B2071DE3E3B514C00F3EE22847998EF6FFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD7BB035F6F834F8B9E2C45E327315ABA888364A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t64043FA015632E81188D51414F588390CCCBB5D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * V_1 = NULL;
	QNTranscodingLiveStreamingTrack_t94540D56E31AC536AEFD15679C8E5E74121E25BE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// string selectedTrackId = SelectTrackDropdown.options[SelectTrackDropdown.value].text;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_0 = __this->get_SelectTrackDropdown_33();
		NullCheck(L_0);
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_1;
		L_1 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_0, /*hidden argument*/NULL);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_2 = __this->get_SelectTrackDropdown_33();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Dropdown_get_value_mFBF47E0C72050C5CB96B8B6D33F41BA2D1368F26(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_4;
		L_4 = List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline(L_1, L_3, /*hidden argument*/List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (selectedTrackId.Equals("-"))
		String_t* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_6, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		// return;
		goto IL_006a;
	}

IL_0034:
	{
		// List<QNTranscodingLiveStreamingTrack> layouts = new List<QNTranscodingLiveStreamingTrack>();
		List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * L_9 = (List_1_t64043FA015632E81188D51414F588390CCCBB5D5 *)il2cpp_codegen_object_new(List_1_t64043FA015632E81188D51414F588390CCCBB5D5_il2cpp_TypeInfo_var);
		List_1__ctor_mD7BB035F6F834F8B9E2C45E327315ABA888364A8(L_9, /*hidden argument*/List_1__ctor_mD7BB035F6F834F8B9E2C45E327315ABA888364A8_RuntimeMethod_var);
		V_1 = L_9;
		// QNTranscodingLiveStreamingTrack layout = new QNTranscodingLiveStreamingTrack();
		il2cpp_codegen_initobj((&V_2), sizeof(QNTranscodingLiveStreamingTrack_t94540D56E31AC536AEFD15679C8E5E74121E25BE ));
		// layout.TrackId = selectedTrackId;
		String_t* L_10 = V_0;
		(&V_2)->set_TrackId_0(L_10);
		// layouts.Add(layout);
		List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * L_11 = V_1;
		QNTranscodingLiveStreamingTrack_t94540D56E31AC536AEFD15679C8E5E74121E25BE  L_12 = V_2;
		NullCheck(L_11);
		List_1_Add_m924A4B2071DE3E3B514C00F3EE22847998EF6FFA(L_11, L_12, /*hidden argument*/List_1_Add_m924A4B2071DE3E3B514C00F3EE22847998EF6FFA_RuntimeMethod_var);
		// OnRemoveLayoutHandler(StreamIdInputField.text, layouts);
		OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * L_13 = __this->get_OnRemoveLayoutHandler_7();
		InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * L_14 = __this->get_StreamIdInputField_8();
		NullCheck(L_14);
		String_t* L_15;
		L_15 = InputField_get_text_m15D0C784A4A104390610325B02216FC2A6F1077C(L_14, /*hidden argument*/NULL);
		List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * L_16 = V_1;
		NullCheck(L_13);
		OnRemoveLayoutButtonClickHandler_Invoke_m68167B49FAEC4A4E6240CB58170E1A49C5614898(L_13, L_15, L_16, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::UpdateUserInfo(System.Collections.Generic.List`1<qnrtc.QNLocalTrack>,System.Collections.Generic.List`1<qnrtc.QNRemoteUser>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_UpdateUserInfo_m92A5056E0C32A7C187EF2684F81811A1B6EF68FA (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E * ___localTracks0, List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6 * ___remoteUsers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mED59F97035E345E8002F6D93ECFECE9951826ED3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m425604D2739C474CBA676076F44F5063BD2AAB53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m3F404F41E893885498C2323ED9494138BC74C93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m509AD172D60A88DCD619ACAB5B30CDFF87D8251C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m567511193E958A85553B6FD293F29AEB3CE77787_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7CDF85738533C50CE7BEBAF8D8B7F513B88D587D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC64A3087CF95F5E75C819788C5EE67AB1C86A7C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m190544484A48339ACEDE62C253203E1FC290E07E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m58E6B27644EB1B3E426FEA2A6467475FD0062EA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mC014308FDBBE80C5C817F077AB549A409D0A9AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB8FA6E6D670047E9722562DB1FC66E8C60E1631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0DF8252E6DEED7F95DA26E68E0AC1D77F01F7C76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8CE37972C881E04537AC2B2A1F032287BBB513BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9C6EF56836A8AC40883493E188F555E56F4D324C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF5B301818F6809411D542653BE2B429C19951CC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m86200A8B43D292421BC3B199566D853D3CCA5469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1AAC23DA0423523B66518FFCF418D97F6D9C66FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6840C1FCE31BA67AE1AD6C97C5D5E58E0151CA33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF5D2EA640AC107EE2975A91E72F793EC3E1A813A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1130BA06F0639CDBFD654EEF92750660961B0B23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2235F330993765A44161830D01C4BF0EE83927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF94C99CA8A7C06B0F4229E3D942E4E0A44C8F270_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNTrack_tCBB63F01DA410C442F9E1D5A46DA32815F8C9516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral002FA105EC4D27973F317DAEE7979F11ECC32897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B9BE6C16D64724D521E1E4EDFADCBD3F3B3D30D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F4330F2354B690F80985F8452721328765B2266);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46E7D1F61DCF4E1B662DDCA7492F5BE6C811BC05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF664BC362F785467AF01E143BB02490C507AC2DB);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * V_0 = NULL;
	bool V_1 = false;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_2 = NULL;
	Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	String_t* V_5 = NULL;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0  V_9;
	memset((&V_9), 0, sizeof(V_9));
	QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10  V_10;
	memset((&V_10), 0, sizeof(V_10));
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_11 = NULL;
	Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B  V_12;
	memset((&V_12), 0, sizeof(V_12));
	RuntimeObject* V_13 = NULL;
	String_t* V_14 = NULL;
	bool V_15 = false;
	Enumerator_t165535373A2C041075C388ED21DF73971A40816A  V_16;
	memset((&V_16), 0, sizeof(V_16));
	KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  V_17;
	memset((&V_17), 0, sizeof(V_17));
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * V_18 = NULL;
	bool V_19 = false;
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * V_20 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;
	{
		// userInfoList.Clear();
		Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * L_0 = __this->get_userInfoList_36();
		NullCheck(L_0);
		Dictionary_2_Clear_m425604D2739C474CBA676076F44F5063BD2AAB53(L_0, /*hidden argument*/Dictionary_2_Clear_m425604D2739C474CBA676076F44F5063BD2AAB53_RuntimeMethod_var);
		// List<Dropdown.OptionData> options = new List<Dropdown.OptionData>();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_1 = (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *)il2cpp_codegen_object_new(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_il2cpp_TypeInfo_var);
		List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD(L_1, /*hidden argument*/List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD_RuntimeMethod_var);
		V_0 = L_1;
		// if (localTracks.Count > 0)
		List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E * L_2 = ___localTracks0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mF94C99CA8A7C06B0F4229E3D942E4E0A44C8F270_inline(L_2, /*hidden argument*/List_1_get_Count_mF94C99CA8A7C06B0F4229E3D942E4E0A44C8F270_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00cb;
		}
	}
	{
		// List<string> localTrackIdList = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_5, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		V_2 = L_5;
		// foreach (QNLocalTrack localTrack in localTracks)
		List_1_t78D35A3B7F17D2AE2368AE5748735A62F58DD97E * L_6 = ___localTracks0;
		NullCheck(L_6);
		Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E  L_7;
		L_7 = List_1_GetEnumerator_m6840C1FCE31BA67AE1AD6C97C5D5E58E0151CA33(L_6, /*hidden argument*/List_1_GetEnumerator_m6840C1FCE31BA67AE1AD6C97C5D5E58E0151CA33_RuntimeMethod_var);
		V_3 = L_7;
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007a;
		}

IL_0034:
		{
			// foreach (QNLocalTrack localTrack in localTracks)
			RuntimeObject* L_8;
			L_8 = Enumerator_get_Current_m9C6EF56836A8AC40883493E188F555E56F4D324C_inline((Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E *)(&V_3), /*hidden argument*/Enumerator_get_Current_m9C6EF56836A8AC40883493E188F555E56F4D324C_RuntimeMethod_var);
			V_4 = L_8;
			// string trackId = localTrack.GetTrackID();
			RuntimeObject* L_9 = V_4;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String qnrtc.QNTrack::GetTrackID() */, QNTrack_tCBB63F01DA410C442F9E1D5A46DA32815F8C9516_il2cpp_TypeInfo_var, L_9);
			V_5 = L_10;
			// Debug.Log("published trackId: " + trackId);
			String_t* L_11 = V_5;
			String_t* L_12;
			L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1F4330F2354B690F80985F8452721328765B2266, L_11, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
			// if (!trackId.Equals(""))
			String_t* L_13 = V_5;
			NullCheck(L_13);
			bool L_14;
			L_14 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
			V_6 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
			bool L_15 = V_6;
			if (!L_15)
			{
				goto IL_0079;
			}
		}

IL_006e:
		{
			// localTrackIdList.Add(trackId);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16 = V_2;
			String_t* L_17 = V_5;
			NullCheck(L_16);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_16, L_17, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_0079:
		{
		}

IL_007a:
		{
			// foreach (QNLocalTrack localTrack in localTracks)
			bool L_18;
			L_18 = Enumerator_MoveNext_mC014308FDBBE80C5C817F077AB549A409D0A9AE1((Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E *)(&V_3), /*hidden argument*/Enumerator_MoveNext_mC014308FDBBE80C5C817F077AB549A409D0A9AE1_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0034;
			}
		}

IL_0083:
		{
			IL2CPP_LEAVE(0x94, FINALLY_0085);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0085;
	}

FINALLY_0085:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m567511193E958A85553B6FD293F29AEB3CE77787((Enumerator_tFA8F790F18D421BBCE7C678198C9A0F418FA680E *)(&V_3), /*hidden argument*/Enumerator_Dispose_m567511193E958A85553B6FD293F29AEB3CE77787_RuntimeMethod_var);
		IL2CPP_END_FINALLY(133)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(133)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x94, IL_0094)
	}

IL_0094:
	{
		// Debug.Log("userInfoList.Add: " + localTrackIdList.Count);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_19 = V_2;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_19, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		V_7 = L_20;
		String_t* L_21;
		L_21 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_7), /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral46E7D1F61DCF4E1B662DDCA7492F5BE6C811BC05, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_22, /*hidden argument*/NULL);
		// userInfoList.Add(Config.GetInstance().UserId, localTrackIdList);
		Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * L_23 = __this->get_userInfoList_36();
		IL2CPP_RUNTIME_CLASS_INIT(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5_il2cpp_TypeInfo_var);
		Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5 * L_24;
		L_24 = Config_GetInstance_m4ADF5B95DB3B635D960136F2BED8FBD36514A7DF(/*hidden argument*/NULL);
		NullCheck(L_24);
		String_t* L_25 = L_24->get_UserId_4();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_26 = V_2;
		NullCheck(L_23);
		Dictionary_2_Add_mED59F97035E345E8002F6D93ECFECE9951826ED3(L_23, L_25, L_26, /*hidden argument*/Dictionary_2_Add_mED59F97035E345E8002F6D93ECFECE9951826ED3_RuntimeMethod_var);
	}

IL_00cb:
	{
		// if (remoteUsers.Count > 0)
		List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6 * L_27 = ___remoteUsers1;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m1130BA06F0639CDBFD654EEF92750660961B0B23_inline(L_27, /*hidden argument*/List_1_get_Count_m1130BA06F0639CDBFD654EEF92750660961B0B23_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_28) > ((int32_t)0))? 1 : 0);
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_01ba;
		}
	}
	{
		// foreach (QNRemoteUser remoteUser in remoteUsers)
		List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6 * L_30 = ___remoteUsers1;
		NullCheck(L_30);
		Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0  L_31;
		L_31 = List_1_GetEnumerator_m1AAC23DA0423523B66518FFCF418D97F6D9C66FA(L_30, /*hidden argument*/List_1_GetEnumerator_m1AAC23DA0423523B66518FFCF418D97F6D9C66FA_RuntimeMethod_var);
		V_9 = L_31;
	}

IL_00e7:
	try
	{ // begin try (depth: 1)
		{
			goto IL_019c;
		}

IL_00ec:
		{
			// foreach (QNRemoteUser remoteUser in remoteUsers)
			QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10  L_32;
			L_32 = Enumerator_get_Current_m8CE37972C881E04537AC2B2A1F032287BBB513BC_inline((Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0 *)(&V_9), /*hidden argument*/Enumerator_get_Current_m8CE37972C881E04537AC2B2A1F032287BBB513BC_RuntimeMethod_var);
			V_10 = L_32;
			// Debug.Log("remoteUserId: " + remoteUser.UserId);
			QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10  L_33 = V_10;
			String_t* L_34 = L_33.get_UserId_0();
			String_t* L_35;
			L_35 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF664BC362F785467AF01E143BB02490C507AC2DB, L_34, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_35, /*hidden argument*/NULL);
			// List<string> remoteTrackIdList = new List<string>();
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_36 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
			List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_36, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
			V_11 = L_36;
			// foreach (QNRemoteTrack remoteTrack in remoteUser.RemoteAudioTrackList)
			QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10  L_37 = V_10;
			List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * L_38 = L_37.get_RemoteAudioTrackList_2();
			NullCheck(L_38);
			Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B  L_39;
			L_39 = List_1_GetEnumerator_mF5D2EA640AC107EE2975A91E72F793EC3E1A813A(L_38, /*hidden argument*/List_1_GetEnumerator_mF5D2EA640AC107EE2975A91E72F793EC3E1A813A_RuntimeMethod_var);
			V_12 = L_39;
		}

IL_0123:
		try
		{ // begin try (depth: 2)
			{
				goto IL_016c;
			}

IL_0125:
			{
				// foreach (QNRemoteTrack remoteTrack in remoteUser.RemoteAudioTrackList)
				RuntimeObject* L_40;
				L_40 = Enumerator_get_Current_mF5B301818F6809411D542653BE2B429C19951CC3_inline((Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B *)(&V_12), /*hidden argument*/Enumerator_get_Current_mF5B301818F6809411D542653BE2B429C19951CC3_RuntimeMethod_var);
				V_13 = L_40;
				// string trackId = remoteTrack.GetTrackID();
				RuntimeObject* L_41 = V_13;
				NullCheck(L_41);
				String_t* L_42;
				L_42 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String qnrtc.QNTrack::GetTrackID() */, QNTrack_tCBB63F01DA410C442F9E1D5A46DA32815F8C9516_il2cpp_TypeInfo_var, L_41);
				V_14 = L_42;
				// Debug.Log("remoteTrackId: " + trackId);
				String_t* L_43 = V_14;
				String_t* L_44;
				L_44 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral002FA105EC4D27973F317DAEE7979F11ECC32897, L_43, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
				Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_44, /*hidden argument*/NULL);
				// if (!trackId.Equals(""))
				String_t* L_45 = V_14;
				NullCheck(L_45);
				bool L_46;
				L_46 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_45, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
				V_15 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
				bool L_47 = V_15;
				if (!L_47)
				{
					goto IL_016b;
				}
			}

IL_015f:
			{
				// remoteTrackIdList.Add(trackId);
				List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_48 = V_11;
				String_t* L_49 = V_14;
				NullCheck(L_48);
				List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_48, L_49, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
			}

IL_016b:
			{
			}

IL_016c:
			{
				// foreach (QNRemoteTrack remoteTrack in remoteUser.RemoteAudioTrackList)
				bool L_50;
				L_50 = Enumerator_MoveNext_mDB8FA6E6D670047E9722562DB1FC66E8C60E1631((Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B *)(&V_12), /*hidden argument*/Enumerator_MoveNext_mDB8FA6E6D670047E9722562DB1FC66E8C60E1631_RuntimeMethod_var);
				if (L_50)
				{
					goto IL_0125;
				}
			}

IL_0175:
			{
				IL2CPP_LEAVE(0x186, FINALLY_0177);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0177;
		}

FINALLY_0177:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m7CDF85738533C50CE7BEBAF8D8B7F513B88D587D((Enumerator_t53272DC5F0A2D7128DC914CA12AC812C6027715B *)(&V_12), /*hidden argument*/Enumerator_Dispose_m7CDF85738533C50CE7BEBAF8D8B7F513B88D587D_RuntimeMethod_var);
			IL2CPP_END_FINALLY(375)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(375)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x186, IL_0186)
		}

IL_0186:
		{
			// userInfoList.Add(remoteUser.UserId, remoteTrackIdList);
			Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * L_51 = __this->get_userInfoList_36();
			QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10  L_52 = V_10;
			String_t* L_53 = L_52.get_UserId_0();
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_54 = V_11;
			NullCheck(L_51);
			Dictionary_2_Add_mED59F97035E345E8002F6D93ECFECE9951826ED3(L_51, L_53, L_54, /*hidden argument*/Dictionary_2_Add_mED59F97035E345E8002F6D93ECFECE9951826ED3_RuntimeMethod_var);
		}

IL_019c:
		{
			// foreach (QNRemoteUser remoteUser in remoteUsers)
			bool L_55;
			L_55 = Enumerator_MoveNext_m58E6B27644EB1B3E426FEA2A6467475FD0062EA3((Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_m58E6B27644EB1B3E426FEA2A6467475FD0062EA3_RuntimeMethod_var);
			if (L_55)
			{
				goto IL_00ec;
			}
		}

IL_01a8:
		{
			IL2CPP_LEAVE(0x1B9, FINALLY_01aa);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01aa;
	}

FINALLY_01aa:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m509AD172D60A88DCD619ACAB5B30CDFF87D8251C((Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0 *)(&V_9), /*hidden argument*/Enumerator_Dispose_m509AD172D60A88DCD619ACAB5B30CDFF87D8251C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(426)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(426)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1B9, IL_01b9)
	}

IL_01b9:
	{
	}

IL_01ba:
	{
		// foreach (var userInfo in userInfoList)
		Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * L_56 = __this->get_userInfoList_36();
		NullCheck(L_56);
		Enumerator_t165535373A2C041075C388ED21DF73971A40816A  L_57;
		L_57 = Dictionary_2_GetEnumerator_m3F404F41E893885498C2323ED9494138BC74C93F(L_56, /*hidden argument*/Dictionary_2_GetEnumerator_m3F404F41E893885498C2323ED9494138BC74C93F_RuntimeMethod_var);
		V_16 = L_57;
	}

IL_01c8:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0203;
		}

IL_01ca:
		{
			// foreach (var userInfo in userInfoList)
			KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53  L_58;
			L_58 = Enumerator_get_Current_m0DF8252E6DEED7F95DA26E68E0AC1D77F01F7C76_inline((Enumerator_t165535373A2C041075C388ED21DF73971A40816A *)(&V_16), /*hidden argument*/Enumerator_get_Current_m0DF8252E6DEED7F95DA26E68E0AC1D77F01F7C76_RuntimeMethod_var);
			V_17 = L_58;
			// Debug.Log("Key: " + userInfo.Key);
			String_t* L_59;
			L_59 = KeyValuePair_2_get_Key_m86200A8B43D292421BC3B199566D853D3CCA5469_inline((KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 *)(&V_17), /*hidden argument*/KeyValuePair_2_get_Key_m86200A8B43D292421BC3B199566D853D3CCA5469_RuntimeMethod_var);
			String_t* L_60;
			L_60 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B9BE6C16D64724D521E1E4EDFADCBD3F3B3D30D, L_59, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_60, /*hidden argument*/NULL);
			// Dropdown.OptionData option = new Dropdown.OptionData(userInfo.Key);
			String_t* L_61;
			L_61 = KeyValuePair_2_get_Key_m86200A8B43D292421BC3B199566D853D3CCA5469_inline((KeyValuePair_2_t51A34E5FB59AD087543207A2587CEF7C2B432E53 *)(&V_17), /*hidden argument*/KeyValuePair_2_get_Key_m86200A8B43D292421BC3B199566D853D3CCA5469_RuntimeMethod_var);
			OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_62 = (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 *)il2cpp_codegen_object_new(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var);
			OptionData__ctor_m5AF14BD8BBF6118AC51A7A9A38AE3AB2DE3C2675(L_62, L_61, /*hidden argument*/NULL);
			V_18 = L_62;
			// options.Add(option);
			List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_63 = V_0;
			OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_64 = V_18;
			NullCheck(L_63);
			List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC(L_63, L_64, /*hidden argument*/List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var);
		}

IL_0203:
		{
			// foreach (var userInfo in userInfoList)
			bool L_65;
			L_65 = Enumerator_MoveNext_m190544484A48339ACEDE62C253203E1FC290E07E((Enumerator_t165535373A2C041075C388ED21DF73971A40816A *)(&V_16), /*hidden argument*/Enumerator_MoveNext_m190544484A48339ACEDE62C253203E1FC290E07E_RuntimeMethod_var);
			if (L_65)
			{
				goto IL_01ca;
			}
		}

IL_020c:
		{
			IL2CPP_LEAVE(0x21D, FINALLY_020e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_020e;
	}

FINALLY_020e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC64A3087CF95F5E75C819788C5EE67AB1C86A7C5((Enumerator_t165535373A2C041075C388ED21DF73971A40816A *)(&V_16), /*hidden argument*/Enumerator_Dispose_mC64A3087CF95F5E75C819788C5EE67AB1C86A7C5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(526)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(526)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x21D, IL_021d)
	}

IL_021d:
	{
		// if (0 == options.Count)
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_66 = V_0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = List_1_get_Count_mE2235F330993765A44161830D01C4BF0EE83927A_inline(L_66, /*hidden argument*/List_1_get_Count_mE2235F330993765A44161830D01C4BF0EE83927A_RuntimeMethod_var);
		V_19 = (bool)((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_19;
		if (!L_68)
		{
			goto IL_0243;
		}
	}
	{
		// Dropdown.OptionData option = new Dropdown.OptionData("-");
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_69 = (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 *)il2cpp_codegen_object_new(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var);
		OptionData__ctor_m5AF14BD8BBF6118AC51A7A9A38AE3AB2DE3C2675(L_69, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, /*hidden argument*/NULL);
		V_20 = L_69;
		// options.Add(option);
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_70 = V_0;
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_71 = V_20;
		NullCheck(L_70);
		List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC(L_70, L_71, /*hidden argument*/List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var);
	}

IL_0243:
	{
		// SelectUserDropdown.options = options;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_72 = __this->get_SelectUserDropdown_32();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_73 = V_0;
		NullCheck(L_72);
		Dropdown_set_options_m64FE183D8C988AC643870012A98F3095E2C2C14B(L_72, L_73, /*hidden argument*/NULL);
		// OnSelectUserDropdownValueChanged(0);
		TranscodingLiveView_OnSelectUserDropdownValueChanged_m98D4D218055088FCB3F811DEF0CD8FA3E7442C18(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::ClearUserInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView_ClearUserInfo_mE65A9564F96239458759AC4E798013D8D45DB572 (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m425604D2739C474CBA676076F44F5063BD2AAB53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * V_0 = NULL;
	{
		// userInfoList.Clear();
		Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * L_0 = __this->get_userInfoList_36();
		NullCheck(L_0);
		Dictionary_2_Clear_m425604D2739C474CBA676076F44F5063BD2AAB53(L_0, /*hidden argument*/Dictionary_2_Clear_m425604D2739C474CBA676076F44F5063BD2AAB53_RuntimeMethod_var);
		// Dropdown.OptionData option = new Dropdown.OptionData("-");
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_1 = (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 *)il2cpp_codegen_object_new(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var);
		OptionData__ctor_m5AF14BD8BBF6118AC51A7A9A38AE3AB2DE3C2675(L_1, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, /*hidden argument*/NULL);
		V_0 = L_1;
		// SelectUserDropdown.options = new List<Dropdown.OptionData>();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_2 = __this->get_SelectUserDropdown_32();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_3 = (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *)il2cpp_codegen_object_new(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_il2cpp_TypeInfo_var);
		List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD(L_3, /*hidden argument*/List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD_RuntimeMethod_var);
		NullCheck(L_2);
		Dropdown_set_options_m64FE183D8C988AC643870012A98F3095E2C2C14B(L_2, L_3, /*hidden argument*/NULL);
		// SelectUserDropdown.options.Add(option);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_4 = __this->get_SelectUserDropdown_32();
		NullCheck(L_4);
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_5;
		L_5 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_4, /*hidden argument*/NULL);
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC(L_5, L_6, /*hidden argument*/List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var);
		// SelectTrackDropdown.options = new List<Dropdown.OptionData>();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_7 = __this->get_SelectTrackDropdown_33();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_8 = (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *)il2cpp_codegen_object_new(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_il2cpp_TypeInfo_var);
		List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD(L_8, /*hidden argument*/List_1__ctor_m37D32197A325BBDB71BB482DB0F77094E739CBDD_RuntimeMethod_var);
		NullCheck(L_7);
		Dropdown_set_options_m64FE183D8C988AC643870012A98F3095E2C2C14B(L_7, L_8, /*hidden argument*/NULL);
		// SelectTrackDropdown.options.Add(option);
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_9 = __this->get_SelectTrackDropdown_33();
		NullCheck(L_9);
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_10;
		L_10 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_9, /*hidden argument*/NULL);
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_11 = V_0;
		NullCheck(L_10);
		List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC(L_10, L_11, /*hidden argument*/List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.TranscodingLiveView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranscodingLiveView__ctor_m1BCD40E9AF817C1951AD6DE7B0B713FEE1FFBB8F (TranscodingLiveView_t93772421B64AB03B08BD02530786617DCC966B38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4BF4B650B2E69D5D783B9AE68644355C271BE54C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<string, List<string>> userInfoList = new Dictionary<string, List<string>>();
		Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 * L_0 = (Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086 *)il2cpp_codegen_object_new(Dictionary_2_tEB5D55E42E5DA520002C808F5126BAC54EE05086_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4BF4B650B2E69D5D783B9AE68644355C271BE54C(L_0, /*hidden argument*/Dictionary_2__ctor_m4BF4B650B2E69D5D783B9AE68644355C271BE54C_RuntimeMethod_var);
		__this->set_userInfoList_36(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void QNRTCUnityDemo.UserTableView::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableView_Start_m532F8C27C3220217C5364F8B019A63326991686C (UserTableView_tEAFEF96CEAE936FE20CAD291181817909AA9FF03 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.UserTableView::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableView_Update_m23B2663EA57E573F4FD329C059F7007E4A685749 (UserTableView_tEAFEF96CEAE936FE20CAD291181817909AA9FF03 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.UserTableView::AddTrack(qnrtc.QNTrack,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableView_AddTrack_mEBF9FBBDB303A7A1AD2765792EA5FE30505A70FC (UserTableView_tEAFEF96CEAE936FE20CAD291181817909AA9FF03 * __this, RuntimeObject* ___track0, bool ___isLocal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m655A72FF4001D0349FFDEC9C6DB1155D017DCB0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m555A0F300B3B327881B35FD27F7CFD17D8ED3F59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mABF02AAAE3E781AE769DF5D1A39EC5477286ED01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473_m7CD09D5C7A35ABC908FFD4EE388E8D310C02145D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBEABE2989AF74E7AE6A19E73FE0F4CC7884BBCB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE0A886DC7F076DD1BC18417BE08178E0A2A18BE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * V_1 = NULL;
	Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (UserTableViewCell userCell in userCells)
		List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * L_0 = __this->get_userCells_7();
		NullCheck(L_0);
		Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E  L_1;
		L_1 = List_1_GetEnumerator_mE0A886DC7F076DD1BC18417BE08178E0A2A18BE5(L_0, /*hidden argument*/List_1_GetEnumerator_mE0A886DC7F076DD1BC18417BE08178E0A2A18BE5_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_0010:
		{
			// foreach (UserTableViewCell userCell in userCells)
			UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_2;
			L_2 = Enumerator_get_Current_mABF02AAAE3E781AE769DF5D1A39EC5477286ED01_inline((Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E *)(&V_2), /*hidden argument*/Enumerator_get_Current_mABF02AAAE3E781AE769DF5D1A39EC5477286ED01_RuntimeMethod_var);
			V_3 = L_2;
			// if (userCell.GetCurrentTrack() == track) return;
			UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_3 = V_3;
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = UserTableViewCell_GetCurrentTrack_m04571C31078F209A86CEEB083BDB38985B1C3502(L_3, /*hidden argument*/NULL);
			RuntimeObject* L_5 = ___track0;
			V_4 = (bool)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)L_5))? 1 : 0);
			bool L_6 = V_4;
			if (!L_6)
			{
				goto IL_002a;
			}
		}

IL_0028:
		{
			// if (userCell.GetCurrentTrack() == track) return;
			IL2CPP_LEAVE(0x86, FINALLY_0036);
		}

IL_002a:
		{
		}

IL_002b:
		{
			// foreach (UserTableViewCell userCell in userCells)
			bool L_7;
			L_7 = Enumerator_MoveNext_m555A0F300B3B327881B35FD27F7CFD17D8ED3F59((Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m555A0F300B3B327881B35FD27F7CFD17D8ED3F59_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0010;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x45, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m655A72FF4001D0349FFDEC9C6DB1155D017DCB0C((Enumerator_tB8F1085CB459FA91B1224C7AFD21C8369433883E *)(&V_2), /*hidden argument*/Enumerator_Dispose_m655A72FF4001D0349FFDEC9C6DB1155D017DCB0C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(54)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x86, IL_0086)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		// GameObject cell = Instantiate(tableViewCell);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_tableViewCell_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_0 = L_9;
		// cell.transform.SetParent(contentView.transform, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_0;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_12 = __this->get_contentView_5();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_11, L_13, (bool)0, /*hidden argument*/NULL);
		// UserTableViewCell tableViewCellScript = cell.GetComponent<UserTableViewCell>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_0;
		NullCheck(L_14);
		UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_15;
		L_15 = GameObject_GetComponent_TisUserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473_m7CD09D5C7A35ABC908FFD4EE388E8D310C02145D(L_14, /*hidden argument*/GameObject_GetComponent_TisUserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473_m7CD09D5C7A35ABC908FFD4EE388E8D310C02145D_RuntimeMethod_var);
		V_1 = L_15;
		// tableViewCellScript.Initialize(track, isLocal);
		UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_16 = V_1;
		RuntimeObject* L_17 = ___track0;
		bool L_18 = ___isLocal1;
		NullCheck(L_16);
		UserTableViewCell_Initialize_mE873B1F0E926F6646AB01D7D6824A4F17957D5E5(L_16, L_17, L_18, /*hidden argument*/NULL);
		// userCells.Add(tableViewCellScript);
		List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * L_19 = __this->get_userCells_7();
		UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_20 = V_1;
		NullCheck(L_19);
		List_1_Add_mBEABE2989AF74E7AE6A19E73FE0F4CC7884BBCB0(L_19, L_20, /*hidden argument*/List_1_Add_mBEABE2989AF74E7AE6A19E73FE0F4CC7884BBCB0_RuntimeMethod_var);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.UserTableView::RemoveTrack(qnrtc.QNTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableView_RemoveTrack_m4FE2A3BED3406E92162975C1E5CDEF92D57B37AB (UserTableView_tEAFEF96CEAE936FE20CAD291181817909AA9FF03 * __this, RuntimeObject* ___track0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m112EE5E24B5FAC36376ADA45530FE7C1F72021E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9F9E83010C430850E4D42972632054BBC1474D4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4DB893F1E9539A119FFA46CDDCB923AB40B5332D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = 0; i < userCells.Count; i++)
		V_0 = 0;
		goto IL_0040;
	}

IL_0005:
	{
		// UserTableViewCell userCell = userCells[i];
		List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * L_0 = __this->get_userCells_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_2;
		L_2 = List_1_get_Item_m4DB893F1E9539A119FFA46CDDCB923AB40B5332D_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m4DB893F1E9539A119FFA46CDDCB923AB40B5332D_RuntimeMethod_var);
		V_1 = L_2;
		// if (userCell.GetCurrentTrack() == track)
		UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_3 = V_1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = UserTableViewCell_GetCurrentTrack_m04571C31078F209A86CEEB083BDB38985B1C3502(L_3, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___track0;
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// GameObject.Destroy(userCell.gameObject);
		UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_7 = V_1;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
		// userCells.Remove(userCell);
		List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * L_9 = __this->get_userCells_7();
		UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_10 = V_1;
		NullCheck(L_9);
		bool L_11;
		L_11 = List_1_Remove_m112EE5E24B5FAC36376ADA45530FE7C1F72021E5(L_9, L_10, /*hidden argument*/List_1_Remove_m112EE5E24B5FAC36376ADA45530FE7C1F72021E5_RuntimeMethod_var);
	}

IL_003b:
	{
		// for (int i = 0; i < userCells.Count; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0040:
	{
		// for (int i = 0; i < userCells.Count; i++)
		int32_t L_13 = V_0;
		List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * L_14 = __this->get_userCells_7();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m9F9E83010C430850E4D42972632054BBC1474D4A_inline(L_14, /*hidden argument*/List_1_get_Count_m9F9E83010C430850E4D42972632054BBC1474D4A_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.UserTableView::RemoveAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableView_RemoveAll_mB56F334D32883ECF46A8C9B44566AF6AC86BE209 (UserTableView_tEAFEF96CEAE936FE20CAD291181817909AA9FF03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m112EE5E24B5FAC36376ADA45530FE7C1F72021E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9F9E83010C430850E4D42972632054BBC1474D4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4DB893F1E9539A119FFA46CDDCB923AB40B5332D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * V_1 = NULL;
	bool V_2 = false;
	{
		// for (int i = 0; i < userCells.Count; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_0005:
	{
		// UserTableViewCell userCell = userCells[i];
		List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * L_0 = __this->get_userCells_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_2;
		L_2 = List_1_get_Item_m4DB893F1E9539A119FFA46CDDCB923AB40B5332D_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m4DB893F1E9539A119FFA46CDDCB923AB40B5332D_RuntimeMethod_var);
		V_1 = L_2;
		// GameObject.Destroy(userCell.gameObject);
		UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_3 = V_1;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// userCells.Remove(userCell);
		List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * L_5 = __this->get_userCells_7();
		UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_6 = V_1;
		NullCheck(L_5);
		bool L_7;
		L_7 = List_1_Remove_m112EE5E24B5FAC36376ADA45530FE7C1F72021E5(L_5, L_6, /*hidden argument*/List_1_Remove_m112EE5E24B5FAC36376ADA45530FE7C1F72021E5_RuntimeMethod_var);
		// for (int i = 0; i < userCells.Count; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0031:
	{
		// for (int i = 0; i < userCells.Count; i++)
		int32_t L_9 = V_0;
		List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * L_10 = __this->get_userCells_7();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m9F9E83010C430850E4D42972632054BBC1474D4A_inline(L_10, /*hidden argument*/List_1_get_Count_m9F9E83010C430850E4D42972632054BBC1474D4A_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.UserTableView::RemoveRemote()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableView_RemoveRemote_m71E97DB806726B294DF8D497873A8B67166452C4 (UserTableView_tEAFEF96CEAE936FE20CAD291181817909AA9FF03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m112EE5E24B5FAC36376ADA45530FE7C1F72021E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9F9E83010C430850E4D42972632054BBC1474D4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4DB893F1E9539A119FFA46CDDCB923AB40B5332D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRemoteTrack_t54EBE387AE6D1BE3DF7A34C50FE0DE193FAB542E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = 0; i < userCells.Count; i++)
		V_0 = 0;
		goto IL_0045;
	}

IL_0005:
	{
		// UserTableViewCell userCell = userCells[i];
		List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * L_0 = __this->get_userCells_7();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_2;
		L_2 = List_1_get_Item_m4DB893F1E9539A119FFA46CDDCB923AB40B5332D_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m4DB893F1E9539A119FFA46CDDCB923AB40B5332D_RuntimeMethod_var);
		V_1 = L_2;
		// if (userCell.GetCurrentTrack() is QNRemoteTrack)
		UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_3 = V_1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = UserTableViewCell_GetCurrentTrack_m04571C31078F209A86CEEB083BDB38985B1C3502(L_3, /*hidden argument*/NULL);
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, QNRemoteTrack_t54EBE387AE6D1BE3DF7A34C50FE0DE193FAB542E_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// GameObject.Destroy(userCell.gameObject);
		UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_7, /*hidden argument*/NULL);
		// userCells.Remove(userCell);
		List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * L_8 = __this->get_userCells_7();
		UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Remove_m112EE5E24B5FAC36376ADA45530FE7C1F72021E5(L_8, L_9, /*hidden argument*/List_1_Remove_m112EE5E24B5FAC36376ADA45530FE7C1F72021E5_RuntimeMethod_var);
	}

IL_0040:
	{
		// for (int i = 0; i < userCells.Count; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0045:
	{
		// for (int i = 0; i < userCells.Count; i++)
		int32_t L_12 = V_0;
		List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * L_13 = __this->get_userCells_7();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m9F9E83010C430850E4D42972632054BBC1474D4A_inline(L_13, /*hidden argument*/List_1_get_Count_m9F9E83010C430850E4D42972632054BBC1474D4A_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.UserTableView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableView__ctor_m78EA06C34C47B8124D1E074D54D1FE014029DF6E (UserTableView_tEAFEF96CEAE936FE20CAD291181817909AA9FF03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m14958CB962C5DF9EC5F177B527E7004E3C40857D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<UserTableViewCell> userCells = new List<UserTableViewCell>();
		List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B * L_0 = (List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B *)il2cpp_codegen_object_new(List_1_tAA19D893CBD459D1AF3353C7FD9FABE0B72A556B_il2cpp_TypeInfo_var);
		List_1__ctor_m14958CB962C5DF9EC5F177B527E7004E3C40857D(L_0, /*hidden argument*/List_1__ctor_m14958CB962C5DF9EC5F177B527E7004E3C40857D_RuntimeMethod_var);
		__this->set_userCells_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void QNRTCUnityDemo.UserTableViewCell::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableViewCell_Start_m2E67F7A6E5A7D9CD4406BED50AAD538E553037B2 (UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.UserTableViewCell::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableViewCell_Update_mFCC300099760D2C3D8DFADCB42870140EF709F61 (UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// timerInterval -= Time.deltaTime;
		float L_0 = __this->get_timerInterval_13();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timerInterval_13(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (timerInterval <= 0)
		float L_2 = __this->get_timerInterval_13();
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		// UpdateTrackInfo();
		UserTableViewCell_UpdateTrackInfo_mC4C68EA27ED71E944ED08F34D920BCE73B022DEF(__this, /*hidden argument*/NULL);
		// timerInterval = 1.0f;
		__this->set_timerInterval_13((1.0f));
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.UserTableViewCell::Initialize(qnrtc.QNTrack,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableViewCell_Initialize_mE873B1F0E926F6646AB01D7D6824A4F17957D5E5 (UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * __this, RuntimeObject* ___track0, bool ___isLocal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNTrack_tCBB63F01DA410C442F9E1D5A46DA32815F8C9516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D49C5F8F138498710654AF049AD55DA907A2575);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9DAD52CE6B8B3819DC538FE3CF1BDBA1CDA215A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// this.track = track;
		RuntimeObject* L_0 = ___track0;
		__this->set_track_11(L_0);
		// this.isLocal = isLocal;
		bool L_1 = ___isLocal1;
		__this->set_isLocal_12(L_1);
		// if (isLocal)
		bool L_2 = ___isLocal1;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0073;
		}
	}
	{
		// TrackKindText.text = "Local Audio Track";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_TrackKindText_4();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralF9DAD52CE6B8B3819DC538FE3CF1BDBA1CDA215A);
		// UserIDText.text = Config.GetInstance().UserId;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_UserIDText_5();
		IL2CPP_RUNTIME_CLASS_INIT(Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5_il2cpp_TypeInfo_var);
		Config_t1840F6B4F063667FBA4F4F9BE11BD7C227A537A5 * L_6;
		L_6 = Config_GetInstance_m4ADF5B95DB3B635D960136F2BED8FBD36514A7DF(/*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = L_6->get_UserId_4();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// TrackIDText.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_TrackIDText_6();
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// TagText.text = track.GetTag();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_TagText_7();
		RuntimeObject* L_10 = ___track0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String qnrtc.QNTrack::GetTag() */, QNTrack_tCBB63F01DA410C442F9E1D5A46DA32815F8C9516_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
		// VolumeLevelText.text = "0";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_VolumeLevelText_8();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		goto IL_00cd;
	}

IL_0073:
	{
		// TrackKindText.text = "Remote Audio Track";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_TrackKindText_4();
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteral7D49C5F8F138498710654AF049AD55DA907A2575);
		// UserIDText.text = track.GetUserID();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get_UserIDText_5();
		RuntimeObject* L_15 = ___track0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String qnrtc.QNTrack::GetUserID() */, QNTrack_tCBB63F01DA410C442F9E1D5A46DA32815F8C9516_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
		// TrackIDText.text = track.GetTrackID();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = __this->get_TrackIDText_6();
		RuntimeObject* L_18 = ___track0;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String qnrtc.QNTrack::GetTrackID() */, QNTrack_tCBB63F01DA410C442F9E1D5A46DA32815F8C9516_il2cpp_TypeInfo_var, L_18);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
		// TagText.text = track.GetTag();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_TagText_7();
		RuntimeObject* L_21 = ___track0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String qnrtc.QNTrack::GetTag() */, QNTrack_tCBB63F01DA410C442F9E1D5A46DA32815F8C9516_il2cpp_TypeInfo_var, L_21);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_22);
		// VolumeLevelText.text = "0";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23 = __this->get_VolumeLevelText_8();
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
	}

IL_00cd:
	{
		// }
		return;
	}
}
// qnrtc.QNTrack QNRTCUnityDemo.UserTableViewCell::GetCurrentTrack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UserTableViewCell_GetCurrentTrack_m04571C31078F209A86CEEB083BDB38985B1C3502 (UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		// return this.track;
		RuntimeObject* L_0 = __this->get_track_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void QNRTCUnityDemo.UserTableViewCell::OnVolumeSliderValueChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableViewCell_OnVolumeSliderValueChanged_m4F64C1B64B1B6B5EC4C7E13A414384C97DEC224F (UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNLocalAudioTrack_tDC6273EDB0E517A7C77BB02AFFA09FAF65DBA473_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRemoteAudioTrack_tC90F78CB3D363A3524B6E5CCEE8EA06071AC371F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	{
		// if (null == track) return;
		RuntimeObject* L_0 = __this->get_track_11();
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (null == track) return;
		goto IL_0077;
	}

IL_0010:
	{
		// if (isLocal)
		bool L_2 = __this->get_isLocal_12();
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		// QNLocalAudioTrack localAudioTrack = track as QNLocalAudioTrack;
		RuntimeObject* L_4 = __this->get_track_11();
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, QNLocalAudioTrack_tDC6273EDB0E517A7C77BB02AFFA09FAF65DBA473_il2cpp_TypeInfo_var));
		// if (null != localAudioTrack)
		RuntimeObject* L_5 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// localAudioTrack.SetVolume(VolumeSlider.value);
		RuntimeObject* L_7 = V_2;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_8 = __this->get_VolumeSlider_10();
		NullCheck(L_8);
		float L_9;
		L_9 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_8);
		NullCheck(L_7);
		InterfaceActionInvoker1< double >::Invoke(0 /* System.Void qnrtc.QNLocalAudioTrack::SetVolume(System.Double) */, QNLocalAudioTrack_tDC6273EDB0E517A7C77BB02AFFA09FAF65DBA473_il2cpp_TypeInfo_var, L_7, ((double)((double)L_9)));
	}

IL_0044:
	{
		goto IL_0077;
	}

IL_0047:
	{
		// QNRemoteAudioTrack remoteAudioTrack = track as QNRemoteAudioTrack;
		RuntimeObject* L_10 = __this->get_track_11();
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, QNRemoteAudioTrack_tC90F78CB3D363A3524B6E5CCEE8EA06071AC371F_il2cpp_TypeInfo_var));
		// if (null != remoteAudioTrack)
		RuntimeObject* L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		// remoteAudioTrack.SetVolume(VolumeSlider.value);
		RuntimeObject* L_13 = V_4;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_14 = __this->get_VolumeSlider_10();
		NullCheck(L_14);
		float L_15;
		L_15 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_14);
		NullCheck(L_13);
		InterfaceActionInvoker1< double >::Invoke(0 /* System.Void qnrtc.QNRemoteAudioTrack::SetVolume(System.Double) */, QNRemoteAudioTrack_tC90F78CB3D363A3524B6E5CCEE8EA06071AC371F_il2cpp_TypeInfo_var, L_13, ((double)((double)L_15)));
	}

IL_0076:
	{
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.UserTableViewCell::UpdateTrackInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableViewCell_UpdateTrackInfo_mC4C68EA27ED71E944ED08F34D920BCE73B022DEF (UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNLocalAudioTrack_tDC6273EDB0E517A7C77BB02AFFA09FAF65DBA473_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRemoteAudioTrack_tC90F78CB3D363A3524B6E5CCEE8EA06071AC371F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNTrack_tCBB63F01DA410C442F9E1D5A46DA32815F8C9516_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9C98B16A321321696C5F49E8C753494C4A314F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE40979FEA1161A35E136977FD4D7D1D9B5CDF8BF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	float V_4 = 0.0f;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	{
		// if (null != track)
		RuntimeObject* L_0 = __this->get_track_11();
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00d2;
		}
	}
	{
		// if (isLocal)
		bool L_2 = __this->get_isLocal_12();
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_007e;
		}
	}
	{
		// QNLocalAudioTrack localAudioTrack = track as QNLocalAudioTrack;
		RuntimeObject* L_4 = __this->get_track_11();
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, QNLocalAudioTrack_tDC6273EDB0E517A7C77BB02AFFA09FAF65DBA473_il2cpp_TypeInfo_var));
		// if (null != localAudioTrack)
		RuntimeObject* L_5 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_007b;
		}
	}
	{
		// VolumeLevelText.text = localAudioTrack.GetVolumeLevel().ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_VolumeLevelText_8();
		RuntimeObject* L_8 = V_2;
		NullCheck(L_8);
		float L_9;
		L_9 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single qnrtc.QNLocalAudioTrack::GetVolumeLevel() */, QNLocalAudioTrack_tDC6273EDB0E517A7C77BB02AFFA09FAF65DBA473_il2cpp_TypeInfo_var, L_8);
		V_4 = L_9;
		String_t* L_10;
		L_10 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_10);
		// TrackIDText.text = localAudioTrack.GetTrackID();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_TrackIDText_6();
		RuntimeObject* L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String qnrtc.QNTrack::GetTrackID() */, QNTrack_tCBB63F01DA410C442F9E1D5A46DA32815F8C9516_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
		// Debug.Log("localAudioTrack volume: " + VolumeLevelText.text);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get_VolumeLevelText_8();
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_14);
		String_t* L_16;
		L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE40979FEA1161A35E136977FD4D7D1D9B5CDF8BF, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_16, /*hidden argument*/NULL);
	}

IL_007b:
	{
		goto IL_00d1;
	}

IL_007e:
	{
		// QNRemoteAudioTrack remoteAudioTrack = track as QNRemoteAudioTrack;
		RuntimeObject* L_17 = __this->get_track_11();
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, QNRemoteAudioTrack_tC90F78CB3D363A3524B6E5CCEE8EA06071AC371F_il2cpp_TypeInfo_var));
		// if (null != remoteAudioTrack)
		RuntimeObject* L_18 = V_5;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00d0;
		}
	}
	{
		// VolumeLevelText.text = remoteAudioTrack.GetVolumeLevel().ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_VolumeLevelText_8();
		RuntimeObject* L_21 = V_5;
		NullCheck(L_21);
		float L_22;
		L_22 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single qnrtc.QNRemoteAudioTrack::GetVolumeLevel() */, QNRemoteAudioTrack_tC90F78CB3D363A3524B6E5CCEE8EA06071AC371F_il2cpp_TypeInfo_var, L_21);
		V_4 = L_22;
		String_t* L_23;
		L_23 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_23);
		// Debug.Log("remoteAudioTrack volume: " + VolumeLevelText.text);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = __this->get_VolumeLevelText_8();
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_24);
		String_t* L_26;
		L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD9C98B16A321321696C5F49E8C753494C4A314F7, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_26, /*hidden argument*/NULL);
	}

IL_00d0:
	{
	}

IL_00d1:
	{
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void QNRTCUnityDemo.UserTableViewCell::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserTableViewCell__ctor_mA3F210494B167434C23C07CF16D9A1EF7E2EC252 (UserTableViewCell_t6FFFD0C64127B82219B548D1F6930605BD2E0473 * __this, const RuntimeMethod* method)
{
	{
		// private float timerInterval = 1.0f;
		__this->set_timerInterval_13((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnReaderAudioDataCallBack_tE4A99284DABD08897B1E8DE788AA4A73F9C1F29A (OnReaderAudioDataCallBack_tE4A99284DABD08897B1E8DE788AA4A73F9C1F29A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, uint32_t ___dataSize1, uint32_t ___bitsPerSample2, uint32_t ___sampleRate3, uint32_t ___channels4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uint32_t, uint32_t, uint32_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___data0' to native representation
	uint8_t* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<uint8_t*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled, ___dataSize1, ___bitsPerSample2, ___sampleRate3, ___channels4);

}
// System.Void QNRTCUnityDemo.AudioDataReader/OnReaderAudioDataCallBack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnReaderAudioDataCallBack__ctor_m9633FAECEB26F745B1946001566B8923F629F1BA (OnReaderAudioDataCallBack_tE4A99284DABD08897B1E8DE788AA4A73F9C1F29A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void QNRTCUnityDemo.AudioDataReader/OnReaderAudioDataCallBack::Invoke(System.Byte[],System.UInt32,System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnReaderAudioDataCallBack_Invoke_mAEC5EA4108F3F9A912CA50951A8B241E0595FA64 (OnReaderAudioDataCallBack_tE4A99284DABD08897B1E8DE788AA4A73F9C1F29A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, uint32_t ___dataSize1, uint32_t ___bitsPerSample2, uint32_t ___sampleRate3, uint32_t ___channels4, const RuntimeMethod* method)
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
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, uint32_t, uint32_t, uint32_t, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, ___dataSize1, ___bitsPerSample2, ___sampleRate3, ___channels4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, uint32_t, uint32_t, uint32_t, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___dataSize1, ___bitsPerSample2, ___sampleRate3, ___channels4, targetMethod);
			}
		}
		else if (___parameterCount != 5)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< uint32_t, uint32_t, uint32_t, uint32_t >::Invoke(targetMethod, ___data0, ___dataSize1, ___bitsPerSample2, ___sampleRate3, ___channels4);
					else
						GenericVirtActionInvoker4< uint32_t, uint32_t, uint32_t, uint32_t >::Invoke(targetMethod, ___data0, ___dataSize1, ___bitsPerSample2, ___sampleRate3, ___channels4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< uint32_t, uint32_t, uint32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0, ___dataSize1, ___bitsPerSample2, ___sampleRate3, ___channels4);
					else
						VirtActionInvoker4< uint32_t, uint32_t, uint32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0, ___dataSize1, ___bitsPerSample2, ___sampleRate3, ___channels4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, uint32_t, uint32_t, uint32_t, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, ___dataSize1, ___bitsPerSample2, ___sampleRate3, ___channels4, targetMethod);
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
						GenericInterfaceActionInvoker5< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, uint32_t, uint32_t, uint32_t, uint32_t >::Invoke(targetMethod, targetThis, ___data0, ___dataSize1, ___bitsPerSample2, ___sampleRate3, ___channels4);
					else
						GenericVirtActionInvoker5< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, uint32_t, uint32_t, uint32_t, uint32_t >::Invoke(targetMethod, targetThis, ___data0, ___dataSize1, ___bitsPerSample2, ___sampleRate3, ___channels4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, uint32_t, uint32_t, uint32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0, ___dataSize1, ___bitsPerSample2, ___sampleRate3, ___channels4);
					else
						VirtActionInvoker5< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, uint32_t, uint32_t, uint32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0, ___dataSize1, ___bitsPerSample2, ___sampleRate3, ___channels4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, uint32_t, uint32_t, uint32_t, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, ___dataSize1, ___bitsPerSample2, ___sampleRate3, ___channels4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, uint32_t, uint32_t, uint32_t, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___dataSize1, ___bitsPerSample2, ___sampleRate3, ___channels4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult QNRTCUnityDemo.AudioDataReader/OnReaderAudioDataCallBack::BeginInvoke(System.Byte[],System.UInt32,System.UInt32,System.UInt32,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnReaderAudioDataCallBack_BeginInvoke_m6202F0FE08A9468CA8C02707C6A8E4B3C505E38C (OnReaderAudioDataCallBack_tE4A99284DABD08897B1E8DE788AA4A73F9C1F29A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, uint32_t ___dataSize1, uint32_t ___bitsPerSample2, uint32_t ___sampleRate3, uint32_t ___channels4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___data0;
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___dataSize1);
	__d_args[2] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___bitsPerSample2);
	__d_args[3] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___sampleRate3);
	__d_args[4] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___channels4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void QNRTCUnityDemo.AudioDataReader/OnReaderAudioDataCallBack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnReaderAudioDataCallBack_EndInvoke_mC28898E0A43AE205AEEE37DC3FAF0630D88B9249 (OnReaderAudioDataCallBack_tE4A99284DABD08897B1E8DE788AA4A73F9C1F29A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void QNRTCUnityDemo.DirectLiveView/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDEACB769EBBB1F127D09DDBB5234771031C1EA60 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7 * L_0 = (U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7 *)il2cpp_codegen_object_new(U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0A13C3626CCC012C91D6382752CFFC676D2ABB61(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QNRTCUnityDemo.DirectLiveView/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0A13C3626CCC012C91D6382752CFFC676D2ABB61 (U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QNRTCUnityDemo.DirectLiveView/<>c::<ClearPublishedTracks>b__20_0(qnrtc.QNLocalAudioTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CClearPublishedTracksU3Eb__20_0_mE76888B5A9FF130D62BE9DB2FEFAF079F978C753 (U3CU3Ec_tA33D36584175B4EE979D173674C782C131F04BE7 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	{
		// this.localAudioTracks.RemoveAll(item => true);
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
// System.Void QNRTCUnityDemo.DirectLiveView/OnDirectLiveStartButtonClickHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDirectLiveStartButtonClickHandler__ctor_m13447CEA69EE03F7669F8FEDFFA51701176DFD69 (OnDirectLiveStartButtonClickHandler_t9D8854DEA103C0805927C277EEE353FD4632CBE0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void QNRTCUnityDemo.DirectLiveView/OnDirectLiveStartButtonClickHandler::Invoke(qnrtc.QNDirectLiveStreamingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDirectLiveStartButtonClickHandler_Invoke_m4E8BD7197E577270F3C207D07D4DE275382F312F (OnDirectLiveStartButtonClickHandler_t9D8854DEA103C0805927C277EEE353FD4632CBE0 * __this, QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30  ___config0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___config0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___config0, targetMethod);
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
						GenericInterfaceActionInvoker1< QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30  >::Invoke(targetMethod, targetThis, ___config0);
					else
						GenericVirtActionInvoker1< QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30  >::Invoke(targetMethod, targetThis, ___config0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___config0);
					else
						VirtActionInvoker1< QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___config0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___config0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___config0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult QNRTCUnityDemo.DirectLiveView/OnDirectLiveStartButtonClickHandler::BeginInvoke(qnrtc.QNDirectLiveStreamingConfig,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnDirectLiveStartButtonClickHandler_BeginInvoke_mF67F6ECDF43F20ABD4053D2AFA6102D966DE84AA (OnDirectLiveStartButtonClickHandler_t9D8854DEA103C0805927C277EEE353FD4632CBE0 * __this, QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30  ___config0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30_il2cpp_TypeInfo_var, &___config0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void QNRTCUnityDemo.DirectLiveView/OnDirectLiveStartButtonClickHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDirectLiveStartButtonClickHandler_EndInvoke_m0FADE051E21B1CC6AD40B9F2480632DF8D6F1D94 (OnDirectLiveStartButtonClickHandler_t9D8854DEA103C0805927C277EEE353FD4632CBE0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void QNRTCUnityDemo.DirectLiveView/OnDirectLiveStopButtonClickHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDirectLiveStopButtonClickHandler__ctor_m0ED8EC65830627550C872ADF023B315A66F7288A (OnDirectLiveStopButtonClickHandler_tC0252230E09F0E8FC2C33432F6441D44620F2016 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void QNRTCUnityDemo.DirectLiveView/OnDirectLiveStopButtonClickHandler::Invoke(qnrtc.QNDirectLiveStreamingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDirectLiveStopButtonClickHandler_Invoke_m4A1F8C6C21F404B7F67B67AE13EDB747A127BA7C (OnDirectLiveStopButtonClickHandler_tC0252230E09F0E8FC2C33432F6441D44620F2016 * __this, QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30  ___config0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___config0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___config0, targetMethod);
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
						GenericInterfaceActionInvoker1< QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30  >::Invoke(targetMethod, targetThis, ___config0);
					else
						GenericVirtActionInvoker1< QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30  >::Invoke(targetMethod, targetThis, ___config0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___config0);
					else
						VirtActionInvoker1< QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___config0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___config0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___config0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult QNRTCUnityDemo.DirectLiveView/OnDirectLiveStopButtonClickHandler::BeginInvoke(qnrtc.QNDirectLiveStreamingConfig,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnDirectLiveStopButtonClickHandler_BeginInvoke_m1E90A589CF10A9BB5460105C171EE60E5080059E (OnDirectLiveStopButtonClickHandler_tC0252230E09F0E8FC2C33432F6441D44620F2016 * __this, QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30  ___config0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(QNDirectLiveStreamingConfig_t788BC9B7ED09523160E2B794FE02553BFC08AD30_il2cpp_TypeInfo_var, &___config0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void QNRTCUnityDemo.DirectLiveView/OnDirectLiveStopButtonClickHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDirectLiveStopButtonClickHandler_EndInvoke_m69A245BDFBD9B8389D6BF47D8A20BAAC28FB2B2A (OnDirectLiveStopButtonClickHandler_tC0252230E09F0E8FC2C33432F6441D44620F2016 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void QNRTCUnityDemo.MediaRelayView/OnStartMediaRelayButtonClickHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartMediaRelayButtonClickHandler__ctor_m50CA33EA657CB19EB1E00DAFD05B9454A9D4A616 (OnStartMediaRelayButtonClickHandler_t558B0CC8A062B3B10A5BB2D794F3E73B1C0E7DF5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void QNRTCUnityDemo.MediaRelayView/OnStartMediaRelayButtonClickHandler::Invoke(System.Collections.Generic.List`1<qnrtc.QNMediaRelayInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartMediaRelayButtonClickHandler_Invoke_m16EFA537D33CF0032DA422DEF7B76DAB46C0946A (OnStartMediaRelayButtonClickHandler_t558B0CC8A062B3B10A5BB2D794F3E73B1C0E7DF5 * __this, List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B * ___destRoomInfos0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___destRoomInfos0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___destRoomInfos0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___destRoomInfos0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___destRoomInfos0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___destRoomInfos0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___destRoomInfos0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___destRoomInfos0, targetMethod);
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
						GenericInterfaceActionInvoker1< List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B * >::Invoke(targetMethod, targetThis, ___destRoomInfos0);
					else
						GenericVirtActionInvoker1< List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B * >::Invoke(targetMethod, targetThis, ___destRoomInfos0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___destRoomInfos0);
					else
						VirtActionInvoker1< List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___destRoomInfos0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___destRoomInfos0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___destRoomInfos0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult QNRTCUnityDemo.MediaRelayView/OnStartMediaRelayButtonClickHandler::BeginInvoke(System.Collections.Generic.List`1<qnrtc.QNMediaRelayInfo>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnStartMediaRelayButtonClickHandler_BeginInvoke_m3459C53CDF1944CD9778FA04BA127CD40A836111 (OnStartMediaRelayButtonClickHandler_t558B0CC8A062B3B10A5BB2D794F3E73B1C0E7DF5 * __this, List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B * ___destRoomInfos0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___destRoomInfos0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void QNRTCUnityDemo.MediaRelayView/OnStartMediaRelayButtonClickHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartMediaRelayButtonClickHandler_EndInvoke_m6BBCE703CD2297EEECF397FC822BCDFEA12BD607 (OnStartMediaRelayButtonClickHandler_t558B0CC8A062B3B10A5BB2D794F3E73B1C0E7DF5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnStopMediaRelayButtonClickHandler_t5B01D96AD12B06710B032B2922DF3F90CD20A23E (OnStopMediaRelayButtonClickHandler_t5B01D96AD12B06710B032B2922DF3F90CD20A23E * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void QNRTCUnityDemo.MediaRelayView/OnStopMediaRelayButtonClickHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStopMediaRelayButtonClickHandler__ctor_mA8D60966CB7C053499ED3FD272053B2BC6C572FF (OnStopMediaRelayButtonClickHandler_t5B01D96AD12B06710B032B2922DF3F90CD20A23E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void QNRTCUnityDemo.MediaRelayView/OnStopMediaRelayButtonClickHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStopMediaRelayButtonClickHandler_Invoke_m279647F36DB695A98187E77384ABD3ADFA70958A (OnStopMediaRelayButtonClickHandler_t5B01D96AD12B06710B032B2922DF3F90CD20A23E * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult QNRTCUnityDemo.MediaRelayView/OnStopMediaRelayButtonClickHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnStopMediaRelayButtonClickHandler_BeginInvoke_m841C951231C28D4667E4B4E77D631FED36FF982C (OnStopMediaRelayButtonClickHandler_t5B01D96AD12B06710B032B2922DF3F90CD20A23E * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void QNRTCUnityDemo.MediaRelayView/OnStopMediaRelayButtonClickHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStopMediaRelayButtonClickHandler_EndInvoke_mA7497F2D4894FCAAA1C95AF80AE38632AF73E012 (OnStopMediaRelayButtonClickHandler_t5B01D96AD12B06710B032B2922DF3F90CD20A23E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void QNRTCUnityDemo.MediaRelayView/OnUpdateMediaRelayButtonClickHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUpdateMediaRelayButtonClickHandler__ctor_mB0E53CAE8FE3FA5D0370D43483DD0F4942E2C41C (OnUpdateMediaRelayButtonClickHandler_tB4B8FB8EDF5E3A663FC8CD1F70CC2498BCB7C966 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void QNRTCUnityDemo.MediaRelayView/OnUpdateMediaRelayButtonClickHandler::Invoke(System.Collections.Generic.List`1<qnrtc.QNMediaRelayInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUpdateMediaRelayButtonClickHandler_Invoke_m455B34D91C9A58E0F921BC3C429D4C62503197ED (OnUpdateMediaRelayButtonClickHandler_tB4B8FB8EDF5E3A663FC8CD1F70CC2498BCB7C966 * __this, List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B * ___destRoomInfos0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___destRoomInfos0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___destRoomInfos0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___destRoomInfos0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___destRoomInfos0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___destRoomInfos0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___destRoomInfos0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___destRoomInfos0, targetMethod);
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
						GenericInterfaceActionInvoker1< List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B * >::Invoke(targetMethod, targetThis, ___destRoomInfos0);
					else
						GenericVirtActionInvoker1< List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B * >::Invoke(targetMethod, targetThis, ___destRoomInfos0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___destRoomInfos0);
					else
						VirtActionInvoker1< List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___destRoomInfos0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___destRoomInfos0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___destRoomInfos0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult QNRTCUnityDemo.MediaRelayView/OnUpdateMediaRelayButtonClickHandler::BeginInvoke(System.Collections.Generic.List`1<qnrtc.QNMediaRelayInfo>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnUpdateMediaRelayButtonClickHandler_BeginInvoke_m128EC3D73162357295B52C01583D60FF5AB96663 (OnUpdateMediaRelayButtonClickHandler_tB4B8FB8EDF5E3A663FC8CD1F70CC2498BCB7C966 * __this, List_1_tEA7829A1ED4A06DD28C7E9F69032F4B05572BB4B * ___destRoomInfos0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___destRoomInfos0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void QNRTCUnityDemo.MediaRelayView/OnUpdateMediaRelayButtonClickHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUpdateMediaRelayButtonClickHandler_EndInvoke_m71ADEF2F7518C8AD2EA580AA64A63D2A0730C8D3 (OnUpdateMediaRelayButtonClickHandler_tB4B8FB8EDF5E3A663FC8CD1F70CC2498BCB7C966 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void qnrtc.QNRTCClientImpl/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m839891065C32534178DCE2CDF2AFB61C338D6DDB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * L_0 = (U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 *)il2cpp_codegen_object_new(U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD9460A91BF63F5B76CACCA6CF28D8B68E69168DB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD9460A91BF63F5B76CACCA6CF28D8B68E69168DB (U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean qnrtc.QNRTCClientImpl/<>c::<DeInitShareInstance>b__13_0(qnrtc.QNRemoteTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDeInitShareInstanceU3Eb__13_0_m163B5106C2CAC9DAB3BDF93FC313B537C92E710F (U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	{
		// sInstance.remoteTracks.RemoveAll(item => true);
		return (bool)1;
	}
}
// System.Boolean qnrtc.QNRTCClientImpl/<>c::<DeInitShareInstance>b__13_1(qnrtc.QNRTCClientEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDeInitShareInstanceU3Eb__13_1_m72759D389A248C5CF364C4CD16400727F6D5DFD9 (U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	{
		// sInstance.clientEventListeners.RemoveAll(item => true);
		return (bool)1;
	}
}
// System.Boolean qnrtc.QNRTCClientImpl/<>c::<DeInitShareInstance>b__13_2(qnrtc.QNRTCClientRoleEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDeInitShareInstanceU3Eb__13_2_m73A7A21F366EC94ED91BBA1EF6C4BCA9653F7117 (U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	{
		// sInstance.clientRoleEventListeners.RemoveAll(item => true);
		return (bool)1;
	}
}
// System.Boolean qnrtc.QNRTCClientImpl/<>c::<DeInitShareInstance>b__13_3(qnrtc.QNMediaRelayListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDeInitShareInstanceU3Eb__13_3_mEAA1D90164B5C722A020690EAB538275C119091F (U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	{
		// sInstance.mediaRelayListeners.RemoveAll(item => true);
		return (bool)1;
	}
}
// System.Boolean qnrtc.QNRTCClientImpl/<>c::<DeInitShareInstance>b__13_4(qnrtc.QNPublishResultListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDeInitShareInstanceU3Eb__13_4_m4FEB34B7793295A41C4934707DC346533366C158 (U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	{
		// sInstance.publishResultListeners.RemoveAll(item => true);
		return (bool)1;
	}
}
// System.Boolean qnrtc.QNRTCClientImpl/<>c::<DeInitShareInstance>b__13_5(qnrtc.QNLiveStreamingListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDeInitShareInstanceU3Eb__13_5_mE035F9844EBC3F5030C9CC6E56A342CB95324E86 (U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	{
		// sInstance.liveStreamingListeners.RemoveAll(item => true);
		return (bool)1;
	}
}
// System.Boolean qnrtc.QNRTCClientImpl/<>c::<DeInitShareInstance>b__13_6(qnrtc.QNRemoteAudioMixedFrameListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDeInitShareInstanceU3Eb__13_6_mADF969D57F34C289FEC6928D0A448503DB835315 (U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	{
		// sInstance.remoteAudioMixedFrameListeners.RemoveAll(item => true);
		return (bool)1;
	}
}
// System.Boolean qnrtc.QNRTCClientImpl/<>c::<DeInitShareInstance>b__13_7(qnrtc.QNNetworkQualityListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDeInitShareInstanceU3Eb__13_7_m5855B05705B4DB81E3CFF2AC01D4C3BA7105AA6C (U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	{
		// sInstance.networkQualityListeners.RemoveAll(item => true);
		return (bool)1;
	}
}
// System.Boolean qnrtc.QNRTCClientImpl/<>c::<Leave>b__17_0(qnrtc.QNRemoteTrack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CLeaveU3Eb__17_0_m9162104EDA0A2198A5B0D4B49F28ADB4032BC4A3 (U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	{
		// remoteTracks.RemoveAll(item => true);
		return (bool)1;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c::<OnPublished>b__65_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnPublishedU3Eb__65_0_m85F32405AAE08657D83B36A56FDE4916CBAA2751 (U3CU3Ec_tBC543539304FF5F7D97075CC088FA83200334EB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBC190F6E473609692A5838152AC9E12062A5C666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m488A8BBC2E2D1DA6D7C6F66D80ACB57B239AE301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF1F92F90DAC2FA71E7B0C8F31C1799A8417CBA57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAA443355D31D4C0FA0CB80B3E7A7809765C6ED92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAACDAE5411021F02DF758D8B4F9CFB958637BA3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNPublishResultListener_tF68D1E6213DF9CD41CE1642176E4C3A9BBE43690_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * V_0 = NULL;
	Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNPublishResultListener> listeners = new List<QNPublishResultListener>(sInstance.publishResultListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * L_1 = L_0->get_publishResultListeners_6();
		List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * L_2 = (List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE *)il2cpp_codegen_object_new(List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE_il2cpp_TypeInfo_var);
		List_1__ctor_mAACDAE5411021F02DF758D8B4F9CFB958637BA3A(L_2, L_1, /*hidden argument*/List_1__ctor_mAACDAE5411021F02DF758D8B4F9CFB958637BA3A_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNPublishResultListener listener in listeners)
		List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E  L_4;
		L_4 = List_1_GetEnumerator_mAA443355D31D4C0FA0CB80B3E7A7809765C6ED92(L_3, /*hidden argument*/List_1_GetEnumerator_mAA443355D31D4C0FA0CB80B3E7A7809765C6ED92_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_001b:
		{
			// foreach (QNPublishResultListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_mF1F92F90DAC2FA71E7B0C8F31C1799A8417CBA57_inline((Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E *)(&V_1), /*hidden argument*/Enumerator_get_Current_mF1F92F90DAC2FA71E7B0C8F31C1799A8417CBA57_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnPublished();
			RuntimeObject* L_6 = V_2;
			NullCheck(L_6);
			InterfaceActionInvoker0::Invoke(0 /* System.Void qnrtc.QNPublishResultListener::OnPublished() */, QNPublishResultListener_tF68D1E6213DF9CD41CE1642176E4C3A9BBE43690_il2cpp_TypeInfo_var, L_6);
		}

IL_002c:
		{
			// foreach (QNPublishResultListener listener in listeners)
			bool L_7;
			L_7 = Enumerator_MoveNext_m488A8BBC2E2D1DA6D7C6F66D80ACB57B239AE301((Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m488A8BBC2E2D1DA6D7C6F66D80ACB57B239AE301_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001b;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x46, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBC190F6E473609692A5838152AC9E12062A5C666((Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E *)(&V_1), /*hidden argument*/Enumerator_Dispose_mBC190F6E473609692A5838152AC9E12062A5C666_RuntimeMethod_var);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x46, IL_0046)
	}

IL_0046:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass51_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0__ctor_m0042D5A1215BFC4DD0FC0B622BBE93813325FA2A (U3CU3Ec__DisplayClass51_0_t2AAD50119D08DD1B4C771B864F598FF746DCD24E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass51_0::<OnConnectionStateChanged>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0_U3COnConnectionStateChangedU3Eb__0_m45AFD910F39119D4D9C39BB33925264D658E510E (U3CU3Ec__DisplayClass51_0_t2AAD50119D08DD1B4C771B864F598FF746DCD24E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * V_0 = NULL;
	Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Nullable_1_tB40BABD0644B5F97F6A9700D5EE18379A8781D25  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_1 = L_0->get_clientEventListeners_3();
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_2 = (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC *)il2cpp_codegen_object_new(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC(L_2, L_1, /*hidden argument*/List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNRTCClientEventListener listener in listeners)
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  L_4;
		L_4 = List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89(L_3, /*hidden argument*/List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_001b:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_inline((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnConnectionStateChanged((QNConnectionState)state, null);
			RuntimeObject* L_6 = V_2;
			int32_t L_7 = __this->get_state_0();
			il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tB40BABD0644B5F97F6A9700D5EE18379A8781D25 ));
			Nullable_1_tB40BABD0644B5F97F6A9700D5EE18379A8781D25  L_8 = V_3;
			NullCheck(L_6);
			InterfaceActionInvoker2< int32_t, Nullable_1_tB40BABD0644B5F97F6A9700D5EE18379A8781D25  >::Invoke(0 /* System.Void qnrtc.QNRTCClientEventListener::OnConnectionStateChanged(qnrtc.QNConnectionState,System.Nullable`1<qnrtc.QNConnectionDisconnectedInfo>) */, QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		}

IL_003b:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			bool L_9;
			L_9 = Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001b;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
	}

IL_0055:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass51_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_1__ctor_m536D442F05FB9093E7055A87B8FA9BA22156E182 (U3CU3Ec__DisplayClass51_1_t6DF4D7A3D25AFAEF15D62BEDD49FA54F55E351A3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass51_1::<OnConnectionStateChanged>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_1_U3COnConnectionStateChangedU3Eb__1_m3F2BB0E2C7C8C4C41B1008A2EFA1C2A1A6CA9E1C (U3CU3Ec__DisplayClass51_1_t6DF4D7A3D25AFAEF15D62BEDD49FA54F55E351A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mE97E7C747525382E79523EB25EE88B02A64C7AE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * V_0 = NULL;
	Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_1 = L_0->get_clientEventListeners_3();
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_2 = (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC *)il2cpp_codegen_object_new(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC(L_2, L_1, /*hidden argument*/List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNRTCClientEventListener listener in listeners)
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  L_4;
		L_4 = List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89(L_3, /*hidden argument*/List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_001b:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_inline((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnConnectionStateChanged((QNConnectionState)state, info);
			RuntimeObject* L_6 = V_2;
			U3CU3Ec__DisplayClass51_0_t2AAD50119D08DD1B4C771B864F598FF746DCD24E * L_7 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_7);
			int32_t L_8 = L_7->get_state_0();
			QNConnectionDisconnectedInfo_t51BF1DFC3F039A6C497662B80C5BC06D109DD493  L_9 = __this->get_info_0();
			Nullable_1_tB40BABD0644B5F97F6A9700D5EE18379A8781D25  L_10;
			memset((&L_10), 0, sizeof(L_10));
			Nullable_1__ctor_mE97E7C747525382E79523EB25EE88B02A64C7AE7((&L_10), L_9, /*hidden argument*/Nullable_1__ctor_mE97E7C747525382E79523EB25EE88B02A64C7AE7_RuntimeMethod_var);
			NullCheck(L_6);
			InterfaceActionInvoker2< int32_t, Nullable_1_tB40BABD0644B5F97F6A9700D5EE18379A8781D25  >::Invoke(0 /* System.Void qnrtc.QNRTCClientEventListener::OnConnectionStateChanged(qnrtc.QNConnectionState,System.Nullable`1<qnrtc.QNConnectionDisconnectedInfo>) */, QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var, L_6, L_8, L_10);
		}

IL_0042:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			bool L_11;
			L_11 = Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_001b;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(77)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
	}

IL_005c:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass52_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_mEB6214F38FD5AFDBB5E089AD2343AA5EC4F372A4 (U3CU3Ec__DisplayClass52_0_t0155E618B89F27AD9168AC5C2BD2A25C0043D2C5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass52_0::<OnUserJoined>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_U3COnUserJoinedU3Eb__0_m5EE84C3782CBBF1685E9B290C214D6DF7693D77A (U3CU3Ec__DisplayClass52_0_t0155E618B89F27AD9168AC5C2BD2A25C0043D2C5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * V_0 = NULL;
	Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_1 = L_0->get_clientEventListeners_3();
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_2 = (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC *)il2cpp_codegen_object_new(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC(L_2, L_1, /*hidden argument*/List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNRTCClientEventListener listener in listeners)
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  L_4;
		L_4 = List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89(L_3, /*hidden argument*/List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_001b:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_inline((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnUserJoined(currentRemoteUserId, currentUserData);
			RuntimeObject* L_6 = V_2;
			String_t* L_7 = __this->get_currentRemoteUserId_0();
			String_t* L_8 = __this->get_currentUserData_1();
			NullCheck(L_6);
			InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void qnrtc.QNRTCClientEventListener::OnUserJoined(System.String,System.String) */, QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		}

IL_0038:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			bool L_9;
			L_9 = Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001b;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass53_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0__ctor_mA8EFBE1E2D169D98ECBA6006C893E284DA005D57 (U3CU3Ec__DisplayClass53_0_tCDA2A72004C7830004AC73E4E306EA9848399E7C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass53_0::<OnUserLeft>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0_U3COnUserLeftU3Eb__0_m5B45B9CECBB42684CE4DD61B6C98B9E386D90E07 (U3CU3Ec__DisplayClass53_0_tCDA2A72004C7830004AC73E4E306EA9848399E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * V_0 = NULL;
	Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_1 = L_0->get_clientEventListeners_3();
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_2 = (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC *)il2cpp_codegen_object_new(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC(L_2, L_1, /*hidden argument*/List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNRTCClientEventListener listener in listeners)
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  L_4;
		L_4 = List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89(L_3, /*hidden argument*/List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_001b:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_inline((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnUserLeft(currentRemoteUserId);
			RuntimeObject* L_6 = V_2;
			String_t* L_7 = __this->get_currentRemoteUserId_0();
			NullCheck(L_6);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void qnrtc.QNRTCClientEventListener::OnUserLeft(System.String) */, QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var, L_6, L_7);
		}

IL_0032:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			bool L_8;
			L_8 = Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_001b;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass54_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass54_0__ctor_m1D643D87E2BB04B2C0E89DBFF60ACEBF295A4F9F (U3CU3Ec__DisplayClass54_0_tD3E0AC0B1A3EEF64541C29AF46EBCBCD42B80529 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass54_0::<OnUserReconnecting>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass54_0_U3COnUserReconnectingU3Eb__0_m14AEE558A95CEE7024C2D1EC4C9C60E344165A20 (U3CU3Ec__DisplayClass54_0_tD3E0AC0B1A3EEF64541C29AF46EBCBCD42B80529 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * V_0 = NULL;
	Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_1 = L_0->get_clientEventListeners_3();
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_2 = (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC *)il2cpp_codegen_object_new(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC(L_2, L_1, /*hidden argument*/List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNRTCClientEventListener listener in listeners)
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  L_4;
		L_4 = List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89(L_3, /*hidden argument*/List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_001b:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_inline((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnUserReconnecting(currentRemoteUserId);
			RuntimeObject* L_6 = V_2;
			String_t* L_7 = __this->get_currentRemoteUserId_0();
			NullCheck(L_6);
			InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void qnrtc.QNRTCClientEventListener::OnUserReconnecting(System.String) */, QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var, L_6, L_7);
		}

IL_0032:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			bool L_8;
			L_8 = Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_001b;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass55_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_0__ctor_m18F814586A30B6A25F94DBDE4801309FD61A42EC (U3CU3Ec__DisplayClass55_0_t6DE2A2FFDD5E39BC586AAA5D450EBBBF7399C7DE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass55_0::<OnUserReconnected>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_0_U3COnUserReconnectedU3Eb__0_mACE19F16132F3B6CDA8BFAD0C7E71B259A053126 (U3CU3Ec__DisplayClass55_0_t6DE2A2FFDD5E39BC586AAA5D450EBBBF7399C7DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * V_0 = NULL;
	Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_1 = L_0->get_clientEventListeners_3();
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_2 = (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC *)il2cpp_codegen_object_new(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC(L_2, L_1, /*hidden argument*/List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNRTCClientEventListener listener in listeners)
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  L_4;
		L_4 = List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89(L_3, /*hidden argument*/List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_001b:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_inline((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnUserReconnected(currentRemoteUserId);
			RuntimeObject* L_6 = V_2;
			String_t* L_7 = __this->get_currentRemoteUserId_0();
			NullCheck(L_6);
			InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void qnrtc.QNRTCClientEventListener::OnUserReconnected(System.String) */, QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var, L_6, L_7);
		}

IL_0032:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			bool L_8;
			L_8 = Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_001b;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass56_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass56_0__ctor_m696CC28555B640330860B469B2AB35C1EFE14C7D (U3CU3Ec__DisplayClass56_0_tB70C8F9755D9ECD9666594B0A4E74768E38C203C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass56_0::<OnUserPublished>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass56_0_U3COnUserPublishedU3Eb__0_m2DF0C0C65BA20CA1FC6C6173EDADDCC641F4870F (U3CU3Ec__DisplayClass56_0_tB70C8F9755D9ECD9666594B0A4E74768E38C203C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * V_0 = NULL;
	Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_1 = L_0->get_clientEventListeners_3();
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_2 = (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC *)il2cpp_codegen_object_new(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC(L_2, L_1, /*hidden argument*/List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNRTCClientEventListener listener in listeners)
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  L_4;
		L_4 = List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89(L_3, /*hidden argument*/List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_001b:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_inline((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnUserPublished(currentRemoteUserId, remoteTrackList);
			RuntimeObject* L_6 = V_2;
			String_t* L_7 = __this->get_currentRemoteUserId_0();
			List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 * L_8 = __this->get_remoteTrackList_1();
			NullCheck(L_6);
			InterfaceActionInvoker2< String_t*, List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 * >::Invoke(5 /* System.Void qnrtc.QNRTCClientEventListener::OnUserPublished(System.String,System.Collections.Generic.List`1<qnrtc.QNRemoteTrack>) */, QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		}

IL_0038:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			bool L_9;
			L_9 = Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001b;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass57_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0__ctor_mB9A3BAD7581870A93DD1674FAD5888669563659A (U3CU3Ec__DisplayClass57_0_tB3F7A4EA9305DE17A1A3D4B2D1019B29C4750A92 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass57_0::<OnUserUnpublished>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0_U3COnUserUnpublishedU3Eb__0_mCE012E401439C8437BD0EBE88F7C9009FF68F2C1 (U3CU3Ec__DisplayClass57_0_tB3F7A4EA9305DE17A1A3D4B2D1019B29C4750A92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * V_0 = NULL;
	Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_1 = L_0->get_clientEventListeners_3();
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_2 = (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC *)il2cpp_codegen_object_new(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC(L_2, L_1, /*hidden argument*/List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNRTCClientEventListener listener in listeners)
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  L_4;
		L_4 = List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89(L_3, /*hidden argument*/List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_001b:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_inline((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnUserUnpublished(currentRemoteUserId, remoteTrackList);
			RuntimeObject* L_6 = V_2;
			String_t* L_7 = __this->get_currentRemoteUserId_0();
			List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 * L_8 = __this->get_remoteTrackList_1();
			NullCheck(L_6);
			InterfaceActionInvoker2< String_t*, List_1_tB1360CF994E6CD77FF5B7B27D555067E7CDCCD29 * >::Invoke(6 /* System.Void qnrtc.QNRTCClientEventListener::OnUserUnpublished(System.String,System.Collections.Generic.List`1<qnrtc.QNRemoteTrack>) */, QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		}

IL_0038:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			bool L_9;
			L_9 = Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001b;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_mAA540F62A450AE5EBA135E4B5BB616CD823BD45B (U3CU3Ec__DisplayClass58_0_t65A05DD4FF38946C9A94C72515864691EF4A4ADF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass58_0::<OnSubscribed>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0_U3COnSubscribedU3Eb__0_m9ACE0B84C7859321107BF2433CE5A4521062A7F8 (U3CU3Ec__DisplayClass58_0_t65A05DD4FF38946C9A94C72515864691EF4A4ADF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * V_0 = NULL;
	Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_1 = L_0->get_clientEventListeners_3();
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_2 = (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC *)il2cpp_codegen_object_new(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC(L_2, L_1, /*hidden argument*/List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNRTCClientEventListener listener in listeners)
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  L_4;
		L_4 = List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89(L_3, /*hidden argument*/List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_001b:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_inline((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnSubscribed(currentRemoteUserId, remoteAudioTrackList);
			RuntimeObject* L_6 = V_2;
			String_t* L_7 = __this->get_currentRemoteUserId_0();
			List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * L_8 = __this->get_remoteAudioTrackList_1();
			NullCheck(L_6);
			InterfaceActionInvoker2< String_t*, List_1_t93AA964F9CA00444B3DDDE19A7B5A16FE7112B93 * >::Invoke(7 /* System.Void qnrtc.QNRTCClientEventListener::OnSubscribed(System.String,System.Collections.Generic.List`1<qnrtc.QNRemoteAudioTrack>) */, QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		}

IL_0038:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			bool L_9;
			L_9 = Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001b;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass59_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0__ctor_mEDFE0CB5F9173E4EE979DA51A45BE206A7BB4D13 (U3CU3Ec__DisplayClass59_0_t825FAFFA8C19B6B38892BCD6398591FEFB9617EB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass59_0::<OnMessageReceived>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0_U3COnMessageReceivedU3Eb__0_m459F2FF561A33DA1D221A776A0E5D9EC4E593FF3 (U3CU3Ec__DisplayClass59_0_t825FAFFA8C19B6B38892BCD6398591FEFB9617EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * V_0 = NULL;
	Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_1 = L_0->get_clientEventListeners_3();
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_2 = (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC *)il2cpp_codegen_object_new(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC(L_2, L_1, /*hidden argument*/List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNRTCClientEventListener listener in listeners)
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  L_4;
		L_4 = List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89(L_3, /*hidden argument*/List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_001b:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_inline((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnMessageReceived(message);
			RuntimeObject* L_6 = V_2;
			QNCustomMessage_t67035EE960F56165A47F49B3A5C7BE786D11CDE9  L_7 = __this->get_message_0();
			NullCheck(L_6);
			InterfaceActionInvoker1< QNCustomMessage_t67035EE960F56165A47F49B3A5C7BE786D11CDE9  >::Invoke(8 /* System.Void qnrtc.QNRTCClientEventListener::OnMessageReceived(qnrtc.QNCustomMessage) */, QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var, L_6, L_7);
		}

IL_0032:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			bool L_8;
			L_8 = Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_001b;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass60_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass60_0__ctor_mAE858788E861F4A0C40461E7671CC174CD1BCEE5 (U3CU3Ec__DisplayClass60_0_t4732A4138C3C22DC19115BFABE43FAD11FEBA1C7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass60_0::<OnMediaRelayStateChanged>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass60_0_U3COnMediaRelayStateChangedU3Eb__0_m26ED3F9AEA8FDCE0B309F154882CCBA06F4EC0B7 (U3CU3Ec__DisplayClass60_0_t4732A4138C3C22DC19115BFABE43FAD11FEBA1C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * V_0 = NULL;
	Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNRTCClientEventListener> listeners = new List<QNRTCClientEventListener>(sInstance.clientEventListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_1 = L_0->get_clientEventListeners_3();
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_2 = (List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC *)il2cpp_codegen_object_new(List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC_il2cpp_TypeInfo_var);
		List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC(L_2, L_1, /*hidden argument*/List_1__ctor_m42011F61DD58CCCDA549D852804386E3344FDDCC_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNRTCClientEventListener listener in listeners)
		List_1_tB78FFDBA4CF7A7C33951681DFFF9926DD63FACCC * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1  L_4;
		L_4 = List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89(L_3, /*hidden argument*/List_1_GetEnumerator_m60833FB84CC701D3FC74957451F7B4DE89B38A89_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_001b:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_inline((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m13F40ECB3956AE95DDD40E5EDD569D5FA1EFEB42_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnMediaRelayStateChanged(currentRelayRoom, (QNMediaRelayState)state);
			RuntimeObject* L_6 = V_2;
			String_t* L_7 = __this->get_currentRelayRoom_0();
			int32_t L_8 = __this->get_state_1();
			NullCheck(L_6);
			InterfaceActionInvoker2< String_t*, int32_t >::Invoke(9 /* System.Void qnrtc.QNRTCClientEventListener::OnMediaRelayStateChanged(System.String,qnrtc.QNMediaRelayState) */, QNRTCClientEventListener_tFE6D9C02061ECED605FA4D4DC9459ED921C35E17_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		}

IL_0038:
		{
			// foreach (QNRTCClientEventListener listener in listeners)
			bool L_9;
			L_9 = Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mDF14A6BB04DDA3579CE22880CEF243CA530D4478_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001b;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE((Enumerator_t200E00DFC33861CEEFC4E5929B6E12F574A8A1A1 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mEF243AF76FFE0F489178431048751A7731C50FBE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass61_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_0__ctor_mE62270E8F28CC55333D513DE96B889B211AB4DFF (U3CU3Ec__DisplayClass61_0_t553E661F40DDF9E29024F7C49694CFEB4B818F2E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass61_0::<OnClientRoleResult>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass61_0_U3COnClientRoleResultU3Eb__0_mA37639441F2F455CB6A92B055F3271F40BB6B877 (U3CU3Ec__DisplayClass61_0_t553E661F40DDF9E29024F7C49694CFEB4B818F2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mED6A8CE5267E5A2E7914601170C62ABA154494BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m07527679FE6FC19F5013C9BA30EA9165D4CD17FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7712355670628CB2A30D130CA8978941A90B5179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m233127B2FD7FB17E19B524AAFB01F064FF3E0838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFDF51C5ED04D26C8A6ABAC0E91FFC3524D0FB8D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientRoleEventListener_t508418F360F990CE05BC456095B1565BB07A10B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * V_0 = NULL;
	Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNRTCClientRoleEventListener> listeners = new List<QNRTCClientRoleEventListener>(sInstance.clientRoleEventListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * L_1 = L_0->get_clientRoleEventListeners_4();
		List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * L_2 = (List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D *)il2cpp_codegen_object_new(List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D_il2cpp_TypeInfo_var);
		List_1__ctor_mFDF51C5ED04D26C8A6ABAC0E91FFC3524D0FB8D4(L_2, L_1, /*hidden argument*/List_1__ctor_mFDF51C5ED04D26C8A6ABAC0E91FFC3524D0FB8D4_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNRTCClientRoleEventListener listener in listeners)
		List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C  L_4;
		L_4 = List_1_GetEnumerator_m233127B2FD7FB17E19B524AAFB01F064FF3E0838(L_3, /*hidden argument*/List_1_GetEnumerator_m233127B2FD7FB17E19B524AAFB01F064FF3E0838_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_001b:
		{
			// foreach (QNRTCClientRoleEventListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m7712355670628CB2A30D130CA8978941A90B5179_inline((Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C *)(&V_1), /*hidden argument*/Enumerator_get_Current_m7712355670628CB2A30D130CA8978941A90B5179_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnClientRoleResult((QNClientRole)newRole);
			RuntimeObject* L_6 = V_2;
			int32_t L_7 = __this->get_newRole_0();
			NullCheck(L_6);
			InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void qnrtc.QNRTCClientRoleEventListener::OnClientRoleResult(qnrtc.QNClientRole) */, QNRTCClientRoleEventListener_t508418F360F990CE05BC456095B1565BB07A10B6_il2cpp_TypeInfo_var, L_6, L_7);
		}

IL_0032:
		{
			// foreach (QNRTCClientRoleEventListener listener in listeners)
			bool L_8;
			L_8 = Enumerator_MoveNext_m07527679FE6FC19F5013C9BA30EA9165D4CD17FF((Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m07527679FE6FC19F5013C9BA30EA9165D4CD17FF_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_001b;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mED6A8CE5267E5A2E7914601170C62ABA154494BA((Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C *)(&V_1), /*hidden argument*/Enumerator_Dispose_mED6A8CE5267E5A2E7914601170C62ABA154494BA_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass62_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0__ctor_m1C84E2CADBDD62DD140F913DB16C70E28D678EB7 (U3CU3Ec__DisplayClass62_0_t532BC37CFB1031A03F016F5AD79778FA66D21B74 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass62_0::<OnClientRoleError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0_U3COnClientRoleErrorU3Eb__0_m2AB6B9FF976C3A3B87B216D302224D28EC9404D3 (U3CU3Ec__DisplayClass62_0_t532BC37CFB1031A03F016F5AD79778FA66D21B74 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mED6A8CE5267E5A2E7914601170C62ABA154494BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m07527679FE6FC19F5013C9BA30EA9165D4CD17FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7712355670628CB2A30D130CA8978941A90B5179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m233127B2FD7FB17E19B524AAFB01F064FF3E0838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFDF51C5ED04D26C8A6ABAC0E91FFC3524D0FB8D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientRoleEventListener_t508418F360F990CE05BC456095B1565BB07A10B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * V_0 = NULL;
	Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNRTCClientRoleEventListener> listeners = new List<QNRTCClientRoleEventListener>(sInstance.clientRoleEventListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * L_1 = L_0->get_clientRoleEventListeners_4();
		List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * L_2 = (List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D *)il2cpp_codegen_object_new(List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D_il2cpp_TypeInfo_var);
		List_1__ctor_mFDF51C5ED04D26C8A6ABAC0E91FFC3524D0FB8D4(L_2, L_1, /*hidden argument*/List_1__ctor_mFDF51C5ED04D26C8A6ABAC0E91FFC3524D0FB8D4_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNRTCClientRoleEventListener listener in listeners)
		List_1_t07C37AAC0B647D1209046B7B78488E16F8EE562D * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C  L_4;
		L_4 = List_1_GetEnumerator_m233127B2FD7FB17E19B524AAFB01F064FF3E0838(L_3, /*hidden argument*/List_1_GetEnumerator_m233127B2FD7FB17E19B524AAFB01F064FF3E0838_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_001b:
		{
			// foreach (QNRTCClientRoleEventListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m7712355670628CB2A30D130CA8978941A90B5179_inline((Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C *)(&V_1), /*hidden argument*/Enumerator_get_Current_m7712355670628CB2A30D130CA8978941A90B5179_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnClientRoleError(errorCode, currentErrorMessage);
			RuntimeObject* L_6 = V_2;
			int32_t L_7 = __this->get_errorCode_0();
			String_t* L_8 = __this->get_currentErrorMessage_1();
			NullCheck(L_6);
			InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void qnrtc.QNRTCClientRoleEventListener::OnClientRoleError(System.Int32,System.String) */, QNRTCClientRoleEventListener_t508418F360F990CE05BC456095B1565BB07A10B6_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		}

IL_0038:
		{
			// foreach (QNRTCClientRoleEventListener listener in listeners)
			bool L_9;
			L_9 = Enumerator_MoveNext_m07527679FE6FC19F5013C9BA30EA9165D4CD17FF((Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m07527679FE6FC19F5013C9BA30EA9165D4CD17FF_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001b;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mED6A8CE5267E5A2E7914601170C62ABA154494BA((Enumerator_tF7605F06E4469A03F98296EAC3F008F02844522C *)(&V_1), /*hidden argument*/Enumerator_Dispose_mED6A8CE5267E5A2E7914601170C62ABA154494BA_RuntimeMethod_var);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass63_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0__ctor_m9EBF3D6ACEE62FEE3733D20291EB0C8C5D0C72D1 (U3CU3Ec__DisplayClass63_0_t7A03CBB5927CDC7CB5B43405D5B2B710C231D75C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass63_0::<OnMediaRelayResult>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass63_0_U3COnMediaRelayResultU3Eb__0_m6102C8AAFA0F7A6BD819CC96B529BAB9144FC29B (U3CU3Ec__DisplayClass63_0_t7A03CBB5927CDC7CB5B43405D5B2B710C231D75C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC8D4D1D09052360F0F9BD31CB15A548D107D05FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9F739327A743D5D29DB8F39004367C995C3ED7D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCC898BB1D66DD9AC65AC57AA841F0C99063FFE7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCAF8E519CD695F78836BB6E1BE8D6080FBD648CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE046C24CE5FBCB336E613DF5DB099EDFE7CE2387_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t183BB96555952E7D5EB933BDC2D880925C92665D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNMediaRelayListener_t0E3334272C3DD40A918FDFC4251EA2C5891915C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * V_0 = NULL;
	Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNMediaRelayListener> listeners = new List<QNMediaRelayListener>(sInstance.mediaRelayListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * L_1 = L_0->get_mediaRelayListeners_5();
		List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * L_2 = (List_1_t183BB96555952E7D5EB933BDC2D880925C92665D *)il2cpp_codegen_object_new(List_1_t183BB96555952E7D5EB933BDC2D880925C92665D_il2cpp_TypeInfo_var);
		List_1__ctor_mE046C24CE5FBCB336E613DF5DB099EDFE7CE2387(L_2, L_1, /*hidden argument*/List_1__ctor_mE046C24CE5FBCB336E613DF5DB099EDFE7CE2387_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNMediaRelayListener listener in listeners)
		List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D  L_4;
		L_4 = List_1_GetEnumerator_mCAF8E519CD695F78836BB6E1BE8D6080FBD648CA(L_3, /*hidden argument*/List_1_GetEnumerator_mCAF8E519CD695F78836BB6E1BE8D6080FBD648CA_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_001b:
		{
			// foreach (QNMediaRelayListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_mCC898BB1D66DD9AC65AC57AA841F0C99063FFE7E_inline((Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D *)(&V_1), /*hidden argument*/Enumerator_get_Current_mCC898BB1D66DD9AC65AC57AA841F0C99063FFE7E_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnMediaRelayResult(result);
			RuntimeObject* L_6 = V_2;
			Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0 * L_7 = __this->get_result_0();
			NullCheck(L_6);
			InterfaceActionInvoker1< Dictionary_2_tAD84C60B46523F713FCF8EFEEA80C6A02A0F2BA0 * >::Invoke(0 /* System.Void qnrtc.QNMediaRelayListener::OnMediaRelayResult(System.Collections.Generic.Dictionary`2<System.String,qnrtc.QNMediaRelayState>) */, QNMediaRelayListener_t0E3334272C3DD40A918FDFC4251EA2C5891915C1_il2cpp_TypeInfo_var, L_6, L_7);
		}

IL_0032:
		{
			// foreach (QNMediaRelayListener listener in listeners)
			bool L_8;
			L_8 = Enumerator_MoveNext_m9F739327A743D5D29DB8F39004367C995C3ED7D2((Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m9F739327A743D5D29DB8F39004367C995C3ED7D2_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_001b;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC8D4D1D09052360F0F9BD31CB15A548D107D05FF((Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D *)(&V_1), /*hidden argument*/Enumerator_Dispose_mC8D4D1D09052360F0F9BD31CB15A548D107D05FF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass64_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass64_0__ctor_m464D5C1FCEA56849481EDACC26385C4DF92EC8F2 (U3CU3Ec__DisplayClass64_0_t46BA0CC0C2F9D187D3EFCDCA5A566E4295EC9D81 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass64_0::<OnMediaRelayError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass64_0_U3COnMediaRelayErrorU3Eb__0_mA71F9BE250DB675F6ED0D839CD7A48C637256950 (U3CU3Ec__DisplayClass64_0_t46BA0CC0C2F9D187D3EFCDCA5A566E4295EC9D81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC8D4D1D09052360F0F9BD31CB15A548D107D05FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9F739327A743D5D29DB8F39004367C995C3ED7D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCC898BB1D66DD9AC65AC57AA841F0C99063FFE7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCAF8E519CD695F78836BB6E1BE8D6080FBD648CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE046C24CE5FBCB336E613DF5DB099EDFE7CE2387_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t183BB96555952E7D5EB933BDC2D880925C92665D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNMediaRelayListener_t0E3334272C3DD40A918FDFC4251EA2C5891915C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * V_0 = NULL;
	Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNMediaRelayListener> listeners = new List<QNMediaRelayListener>(sInstance.mediaRelayListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * L_1 = L_0->get_mediaRelayListeners_5();
		List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * L_2 = (List_1_t183BB96555952E7D5EB933BDC2D880925C92665D *)il2cpp_codegen_object_new(List_1_t183BB96555952E7D5EB933BDC2D880925C92665D_il2cpp_TypeInfo_var);
		List_1__ctor_mE046C24CE5FBCB336E613DF5DB099EDFE7CE2387(L_2, L_1, /*hidden argument*/List_1__ctor_mE046C24CE5FBCB336E613DF5DB099EDFE7CE2387_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNMediaRelayListener listener in listeners)
		List_1_t183BB96555952E7D5EB933BDC2D880925C92665D * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D  L_4;
		L_4 = List_1_GetEnumerator_mCAF8E519CD695F78836BB6E1BE8D6080FBD648CA(L_3, /*hidden argument*/List_1_GetEnumerator_mCAF8E519CD695F78836BB6E1BE8D6080FBD648CA_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_001b:
		{
			// foreach (QNMediaRelayListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_mCC898BB1D66DD9AC65AC57AA841F0C99063FFE7E_inline((Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D *)(&V_1), /*hidden argument*/Enumerator_get_Current_mCC898BB1D66DD9AC65AC57AA841F0C99063FFE7E_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnMediaRelayError(errorCode, currentErrorMessage);
			RuntimeObject* L_6 = V_2;
			int32_t L_7 = __this->get_errorCode_0();
			String_t* L_8 = __this->get_currentErrorMessage_1();
			NullCheck(L_6);
			InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void qnrtc.QNMediaRelayListener::OnMediaRelayError(System.Int32,System.String) */, QNMediaRelayListener_t0E3334272C3DD40A918FDFC4251EA2C5891915C1_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		}

IL_0038:
		{
			// foreach (QNMediaRelayListener listener in listeners)
			bool L_9;
			L_9 = Enumerator_MoveNext_m9F739327A743D5D29DB8F39004367C995C3ED7D2((Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m9F739327A743D5D29DB8F39004367C995C3ED7D2_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001b;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC8D4D1D09052360F0F9BD31CB15A548D107D05FF((Enumerator_tE3978F6A6CD10DA8D5D92CAC5BD2FB8B880F377D *)(&V_1), /*hidden argument*/Enumerator_Dispose_mC8D4D1D09052360F0F9BD31CB15A548D107D05FF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass66_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0__ctor_mD8BFB6C925FD44C695EED15A6B24FBE6E81C0A88 (U3CU3Ec__DisplayClass66_0_tCDFD49F55861F898FA96CBBD565A49B81BD8318A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass66_0::<OnPublishError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass66_0_U3COnPublishErrorU3Eb__0_mD416162998516E94EA488BA8C2E5C35E1D877EFB (U3CU3Ec__DisplayClass66_0_tCDFD49F55861F898FA96CBBD565A49B81BD8318A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBC190F6E473609692A5838152AC9E12062A5C666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m488A8BBC2E2D1DA6D7C6F66D80ACB57B239AE301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF1F92F90DAC2FA71E7B0C8F31C1799A8417CBA57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mAA443355D31D4C0FA0CB80B3E7A7809765C6ED92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAACDAE5411021F02DF758D8B4F9CFB958637BA3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNPublishResultListener_tF68D1E6213DF9CD41CE1642176E4C3A9BBE43690_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * V_0 = NULL;
	Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNPublishResultListener> listeners = new List<QNPublishResultListener>(sInstance.publishResultListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * L_1 = L_0->get_publishResultListeners_6();
		List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * L_2 = (List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE *)il2cpp_codegen_object_new(List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE_il2cpp_TypeInfo_var);
		List_1__ctor_mAACDAE5411021F02DF758D8B4F9CFB958637BA3A(L_2, L_1, /*hidden argument*/List_1__ctor_mAACDAE5411021F02DF758D8B4F9CFB958637BA3A_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNPublishResultListener listener in listeners)
		List_1_tD0EAE44CB92465229FD88B8D74D9DBF8C358B8BE * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E  L_4;
		L_4 = List_1_GetEnumerator_mAA443355D31D4C0FA0CB80B3E7A7809765C6ED92(L_3, /*hidden argument*/List_1_GetEnumerator_mAA443355D31D4C0FA0CB80B3E7A7809765C6ED92_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_001b:
		{
			// foreach (QNPublishResultListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_mF1F92F90DAC2FA71E7B0C8F31C1799A8417CBA57_inline((Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E *)(&V_1), /*hidden argument*/Enumerator_get_Current_mF1F92F90DAC2FA71E7B0C8F31C1799A8417CBA57_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnPublishError(errorCode, currentErrorMessage);
			RuntimeObject* L_6 = V_2;
			int32_t L_7 = __this->get_errorCode_0();
			String_t* L_8 = __this->get_currentErrorMessage_1();
			NullCheck(L_6);
			InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void qnrtc.QNPublishResultListener::OnPublishError(System.Int32,System.String) */, QNPublishResultListener_tF68D1E6213DF9CD41CE1642176E4C3A9BBE43690_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		}

IL_0038:
		{
			// foreach (QNPublishResultListener listener in listeners)
			bool L_9;
			L_9 = Enumerator_MoveNext_m488A8BBC2E2D1DA6D7C6F66D80ACB57B239AE301((Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m488A8BBC2E2D1DA6D7C6F66D80ACB57B239AE301_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001b;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBC190F6E473609692A5838152AC9E12062A5C666((Enumerator_t9F1A8F9BBA16E188A47AEA5148B3FECB8935E88E *)(&V_1), /*hidden argument*/Enumerator_Dispose_mBC190F6E473609692A5838152AC9E12062A5C666_RuntimeMethod_var);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass67_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0__ctor_m241F7F6C8F5249D4D1F710224AD916E009DF31C1 (U3CU3Ec__DisplayClass67_0_t5DC3CEE62D4F40329FC4FEEC576419629A5533D7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass67_0::<OnLiveStreamingStarted>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass67_0_U3COnLiveStreamingStartedU3Eb__0_mD2AF8E70F61C27AB4C9267C8A9D9D4C6CC23F1CA (U3CU3Ec__DisplayClass67_0_t5DC3CEE62D4F40329FC4FEEC576419629A5533D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m919CB9DB84E6EFF184E07D0BD6BBE2467C0F7C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96A9A53B02C242C7F50165172300672643D984DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0A0046F4A50F2FBE6135D1F19CA079552615508C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1A90E7283FEE3F060AA16D4CA4EEA4C20666A7F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC026BA2FCCD384B2C4BDF09101D93D7071A54EAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNLiveStreamingListener_tDB0E3344386E1345F94C97798E3A933A486C121C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * V_0 = NULL;
	Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNLiveStreamingListener> listeners = new List<QNLiveStreamingListener>(sInstance.liveStreamingListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * L_1 = L_0->get_liveStreamingListeners_7();
		List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * L_2 = (List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB *)il2cpp_codegen_object_new(List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB_il2cpp_TypeInfo_var);
		List_1__ctor_mC026BA2FCCD384B2C4BDF09101D93D7071A54EAF(L_2, L_1, /*hidden argument*/List_1__ctor_mC026BA2FCCD384B2C4BDF09101D93D7071A54EAF_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNLiveStreamingListener listener in listeners)
		List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A  L_4;
		L_4 = List_1_GetEnumerator_m1A90E7283FEE3F060AA16D4CA4EEA4C20666A7F7(L_3, /*hidden argument*/List_1_GetEnumerator_m1A90E7283FEE3F060AA16D4CA4EEA4C20666A7F7_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_001b:
		{
			// foreach (QNLiveStreamingListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m0A0046F4A50F2FBE6135D1F19CA079552615508C_inline((Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *)(&V_1), /*hidden argument*/Enumerator_get_Current_m0A0046F4A50F2FBE6135D1F19CA079552615508C_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnStarted(currentStreamId);
			RuntimeObject* L_6 = V_2;
			String_t* L_7 = __this->get_currentStreamId_0();
			NullCheck(L_6);
			InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void qnrtc.QNLiveStreamingListener::OnStarted(System.String) */, QNLiveStreamingListener_tDB0E3344386E1345F94C97798E3A933A486C121C_il2cpp_TypeInfo_var, L_6, L_7);
		}

IL_0032:
		{
			// foreach (QNLiveStreamingListener listener in listeners)
			bool L_8;
			L_8 = Enumerator_MoveNext_m96A9A53B02C242C7F50165172300672643D984DC((Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m96A9A53B02C242C7F50165172300672643D984DC_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_001b;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m919CB9DB84E6EFF184E07D0BD6BBE2467C0F7C35((Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *)(&V_1), /*hidden argument*/Enumerator_Dispose_m919CB9DB84E6EFF184E07D0BD6BBE2467C0F7C35_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass68_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass68_0__ctor_m78D85091381CDDF23943C696E32CB5C90862A164 (U3CU3Ec__DisplayClass68_0_tCED900DFACCAB707B4F58B802DEF2995046D9DFF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass68_0::<OnLiveStreamingStopped>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass68_0_U3COnLiveStreamingStoppedU3Eb__0_m3B0E002E8119091EAA2F9973B7B011266C6D609E (U3CU3Ec__DisplayClass68_0_tCED900DFACCAB707B4F58B802DEF2995046D9DFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m919CB9DB84E6EFF184E07D0BD6BBE2467C0F7C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96A9A53B02C242C7F50165172300672643D984DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0A0046F4A50F2FBE6135D1F19CA079552615508C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1A90E7283FEE3F060AA16D4CA4EEA4C20666A7F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC026BA2FCCD384B2C4BDF09101D93D7071A54EAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNLiveStreamingListener_tDB0E3344386E1345F94C97798E3A933A486C121C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * V_0 = NULL;
	Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNLiveStreamingListener> listeners = new List<QNLiveStreamingListener>(sInstance.liveStreamingListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * L_1 = L_0->get_liveStreamingListeners_7();
		List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * L_2 = (List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB *)il2cpp_codegen_object_new(List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB_il2cpp_TypeInfo_var);
		List_1__ctor_mC026BA2FCCD384B2C4BDF09101D93D7071A54EAF(L_2, L_1, /*hidden argument*/List_1__ctor_mC026BA2FCCD384B2C4BDF09101D93D7071A54EAF_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNLiveStreamingListener listener in listeners)
		List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A  L_4;
		L_4 = List_1_GetEnumerator_m1A90E7283FEE3F060AA16D4CA4EEA4C20666A7F7(L_3, /*hidden argument*/List_1_GetEnumerator_m1A90E7283FEE3F060AA16D4CA4EEA4C20666A7F7_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_001b:
		{
			// foreach (QNLiveStreamingListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m0A0046F4A50F2FBE6135D1F19CA079552615508C_inline((Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *)(&V_1), /*hidden argument*/Enumerator_get_Current_m0A0046F4A50F2FBE6135D1F19CA079552615508C_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnStoped(currentStreamId);
			RuntimeObject* L_6 = V_2;
			String_t* L_7 = __this->get_currentStreamId_0();
			NullCheck(L_6);
			InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void qnrtc.QNLiveStreamingListener::OnStoped(System.String) */, QNLiveStreamingListener_tDB0E3344386E1345F94C97798E3A933A486C121C_il2cpp_TypeInfo_var, L_6, L_7);
		}

IL_0032:
		{
			// foreach (QNLiveStreamingListener listener in listeners)
			bool L_8;
			L_8 = Enumerator_MoveNext_m96A9A53B02C242C7F50165172300672643D984DC((Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m96A9A53B02C242C7F50165172300672643D984DC_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_001b;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m919CB9DB84E6EFF184E07D0BD6BBE2467C0F7C35((Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *)(&V_1), /*hidden argument*/Enumerator_Dispose_m919CB9DB84E6EFF184E07D0BD6BBE2467C0F7C35_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass69_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0__ctor_m1DEC0DD5BD181A427D3B2E7AE4E43A5FC009EE19 (U3CU3Ec__DisplayClass69_0_t723537D1DF7948FC6AD565DB31369BCEABDAEDF1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass69_0::<OnLiveStreamingTranscodingTracksUpdated>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0_U3COnLiveStreamingTranscodingTracksUpdatedU3Eb__0_m96FC06CDF60CC1542099A5D62DCD3D9434FE87F9 (U3CU3Ec__DisplayClass69_0_t723537D1DF7948FC6AD565DB31369BCEABDAEDF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m919CB9DB84E6EFF184E07D0BD6BBE2467C0F7C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96A9A53B02C242C7F50165172300672643D984DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0A0046F4A50F2FBE6135D1F19CA079552615508C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1A90E7283FEE3F060AA16D4CA4EEA4C20666A7F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC026BA2FCCD384B2C4BDF09101D93D7071A54EAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNLiveStreamingListener_tDB0E3344386E1345F94C97798E3A933A486C121C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * V_0 = NULL;
	Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNLiveStreamingListener> listeners = new List<QNLiveStreamingListener>(sInstance.liveStreamingListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * L_1 = L_0->get_liveStreamingListeners_7();
		List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * L_2 = (List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB *)il2cpp_codegen_object_new(List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB_il2cpp_TypeInfo_var);
		List_1__ctor_mC026BA2FCCD384B2C4BDF09101D93D7071A54EAF(L_2, L_1, /*hidden argument*/List_1__ctor_mC026BA2FCCD384B2C4BDF09101D93D7071A54EAF_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNLiveStreamingListener listener in listeners)
		List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A  L_4;
		L_4 = List_1_GetEnumerator_m1A90E7283FEE3F060AA16D4CA4EEA4C20666A7F7(L_3, /*hidden argument*/List_1_GetEnumerator_m1A90E7283FEE3F060AA16D4CA4EEA4C20666A7F7_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_001b:
		{
			// foreach (QNLiveStreamingListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m0A0046F4A50F2FBE6135D1F19CA079552615508C_inline((Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *)(&V_1), /*hidden argument*/Enumerator_get_Current_m0A0046F4A50F2FBE6135D1F19CA079552615508C_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnTranscodingTracksUpdated(currentStreamId);
			RuntimeObject* L_6 = V_2;
			String_t* L_7 = __this->get_currentStreamId_0();
			NullCheck(L_6);
			InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void qnrtc.QNLiveStreamingListener::OnTranscodingTracksUpdated(System.String) */, QNLiveStreamingListener_tDB0E3344386E1345F94C97798E3A933A486C121C_il2cpp_TypeInfo_var, L_6, L_7);
		}

IL_0032:
		{
			// foreach (QNLiveStreamingListener listener in listeners)
			bool L_8;
			L_8 = Enumerator_MoveNext_m96A9A53B02C242C7F50165172300672643D984DC((Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m96A9A53B02C242C7F50165172300672643D984DC_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_001b;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m919CB9DB84E6EFF184E07D0BD6BBE2467C0F7C35((Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *)(&V_1), /*hidden argument*/Enumerator_Dispose_m919CB9DB84E6EFF184E07D0BD6BBE2467C0F7C35_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass70_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0__ctor_mB0A1EB6FAA9A76CC82525D7E20E24655DBC85987 (U3CU3Ec__DisplayClass70_0_t8F8426DD7AF0AB06D09638977B4AAC40E4B173D8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass70_0::<OnLiveStreamingOnError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass70_0_U3COnLiveStreamingOnErrorU3Eb__0_m5F32C3BD2935980C38EDE2F715FC4FE7D583C532 (U3CU3Ec__DisplayClass70_0_t8F8426DD7AF0AB06D09638977B4AAC40E4B173D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m919CB9DB84E6EFF184E07D0BD6BBE2467C0F7C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96A9A53B02C242C7F50165172300672643D984DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0A0046F4A50F2FBE6135D1F19CA079552615508C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1A90E7283FEE3F060AA16D4CA4EEA4C20666A7F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC026BA2FCCD384B2C4BDF09101D93D7071A54EAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNLiveStreamingListener_tDB0E3344386E1345F94C97798E3A933A486C121C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * V_0 = NULL;
	Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNLiveStreamingListener> listeners = new List<QNLiveStreamingListener>(sInstance.liveStreamingListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * L_1 = L_0->get_liveStreamingListeners_7();
		List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * L_2 = (List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB *)il2cpp_codegen_object_new(List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB_il2cpp_TypeInfo_var);
		List_1__ctor_mC026BA2FCCD384B2C4BDF09101D93D7071A54EAF(L_2, L_1, /*hidden argument*/List_1__ctor_mC026BA2FCCD384B2C4BDF09101D93D7071A54EAF_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNLiveStreamingListener listener in listeners)
		List_1_t82D4DB601E97E224E677B53A8A21193A6F9B27DB * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A  L_4;
		L_4 = List_1_GetEnumerator_m1A90E7283FEE3F060AA16D4CA4EEA4C20666A7F7(L_3, /*hidden argument*/List_1_GetEnumerator_m1A90E7283FEE3F060AA16D4CA4EEA4C20666A7F7_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_001b:
		{
			// foreach (QNLiveStreamingListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m0A0046F4A50F2FBE6135D1F19CA079552615508C_inline((Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *)(&V_1), /*hidden argument*/Enumerator_get_Current_m0A0046F4A50F2FBE6135D1F19CA079552615508C_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnLiveStreamingError(currentStreamId, info);
			RuntimeObject* L_6 = V_2;
			String_t* L_7 = __this->get_currentStreamId_0();
			QNLiveStreamingErrorInfo_t226B16E3A0455EF6B7DBE3C375AE111E7F1BEA42  L_8 = __this->get_info_1();
			NullCheck(L_6);
			InterfaceActionInvoker2< String_t*, QNLiveStreamingErrorInfo_t226B16E3A0455EF6B7DBE3C375AE111E7F1BEA42  >::Invoke(3 /* System.Void qnrtc.QNLiveStreamingListener::OnLiveStreamingError(System.String,qnrtc.QNLiveStreamingErrorInfo) */, QNLiveStreamingListener_tDB0E3344386E1345F94C97798E3A933A486C121C_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		}

IL_0038:
		{
			// foreach (QNLiveStreamingListener listener in listeners)
			bool L_9;
			L_9 = Enumerator_MoveNext_m96A9A53B02C242C7F50165172300672643D984DC((Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m96A9A53B02C242C7F50165172300672643D984DC_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_001b;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m919CB9DB84E6EFF184E07D0BD6BBE2467C0F7C35((Enumerator_tC26D0AA82C121F2C48307244C364053CD37F4E7A *)(&V_1), /*hidden argument*/Enumerator_Dispose_m919CB9DB84E6EFF184E07D0BD6BBE2467C0F7C35_RuntimeMethod_var);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
	}

IL_0052:
	{
		// });
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
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass72_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass72_0__ctor_m27C103FEC00597A76116C189000C62B4622AD540 (U3CU3Ec__DisplayClass72_0_tAF91F0180EED25870CF1C79D3D788F2CD37AC089 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCClientImpl/<>c__DisplayClass72_0::<OnNetworkQualityNotified>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass72_0_U3COnNetworkQualityNotifiedU3Eb__0_mB5301843957477BC77DAF4E5E5D3BBE6E804AB5C (U3CU3Ec__DisplayClass72_0_tAF91F0180EED25870CF1C79D3D788F2CD37AC089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1AF1B85572FAD8E8BBCC9FF0D4D87BCDB0F2C8E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF9C9F8F6F3645D656F370B466F47D26958EC167A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0A7AD8B388E6D93B5196E4A582115AB0EF7E1400_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m68921A1CA160CBEF9C9CC7F2B9629AE8F268ABEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC235CE79C93224F87D62F638217E2595B3E4DB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNNetworkQualityListener_t4176D3AB2F3C7CED81AD05A44440FCA3F9D36AD0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF * V_0 = NULL;
	Enumerator_t018C604741829237B8E541F69B1144757220CFC9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNNetworkQualityListener> listeners = new List<QNNetworkQualityListener>(sInstance.networkQualityListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var);
		QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129 * L_0 = ((QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCClientImpl_t2D836D0C2B97D265C70CCD349EAA28F525DE0129_il2cpp_TypeInfo_var))->get_sInstance_2();
		NullCheck(L_0);
		List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF * L_1 = L_0->get_networkQualityListeners_9();
		List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF * L_2 = (List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF *)il2cpp_codegen_object_new(List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF_il2cpp_TypeInfo_var);
		List_1__ctor_mDC235CE79C93224F87D62F638217E2595B3E4DB4(L_2, L_1, /*hidden argument*/List_1__ctor_mDC235CE79C93224F87D62F638217E2595B3E4DB4_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNNetworkQualityListener listener in listeners)
		List_1_t7D6F6D9F30098909185579CDF6BAED3D83DD2BAF * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t018C604741829237B8E541F69B1144757220CFC9  L_4;
		L_4 = List_1_GetEnumerator_m68921A1CA160CBEF9C9CC7F2B9629AE8F268ABEA(L_3, /*hidden argument*/List_1_GetEnumerator_m68921A1CA160CBEF9C9CC7F2B9629AE8F268ABEA_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_001b:
		{
			// foreach (QNNetworkQualityListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m0A7AD8B388E6D93B5196E4A582115AB0EF7E1400_inline((Enumerator_t018C604741829237B8E541F69B1144757220CFC9 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m0A7AD8B388E6D93B5196E4A582115AB0EF7E1400_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnNetworkQualityNotified(quality);
			RuntimeObject* L_6 = V_2;
			QNNetworkQuality_t2DA9536D971051323B4FE00DE465B50EB91B56C1  L_7 = __this->get_quality_0();
			NullCheck(L_6);
			InterfaceActionInvoker1< QNNetworkQuality_t2DA9536D971051323B4FE00DE465B50EB91B56C1  >::Invoke(0 /* System.Void qnrtc.QNNetworkQualityListener::OnNetworkQualityNotified(qnrtc.QNNetworkQuality) */, QNNetworkQualityListener_t4176D3AB2F3C7CED81AD05A44440FCA3F9D36AD0_il2cpp_TypeInfo_var, L_6, L_7);
		}

IL_0032:
		{
			// foreach (QNNetworkQualityListener listener in listeners)
			bool L_8;
			L_8 = Enumerator_MoveNext_mF9C9F8F6F3645D656F370B466F47D26958EC167A((Enumerator_t018C604741829237B8E541F69B1144757220CFC9 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mF9C9F8F6F3645D656F370B466F47D26958EC167A_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_001b;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1AF1B85572FAD8E8BBCC9FF0D4D87BCDB0F2C8E3((Enumerator_t018C604741829237B8E541F69B1144757220CFC9 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m1AF1B85572FAD8E8BBCC9FF0D4D87BCDB0F2C8E3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// });
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
// System.Void qnrtc.QNRTCImpl/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m072AA8D04835B2C53883B8B81F327D07AD4C3490 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F * L_0 = (U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F *)il2cpp_codegen_object_new(U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m887CB908EDA6014064509B36B279E81664A2ED1C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void qnrtc.QNRTCImpl/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m887CB908EDA6014064509B36B279E81664A2ED1C (U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean qnrtc.QNRTCImpl/<>c::<DeInit>b__5_0(qnrtc.QNRTCEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDeInitU3Eb__5_0_mE50D79F8363404505097AB3311958FB34C801699 (U3CU3Ec_t67367FABB923E9CD6BCB9C1BBBB916919D29CF3F * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	{
		// eventListeners.RemoveAll(item => true);
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
// System.Void qnrtc.QNRTCImpl/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m75AC9849382668F4081402AFA3ECB28450FCF92F (U3CU3Ec__DisplayClass17_0_t37D297C8DACF8D6FC987909A195471863B7DC562 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRTCImpl/<>c__DisplayClass17_0::<OnAudioRouteChanged>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3COnAudioRouteChangedU3Eb__0_m6A3E8116E2AE8E7E48506692527715BE5C5BBC56 (U3CU3Ec__DisplayClass17_0_t37D297C8DACF8D6FC987909A195471863B7DC562 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4CB17774AE68A306344B0FD3B66A28F25259BBCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4571AE6BE4BC4203E66E05DE4063747A1A419D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFE9D3E68D170EA875D9D72B5D38CE0E10AD392A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC03A75F234608E1577BE892E483C8F4410BAAE40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6E3850089516E6A589C702728C5901492AACC138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCEventListener_t28A5400C8F7D67B52EE80A307404CE10AD2887AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNRTCImpl_t4298BAC84342C1C7718406E69CF48C20D68938B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 * V_0 = NULL;
	Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNRTCEventListener> listeners = new List<QNRTCEventListener>(eventListeners);
		IL2CPP_RUNTIME_CLASS_INIT(QNRTCImpl_t4298BAC84342C1C7718406E69CF48C20D68938B7_il2cpp_TypeInfo_var);
		List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 * L_0 = ((QNRTCImpl_t4298BAC84342C1C7718406E69CF48C20D68938B7_StaticFields*)il2cpp_codegen_static_fields_for(QNRTCImpl_t4298BAC84342C1C7718406E69CF48C20D68938B7_il2cpp_TypeInfo_var))->get_eventListeners_0();
		List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 * L_1 = (List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 *)il2cpp_codegen_object_new(List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114_il2cpp_TypeInfo_var);
		List_1__ctor_m6E3850089516E6A589C702728C5901492AACC138(L_1, L_0, /*hidden argument*/List_1__ctor_m6E3850089516E6A589C702728C5901492AACC138_RuntimeMethod_var);
		V_0 = L_1;
		// foreach (QNRTCEventListener listener in listeners)
		List_1_t81D09F5571C341A8D477C8D07DC3477E0C77D114 * L_2 = V_0;
		NullCheck(L_2);
		Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216  L_3;
		L_3 = List_1_GetEnumerator_mC03A75F234608E1577BE892E483C8F4410BAAE40(L_2, /*hidden argument*/List_1_GetEnumerator_mC03A75F234608E1577BE892E483C8F4410BAAE40_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_0016:
		{
			// foreach (QNRTCEventListener listener in listeners)
			RuntimeObject* L_4;
			L_4 = Enumerator_get_Current_mFE9D3E68D170EA875D9D72B5D38CE0E10AD392A7_inline((Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mFE9D3E68D170EA875D9D72B5D38CE0E10AD392A7_RuntimeMethod_var);
			V_2 = L_4;
			// listener.OnAudioRouteChanged((QNAudioDevice)device);
			RuntimeObject* L_5 = V_2;
			int32_t L_6 = __this->get_device_0();
			NullCheck(L_5);
			InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void qnrtc.QNRTCEventListener::OnAudioRouteChanged(qnrtc.QNAudioDevice) */, QNRTCEventListener_t28A5400C8F7D67B52EE80A307404CE10AD2887AE_il2cpp_TypeInfo_var, L_5, L_6);
		}

IL_002d:
		{
			// foreach (QNRTCEventListener listener in listeners)
			bool L_7;
			L_7 = Enumerator_MoveNext_m4571AE6BE4BC4203E66E05DE4063747A1A419D81((Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m4571AE6BE4BC4203E66E05DE4063747A1A419D81_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0016;
			}
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x47, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4CB17774AE68A306344B0FD3B66A28F25259BBCF((Enumerator_tAB5A3087A68AA7FF499728473F9365D4351A9216 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m4CB17774AE68A306344B0FD3B66A28F25259BBCF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		// });
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
// System.Void qnrtc.QNRemoteTrackImpl/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m44FAE6E54E141324C4D2A015D30ED0731350227D (U3CU3Ec__DisplayClass5_0_t3DE3E818AE8FC6236EDA869728ACD2E5171444C4 * __this, const RuntimeMethod* method)
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
// System.Void qnrtc.QNRemoteTrackImpl/<>c__DisplayClass5_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_1__ctor_m61D380F05C9DB460A80A2F5BC0965DC97F6E7D6B (U3CU3Ec__DisplayClass5_1_t805B9AD3F21643880F37A41293C6DECEC5248578 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void qnrtc.QNRemoteTrackImpl/<>c__DisplayClass5_1::<OnMuteStateChanged>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_1_U3COnMuteStateChangedU3Eb__0_mBAC9F9341E100C38DF0D3D6D59C4A5D5988C6A92 (U3CU3Ec__DisplayClass5_1_t805B9AD3F21643880F37A41293C6DECEC5248578 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m27211F2A3800AF0A3448F440C119A168EA003FF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF3164FEDEFD99EE7201EE8B0C4CD3CB9D7AA9D0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6E51D13DEC26073094BBB5921FE214ACAD7E5155_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m259F2D883AF5EAB5011683FD0AD2B55D45C94536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE89ADE68BA3F3BFEC27CAABE2BCA2D1C8C1C0C74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNTrackInfoChangedListener_tE8EF67475410CB05EB828057754F28FD6FE7DDBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D * V_0 = NULL;
	Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073  V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<QNTrackInfoChangedListener> listeners = new List<QNTrackInfoChangedListener>(remoteTrackImpl.trackInfoChangedListeners);
		QNRemoteTrackImpl_t14FE838E8A5E61143C8C4914B9546ACA84A19E1C * L_0 = __this->get_remoteTrackImpl_0();
		NullCheck(L_0);
		List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D * L_1 = L_0->get_trackInfoChangedListeners_1();
		List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D * L_2 = (List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D *)il2cpp_codegen_object_new(List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D_il2cpp_TypeInfo_var);
		List_1__ctor_mE89ADE68BA3F3BFEC27CAABE2BCA2D1C8C1C0C74(L_2, L_1, /*hidden argument*/List_1__ctor_mE89ADE68BA3F3BFEC27CAABE2BCA2D1C8C1C0C74_RuntimeMethod_var);
		V_0 = L_2;
		// foreach (QNTrackInfoChangedListener listener in listeners)
		List_1_t7767C7F9A510EAE10481849400C4A2B5C641D02D * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073  L_4;
		L_4 = List_1_GetEnumerator_m259F2D883AF5EAB5011683FD0AD2B55D45C94536(L_3, /*hidden argument*/List_1_GetEnumerator_m259F2D883AF5EAB5011683FD0AD2B55D45C94536_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004e;
		}

IL_001c:
		{
			// foreach (QNTrackInfoChangedListener listener in listeners)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m6E51D13DEC26073094BBB5921FE214ACAD7E5155_inline((Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m6E51D13DEC26073094BBB5921FE214ACAD7E5155_RuntimeMethod_var);
			V_2 = L_5;
			// listener.OnMuteStateChanged(currentUserId, currentTrackId, muted);
			RuntimeObject* L_6 = V_2;
			U3CU3Ec__DisplayClass5_0_t3DE3E818AE8FC6236EDA869728ACD2E5171444C4 * L_7 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_7);
			String_t* L_8 = L_7->get_currentUserId_0();
			U3CU3Ec__DisplayClass5_0_t3DE3E818AE8FC6236EDA869728ACD2E5171444C4 * L_9 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_9);
			String_t* L_10 = L_9->get_currentTrackId_1();
			U3CU3Ec__DisplayClass5_0_t3DE3E818AE8FC6236EDA869728ACD2E5171444C4 * L_11 = __this->get_CSU24U3CU3E8__locals1_1();
			NullCheck(L_11);
			bool L_12 = L_11->get_muted_2();
			NullCheck(L_6);
			InterfaceActionInvoker3< String_t*, String_t*, bool >::Invoke(0 /* System.Void qnrtc.QNTrackInfoChangedListener::OnMuteStateChanged(System.String,System.String,System.Boolean) */, QNTrackInfoChangedListener_tE8EF67475410CB05EB828057754F28FD6FE7DDBC_il2cpp_TypeInfo_var, L_6, L_8, L_10, L_12);
		}

IL_004e:
		{
			// foreach (QNTrackInfoChangedListener listener in listeners)
			bool L_13;
			L_13 = Enumerator_MoveNext_mF3164FEDEFD99EE7201EE8B0C4CD3CB9D7AA9D0E((Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mF3164FEDEFD99EE7201EE8B0C4CD3CB9D7AA9D0E_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_001c;
			}
		}

IL_0057:
		{
			IL2CPP_LEAVE(0x68, FINALLY_0059);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0059;
	}

FINALLY_0059:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m27211F2A3800AF0A3448F440C119A168EA003FF1((Enumerator_t8E6784070A359FF5C49237E6EE8DB72AB3D0C073 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m27211F2A3800AF0A3448F440C119A168EA003FF1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(89)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(89)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x68, IL_0068)
	}

IL_0068:
	{
		// });
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnSendMessageButtonClickHandler_t5AB3F1ED1EA3BFA96752ABA6798E8BB3509F2BDA (OnSendMessageButtonClickHandler_t5AB3F1ED1EA3BFA96752ABA6798E8BB3509F2BDA * __this, String_t* ___userId0, String_t* ___messageId1, String_t* ___message2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___userId0' to native representation
	char* ____userId0_marshaled = NULL;
	____userId0_marshaled = il2cpp_codegen_marshal_string(___userId0);

	// Marshaling of parameter '___messageId1' to native representation
	char* ____messageId1_marshaled = NULL;
	____messageId1_marshaled = il2cpp_codegen_marshal_string(___messageId1);

	// Marshaling of parameter '___message2' to native representation
	char* ____message2_marshaled = NULL;
	____message2_marshaled = il2cpp_codegen_marshal_string(___message2);

	// Native function invocation
	il2cppPInvokeFunc(____userId0_marshaled, ____messageId1_marshaled, ____message2_marshaled);

	// Marshaling cleanup of parameter '___userId0' native representation
	il2cpp_codegen_marshal_free(____userId0_marshaled);
	____userId0_marshaled = NULL;

	// Marshaling cleanup of parameter '___messageId1' native representation
	il2cpp_codegen_marshal_free(____messageId1_marshaled);
	____messageId1_marshaled = NULL;

	// Marshaling cleanup of parameter '___message2' native representation
	il2cpp_codegen_marshal_free(____message2_marshaled);
	____message2_marshaled = NULL;

}
// System.Void QNRTCUnityDemo.SendMessageView/OnSendMessageButtonClickHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSendMessageButtonClickHandler__ctor_mF35B2E8EA4D415A9921B67E747D88CD1EB7F5A8E (OnSendMessageButtonClickHandler_t5AB3F1ED1EA3BFA96752ABA6798E8BB3509F2BDA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void QNRTCUnityDemo.SendMessageView/OnSendMessageButtonClickHandler::Invoke(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSendMessageButtonClickHandler_Invoke_mD025168182673F602FA39C2B93E2DCBAE4D299D0 (OnSendMessageButtonClickHandler_t5AB3F1ED1EA3BFA96752ABA6798E8BB3509F2BDA * __this, String_t* ___userId0, String_t* ___messageId1, String_t* ___message2, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___userId0, ___messageId1, ___message2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userId0, ___messageId1, ___message2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, ___userId0, ___messageId1, ___message2);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, ___userId0, ___messageId1, ___message2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___userId0, ___messageId1, ___message2);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___userId0, ___messageId1, ___message2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___userId0, ___messageId1, ___message2, targetMethod);
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
						GenericInterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___userId0, ___messageId1, ___message2);
					else
						GenericVirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___userId0, ___messageId1, ___message2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___userId0, ___messageId1, ___message2);
					else
						VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___userId0, ___messageId1, ___message2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___userId0, ___messageId1, ___message2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___userId0, ___messageId1, ___message2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult QNRTCUnityDemo.SendMessageView/OnSendMessageButtonClickHandler::BeginInvoke(System.String,System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSendMessageButtonClickHandler_BeginInvoke_mD1159BB0F6DAAFC5FBDD9AE44CCBA1308C5DF6AE (OnSendMessageButtonClickHandler_t5AB3F1ED1EA3BFA96752ABA6798E8BB3509F2BDA * __this, String_t* ___userId0, String_t* ___messageId1, String_t* ___message2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___userId0;
	__d_args[1] = ___messageId1;
	__d_args[2] = ___message2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void QNRTCUnityDemo.SendMessageView/OnSendMessageButtonClickHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSendMessageButtonClickHandler_EndInvoke_mBA72D425178E05B1C1B7DB3997CE7F1EE020C89D (OnSendMessageButtonClickHandler_t5AB3F1ED1EA3BFA96752ABA6798E8BB3509F2BDA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnRemoveLayoutButtonClickHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRemoveLayoutButtonClickHandler__ctor_m38519ABFD9E2C0EE19C7E48F02D01D147EE7BFA4 (OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnRemoveLayoutButtonClickHandler::Invoke(System.String,System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingTrack>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRemoveLayoutButtonClickHandler_Invoke_m68167B49FAEC4A4E6240CB58170E1A49C5614898 (OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * __this, String_t* ___streamId0, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * ___layouts1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___streamId0, ___layouts1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___streamId0, ___layouts1, targetMethod);
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
						GenericInterfaceActionInvoker1< List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(targetMethod, ___streamId0, ___layouts1);
					else
						GenericVirtActionInvoker1< List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(targetMethod, ___streamId0, ___layouts1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___streamId0, ___layouts1);
					else
						VirtActionInvoker1< List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___streamId0, ___layouts1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___streamId0, ___layouts1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(targetMethod, targetThis, ___streamId0, ___layouts1);
					else
						GenericVirtActionInvoker2< String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(targetMethod, targetThis, ___streamId0, ___layouts1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___streamId0, ___layouts1);
					else
						VirtActionInvoker2< String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___streamId0, ___layouts1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___streamId0, ___layouts1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___streamId0, ___layouts1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult QNRTCUnityDemo.TranscodingLiveView/OnRemoveLayoutButtonClickHandler::BeginInvoke(System.String,System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingTrack>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRemoveLayoutButtonClickHandler_BeginInvoke_m9DBA085490C51468ED0F4E35016F5E52974450FF (OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * __this, String_t* ___streamId0, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * ___layouts1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___streamId0;
	__d_args[1] = ___layouts1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnRemoveLayoutButtonClickHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRemoveLayoutButtonClickHandler_EndInvoke_mDAF4AEC77ACD87EE29537EFBD465733A1E648B71 (OnRemoveLayoutButtonClickHandler_tBA3E654F6ABEC551CC3AB64629B8F49DF56C1613 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnStartTranscodingButtonClickHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartTranscodingButtonClickHandler__ctor_m73B8283A7A4D8BF74DEB328EC1DB58C1135E333F (OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnStartTranscodingButtonClickHandler::Invoke(qnrtc.QNTranscodingLiveStreamingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartTranscodingButtonClickHandler_Invoke_m95A2F50839A4E77AFD6825ABBA572261E81F602A (OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * __this, QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  ___config0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___config0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___config0, targetMethod);
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
						GenericInterfaceActionInvoker1< QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  >::Invoke(targetMethod, targetThis, ___config0);
					else
						GenericVirtActionInvoker1< QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  >::Invoke(targetMethod, targetThis, ___config0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___config0);
					else
						VirtActionInvoker1< QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___config0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___config0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___config0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult QNRTCUnityDemo.TranscodingLiveView/OnStartTranscodingButtonClickHandler::BeginInvoke(qnrtc.QNTranscodingLiveStreamingConfig,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnStartTranscodingButtonClickHandler_BeginInvoke_m8D3BAFD08FCCBEC78A2F9ED9AE14745ABBFA1A0C (OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * __this, QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  ___config0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F_il2cpp_TypeInfo_var, &___config0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnStartTranscodingButtonClickHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartTranscodingButtonClickHandler_EndInvoke_m4A4EE4BC8E2C661823C8F868403CA2C0E1F058A5 (OnStartTranscodingButtonClickHandler_tE48E3FB00F58036713ECBC4BF788BF1DB5C5867F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnStopTranscodingButtonClickHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStopTranscodingButtonClickHandler__ctor_m61214074FF96638D28F50CB8E025462DFB40C694 (OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnStopTranscodingButtonClickHandler::Invoke(qnrtc.QNTranscodingLiveStreamingConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStopTranscodingButtonClickHandler_Invoke_m899C9BC34C2787F68B32928A9FF714C3F457C222 (OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * __this, QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  ___config0, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___config0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___config0, targetMethod);
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
						GenericInterfaceActionInvoker1< QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  >::Invoke(targetMethod, targetThis, ___config0);
					else
						GenericVirtActionInvoker1< QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  >::Invoke(targetMethod, targetThis, ___config0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___config0);
					else
						VirtActionInvoker1< QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___config0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___config0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___config0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult QNRTCUnityDemo.TranscodingLiveView/OnStopTranscodingButtonClickHandler::BeginInvoke(qnrtc.QNTranscodingLiveStreamingConfig,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnStopTranscodingButtonClickHandler_BeginInvoke_m4C9C2EF94D4876247075A774BEF00CDA9902FB2D (OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * __this, QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F  ___config0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(QNTranscodingLiveStreamingConfig_tF0C3591B876D659D849E7950213E0064DC372F6F_il2cpp_TypeInfo_var, &___config0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnStopTranscodingButtonClickHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStopTranscodingButtonClickHandler_EndInvoke_m1BDE10A1E0784136F2793B4012C50DAC24AB4041 (OnStopTranscodingButtonClickHandler_t3D7BEAA4A96F59403F9B9261CA137DC3233D1F77 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnUpdateLayoutButtonClickHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUpdateLayoutButtonClickHandler__ctor_mBD2B2516976F44CCBD9BCC9A2AF4782662E7312D (OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnUpdateLayoutButtonClickHandler::Invoke(System.String,System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingTrack>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUpdateLayoutButtonClickHandler_Invoke_m5E0ED6BDF0E8B78BCA8176D32B2C11B9B407B20B (OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * __this, String_t* ___streamId0, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * ___layouts1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___streamId0, ___layouts1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___streamId0, ___layouts1, targetMethod);
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
						GenericInterfaceActionInvoker1< List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(targetMethod, ___streamId0, ___layouts1);
					else
						GenericVirtActionInvoker1< List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(targetMethod, ___streamId0, ___layouts1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___streamId0, ___layouts1);
					else
						VirtActionInvoker1< List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___streamId0, ___layouts1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___streamId0, ___layouts1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(targetMethod, targetThis, ___streamId0, ___layouts1);
					else
						GenericVirtActionInvoker2< String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(targetMethod, targetThis, ___streamId0, ___layouts1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___streamId0, ___layouts1);
					else
						VirtActionInvoker2< String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___streamId0, ___layouts1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___streamId0, ___layouts1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___streamId0, ___layouts1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult QNRTCUnityDemo.TranscodingLiveView/OnUpdateLayoutButtonClickHandler::BeginInvoke(System.String,System.Collections.Generic.List`1<qnrtc.QNTranscodingLiveStreamingTrack>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnUpdateLayoutButtonClickHandler_BeginInvoke_m79D77CA795A171C38B23CBF8B8BBF18E542D1B97 (OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * __this, String_t* ___streamId0, List_1_t64043FA015632E81188D51414F588390CCCBB5D5 * ___layouts1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___streamId0;
	__d_args[1] = ___layouts1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void QNRTCUnityDemo.TranscodingLiveView/OnUpdateLayoutButtonClickHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUpdateLayoutButtonClickHandler_EndInvoke_mD7B877E907FB9708A61CC01A2D6FD5022639160E (OnUpdateLayoutButtonClickHandler_tC08E77CAFAC50E783F5858027BC9EBFC79D37133 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m1130BA06F0639CDBFD654EEF92750660961B0B23_gshared_inline (List_1_tE428173C6653B221C40D3D1B947AFB347129E2A6 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10  Enumerator_get_Current_m8CE37972C881E04537AC2B2A1F032287BBB513BC_gshared_inline (Enumerator_tFE86F9766EC309A382F8A95D5809BA8A3E0EB2C0 * __this, const RuntimeMethod* method)
{
	{
		QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10  L_0 = (QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10 )__this->get_current_3();
		return (QNRemoteUser_t5500DD4A493E2F490D3BD754B605C165A257AE10 )L_0;
	}
}

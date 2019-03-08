#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// System.Collections.Generic.List`1<Lean.Touch.LeanSelectable>
struct List_1_t3650925511;
// Lean.Touch.LeanSelectable/LeanFingerEvent
struct LeanFingerEvent_t821904700;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t2581268647;
// System.Collections.Generic.List`1<Lean.Touch.LeanFinger>
struct List_1_t683400304;
// System.Action`1<Lean.Touch.LeanFinger>
struct Action_1_t3678760453;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSelectable
struct  LeanSelectable_t2178850769  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Lean.Touch.LeanSelectable::DeselectOnUp
	bool ___DeselectOnUp_3;
	// System.Boolean Lean.Touch.LeanSelectable::HideWithFinger
	bool ___HideWithFinger_4;
	// System.Boolean Lean.Touch.LeanSelectable::IsolateSelectingFingers
	bool ___IsolateSelectingFingers_5;
	// Lean.Touch.LeanSelectable/LeanFingerEvent Lean.Touch.LeanSelectable::OnSelect
	LeanFingerEvent_t821904700 * ___OnSelect_6;
	// Lean.Touch.LeanSelectable/LeanFingerEvent Lean.Touch.LeanSelectable::OnSelectSet
	LeanFingerEvent_t821904700 * ___OnSelectSet_7;
	// Lean.Touch.LeanSelectable/LeanFingerEvent Lean.Touch.LeanSelectable::OnSelectUp
	LeanFingerEvent_t821904700 * ___OnSelectUp_8;
	// UnityEngine.Events.UnityEvent Lean.Touch.LeanSelectable::OnDeselect
	UnityEvent_t2581268647 * ___OnDeselect_9;
	// System.Boolean Lean.Touch.LeanSelectable::isSelected
	bool ___isSelected_10;
	// System.Collections.Generic.List`1<Lean.Touch.LeanFinger> Lean.Touch.LeanSelectable::selectingFingers
	List_1_t683400304 * ___selectingFingers_11;

public:
	inline static int32_t get_offset_of_DeselectOnUp_3() { return static_cast<int32_t>(offsetof(LeanSelectable_t2178850769, ___DeselectOnUp_3)); }
	inline bool get_DeselectOnUp_3() const { return ___DeselectOnUp_3; }
	inline bool* get_address_of_DeselectOnUp_3() { return &___DeselectOnUp_3; }
	inline void set_DeselectOnUp_3(bool value)
	{
		___DeselectOnUp_3 = value;
	}

	inline static int32_t get_offset_of_HideWithFinger_4() { return static_cast<int32_t>(offsetof(LeanSelectable_t2178850769, ___HideWithFinger_4)); }
	inline bool get_HideWithFinger_4() const { return ___HideWithFinger_4; }
	inline bool* get_address_of_HideWithFinger_4() { return &___HideWithFinger_4; }
	inline void set_HideWithFinger_4(bool value)
	{
		___HideWithFinger_4 = value;
	}

	inline static int32_t get_offset_of_IsolateSelectingFingers_5() { return static_cast<int32_t>(offsetof(LeanSelectable_t2178850769, ___IsolateSelectingFingers_5)); }
	inline bool get_IsolateSelectingFingers_5() const { return ___IsolateSelectingFingers_5; }
	inline bool* get_address_of_IsolateSelectingFingers_5() { return &___IsolateSelectingFingers_5; }
	inline void set_IsolateSelectingFingers_5(bool value)
	{
		___IsolateSelectingFingers_5 = value;
	}

	inline static int32_t get_offset_of_OnSelect_6() { return static_cast<int32_t>(offsetof(LeanSelectable_t2178850769, ___OnSelect_6)); }
	inline LeanFingerEvent_t821904700 * get_OnSelect_6() const { return ___OnSelect_6; }
	inline LeanFingerEvent_t821904700 ** get_address_of_OnSelect_6() { return &___OnSelect_6; }
	inline void set_OnSelect_6(LeanFingerEvent_t821904700 * value)
	{
		___OnSelect_6 = value;
		Il2CppCodeGenWriteBarrier(&___OnSelect_6, value);
	}

	inline static int32_t get_offset_of_OnSelectSet_7() { return static_cast<int32_t>(offsetof(LeanSelectable_t2178850769, ___OnSelectSet_7)); }
	inline LeanFingerEvent_t821904700 * get_OnSelectSet_7() const { return ___OnSelectSet_7; }
	inline LeanFingerEvent_t821904700 ** get_address_of_OnSelectSet_7() { return &___OnSelectSet_7; }
	inline void set_OnSelectSet_7(LeanFingerEvent_t821904700 * value)
	{
		___OnSelectSet_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnSelectSet_7, value);
	}

	inline static int32_t get_offset_of_OnSelectUp_8() { return static_cast<int32_t>(offsetof(LeanSelectable_t2178850769, ___OnSelectUp_8)); }
	inline LeanFingerEvent_t821904700 * get_OnSelectUp_8() const { return ___OnSelectUp_8; }
	inline LeanFingerEvent_t821904700 ** get_address_of_OnSelectUp_8() { return &___OnSelectUp_8; }
	inline void set_OnSelectUp_8(LeanFingerEvent_t821904700 * value)
	{
		___OnSelectUp_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnSelectUp_8, value);
	}

	inline static int32_t get_offset_of_OnDeselect_9() { return static_cast<int32_t>(offsetof(LeanSelectable_t2178850769, ___OnDeselect_9)); }
	inline UnityEvent_t2581268647 * get_OnDeselect_9() const { return ___OnDeselect_9; }
	inline UnityEvent_t2581268647 ** get_address_of_OnDeselect_9() { return &___OnDeselect_9; }
	inline void set_OnDeselect_9(UnityEvent_t2581268647 * value)
	{
		___OnDeselect_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnDeselect_9, value);
	}

	inline static int32_t get_offset_of_isSelected_10() { return static_cast<int32_t>(offsetof(LeanSelectable_t2178850769, ___isSelected_10)); }
	inline bool get_isSelected_10() const { return ___isSelected_10; }
	inline bool* get_address_of_isSelected_10() { return &___isSelected_10; }
	inline void set_isSelected_10(bool value)
	{
		___isSelected_10 = value;
	}

	inline static int32_t get_offset_of_selectingFingers_11() { return static_cast<int32_t>(offsetof(LeanSelectable_t2178850769, ___selectingFingers_11)); }
	inline List_1_t683400304 * get_selectingFingers_11() const { return ___selectingFingers_11; }
	inline List_1_t683400304 ** get_address_of_selectingFingers_11() { return &___selectingFingers_11; }
	inline void set_selectingFingers_11(List_1_t683400304 * value)
	{
		___selectingFingers_11 = value;
		Il2CppCodeGenWriteBarrier(&___selectingFingers_11, value);
	}
};

struct LeanSelectable_t2178850769_StaticFields
{
public:
	// System.Collections.Generic.List`1<Lean.Touch.LeanSelectable> Lean.Touch.LeanSelectable::Instances
	List_1_t3650925511 * ___Instances_2;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanSelectable::<>f__mg$cache0
	Action_1_t3678760453 * ___U3CU3Ef__mgU24cache0_12;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanSelectable::<>f__mg$cache1
	Action_1_t3678760453 * ___U3CU3Ef__mgU24cache1_13;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanSelectable::<>f__mg$cache2
	Action_1_t3678760453 * ___U3CU3Ef__mgU24cache2_14;
	// System.Action`1<Lean.Touch.LeanFinger> Lean.Touch.LeanSelectable::<>f__mg$cache3
	Action_1_t3678760453 * ___U3CU3Ef__mgU24cache3_15;

public:
	inline static int32_t get_offset_of_Instances_2() { return static_cast<int32_t>(offsetof(LeanSelectable_t2178850769_StaticFields, ___Instances_2)); }
	inline List_1_t3650925511 * get_Instances_2() const { return ___Instances_2; }
	inline List_1_t3650925511 ** get_address_of_Instances_2() { return &___Instances_2; }
	inline void set_Instances_2(List_1_t3650925511 * value)
	{
		___Instances_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instances_2, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_12() { return static_cast<int32_t>(offsetof(LeanSelectable_t2178850769_StaticFields, ___U3CU3Ef__mgU24cache0_12)); }
	inline Action_1_t3678760453 * get_U3CU3Ef__mgU24cache0_12() const { return ___U3CU3Ef__mgU24cache0_12; }
	inline Action_1_t3678760453 ** get_address_of_U3CU3Ef__mgU24cache0_12() { return &___U3CU3Ef__mgU24cache0_12; }
	inline void set_U3CU3Ef__mgU24cache0_12(Action_1_t3678760453 * value)
	{
		___U3CU3Ef__mgU24cache0_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache0_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_13() { return static_cast<int32_t>(offsetof(LeanSelectable_t2178850769_StaticFields, ___U3CU3Ef__mgU24cache1_13)); }
	inline Action_1_t3678760453 * get_U3CU3Ef__mgU24cache1_13() const { return ___U3CU3Ef__mgU24cache1_13; }
	inline Action_1_t3678760453 ** get_address_of_U3CU3Ef__mgU24cache1_13() { return &___U3CU3Ef__mgU24cache1_13; }
	inline void set_U3CU3Ef__mgU24cache1_13(Action_1_t3678760453 * value)
	{
		___U3CU3Ef__mgU24cache1_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache1_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_14() { return static_cast<int32_t>(offsetof(LeanSelectable_t2178850769_StaticFields, ___U3CU3Ef__mgU24cache2_14)); }
	inline Action_1_t3678760453 * get_U3CU3Ef__mgU24cache2_14() const { return ___U3CU3Ef__mgU24cache2_14; }
	inline Action_1_t3678760453 ** get_address_of_U3CU3Ef__mgU24cache2_14() { return &___U3CU3Ef__mgU24cache2_14; }
	inline void set_U3CU3Ef__mgU24cache2_14(Action_1_t3678760453 * value)
	{
		___U3CU3Ef__mgU24cache2_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache2_14, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_15() { return static_cast<int32_t>(offsetof(LeanSelectable_t2178850769_StaticFields, ___U3CU3Ef__mgU24cache3_15)); }
	inline Action_1_t3678760453 * get_U3CU3Ef__mgU24cache3_15() const { return ___U3CU3Ef__mgU24cache3_15; }
	inline Action_1_t3678760453 ** get_address_of_U3CU3Ef__mgU24cache3_15() { return &___U3CU3Ef__mgU24cache3_15; }
	inline void set_U3CU3Ef__mgU24cache3_15(Action_1_t3678760453 * value)
	{
		___U3CU3Ef__mgU24cache3_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__mgU24cache3_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// Lean.Touch.LeanSelectable
struct LeanSelectable_t2178850769;
// Lean.Touch.LeanFingerTap/LeanFingerEvent
struct LeanFingerEvent_t1763708065;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerTap
struct  LeanFingerTap_t1535759752  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Lean.Touch.LeanFingerTap::IgnoreStartedOverGui
	bool ___IgnoreStartedOverGui_2;
	// System.Boolean Lean.Touch.LeanFingerTap::IgnoreIsOverGui
	bool ___IgnoreIsOverGui_3;
	// System.Int32 Lean.Touch.LeanFingerTap::RequiredTapCount
	int32_t ___RequiredTapCount_4;
	// System.Int32 Lean.Touch.LeanFingerTap::RequiredTapInterval
	int32_t ___RequiredTapInterval_5;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanFingerTap::RequiredSelectable
	LeanSelectable_t2178850769 * ___RequiredSelectable_6;
	// Lean.Touch.LeanFingerTap/LeanFingerEvent Lean.Touch.LeanFingerTap::OnTap
	LeanFingerEvent_t1763708065 * ___OnTap_7;

public:
	inline static int32_t get_offset_of_IgnoreStartedOverGui_2() { return static_cast<int32_t>(offsetof(LeanFingerTap_t1535759752, ___IgnoreStartedOverGui_2)); }
	inline bool get_IgnoreStartedOverGui_2() const { return ___IgnoreStartedOverGui_2; }
	inline bool* get_address_of_IgnoreStartedOverGui_2() { return &___IgnoreStartedOverGui_2; }
	inline void set_IgnoreStartedOverGui_2(bool value)
	{
		___IgnoreStartedOverGui_2 = value;
	}

	inline static int32_t get_offset_of_IgnoreIsOverGui_3() { return static_cast<int32_t>(offsetof(LeanFingerTap_t1535759752, ___IgnoreIsOverGui_3)); }
	inline bool get_IgnoreIsOverGui_3() const { return ___IgnoreIsOverGui_3; }
	inline bool* get_address_of_IgnoreIsOverGui_3() { return &___IgnoreIsOverGui_3; }
	inline void set_IgnoreIsOverGui_3(bool value)
	{
		___IgnoreIsOverGui_3 = value;
	}

	inline static int32_t get_offset_of_RequiredTapCount_4() { return static_cast<int32_t>(offsetof(LeanFingerTap_t1535759752, ___RequiredTapCount_4)); }
	inline int32_t get_RequiredTapCount_4() const { return ___RequiredTapCount_4; }
	inline int32_t* get_address_of_RequiredTapCount_4() { return &___RequiredTapCount_4; }
	inline void set_RequiredTapCount_4(int32_t value)
	{
		___RequiredTapCount_4 = value;
	}

	inline static int32_t get_offset_of_RequiredTapInterval_5() { return static_cast<int32_t>(offsetof(LeanFingerTap_t1535759752, ___RequiredTapInterval_5)); }
	inline int32_t get_RequiredTapInterval_5() const { return ___RequiredTapInterval_5; }
	inline int32_t* get_address_of_RequiredTapInterval_5() { return &___RequiredTapInterval_5; }
	inline void set_RequiredTapInterval_5(int32_t value)
	{
		___RequiredTapInterval_5 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_6() { return static_cast<int32_t>(offsetof(LeanFingerTap_t1535759752, ___RequiredSelectable_6)); }
	inline LeanSelectable_t2178850769 * get_RequiredSelectable_6() const { return ___RequiredSelectable_6; }
	inline LeanSelectable_t2178850769 ** get_address_of_RequiredSelectable_6() { return &___RequiredSelectable_6; }
	inline void set_RequiredSelectable_6(LeanSelectable_t2178850769 * value)
	{
		___RequiredSelectable_6 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_6, value);
	}

	inline static int32_t get_offset_of_OnTap_7() { return static_cast<int32_t>(offsetof(LeanFingerTap_t1535759752, ___OnTap_7)); }
	inline LeanFingerEvent_t1763708065 * get_OnTap_7() const { return ___OnTap_7; }
	inline LeanFingerEvent_t1763708065 ** get_address_of_OnTap_7() { return &___OnTap_7; }
	inline void set_OnTap_7(LeanFingerEvent_t1763708065 * value)
	{
		___OnTap_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnTap_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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
// Lean.Touch.LeanFingerDown/LeanFingerEvent
struct LeanFingerEvent_t2839702054;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerDown
struct  LeanFingerDown_t827018743  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Lean.Touch.LeanFingerDown::IgnoreStartedOverGui
	bool ___IgnoreStartedOverGui_2;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanFingerDown::RequiredSelectable
	LeanSelectable_t2178850769 * ___RequiredSelectable_3;
	// Lean.Touch.LeanFingerDown/LeanFingerEvent Lean.Touch.LeanFingerDown::OnDown
	LeanFingerEvent_t2839702054 * ___OnDown_4;

public:
	inline static int32_t get_offset_of_IgnoreStartedOverGui_2() { return static_cast<int32_t>(offsetof(LeanFingerDown_t827018743, ___IgnoreStartedOverGui_2)); }
	inline bool get_IgnoreStartedOverGui_2() const { return ___IgnoreStartedOverGui_2; }
	inline bool* get_address_of_IgnoreStartedOverGui_2() { return &___IgnoreStartedOverGui_2; }
	inline void set_IgnoreStartedOverGui_2(bool value)
	{
		___IgnoreStartedOverGui_2 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_3() { return static_cast<int32_t>(offsetof(LeanFingerDown_t827018743, ___RequiredSelectable_3)); }
	inline LeanSelectable_t2178850769 * get_RequiredSelectable_3() const { return ___RequiredSelectable_3; }
	inline LeanSelectable_t2178850769 ** get_address_of_RequiredSelectable_3() { return &___RequiredSelectable_3; }
	inline void set_RequiredSelectable_3(LeanSelectable_t2178850769 * value)
	{
		___RequiredSelectable_3 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_3, value);
	}

	inline static int32_t get_offset_of_OnDown_4() { return static_cast<int32_t>(offsetof(LeanFingerDown_t827018743, ___OnDown_4)); }
	inline LeanFingerEvent_t2839702054 * get_OnDown_4() const { return ___OnDown_4; }
	inline LeanFingerEvent_t2839702054 ** get_address_of_OnDown_4() { return &___OnDown_4; }
	inline void set_OnDown_4(LeanFingerEvent_t2839702054 * value)
	{
		___OnDown_4 = value;
		Il2CppCodeGenWriteBarrier(&___OnDown_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

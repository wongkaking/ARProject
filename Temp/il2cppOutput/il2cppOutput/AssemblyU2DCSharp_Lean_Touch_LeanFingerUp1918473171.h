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
// Lean.Touch.LeanFingerUp/LeanFingerEvent
struct LeanFingerEvent_t446569333;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerUp
struct  LeanFingerUp_t1918473171  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Lean.Touch.LeanFingerUp::IgnoreStartedOverGui
	bool ___IgnoreStartedOverGui_2;
	// System.Boolean Lean.Touch.LeanFingerUp::IgnoreIsOverGui
	bool ___IgnoreIsOverGui_3;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanFingerUp::RequiredSelectable
	LeanSelectable_t2178850769 * ___RequiredSelectable_4;
	// Lean.Touch.LeanFingerUp/LeanFingerEvent Lean.Touch.LeanFingerUp::OnUp
	LeanFingerEvent_t446569333 * ___OnUp_5;

public:
	inline static int32_t get_offset_of_IgnoreStartedOverGui_2() { return static_cast<int32_t>(offsetof(LeanFingerUp_t1918473171, ___IgnoreStartedOverGui_2)); }
	inline bool get_IgnoreStartedOverGui_2() const { return ___IgnoreStartedOverGui_2; }
	inline bool* get_address_of_IgnoreStartedOverGui_2() { return &___IgnoreStartedOverGui_2; }
	inline void set_IgnoreStartedOverGui_2(bool value)
	{
		___IgnoreStartedOverGui_2 = value;
	}

	inline static int32_t get_offset_of_IgnoreIsOverGui_3() { return static_cast<int32_t>(offsetof(LeanFingerUp_t1918473171, ___IgnoreIsOverGui_3)); }
	inline bool get_IgnoreIsOverGui_3() const { return ___IgnoreIsOverGui_3; }
	inline bool* get_address_of_IgnoreIsOverGui_3() { return &___IgnoreIsOverGui_3; }
	inline void set_IgnoreIsOverGui_3(bool value)
	{
		___IgnoreIsOverGui_3 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_4() { return static_cast<int32_t>(offsetof(LeanFingerUp_t1918473171, ___RequiredSelectable_4)); }
	inline LeanSelectable_t2178850769 * get_RequiredSelectable_4() const { return ___RequiredSelectable_4; }
	inline LeanSelectable_t2178850769 ** get_address_of_RequiredSelectable_4() { return &___RequiredSelectable_4; }
	inline void set_RequiredSelectable_4(LeanSelectable_t2178850769 * value)
	{
		___RequiredSelectable_4 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_4, value);
	}

	inline static int32_t get_offset_of_OnUp_5() { return static_cast<int32_t>(offsetof(LeanFingerUp_t1918473171, ___OnUp_5)); }
	inline LeanFingerEvent_t446569333 * get_OnUp_5() const { return ___OnUp_5; }
	inline LeanFingerEvent_t446569333 ** get_address_of_OnUp_5() { return &___OnUp_5; }
	inline void set_OnUp_5(LeanFingerEvent_t446569333 * value)
	{
		___OnUp_5 = value;
		Il2CppCodeGenWriteBarrier(&___OnUp_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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
// Lean.Touch.LeanFingerHeld/FingerEvent
struct FingerEvent_t27707137;
// System.Collections.Generic.List`1<Lean.Touch.LeanFingerHeld/Link>
struct List_1_t2873086699;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerHeld
struct  LeanFingerHeld_t1927732235  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Lean.Touch.LeanFingerHeld::IgnoreStartedOverGui
	bool ___IgnoreStartedOverGui_2;
	// System.Boolean Lean.Touch.LeanFingerHeld::IgnoreIsOverGui
	bool ___IgnoreIsOverGui_3;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanFingerHeld::RequiredSelectable
	LeanSelectable_t2178850769 * ___RequiredSelectable_4;
	// System.Single Lean.Touch.LeanFingerHeld::MinimumAge
	float ___MinimumAge_5;
	// System.Single Lean.Touch.LeanFingerHeld::MaximumMovement
	float ___MaximumMovement_6;
	// Lean.Touch.LeanFingerHeld/FingerEvent Lean.Touch.LeanFingerHeld::OnHeldDown
	FingerEvent_t27707137 * ___OnHeldDown_7;
	// Lean.Touch.LeanFingerHeld/FingerEvent Lean.Touch.LeanFingerHeld::OnHeldSet
	FingerEvent_t27707137 * ___OnHeldSet_8;
	// Lean.Touch.LeanFingerHeld/FingerEvent Lean.Touch.LeanFingerHeld::OnHeldUp
	FingerEvent_t27707137 * ___OnHeldUp_9;
	// System.Collections.Generic.List`1<Lean.Touch.LeanFingerHeld/Link> Lean.Touch.LeanFingerHeld::links
	List_1_t2873086699 * ___links_10;

public:
	inline static int32_t get_offset_of_IgnoreStartedOverGui_2() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t1927732235, ___IgnoreStartedOverGui_2)); }
	inline bool get_IgnoreStartedOverGui_2() const { return ___IgnoreStartedOverGui_2; }
	inline bool* get_address_of_IgnoreStartedOverGui_2() { return &___IgnoreStartedOverGui_2; }
	inline void set_IgnoreStartedOverGui_2(bool value)
	{
		___IgnoreStartedOverGui_2 = value;
	}

	inline static int32_t get_offset_of_IgnoreIsOverGui_3() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t1927732235, ___IgnoreIsOverGui_3)); }
	inline bool get_IgnoreIsOverGui_3() const { return ___IgnoreIsOverGui_3; }
	inline bool* get_address_of_IgnoreIsOverGui_3() { return &___IgnoreIsOverGui_3; }
	inline void set_IgnoreIsOverGui_3(bool value)
	{
		___IgnoreIsOverGui_3 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_4() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t1927732235, ___RequiredSelectable_4)); }
	inline LeanSelectable_t2178850769 * get_RequiredSelectable_4() const { return ___RequiredSelectable_4; }
	inline LeanSelectable_t2178850769 ** get_address_of_RequiredSelectable_4() { return &___RequiredSelectable_4; }
	inline void set_RequiredSelectable_4(LeanSelectable_t2178850769 * value)
	{
		___RequiredSelectable_4 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_4, value);
	}

	inline static int32_t get_offset_of_MinimumAge_5() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t1927732235, ___MinimumAge_5)); }
	inline float get_MinimumAge_5() const { return ___MinimumAge_5; }
	inline float* get_address_of_MinimumAge_5() { return &___MinimumAge_5; }
	inline void set_MinimumAge_5(float value)
	{
		___MinimumAge_5 = value;
	}

	inline static int32_t get_offset_of_MaximumMovement_6() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t1927732235, ___MaximumMovement_6)); }
	inline float get_MaximumMovement_6() const { return ___MaximumMovement_6; }
	inline float* get_address_of_MaximumMovement_6() { return &___MaximumMovement_6; }
	inline void set_MaximumMovement_6(float value)
	{
		___MaximumMovement_6 = value;
	}

	inline static int32_t get_offset_of_OnHeldDown_7() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t1927732235, ___OnHeldDown_7)); }
	inline FingerEvent_t27707137 * get_OnHeldDown_7() const { return ___OnHeldDown_7; }
	inline FingerEvent_t27707137 ** get_address_of_OnHeldDown_7() { return &___OnHeldDown_7; }
	inline void set_OnHeldDown_7(FingerEvent_t27707137 * value)
	{
		___OnHeldDown_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnHeldDown_7, value);
	}

	inline static int32_t get_offset_of_OnHeldSet_8() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t1927732235, ___OnHeldSet_8)); }
	inline FingerEvent_t27707137 * get_OnHeldSet_8() const { return ___OnHeldSet_8; }
	inline FingerEvent_t27707137 ** get_address_of_OnHeldSet_8() { return &___OnHeldSet_8; }
	inline void set_OnHeldSet_8(FingerEvent_t27707137 * value)
	{
		___OnHeldSet_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnHeldSet_8, value);
	}

	inline static int32_t get_offset_of_OnHeldUp_9() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t1927732235, ___OnHeldUp_9)); }
	inline FingerEvent_t27707137 * get_OnHeldUp_9() const { return ___OnHeldUp_9; }
	inline FingerEvent_t27707137 ** get_address_of_OnHeldUp_9() { return &___OnHeldUp_9; }
	inline void set_OnHeldUp_9(FingerEvent_t27707137 * value)
	{
		___OnHeldUp_9 = value;
		Il2CppCodeGenWriteBarrier(&___OnHeldUp_9, value);
	}

	inline static int32_t get_offset_of_links_10() { return static_cast<int32_t>(offsetof(LeanFingerHeld_t1927732235, ___links_10)); }
	inline List_1_t2873086699 * get_links_10() const { return ___links_10; }
	inline List_1_t2873086699 ** get_address_of_links_10() { return &___links_10; }
	inline void set_links_10(List_1_t2873086699 * value)
	{
		___links_10 = value;
		Il2CppCodeGenWriteBarrier(&___links_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

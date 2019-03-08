#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "AssemblyU2DCSharp_Lean_Touch_LeanFingerSwipe_Clamp3219898531.h"

// Lean.Touch.LeanSelectable
struct LeanSelectable_t2178850769;
// Lean.Touch.LeanFingerSwipe/FingerEvent
struct FingerEvent_t2652301007;
// Lean.Touch.LeanFingerSwipe/Vector2Event
struct Vector2Event_t1602777609;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerSwipe
struct  LeanFingerSwipe_t3060022393  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Lean.Touch.LeanFingerSwipe::IgnoreStartedOverGui
	bool ___IgnoreStartedOverGui_2;
	// System.Boolean Lean.Touch.LeanFingerSwipe::IgnoreIsOverGui
	bool ___IgnoreIsOverGui_3;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanFingerSwipe::RequiredSelectable
	LeanSelectable_t2178850769 * ___RequiredSelectable_4;
	// System.Boolean Lean.Touch.LeanFingerSwipe::CheckAngle
	bool ___CheckAngle_5;
	// System.Single Lean.Touch.LeanFingerSwipe::Angle
	float ___Angle_6;
	// System.Single Lean.Touch.LeanFingerSwipe::AngleThreshold
	float ___AngleThreshold_7;
	// Lean.Touch.LeanFingerSwipe/ClampType Lean.Touch.LeanFingerSwipe::Clamp
	int32_t ___Clamp_8;
	// System.Single Lean.Touch.LeanFingerSwipe::Multiplier
	float ___Multiplier_9;
	// Lean.Touch.LeanFingerSwipe/FingerEvent Lean.Touch.LeanFingerSwipe::OnSwipe
	FingerEvent_t2652301007 * ___OnSwipe_10;
	// Lean.Touch.LeanFingerSwipe/Vector2Event Lean.Touch.LeanFingerSwipe::OnSwipeDelta
	Vector2Event_t1602777609 * ___OnSwipeDelta_11;

public:
	inline static int32_t get_offset_of_IgnoreStartedOverGui_2() { return static_cast<int32_t>(offsetof(LeanFingerSwipe_t3060022393, ___IgnoreStartedOverGui_2)); }
	inline bool get_IgnoreStartedOverGui_2() const { return ___IgnoreStartedOverGui_2; }
	inline bool* get_address_of_IgnoreStartedOverGui_2() { return &___IgnoreStartedOverGui_2; }
	inline void set_IgnoreStartedOverGui_2(bool value)
	{
		___IgnoreStartedOverGui_2 = value;
	}

	inline static int32_t get_offset_of_IgnoreIsOverGui_3() { return static_cast<int32_t>(offsetof(LeanFingerSwipe_t3060022393, ___IgnoreIsOverGui_3)); }
	inline bool get_IgnoreIsOverGui_3() const { return ___IgnoreIsOverGui_3; }
	inline bool* get_address_of_IgnoreIsOverGui_3() { return &___IgnoreIsOverGui_3; }
	inline void set_IgnoreIsOverGui_3(bool value)
	{
		___IgnoreIsOverGui_3 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_4() { return static_cast<int32_t>(offsetof(LeanFingerSwipe_t3060022393, ___RequiredSelectable_4)); }
	inline LeanSelectable_t2178850769 * get_RequiredSelectable_4() const { return ___RequiredSelectable_4; }
	inline LeanSelectable_t2178850769 ** get_address_of_RequiredSelectable_4() { return &___RequiredSelectable_4; }
	inline void set_RequiredSelectable_4(LeanSelectable_t2178850769 * value)
	{
		___RequiredSelectable_4 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_4, value);
	}

	inline static int32_t get_offset_of_CheckAngle_5() { return static_cast<int32_t>(offsetof(LeanFingerSwipe_t3060022393, ___CheckAngle_5)); }
	inline bool get_CheckAngle_5() const { return ___CheckAngle_5; }
	inline bool* get_address_of_CheckAngle_5() { return &___CheckAngle_5; }
	inline void set_CheckAngle_5(bool value)
	{
		___CheckAngle_5 = value;
	}

	inline static int32_t get_offset_of_Angle_6() { return static_cast<int32_t>(offsetof(LeanFingerSwipe_t3060022393, ___Angle_6)); }
	inline float get_Angle_6() const { return ___Angle_6; }
	inline float* get_address_of_Angle_6() { return &___Angle_6; }
	inline void set_Angle_6(float value)
	{
		___Angle_6 = value;
	}

	inline static int32_t get_offset_of_AngleThreshold_7() { return static_cast<int32_t>(offsetof(LeanFingerSwipe_t3060022393, ___AngleThreshold_7)); }
	inline float get_AngleThreshold_7() const { return ___AngleThreshold_7; }
	inline float* get_address_of_AngleThreshold_7() { return &___AngleThreshold_7; }
	inline void set_AngleThreshold_7(float value)
	{
		___AngleThreshold_7 = value;
	}

	inline static int32_t get_offset_of_Clamp_8() { return static_cast<int32_t>(offsetof(LeanFingerSwipe_t3060022393, ___Clamp_8)); }
	inline int32_t get_Clamp_8() const { return ___Clamp_8; }
	inline int32_t* get_address_of_Clamp_8() { return &___Clamp_8; }
	inline void set_Clamp_8(int32_t value)
	{
		___Clamp_8 = value;
	}

	inline static int32_t get_offset_of_Multiplier_9() { return static_cast<int32_t>(offsetof(LeanFingerSwipe_t3060022393, ___Multiplier_9)); }
	inline float get_Multiplier_9() const { return ___Multiplier_9; }
	inline float* get_address_of_Multiplier_9() { return &___Multiplier_9; }
	inline void set_Multiplier_9(float value)
	{
		___Multiplier_9 = value;
	}

	inline static int32_t get_offset_of_OnSwipe_10() { return static_cast<int32_t>(offsetof(LeanFingerSwipe_t3060022393, ___OnSwipe_10)); }
	inline FingerEvent_t2652301007 * get_OnSwipe_10() const { return ___OnSwipe_10; }
	inline FingerEvent_t2652301007 ** get_address_of_OnSwipe_10() { return &___OnSwipe_10; }
	inline void set_OnSwipe_10(FingerEvent_t2652301007 * value)
	{
		___OnSwipe_10 = value;
		Il2CppCodeGenWriteBarrier(&___OnSwipe_10, value);
	}

	inline static int32_t get_offset_of_OnSwipeDelta_11() { return static_cast<int32_t>(offsetof(LeanFingerSwipe_t3060022393, ___OnSwipeDelta_11)); }
	inline Vector2Event_t1602777609 * get_OnSwipeDelta_11() const { return ___OnSwipeDelta_11; }
	inline Vector2Event_t1602777609 ** get_address_of_OnSwipeDelta_11() { return &___OnSwipeDelta_11; }
	inline void set_OnSwipeDelta_11(Vector2Event_t1602777609 * value)
	{
		___OnSwipeDelta_11 = value;
		Il2CppCodeGenWriteBarrier(&___OnSwipeDelta_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

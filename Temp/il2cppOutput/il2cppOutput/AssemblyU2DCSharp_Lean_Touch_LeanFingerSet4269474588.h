#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "AssemblyU2DCSharp_Lean_Touch_LeanFingerSet_DeltaCo3991962329.h"

// Lean.Touch.LeanSelectable
struct LeanSelectable_t2178850769;
// Lean.Touch.LeanFingerSet/LeanFingerEvent
struct LeanFingerEvent_t2859433896;
// Lean.Touch.LeanFingerSet/Vector2Event
struct Vector2Event_t1101497498;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerSet
struct  LeanFingerSet_t4269474588  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Lean.Touch.LeanFingerSet::IgnoreStartedOverGui
	bool ___IgnoreStartedOverGui_2;
	// System.Boolean Lean.Touch.LeanFingerSet::IgnoreIsOverGui
	bool ___IgnoreIsOverGui_3;
	// System.Boolean Lean.Touch.LeanFingerSet::IgnoreIfStatic
	bool ___IgnoreIfStatic_4;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanFingerSet::RequiredSelectable
	LeanSelectable_t2178850769 * ___RequiredSelectable_5;
	// Lean.Touch.LeanFingerSet/DeltaCoordinatesType Lean.Touch.LeanFingerSet::DeltaCoordinates
	int32_t ___DeltaCoordinates_6;
	// Lean.Touch.LeanFingerSet/LeanFingerEvent Lean.Touch.LeanFingerSet::OnSet
	LeanFingerEvent_t2859433896 * ___OnSet_7;
	// Lean.Touch.LeanFingerSet/Vector2Event Lean.Touch.LeanFingerSet::OnSetDelta
	Vector2Event_t1101497498 * ___OnSetDelta_8;

public:
	inline static int32_t get_offset_of_IgnoreStartedOverGui_2() { return static_cast<int32_t>(offsetof(LeanFingerSet_t4269474588, ___IgnoreStartedOverGui_2)); }
	inline bool get_IgnoreStartedOverGui_2() const { return ___IgnoreStartedOverGui_2; }
	inline bool* get_address_of_IgnoreStartedOverGui_2() { return &___IgnoreStartedOverGui_2; }
	inline void set_IgnoreStartedOverGui_2(bool value)
	{
		___IgnoreStartedOverGui_2 = value;
	}

	inline static int32_t get_offset_of_IgnoreIsOverGui_3() { return static_cast<int32_t>(offsetof(LeanFingerSet_t4269474588, ___IgnoreIsOverGui_3)); }
	inline bool get_IgnoreIsOverGui_3() const { return ___IgnoreIsOverGui_3; }
	inline bool* get_address_of_IgnoreIsOverGui_3() { return &___IgnoreIsOverGui_3; }
	inline void set_IgnoreIsOverGui_3(bool value)
	{
		___IgnoreIsOverGui_3 = value;
	}

	inline static int32_t get_offset_of_IgnoreIfStatic_4() { return static_cast<int32_t>(offsetof(LeanFingerSet_t4269474588, ___IgnoreIfStatic_4)); }
	inline bool get_IgnoreIfStatic_4() const { return ___IgnoreIfStatic_4; }
	inline bool* get_address_of_IgnoreIfStatic_4() { return &___IgnoreIfStatic_4; }
	inline void set_IgnoreIfStatic_4(bool value)
	{
		___IgnoreIfStatic_4 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_5() { return static_cast<int32_t>(offsetof(LeanFingerSet_t4269474588, ___RequiredSelectable_5)); }
	inline LeanSelectable_t2178850769 * get_RequiredSelectable_5() const { return ___RequiredSelectable_5; }
	inline LeanSelectable_t2178850769 ** get_address_of_RequiredSelectable_5() { return &___RequiredSelectable_5; }
	inline void set_RequiredSelectable_5(LeanSelectable_t2178850769 * value)
	{
		___RequiredSelectable_5 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_5, value);
	}

	inline static int32_t get_offset_of_DeltaCoordinates_6() { return static_cast<int32_t>(offsetof(LeanFingerSet_t4269474588, ___DeltaCoordinates_6)); }
	inline int32_t get_DeltaCoordinates_6() const { return ___DeltaCoordinates_6; }
	inline int32_t* get_address_of_DeltaCoordinates_6() { return &___DeltaCoordinates_6; }
	inline void set_DeltaCoordinates_6(int32_t value)
	{
		___DeltaCoordinates_6 = value;
	}

	inline static int32_t get_offset_of_OnSet_7() { return static_cast<int32_t>(offsetof(LeanFingerSet_t4269474588, ___OnSet_7)); }
	inline LeanFingerEvent_t2859433896 * get_OnSet_7() const { return ___OnSet_7; }
	inline LeanFingerEvent_t2859433896 ** get_address_of_OnSet_7() { return &___OnSet_7; }
	inline void set_OnSet_7(LeanFingerEvent_t2859433896 * value)
	{
		___OnSet_7 = value;
		Il2CppCodeGenWriteBarrier(&___OnSet_7, value);
	}

	inline static int32_t get_offset_of_OnSetDelta_8() { return static_cast<int32_t>(offsetof(LeanFingerSet_t4269474588, ___OnSetDelta_8)); }
	inline Vector2Event_t1101497498 * get_OnSetDelta_8() const { return ___OnSetDelta_8; }
	inline Vector2Event_t1101497498 ** get_address_of_OnSetDelta_8() { return &___OnSetDelta_8; }
	inline void set_OnSetDelta_8(Vector2Event_t1101497498 * value)
	{
		___OnSetDelta_8 = value;
		Il2CppCodeGenWriteBarrier(&___OnSetDelta_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

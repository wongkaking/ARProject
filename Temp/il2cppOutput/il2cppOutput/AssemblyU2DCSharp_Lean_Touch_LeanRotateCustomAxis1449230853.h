#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"
#include "UnityEngine_UnityEngine_Space654135784.h"

// Lean.Touch.LeanSelectable
struct LeanSelectable_t2178850769;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanRotateCustomAxis
struct  LeanRotateCustomAxis_t1449230853  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Lean.Touch.LeanRotateCustomAxis::IgnoreStartedOverGui
	bool ___IgnoreStartedOverGui_2;
	// System.Boolean Lean.Touch.LeanRotateCustomAxis::IgnoreIsOverGui
	bool ___IgnoreIsOverGui_3;
	// System.Int32 Lean.Touch.LeanRotateCustomAxis::RequiredFingerCount
	int32_t ___RequiredFingerCount_4;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanRotateCustomAxis::RequiredSelectable
	LeanSelectable_t2178850769 * ___RequiredSelectable_5;
	// UnityEngine.Vector3 Lean.Touch.LeanRotateCustomAxis::Axis
	Vector3_t3722313464  ___Axis_6;
	// UnityEngine.Space Lean.Touch.LeanRotateCustomAxis::Space
	int32_t ___Space_7;

public:
	inline static int32_t get_offset_of_IgnoreStartedOverGui_2() { return static_cast<int32_t>(offsetof(LeanRotateCustomAxis_t1449230853, ___IgnoreStartedOverGui_2)); }
	inline bool get_IgnoreStartedOverGui_2() const { return ___IgnoreStartedOverGui_2; }
	inline bool* get_address_of_IgnoreStartedOverGui_2() { return &___IgnoreStartedOverGui_2; }
	inline void set_IgnoreStartedOverGui_2(bool value)
	{
		___IgnoreStartedOverGui_2 = value;
	}

	inline static int32_t get_offset_of_IgnoreIsOverGui_3() { return static_cast<int32_t>(offsetof(LeanRotateCustomAxis_t1449230853, ___IgnoreIsOverGui_3)); }
	inline bool get_IgnoreIsOverGui_3() const { return ___IgnoreIsOverGui_3; }
	inline bool* get_address_of_IgnoreIsOverGui_3() { return &___IgnoreIsOverGui_3; }
	inline void set_IgnoreIsOverGui_3(bool value)
	{
		___IgnoreIsOverGui_3 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_4() { return static_cast<int32_t>(offsetof(LeanRotateCustomAxis_t1449230853, ___RequiredFingerCount_4)); }
	inline int32_t get_RequiredFingerCount_4() const { return ___RequiredFingerCount_4; }
	inline int32_t* get_address_of_RequiredFingerCount_4() { return &___RequiredFingerCount_4; }
	inline void set_RequiredFingerCount_4(int32_t value)
	{
		___RequiredFingerCount_4 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_5() { return static_cast<int32_t>(offsetof(LeanRotateCustomAxis_t1449230853, ___RequiredSelectable_5)); }
	inline LeanSelectable_t2178850769 * get_RequiredSelectable_5() const { return ___RequiredSelectable_5; }
	inline LeanSelectable_t2178850769 ** get_address_of_RequiredSelectable_5() { return &___RequiredSelectable_5; }
	inline void set_RequiredSelectable_5(LeanSelectable_t2178850769 * value)
	{
		___RequiredSelectable_5 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_5, value);
	}

	inline static int32_t get_offset_of_Axis_6() { return static_cast<int32_t>(offsetof(LeanRotateCustomAxis_t1449230853, ___Axis_6)); }
	inline Vector3_t3722313464  get_Axis_6() const { return ___Axis_6; }
	inline Vector3_t3722313464 * get_address_of_Axis_6() { return &___Axis_6; }
	inline void set_Axis_6(Vector3_t3722313464  value)
	{
		___Axis_6 = value;
	}

	inline static int32_t get_offset_of_Space_7() { return static_cast<int32_t>(offsetof(LeanRotateCustomAxis_t1449230853, ___Space_7)); }
	inline int32_t get_Space_7() const { return ___Space_7; }
	inline int32_t* get_address_of_Space_7() { return &___Space_7; }
	inline void set_Space_7(int32_t value)
	{
		___Space_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

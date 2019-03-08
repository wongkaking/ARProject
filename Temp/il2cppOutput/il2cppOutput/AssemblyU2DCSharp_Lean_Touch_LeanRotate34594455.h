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
// UnityEngine.Camera
struct Camera_t4157153871;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanRotate
struct  LeanRotate_t34594455  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Lean.Touch.LeanRotate::IgnoreStartedOverGui
	bool ___IgnoreStartedOverGui_2;
	// System.Boolean Lean.Touch.LeanRotate::IgnoreIsOverGui
	bool ___IgnoreIsOverGui_3;
	// System.Int32 Lean.Touch.LeanRotate::RequiredFingerCount
	int32_t ___RequiredFingerCount_4;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanRotate::RequiredSelectable
	LeanSelectable_t2178850769 * ___RequiredSelectable_5;
	// UnityEngine.Camera Lean.Touch.LeanRotate::Camera
	Camera_t4157153871 * ___Camera_6;
	// System.Boolean Lean.Touch.LeanRotate::Relative
	bool ___Relative_7;

public:
	inline static int32_t get_offset_of_IgnoreStartedOverGui_2() { return static_cast<int32_t>(offsetof(LeanRotate_t34594455, ___IgnoreStartedOverGui_2)); }
	inline bool get_IgnoreStartedOverGui_2() const { return ___IgnoreStartedOverGui_2; }
	inline bool* get_address_of_IgnoreStartedOverGui_2() { return &___IgnoreStartedOverGui_2; }
	inline void set_IgnoreStartedOverGui_2(bool value)
	{
		___IgnoreStartedOverGui_2 = value;
	}

	inline static int32_t get_offset_of_IgnoreIsOverGui_3() { return static_cast<int32_t>(offsetof(LeanRotate_t34594455, ___IgnoreIsOverGui_3)); }
	inline bool get_IgnoreIsOverGui_3() const { return ___IgnoreIsOverGui_3; }
	inline bool* get_address_of_IgnoreIsOverGui_3() { return &___IgnoreIsOverGui_3; }
	inline void set_IgnoreIsOverGui_3(bool value)
	{
		___IgnoreIsOverGui_3 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_4() { return static_cast<int32_t>(offsetof(LeanRotate_t34594455, ___RequiredFingerCount_4)); }
	inline int32_t get_RequiredFingerCount_4() const { return ___RequiredFingerCount_4; }
	inline int32_t* get_address_of_RequiredFingerCount_4() { return &___RequiredFingerCount_4; }
	inline void set_RequiredFingerCount_4(int32_t value)
	{
		___RequiredFingerCount_4 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_5() { return static_cast<int32_t>(offsetof(LeanRotate_t34594455, ___RequiredSelectable_5)); }
	inline LeanSelectable_t2178850769 * get_RequiredSelectable_5() const { return ___RequiredSelectable_5; }
	inline LeanSelectable_t2178850769 ** get_address_of_RequiredSelectable_5() { return &___RequiredSelectable_5; }
	inline void set_RequiredSelectable_5(LeanSelectable_t2178850769 * value)
	{
		___RequiredSelectable_5 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_5, value);
	}

	inline static int32_t get_offset_of_Camera_6() { return static_cast<int32_t>(offsetof(LeanRotate_t34594455, ___Camera_6)); }
	inline Camera_t4157153871 * get_Camera_6() const { return ___Camera_6; }
	inline Camera_t4157153871 ** get_address_of_Camera_6() { return &___Camera_6; }
	inline void set_Camera_6(Camera_t4157153871 * value)
	{
		___Camera_6 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_6, value);
	}

	inline static int32_t get_offset_of_Relative_7() { return static_cast<int32_t>(offsetof(LeanRotate_t34594455, ___Relative_7)); }
	inline bool get_Relative_7() const { return ___Relative_7; }
	inline bool* get_address_of_Relative_7() { return &___Relative_7; }
	inline void set_Relative_7(bool value)
	{
		___Relative_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

// Lean.Touch.LeanSelectable
struct LeanSelectable_t2178850769;
// UnityEngine.Camera
struct Camera_t4157153871;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanScale
struct  LeanScale_t3637880192  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Lean.Touch.LeanScale::IgnoreStartedOverGui
	bool ___IgnoreStartedOverGui_2;
	// System.Boolean Lean.Touch.LeanScale::IgnoreIsOverGui
	bool ___IgnoreIsOverGui_3;
	// System.Int32 Lean.Touch.LeanScale::RequiredFingerCount
	int32_t ___RequiredFingerCount_4;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanScale::RequiredSelectable
	LeanSelectable_t2178850769 * ___RequiredSelectable_5;
	// UnityEngine.Camera Lean.Touch.LeanScale::Camera
	Camera_t4157153871 * ___Camera_6;
	// System.Single Lean.Touch.LeanScale::WheelSensitivity
	float ___WheelSensitivity_7;
	// System.Boolean Lean.Touch.LeanScale::Relative
	bool ___Relative_8;
	// System.Boolean Lean.Touch.LeanScale::ScaleClamp
	bool ___ScaleClamp_9;
	// UnityEngine.Vector3 Lean.Touch.LeanScale::ScaleMin
	Vector3_t3722313464  ___ScaleMin_10;
	// UnityEngine.Vector3 Lean.Touch.LeanScale::ScaleMax
	Vector3_t3722313464  ___ScaleMax_11;

public:
	inline static int32_t get_offset_of_IgnoreStartedOverGui_2() { return static_cast<int32_t>(offsetof(LeanScale_t3637880192, ___IgnoreStartedOverGui_2)); }
	inline bool get_IgnoreStartedOverGui_2() const { return ___IgnoreStartedOverGui_2; }
	inline bool* get_address_of_IgnoreStartedOverGui_2() { return &___IgnoreStartedOverGui_2; }
	inline void set_IgnoreStartedOverGui_2(bool value)
	{
		___IgnoreStartedOverGui_2 = value;
	}

	inline static int32_t get_offset_of_IgnoreIsOverGui_3() { return static_cast<int32_t>(offsetof(LeanScale_t3637880192, ___IgnoreIsOverGui_3)); }
	inline bool get_IgnoreIsOverGui_3() const { return ___IgnoreIsOverGui_3; }
	inline bool* get_address_of_IgnoreIsOverGui_3() { return &___IgnoreIsOverGui_3; }
	inline void set_IgnoreIsOverGui_3(bool value)
	{
		___IgnoreIsOverGui_3 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_4() { return static_cast<int32_t>(offsetof(LeanScale_t3637880192, ___RequiredFingerCount_4)); }
	inline int32_t get_RequiredFingerCount_4() const { return ___RequiredFingerCount_4; }
	inline int32_t* get_address_of_RequiredFingerCount_4() { return &___RequiredFingerCount_4; }
	inline void set_RequiredFingerCount_4(int32_t value)
	{
		___RequiredFingerCount_4 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_5() { return static_cast<int32_t>(offsetof(LeanScale_t3637880192, ___RequiredSelectable_5)); }
	inline LeanSelectable_t2178850769 * get_RequiredSelectable_5() const { return ___RequiredSelectable_5; }
	inline LeanSelectable_t2178850769 ** get_address_of_RequiredSelectable_5() { return &___RequiredSelectable_5; }
	inline void set_RequiredSelectable_5(LeanSelectable_t2178850769 * value)
	{
		___RequiredSelectable_5 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_5, value);
	}

	inline static int32_t get_offset_of_Camera_6() { return static_cast<int32_t>(offsetof(LeanScale_t3637880192, ___Camera_6)); }
	inline Camera_t4157153871 * get_Camera_6() const { return ___Camera_6; }
	inline Camera_t4157153871 ** get_address_of_Camera_6() { return &___Camera_6; }
	inline void set_Camera_6(Camera_t4157153871 * value)
	{
		___Camera_6 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_6, value);
	}

	inline static int32_t get_offset_of_WheelSensitivity_7() { return static_cast<int32_t>(offsetof(LeanScale_t3637880192, ___WheelSensitivity_7)); }
	inline float get_WheelSensitivity_7() const { return ___WheelSensitivity_7; }
	inline float* get_address_of_WheelSensitivity_7() { return &___WheelSensitivity_7; }
	inline void set_WheelSensitivity_7(float value)
	{
		___WheelSensitivity_7 = value;
	}

	inline static int32_t get_offset_of_Relative_8() { return static_cast<int32_t>(offsetof(LeanScale_t3637880192, ___Relative_8)); }
	inline bool get_Relative_8() const { return ___Relative_8; }
	inline bool* get_address_of_Relative_8() { return &___Relative_8; }
	inline void set_Relative_8(bool value)
	{
		___Relative_8 = value;
	}

	inline static int32_t get_offset_of_ScaleClamp_9() { return static_cast<int32_t>(offsetof(LeanScale_t3637880192, ___ScaleClamp_9)); }
	inline bool get_ScaleClamp_9() const { return ___ScaleClamp_9; }
	inline bool* get_address_of_ScaleClamp_9() { return &___ScaleClamp_9; }
	inline void set_ScaleClamp_9(bool value)
	{
		___ScaleClamp_9 = value;
	}

	inline static int32_t get_offset_of_ScaleMin_10() { return static_cast<int32_t>(offsetof(LeanScale_t3637880192, ___ScaleMin_10)); }
	inline Vector3_t3722313464  get_ScaleMin_10() const { return ___ScaleMin_10; }
	inline Vector3_t3722313464 * get_address_of_ScaleMin_10() { return &___ScaleMin_10; }
	inline void set_ScaleMin_10(Vector3_t3722313464  value)
	{
		___ScaleMin_10 = value;
	}

	inline static int32_t get_offset_of_ScaleMax_11() { return static_cast<int32_t>(offsetof(LeanScale_t3637880192, ___ScaleMax_11)); }
	inline Vector3_t3722313464  get_ScaleMax_11() const { return ___ScaleMax_11; }
	inline Vector3_t3722313464 * get_address_of_ScaleMax_11() { return &___ScaleMax_11; }
	inline void set_ScaleMax_11(Vector3_t3722313464  value)
	{
		___ScaleMax_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

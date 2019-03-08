#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "AssemblyU2DCSharp_Lean_Touch_LeanScreenDepth1010637882.h"

// UnityEngine.Camera
struct Camera_t4157153871;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanCameraMove
struct  LeanCameraMove_t2733027855  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera Lean.Touch.LeanCameraMove::Camera
	Camera_t4157153871 * ___Camera_2;
	// System.Boolean Lean.Touch.LeanCameraMove::IgnoreStartedOverGui
	bool ___IgnoreStartedOverGui_3;
	// System.Boolean Lean.Touch.LeanCameraMove::IgnoreIsOverGui
	bool ___IgnoreIsOverGui_4;
	// System.Int32 Lean.Touch.LeanCameraMove::RequiredFingerCount
	int32_t ___RequiredFingerCount_5;
	// System.Single Lean.Touch.LeanCameraMove::Sensitivity
	float ___Sensitivity_6;
	// Lean.Touch.LeanScreenDepth Lean.Touch.LeanCameraMove::ScreenDepth
	LeanScreenDepth_t1010637882  ___ScreenDepth_7;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(LeanCameraMove_t2733027855, ___Camera_2)); }
	inline Camera_t4157153871 * get_Camera_2() const { return ___Camera_2; }
	inline Camera_t4157153871 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(Camera_t4157153871 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_2, value);
	}

	inline static int32_t get_offset_of_IgnoreStartedOverGui_3() { return static_cast<int32_t>(offsetof(LeanCameraMove_t2733027855, ___IgnoreStartedOverGui_3)); }
	inline bool get_IgnoreStartedOverGui_3() const { return ___IgnoreStartedOverGui_3; }
	inline bool* get_address_of_IgnoreStartedOverGui_3() { return &___IgnoreStartedOverGui_3; }
	inline void set_IgnoreStartedOverGui_3(bool value)
	{
		___IgnoreStartedOverGui_3 = value;
	}

	inline static int32_t get_offset_of_IgnoreIsOverGui_4() { return static_cast<int32_t>(offsetof(LeanCameraMove_t2733027855, ___IgnoreIsOverGui_4)); }
	inline bool get_IgnoreIsOverGui_4() const { return ___IgnoreIsOverGui_4; }
	inline bool* get_address_of_IgnoreIsOverGui_4() { return &___IgnoreIsOverGui_4; }
	inline void set_IgnoreIsOverGui_4(bool value)
	{
		___IgnoreIsOverGui_4 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_5() { return static_cast<int32_t>(offsetof(LeanCameraMove_t2733027855, ___RequiredFingerCount_5)); }
	inline int32_t get_RequiredFingerCount_5() const { return ___RequiredFingerCount_5; }
	inline int32_t* get_address_of_RequiredFingerCount_5() { return &___RequiredFingerCount_5; }
	inline void set_RequiredFingerCount_5(int32_t value)
	{
		___RequiredFingerCount_5 = value;
	}

	inline static int32_t get_offset_of_Sensitivity_6() { return static_cast<int32_t>(offsetof(LeanCameraMove_t2733027855, ___Sensitivity_6)); }
	inline float get_Sensitivity_6() const { return ___Sensitivity_6; }
	inline float* get_address_of_Sensitivity_6() { return &___Sensitivity_6; }
	inline void set_Sensitivity_6(float value)
	{
		___Sensitivity_6 = value;
	}

	inline static int32_t get_offset_of_ScreenDepth_7() { return static_cast<int32_t>(offsetof(LeanCameraMove_t2733027855, ___ScreenDepth_7)); }
	inline LeanScreenDepth_t1010637882  get_ScreenDepth_7() const { return ___ScreenDepth_7; }
	inline LeanScreenDepth_t1010637882 * get_address_of_ScreenDepth_7() { return &___ScreenDepth_7; }
	inline void set_ScreenDepth_7(LeanScreenDepth_t1010637882  value)
	{
		___ScreenDepth_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

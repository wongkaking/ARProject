#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.Camera
struct Camera_t4157153871;
// Lean.Touch.LeanSelectable
struct LeanSelectable_t2178850769;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanCameraZoom
struct  LeanCameraZoom_t533377559  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera Lean.Touch.LeanCameraZoom::Camera
	Camera_t4157153871 * ___Camera_2;
	// System.Boolean Lean.Touch.LeanCameraZoom::IgnoreStartedOverGui
	bool ___IgnoreStartedOverGui_3;
	// System.Boolean Lean.Touch.LeanCameraZoom::IgnoreIsOverGui
	bool ___IgnoreIsOverGui_4;
	// System.Int32 Lean.Touch.LeanCameraZoom::RequiredFingerCount
	int32_t ___RequiredFingerCount_5;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanCameraZoom::RequiredSelectable
	LeanSelectable_t2178850769 * ___RequiredSelectable_6;
	// System.Single Lean.Touch.LeanCameraZoom::WheelSensitivity
	float ___WheelSensitivity_7;
	// System.Boolean Lean.Touch.LeanCameraZoom::Relative
	bool ___Relative_8;
	// System.Single Lean.Touch.LeanCameraZoom::Zoom
	float ___Zoom_9;
	// System.Boolean Lean.Touch.LeanCameraZoom::ZoomClamp
	bool ___ZoomClamp_10;
	// System.Single Lean.Touch.LeanCameraZoom::ZoomMin
	float ___ZoomMin_11;
	// System.Single Lean.Touch.LeanCameraZoom::ZoomMax
	float ___ZoomMax_12;

public:
	inline static int32_t get_offset_of_Camera_2() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t533377559, ___Camera_2)); }
	inline Camera_t4157153871 * get_Camera_2() const { return ___Camera_2; }
	inline Camera_t4157153871 ** get_address_of_Camera_2() { return &___Camera_2; }
	inline void set_Camera_2(Camera_t4157153871 * value)
	{
		___Camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_2, value);
	}

	inline static int32_t get_offset_of_IgnoreStartedOverGui_3() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t533377559, ___IgnoreStartedOverGui_3)); }
	inline bool get_IgnoreStartedOverGui_3() const { return ___IgnoreStartedOverGui_3; }
	inline bool* get_address_of_IgnoreStartedOverGui_3() { return &___IgnoreStartedOverGui_3; }
	inline void set_IgnoreStartedOverGui_3(bool value)
	{
		___IgnoreStartedOverGui_3 = value;
	}

	inline static int32_t get_offset_of_IgnoreIsOverGui_4() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t533377559, ___IgnoreIsOverGui_4)); }
	inline bool get_IgnoreIsOverGui_4() const { return ___IgnoreIsOverGui_4; }
	inline bool* get_address_of_IgnoreIsOverGui_4() { return &___IgnoreIsOverGui_4; }
	inline void set_IgnoreIsOverGui_4(bool value)
	{
		___IgnoreIsOverGui_4 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_5() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t533377559, ___RequiredFingerCount_5)); }
	inline int32_t get_RequiredFingerCount_5() const { return ___RequiredFingerCount_5; }
	inline int32_t* get_address_of_RequiredFingerCount_5() { return &___RequiredFingerCount_5; }
	inline void set_RequiredFingerCount_5(int32_t value)
	{
		___RequiredFingerCount_5 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_6() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t533377559, ___RequiredSelectable_6)); }
	inline LeanSelectable_t2178850769 * get_RequiredSelectable_6() const { return ___RequiredSelectable_6; }
	inline LeanSelectable_t2178850769 ** get_address_of_RequiredSelectable_6() { return &___RequiredSelectable_6; }
	inline void set_RequiredSelectable_6(LeanSelectable_t2178850769 * value)
	{
		___RequiredSelectable_6 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_6, value);
	}

	inline static int32_t get_offset_of_WheelSensitivity_7() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t533377559, ___WheelSensitivity_7)); }
	inline float get_WheelSensitivity_7() const { return ___WheelSensitivity_7; }
	inline float* get_address_of_WheelSensitivity_7() { return &___WheelSensitivity_7; }
	inline void set_WheelSensitivity_7(float value)
	{
		___WheelSensitivity_7 = value;
	}

	inline static int32_t get_offset_of_Relative_8() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t533377559, ___Relative_8)); }
	inline bool get_Relative_8() const { return ___Relative_8; }
	inline bool* get_address_of_Relative_8() { return &___Relative_8; }
	inline void set_Relative_8(bool value)
	{
		___Relative_8 = value;
	}

	inline static int32_t get_offset_of_Zoom_9() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t533377559, ___Zoom_9)); }
	inline float get_Zoom_9() const { return ___Zoom_9; }
	inline float* get_address_of_Zoom_9() { return &___Zoom_9; }
	inline void set_Zoom_9(float value)
	{
		___Zoom_9 = value;
	}

	inline static int32_t get_offset_of_ZoomClamp_10() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t533377559, ___ZoomClamp_10)); }
	inline bool get_ZoomClamp_10() const { return ___ZoomClamp_10; }
	inline bool* get_address_of_ZoomClamp_10() { return &___ZoomClamp_10; }
	inline void set_ZoomClamp_10(bool value)
	{
		___ZoomClamp_10 = value;
	}

	inline static int32_t get_offset_of_ZoomMin_11() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t533377559, ___ZoomMin_11)); }
	inline float get_ZoomMin_11() const { return ___ZoomMin_11; }
	inline float* get_address_of_ZoomMin_11() { return &___ZoomMin_11; }
	inline void set_ZoomMin_11(float value)
	{
		___ZoomMin_11 = value;
	}

	inline static int32_t get_offset_of_ZoomMax_12() { return static_cast<int32_t>(offsetof(LeanCameraZoom_t533377559, ___ZoomMax_12)); }
	inline float get_ZoomMax_12() const { return ___ZoomMax_12; }
	inline float* get_address_of_ZoomMax_12() { return &___ZoomMax_12; }
	inline void set_ZoomMax_12(float value)
	{
		___ZoomMax_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

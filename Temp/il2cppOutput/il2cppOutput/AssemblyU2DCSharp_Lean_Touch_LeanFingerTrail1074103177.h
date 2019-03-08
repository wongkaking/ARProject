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

// Lean.Touch.LeanSelectable
struct LeanSelectable_t2178850769;
// UnityEngine.LineRenderer
struct LineRenderer_t3154350270;
// UnityEngine.Camera
struct Camera_t4157153871;
// System.Collections.Generic.List`1<Lean.Touch.LeanFingerTrail/Link>
struct List_1_t1368241247;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerTrail
struct  LeanFingerTrail_t1074103177  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Lean.Touch.LeanFingerTrail::IgnoreStartedOverGui
	bool ___IgnoreStartedOverGui_2;
	// System.Boolean Lean.Touch.LeanFingerTrail::IgnoreIsOverGui
	bool ___IgnoreIsOverGui_3;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanFingerTrail::RequiredSelectable
	LeanSelectable_t2178850769 * ___RequiredSelectable_4;
	// UnityEngine.LineRenderer Lean.Touch.LeanFingerTrail::LinePrefab
	LineRenderer_t3154350270 * ___LinePrefab_5;
	// Lean.Touch.LeanScreenDepth Lean.Touch.LeanFingerTrail::ScreenDepth
	LeanScreenDepth_t1010637882  ___ScreenDepth_6;
	// System.Int32 Lean.Touch.LeanFingerTrail::MaxLines
	int32_t ___MaxLines_7;
	// UnityEngine.Camera Lean.Touch.LeanFingerTrail::Camera
	Camera_t4157153871 * ___Camera_8;
	// System.Collections.Generic.List`1<Lean.Touch.LeanFingerTrail/Link> Lean.Touch.LeanFingerTrail::links
	List_1_t1368241247 * ___links_9;

public:
	inline static int32_t get_offset_of_IgnoreStartedOverGui_2() { return static_cast<int32_t>(offsetof(LeanFingerTrail_t1074103177, ___IgnoreStartedOverGui_2)); }
	inline bool get_IgnoreStartedOverGui_2() const { return ___IgnoreStartedOverGui_2; }
	inline bool* get_address_of_IgnoreStartedOverGui_2() { return &___IgnoreStartedOverGui_2; }
	inline void set_IgnoreStartedOverGui_2(bool value)
	{
		___IgnoreStartedOverGui_2 = value;
	}

	inline static int32_t get_offset_of_IgnoreIsOverGui_3() { return static_cast<int32_t>(offsetof(LeanFingerTrail_t1074103177, ___IgnoreIsOverGui_3)); }
	inline bool get_IgnoreIsOverGui_3() const { return ___IgnoreIsOverGui_3; }
	inline bool* get_address_of_IgnoreIsOverGui_3() { return &___IgnoreIsOverGui_3; }
	inline void set_IgnoreIsOverGui_3(bool value)
	{
		___IgnoreIsOverGui_3 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_4() { return static_cast<int32_t>(offsetof(LeanFingerTrail_t1074103177, ___RequiredSelectable_4)); }
	inline LeanSelectable_t2178850769 * get_RequiredSelectable_4() const { return ___RequiredSelectable_4; }
	inline LeanSelectable_t2178850769 ** get_address_of_RequiredSelectable_4() { return &___RequiredSelectable_4; }
	inline void set_RequiredSelectable_4(LeanSelectable_t2178850769 * value)
	{
		___RequiredSelectable_4 = value;
		Il2CppCodeGenWriteBarrier(&___RequiredSelectable_4, value);
	}

	inline static int32_t get_offset_of_LinePrefab_5() { return static_cast<int32_t>(offsetof(LeanFingerTrail_t1074103177, ___LinePrefab_5)); }
	inline LineRenderer_t3154350270 * get_LinePrefab_5() const { return ___LinePrefab_5; }
	inline LineRenderer_t3154350270 ** get_address_of_LinePrefab_5() { return &___LinePrefab_5; }
	inline void set_LinePrefab_5(LineRenderer_t3154350270 * value)
	{
		___LinePrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___LinePrefab_5, value);
	}

	inline static int32_t get_offset_of_ScreenDepth_6() { return static_cast<int32_t>(offsetof(LeanFingerTrail_t1074103177, ___ScreenDepth_6)); }
	inline LeanScreenDepth_t1010637882  get_ScreenDepth_6() const { return ___ScreenDepth_6; }
	inline LeanScreenDepth_t1010637882 * get_address_of_ScreenDepth_6() { return &___ScreenDepth_6; }
	inline void set_ScreenDepth_6(LeanScreenDepth_t1010637882  value)
	{
		___ScreenDepth_6 = value;
	}

	inline static int32_t get_offset_of_MaxLines_7() { return static_cast<int32_t>(offsetof(LeanFingerTrail_t1074103177, ___MaxLines_7)); }
	inline int32_t get_MaxLines_7() const { return ___MaxLines_7; }
	inline int32_t* get_address_of_MaxLines_7() { return &___MaxLines_7; }
	inline void set_MaxLines_7(int32_t value)
	{
		___MaxLines_7 = value;
	}

	inline static int32_t get_offset_of_Camera_8() { return static_cast<int32_t>(offsetof(LeanFingerTrail_t1074103177, ___Camera_8)); }
	inline Camera_t4157153871 * get_Camera_8() const { return ___Camera_8; }
	inline Camera_t4157153871 ** get_address_of_Camera_8() { return &___Camera_8; }
	inline void set_Camera_8(Camera_t4157153871 * value)
	{
		___Camera_8 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_8, value);
	}

	inline static int32_t get_offset_of_links_9() { return static_cast<int32_t>(offsetof(LeanFingerTrail_t1074103177, ___links_9)); }
	inline List_1_t1368241247 * get_links_9() const { return ___links_9; }
	inline List_1_t1368241247 ** get_address_of_links_9() { return &___links_9; }
	inline void set_links_9(List_1_t1368241247 * value)
	{
		___links_9 = value;
		Il2CppCodeGenWriteBarrier(&___links_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

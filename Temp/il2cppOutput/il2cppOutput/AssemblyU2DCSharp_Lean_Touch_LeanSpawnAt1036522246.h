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

// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Camera
struct Camera_t4157153871;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSpawnAt
struct  LeanSpawnAt_t1036522246  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform Lean.Touch.LeanSpawnAt::Prefab
	Transform_t3600365921 * ___Prefab_2;
	// UnityEngine.Camera Lean.Touch.LeanSpawnAt::Camera
	Camera_t4157153871 * ___Camera_3;
	// Lean.Touch.LeanScreenDepth Lean.Touch.LeanSpawnAt::ScreenDepth
	LeanScreenDepth_t1010637882  ___ScreenDepth_4;

public:
	inline static int32_t get_offset_of_Prefab_2() { return static_cast<int32_t>(offsetof(LeanSpawnAt_t1036522246, ___Prefab_2)); }
	inline Transform_t3600365921 * get_Prefab_2() const { return ___Prefab_2; }
	inline Transform_t3600365921 ** get_address_of_Prefab_2() { return &___Prefab_2; }
	inline void set_Prefab_2(Transform_t3600365921 * value)
	{
		___Prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_2, value);
	}

	inline static int32_t get_offset_of_Camera_3() { return static_cast<int32_t>(offsetof(LeanSpawnAt_t1036522246, ___Camera_3)); }
	inline Camera_t4157153871 * get_Camera_3() const { return ___Camera_3; }
	inline Camera_t4157153871 ** get_address_of_Camera_3() { return &___Camera_3; }
	inline void set_Camera_3(Camera_t4157153871 * value)
	{
		___Camera_3 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_3, value);
	}

	inline static int32_t get_offset_of_ScreenDepth_4() { return static_cast<int32_t>(offsetof(LeanSpawnAt_t1036522246, ___ScreenDepth_4)); }
	inline LeanScreenDepth_t1010637882  get_ScreenDepth_4() const { return ___ScreenDepth_4; }
	inline LeanScreenDepth_t1010637882 * get_address_of_ScreenDepth_4() { return &___ScreenDepth_4; }
	inline void set_ScreenDepth_4(LeanScreenDepth_t1010637882  value)
	{
		___ScreenDepth_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

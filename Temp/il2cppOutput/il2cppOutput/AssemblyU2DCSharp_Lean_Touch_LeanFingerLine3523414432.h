#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Lean_Touch_LeanFingerTrail1074103177.h"

// UnityEngine.Transform
struct Transform_t3600365921;
// Lean.Touch.LeanFingerLine/Vector3Vector3Event
struct Vector3Vector3Event_t2393246875;
// Lean.Touch.LeanFingerLine/Vector3Event
struct Vector3Event_t2452395454;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerLine
struct  LeanFingerLine_t3523414432  : public LeanFingerTrail_t1074103177
{
public:
	// System.Single Lean.Touch.LeanFingerLine::ThicknessScale
	float ___ThicknessScale_10;
	// System.Single Lean.Touch.LeanFingerLine::LengthMin
	float ___LengthMin_11;
	// System.Single Lean.Touch.LeanFingerLine::LengthMax
	float ___LengthMax_12;
	// UnityEngine.Transform Lean.Touch.LeanFingerLine::Target
	Transform_t3600365921 * ___Target_13;
	// Lean.Touch.LeanFingerLine/Vector3Vector3Event Lean.Touch.LeanFingerLine::OnReleasedFromTo
	Vector3Vector3Event_t2393246875 * ___OnReleasedFromTo_14;
	// Lean.Touch.LeanFingerLine/Vector3Event Lean.Touch.LeanFingerLine::OnReleasedTo
	Vector3Event_t2452395454 * ___OnReleasedTo_15;

public:
	inline static int32_t get_offset_of_ThicknessScale_10() { return static_cast<int32_t>(offsetof(LeanFingerLine_t3523414432, ___ThicknessScale_10)); }
	inline float get_ThicknessScale_10() const { return ___ThicknessScale_10; }
	inline float* get_address_of_ThicknessScale_10() { return &___ThicknessScale_10; }
	inline void set_ThicknessScale_10(float value)
	{
		___ThicknessScale_10 = value;
	}

	inline static int32_t get_offset_of_LengthMin_11() { return static_cast<int32_t>(offsetof(LeanFingerLine_t3523414432, ___LengthMin_11)); }
	inline float get_LengthMin_11() const { return ___LengthMin_11; }
	inline float* get_address_of_LengthMin_11() { return &___LengthMin_11; }
	inline void set_LengthMin_11(float value)
	{
		___LengthMin_11 = value;
	}

	inline static int32_t get_offset_of_LengthMax_12() { return static_cast<int32_t>(offsetof(LeanFingerLine_t3523414432, ___LengthMax_12)); }
	inline float get_LengthMax_12() const { return ___LengthMax_12; }
	inline float* get_address_of_LengthMax_12() { return &___LengthMax_12; }
	inline void set_LengthMax_12(float value)
	{
		___LengthMax_12 = value;
	}

	inline static int32_t get_offset_of_Target_13() { return static_cast<int32_t>(offsetof(LeanFingerLine_t3523414432, ___Target_13)); }
	inline Transform_t3600365921 * get_Target_13() const { return ___Target_13; }
	inline Transform_t3600365921 ** get_address_of_Target_13() { return &___Target_13; }
	inline void set_Target_13(Transform_t3600365921 * value)
	{
		___Target_13 = value;
		Il2CppCodeGenWriteBarrier(&___Target_13, value);
	}

	inline static int32_t get_offset_of_OnReleasedFromTo_14() { return static_cast<int32_t>(offsetof(LeanFingerLine_t3523414432, ___OnReleasedFromTo_14)); }
	inline Vector3Vector3Event_t2393246875 * get_OnReleasedFromTo_14() const { return ___OnReleasedFromTo_14; }
	inline Vector3Vector3Event_t2393246875 ** get_address_of_OnReleasedFromTo_14() { return &___OnReleasedFromTo_14; }
	inline void set_OnReleasedFromTo_14(Vector3Vector3Event_t2393246875 * value)
	{
		___OnReleasedFromTo_14 = value;
		Il2CppCodeGenWriteBarrier(&___OnReleasedFromTo_14, value);
	}

	inline static int32_t get_offset_of_OnReleasedTo_15() { return static_cast<int32_t>(offsetof(LeanFingerLine_t3523414432, ___OnReleasedTo_15)); }
	inline Vector3Event_t2452395454 * get_OnReleasedTo_15() const { return ___OnReleasedTo_15; }
	inline Vector3Event_t2452395454 ** get_address_of_OnReleasedTo_15() { return &___OnReleasedTo_15; }
	inline void set_OnReleasedTo_15(Vector3Event_t2452395454 * value)
	{
		___OnReleasedTo_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnReleasedTo_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

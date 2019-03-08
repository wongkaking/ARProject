#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "UnityEngine_UnityEngine_Vector22156229523.h"

// Lean.Touch.LeanFinger
struct LeanFinger_t3506292858;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerHeld/Link
struct  Link_t1401011957  : public Il2CppObject
{
public:
	// Lean.Touch.LeanFinger Lean.Touch.LeanFingerHeld/Link::Finger
	LeanFinger_t3506292858 * ___Finger_0;
	// System.Boolean Lean.Touch.LeanFingerHeld/Link::LastSet
	bool ___LastSet_1;
	// UnityEngine.Vector2 Lean.Touch.LeanFingerHeld/Link::TotalScaledDelta
	Vector2_t2156229523  ___TotalScaledDelta_2;

public:
	inline static int32_t get_offset_of_Finger_0() { return static_cast<int32_t>(offsetof(Link_t1401011957, ___Finger_0)); }
	inline LeanFinger_t3506292858 * get_Finger_0() const { return ___Finger_0; }
	inline LeanFinger_t3506292858 ** get_address_of_Finger_0() { return &___Finger_0; }
	inline void set_Finger_0(LeanFinger_t3506292858 * value)
	{
		___Finger_0 = value;
		Il2CppCodeGenWriteBarrier(&___Finger_0, value);
	}

	inline static int32_t get_offset_of_LastSet_1() { return static_cast<int32_t>(offsetof(Link_t1401011957, ___LastSet_1)); }
	inline bool get_LastSet_1() const { return ___LastSet_1; }
	inline bool* get_address_of_LastSet_1() { return &___LastSet_1; }
	inline void set_LastSet_1(bool value)
	{
		___LastSet_1 = value;
	}

	inline static int32_t get_offset_of_TotalScaledDelta_2() { return static_cast<int32_t>(offsetof(Link_t1401011957, ___TotalScaledDelta_2)); }
	inline Vector2_t2156229523  get_TotalScaledDelta_2() const { return ___TotalScaledDelta_2; }
	inline Vector2_t2156229523 * get_address_of_TotalScaledDelta_2() { return &___TotalScaledDelta_2; }
	inline void set_TotalScaledDelta_2(Vector2_t2156229523  value)
	{
		___TotalScaledDelta_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

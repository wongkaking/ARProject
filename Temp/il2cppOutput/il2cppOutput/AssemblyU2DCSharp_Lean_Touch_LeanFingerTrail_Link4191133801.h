#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// Lean.Touch.LeanFinger
struct LeanFinger_t3506292858;
// UnityEngine.LineRenderer
struct LineRenderer_t3154350270;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFingerTrail/Link
struct  Link_t4191133801  : public Il2CppObject
{
public:
	// Lean.Touch.LeanFinger Lean.Touch.LeanFingerTrail/Link::Finger
	LeanFinger_t3506292858 * ___Finger_0;
	// UnityEngine.LineRenderer Lean.Touch.LeanFingerTrail/Link::Line
	LineRenderer_t3154350270 * ___Line_1;

public:
	inline static int32_t get_offset_of_Finger_0() { return static_cast<int32_t>(offsetof(Link_t4191133801, ___Finger_0)); }
	inline LeanFinger_t3506292858 * get_Finger_0() const { return ___Finger_0; }
	inline LeanFinger_t3506292858 ** get_address_of_Finger_0() { return &___Finger_0; }
	inline void set_Finger_0(LeanFinger_t3506292858 * value)
	{
		___Finger_0 = value;
		Il2CppCodeGenWriteBarrier(&___Finger_0, value);
	}

	inline static int32_t get_offset_of_Line_1() { return static_cast<int32_t>(offsetof(Link_t4191133801, ___Line_1)); }
	inline LineRenderer_t3154350270 * get_Line_1() const { return ___Line_1; }
	inline LineRenderer_t3154350270 ** get_address_of_Line_1() { return &___Line_1; }
	inline void set_Line_1(LineRenderer_t3154350270 * value)
	{
		___Line_1 = value;
		Il2CppCodeGenWriteBarrier(&___Line_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

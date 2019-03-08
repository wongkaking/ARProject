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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSelectableBehaviour
struct  LeanSelectableBehaviour_t3156997792  : public MonoBehaviour_t3962482529
{
public:
	// Lean.Touch.LeanSelectable Lean.Touch.LeanSelectableBehaviour::selectable
	LeanSelectable_t2178850769 * ___selectable_2;

public:
	inline static int32_t get_offset_of_selectable_2() { return static_cast<int32_t>(offsetof(LeanSelectableBehaviour_t3156997792, ___selectable_2)); }
	inline LeanSelectable_t2178850769 * get_selectable_2() const { return ___selectable_2; }
	inline LeanSelectable_t2178850769 ** get_address_of_selectable_2() { return &___selectable_2; }
	inline void set_selectable_2(LeanSelectable_t2178850769 * value)
	{
		___selectable_2 = value;
		Il2CppCodeGenWriteBarrier(&___selectable_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

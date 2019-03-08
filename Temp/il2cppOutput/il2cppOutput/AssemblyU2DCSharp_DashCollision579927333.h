#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// OverlapAmount
struct OverlapAmount_t2149109569;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DashCollision
struct  DashCollision_t579927333  : public MonoBehaviour_t3962482529
{
public:
	// OverlapAmount DashCollision::overlap
	OverlapAmount_t2149109569 * ___overlap_2;

public:
	inline static int32_t get_offset_of_overlap_2() { return static_cast<int32_t>(offsetof(DashCollision_t579927333, ___overlap_2)); }
	inline OverlapAmount_t2149109569 * get_overlap_2() const { return ___overlap_2; }
	inline OverlapAmount_t2149109569 ** get_address_of_overlap_2() { return &___overlap_2; }
	inline void set_overlap_2(OverlapAmount_t2149109569 * value)
	{
		___overlap_2 = value;
		Il2CppCodeGenWriteBarrier(&___overlap_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

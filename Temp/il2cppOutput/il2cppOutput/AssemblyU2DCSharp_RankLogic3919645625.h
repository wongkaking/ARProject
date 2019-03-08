#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.UI.Text
struct Text_t1901882714;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RankLogic
struct  RankLogic_t3919645625  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text RankLogic::rankText
	Text_t1901882714 * ___rankText_2;
	// System.String RankLogic::rank
	String_t* ___rank_3;

public:
	inline static int32_t get_offset_of_rankText_2() { return static_cast<int32_t>(offsetof(RankLogic_t3919645625, ___rankText_2)); }
	inline Text_t1901882714 * get_rankText_2() const { return ___rankText_2; }
	inline Text_t1901882714 ** get_address_of_rankText_2() { return &___rankText_2; }
	inline void set_rankText_2(Text_t1901882714 * value)
	{
		___rankText_2 = value;
		Il2CppCodeGenWriteBarrier(&___rankText_2, value);
	}

	inline static int32_t get_offset_of_rank_3() { return static_cast<int32_t>(offsetof(RankLogic_t3919645625, ___rank_3)); }
	inline String_t* get_rank_3() const { return ___rank_3; }
	inline String_t** get_address_of_rank_3() { return &___rank_3; }
	inline void set_rank_3(String_t* value)
	{
		___rank_3 = value;
		Il2CppCodeGenWriteBarrier(&___rank_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

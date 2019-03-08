#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.Animator
struct Animator_t434523843;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayAni
struct  PlayAni_t2191700255  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animator PlayAni::myAni
	Animator_t434523843 * ___myAni_2;

public:
	inline static int32_t get_offset_of_myAni_2() { return static_cast<int32_t>(offsetof(PlayAni_t2191700255, ___myAni_2)); }
	inline Animator_t434523843 * get_myAni_2() const { return ___myAni_2; }
	inline Animator_t434523843 ** get_address_of_myAni_2() { return &___myAni_2; }
	inline void set_myAni_2(Animator_t434523843 * value)
	{
		___myAni_2 = value;
		Il2CppCodeGenWriteBarrier(&___myAni_2, value);
	}
};

struct PlayAni_t2191700255_StaticFields
{
public:
	// System.Boolean PlayAni::isFirst
	bool ___isFirst_3;
	// System.Int32 PlayAni::i
	int32_t ___i_4;

public:
	inline static int32_t get_offset_of_isFirst_3() { return static_cast<int32_t>(offsetof(PlayAni_t2191700255_StaticFields, ___isFirst_3)); }
	inline bool get_isFirst_3() const { return ___isFirst_3; }
	inline bool* get_address_of_isFirst_3() { return &___isFirst_3; }
	inline void set_isFirst_3(bool value)
	{
		___isFirst_3 = value;
	}

	inline static int32_t get_offset_of_i_4() { return static_cast<int32_t>(offsetof(PlayAni_t2191700255_StaticFields, ___i_4)); }
	inline int32_t get_i_4() const { return ___i_4; }
	inline int32_t* get_address_of_i_4() { return &___i_4; }
	inline void set_i_4(int32_t value)
	{
		___i_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Vuforia_UnityExtensions_Vuforia_TextTracker3950053289.h"

// Vuforia.WordList
struct WordList_t3693642253;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TextTrackerImpl
struct  TextTrackerImpl_t1410587152  : public TextTracker_t3950053289
{
public:
	// Vuforia.WordList Vuforia.TextTrackerImpl::mWordList
	WordList_t3693642253 * ___mWordList_1;

public:
	inline static int32_t get_offset_of_mWordList_1() { return static_cast<int32_t>(offsetof(TextTrackerImpl_t1410587152, ___mWordList_1)); }
	inline WordList_t3693642253 * get_mWordList_1() const { return ___mWordList_1; }
	inline WordList_t3693642253 ** get_address_of_mWordList_1() { return &___mWordList_1; }
	inline void set_mWordList_1(WordList_t3693642253 * value)
	{
		___mWordList_1 = value;
		Il2CppCodeGenWriteBarrier(&___mWordList_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

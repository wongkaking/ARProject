#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "UnityEngine_UnityEngine_Space654135784.h"

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanPath
struct  LeanPath_t2076103442  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Lean.Touch.LeanPath::Points
	List_1_t899420910 * ___Points_2;
	// System.Boolean Lean.Touch.LeanPath::Loop
	bool ___Loop_3;
	// UnityEngine.Space Lean.Touch.LeanPath::Space
	int32_t ___Space_4;
	// System.Int32 Lean.Touch.LeanPath::Smoothing
	int32_t ___Smoothing_5;

public:
	inline static int32_t get_offset_of_Points_2() { return static_cast<int32_t>(offsetof(LeanPath_t2076103442, ___Points_2)); }
	inline List_1_t899420910 * get_Points_2() const { return ___Points_2; }
	inline List_1_t899420910 ** get_address_of_Points_2() { return &___Points_2; }
	inline void set_Points_2(List_1_t899420910 * value)
	{
		___Points_2 = value;
		Il2CppCodeGenWriteBarrier(&___Points_2, value);
	}

	inline static int32_t get_offset_of_Loop_3() { return static_cast<int32_t>(offsetof(LeanPath_t2076103442, ___Loop_3)); }
	inline bool get_Loop_3() const { return ___Loop_3; }
	inline bool* get_address_of_Loop_3() { return &___Loop_3; }
	inline void set_Loop_3(bool value)
	{
		___Loop_3 = value;
	}

	inline static int32_t get_offset_of_Space_4() { return static_cast<int32_t>(offsetof(LeanPath_t2076103442, ___Space_4)); }
	inline int32_t get_Space_4() const { return ___Space_4; }
	inline int32_t* get_address_of_Space_4() { return &___Space_4; }
	inline void set_Space_4(int32_t value)
	{
		___Space_4 = value;
	}

	inline static int32_t get_offset_of_Smoothing_5() { return static_cast<int32_t>(offsetof(LeanPath_t2076103442, ___Smoothing_5)); }
	inline int32_t get_Smoothing_5() const { return ___Smoothing_5; }
	inline int32_t* get_address_of_Smoothing_5() { return &___Smoothing_5; }
	inline void set_Smoothing_5(int32_t value)
	{
		___Smoothing_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

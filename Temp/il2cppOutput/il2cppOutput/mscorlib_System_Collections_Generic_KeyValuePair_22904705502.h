#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"

// UnityEngine.Camera
struct Camera_t4157153871;
// Vuforia.VideoBackgroundAbstractBehaviour
struct VideoBackgroundAbstractBehaviour_t293578642;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Camera,Vuforia.VideoBackgroundAbstractBehaviour>
struct  KeyValuePair_2_t2904705502 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Camera_t4157153871 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	VideoBackgroundAbstractBehaviour_t293578642 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2904705502, ___key_0)); }
	inline Camera_t4157153871 * get_key_0() const { return ___key_0; }
	inline Camera_t4157153871 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Camera_t4157153871 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2904705502, ___value_1)); }
	inline VideoBackgroundAbstractBehaviour_t293578642 * get_value_1() const { return ___value_1; }
	inline VideoBackgroundAbstractBehaviour_t293578642 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(VideoBackgroundAbstractBehaviour_t293578642 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

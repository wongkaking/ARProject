#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManager_Tra4227350457.h"
#include "Vuforia_UnityExtensions_Vuforia_HoloLensExtendedTr1612729179.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseInfo>
struct  KeyValuePair_2_t2989632341 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableIdPair_t4227350457  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PoseInfo_t1612729179  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2989632341, ___key_0)); }
	inline TrackableIdPair_t4227350457  get_key_0() const { return ___key_0; }
	inline TrackableIdPair_t4227350457 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableIdPair_t4227350457  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2989632341, ___value_1)); }
	inline PoseInfo_t1612729179  get_value_1() const { return ___value_1; }
	inline PoseInfo_t1612729179 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PoseInfo_t1612729179  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

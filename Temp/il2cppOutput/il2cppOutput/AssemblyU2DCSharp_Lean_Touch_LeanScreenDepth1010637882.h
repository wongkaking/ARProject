#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "AssemblyU2DCSharp_Lean_Touch_LeanScreenDepth_Convers35213790.h"
#include "UnityEngine_UnityEngine_LayerMask3493934918.h"
#include "UnityEngine_UnityEngine_Object631007953.h"

// UnityEngine.Object
struct Object_t631007953;
struct Object_t631007953_marshaled_com;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanScreenDepth
struct  LeanScreenDepth_t1010637882 
{
public:
	// Lean.Touch.LeanScreenDepth/ConversionType Lean.Touch.LeanScreenDepth::Conversion
	int32_t ___Conversion_0;
	// UnityEngine.Object Lean.Touch.LeanScreenDepth::Object
	Object_t631007953 * ___Object_1;
	// UnityEngine.LayerMask Lean.Touch.LeanScreenDepth::Layers
	LayerMask_t3493934918  ___Layers_2;
	// System.Single Lean.Touch.LeanScreenDepth::Distance
	float ___Distance_3;

public:
	inline static int32_t get_offset_of_Conversion_0() { return static_cast<int32_t>(offsetof(LeanScreenDepth_t1010637882, ___Conversion_0)); }
	inline int32_t get_Conversion_0() const { return ___Conversion_0; }
	inline int32_t* get_address_of_Conversion_0() { return &___Conversion_0; }
	inline void set_Conversion_0(int32_t value)
	{
		___Conversion_0 = value;
	}

	inline static int32_t get_offset_of_Object_1() { return static_cast<int32_t>(offsetof(LeanScreenDepth_t1010637882, ___Object_1)); }
	inline Object_t631007953 * get_Object_1() const { return ___Object_1; }
	inline Object_t631007953 ** get_address_of_Object_1() { return &___Object_1; }
	inline void set_Object_1(Object_t631007953 * value)
	{
		___Object_1 = value;
		Il2CppCodeGenWriteBarrier(&___Object_1, value);
	}

	inline static int32_t get_offset_of_Layers_2() { return static_cast<int32_t>(offsetof(LeanScreenDepth_t1010637882, ___Layers_2)); }
	inline LayerMask_t3493934918  get_Layers_2() const { return ___Layers_2; }
	inline LayerMask_t3493934918 * get_address_of_Layers_2() { return &___Layers_2; }
	inline void set_Layers_2(LayerMask_t3493934918  value)
	{
		___Layers_2 = value;
	}

	inline static int32_t get_offset_of_Distance_3() { return static_cast<int32_t>(offsetof(LeanScreenDepth_t1010637882, ___Distance_3)); }
	inline float get_Distance_3() const { return ___Distance_3; }
	inline float* get_address_of_Distance_3() { return &___Distance_3; }
	inline void set_Distance_3(float value)
	{
		___Distance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Lean.Touch.LeanScreenDepth
struct LeanScreenDepth_t1010637882_marshaled_pinvoke
{
	int32_t ___Conversion_0;
	Object_t631007953_marshaled_pinvoke ___Object_1;
	LayerMask_t3493934918  ___Layers_2;
	float ___Distance_3;
};
// Native definition for COM marshalling of Lean.Touch.LeanScreenDepth
struct LeanScreenDepth_t1010637882_marshaled_com
{
	int32_t ___Conversion_0;
	Object_t631007953_marshaled_com* ___Object_1;
	LayerMask_t3493934918  ___Layers_2;
	float ___Distance_3;
};

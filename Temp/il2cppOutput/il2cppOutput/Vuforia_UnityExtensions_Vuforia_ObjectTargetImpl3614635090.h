#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Vuforia_UnityExtensions_Vuforia_TrackableImpl3595316917.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"

// Vuforia.DataSetImpl
struct DataSetImpl_t2094717509;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTargetImpl
struct  ObjectTargetImpl_t3614635090  : public TrackableImpl_t3595316917
{
public:
	// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::mSize
	Vector3_t3722313464  ___mSize_2;
	// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::mDataSet
	DataSetImpl_t2094717509 * ___mDataSet_3;

public:
	inline static int32_t get_offset_of_mSize_2() { return static_cast<int32_t>(offsetof(ObjectTargetImpl_t3614635090, ___mSize_2)); }
	inline Vector3_t3722313464  get_mSize_2() const { return ___mSize_2; }
	inline Vector3_t3722313464 * get_address_of_mSize_2() { return &___mSize_2; }
	inline void set_mSize_2(Vector3_t3722313464  value)
	{
		___mSize_2 = value;
	}

	inline static int32_t get_offset_of_mDataSet_3() { return static_cast<int32_t>(offsetof(ObjectTargetImpl_t3614635090, ___mDataSet_3)); }
	inline DataSetImpl_t2094717509 * get_mDataSet_3() const { return ___mDataSet_3; }
	inline DataSetImpl_t2094717509 ** get_address_of_mDataSet_3() { return &___mDataSet_3; }
	inline void set_mDataSet_3(DataSetImpl_t2094717509 * value)
	{
		___mDataSet_3 = value;
		Il2CppCodeGenWriteBarrier(&___mDataSet_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

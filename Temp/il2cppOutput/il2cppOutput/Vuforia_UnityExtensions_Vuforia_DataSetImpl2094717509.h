#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Vuforia_UnityExtensions_Vuforia_DataSet3286034874.h"
#include "mscorlib_System_IntPtr840150181.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaUnity_Storag857810839.h"

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>
struct Dictionary_2_t1340713322;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetImpl
struct  DataSetImpl_t2094717509  : public DataSet_t3286034874
{
public:
	// System.IntPtr Vuforia.DataSetImpl::mDataSetPtr
	IntPtr_t ___mDataSetPtr_0;
	// System.String Vuforia.DataSetImpl::mPath
	String_t* ___mPath_1;
	// Vuforia.VuforiaUnity/StorageType Vuforia.DataSetImpl::mStorageType
	int32_t ___mStorageType_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable> Vuforia.DataSetImpl::mTrackablesDict
	Dictionary_2_t1340713322 * ___mTrackablesDict_3;

public:
	inline static int32_t get_offset_of_mDataSetPtr_0() { return static_cast<int32_t>(offsetof(DataSetImpl_t2094717509, ___mDataSetPtr_0)); }
	inline IntPtr_t get_mDataSetPtr_0() const { return ___mDataSetPtr_0; }
	inline IntPtr_t* get_address_of_mDataSetPtr_0() { return &___mDataSetPtr_0; }
	inline void set_mDataSetPtr_0(IntPtr_t value)
	{
		___mDataSetPtr_0 = value;
	}

	inline static int32_t get_offset_of_mPath_1() { return static_cast<int32_t>(offsetof(DataSetImpl_t2094717509, ___mPath_1)); }
	inline String_t* get_mPath_1() const { return ___mPath_1; }
	inline String_t** get_address_of_mPath_1() { return &___mPath_1; }
	inline void set_mPath_1(String_t* value)
	{
		___mPath_1 = value;
		Il2CppCodeGenWriteBarrier(&___mPath_1, value);
	}

	inline static int32_t get_offset_of_mStorageType_2() { return static_cast<int32_t>(offsetof(DataSetImpl_t2094717509, ___mStorageType_2)); }
	inline int32_t get_mStorageType_2() const { return ___mStorageType_2; }
	inline int32_t* get_address_of_mStorageType_2() { return &___mStorageType_2; }
	inline void set_mStorageType_2(int32_t value)
	{
		___mStorageType_2 = value;
	}

	inline static int32_t get_offset_of_mTrackablesDict_3() { return static_cast<int32_t>(offsetof(DataSetImpl_t2094717509, ___mTrackablesDict_3)); }
	inline Dictionary_2_t1340713322 * get_mTrackablesDict_3() const { return ___mTrackablesDict_3; }
	inline Dictionary_2_t1340713322 ** get_address_of_mTrackablesDict_3() { return &___mTrackablesDict_3; }
	inline void set_mTrackablesDict_3(Dictionary_2_t1340713322 * value)
	{
		___mTrackablesDict_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackablesDict_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

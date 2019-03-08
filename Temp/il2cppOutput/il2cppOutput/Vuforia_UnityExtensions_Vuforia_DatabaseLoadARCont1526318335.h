#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Vuforia_UnityExtensions_Vuforia_ARController116632334.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.String[]
struct StringU5BU5D_t1281789340;
// Vuforia.DatabaseLoadARController
struct DatabaseLoadARController_t1526318335;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DatabaseLoadARController
struct  DatabaseLoadARController_t1526318335  : public ARController_t116632334
{
public:
	// System.Boolean Vuforia.DatabaseLoadARController::mDatasetsLoaded
	bool ___mDatasetsLoaded_1;
	// System.Collections.Generic.List`1<System.String> Vuforia.DatabaseLoadARController::mExternalDatasetRoots
	List_1_t3319525431 * ___mExternalDatasetRoots_2;
	// System.String[] Vuforia.DatabaseLoadARController::mDataSetsToLoad
	StringU5BU5D_t1281789340* ___mDataSetsToLoad_3;
	// System.String[] Vuforia.DatabaseLoadARController::mDataSetsToActivate
	StringU5BU5D_t1281789340* ___mDataSetsToActivate_4;

public:
	inline static int32_t get_offset_of_mDatasetsLoaded_1() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t1526318335, ___mDatasetsLoaded_1)); }
	inline bool get_mDatasetsLoaded_1() const { return ___mDatasetsLoaded_1; }
	inline bool* get_address_of_mDatasetsLoaded_1() { return &___mDatasetsLoaded_1; }
	inline void set_mDatasetsLoaded_1(bool value)
	{
		___mDatasetsLoaded_1 = value;
	}

	inline static int32_t get_offset_of_mExternalDatasetRoots_2() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t1526318335, ___mExternalDatasetRoots_2)); }
	inline List_1_t3319525431 * get_mExternalDatasetRoots_2() const { return ___mExternalDatasetRoots_2; }
	inline List_1_t3319525431 ** get_address_of_mExternalDatasetRoots_2() { return &___mExternalDatasetRoots_2; }
	inline void set_mExternalDatasetRoots_2(List_1_t3319525431 * value)
	{
		___mExternalDatasetRoots_2 = value;
		Il2CppCodeGenWriteBarrier(&___mExternalDatasetRoots_2, value);
	}

	inline static int32_t get_offset_of_mDataSetsToLoad_3() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t1526318335, ___mDataSetsToLoad_3)); }
	inline StringU5BU5D_t1281789340* get_mDataSetsToLoad_3() const { return ___mDataSetsToLoad_3; }
	inline StringU5BU5D_t1281789340** get_address_of_mDataSetsToLoad_3() { return &___mDataSetsToLoad_3; }
	inline void set_mDataSetsToLoad_3(StringU5BU5D_t1281789340* value)
	{
		___mDataSetsToLoad_3 = value;
		Il2CppCodeGenWriteBarrier(&___mDataSetsToLoad_3, value);
	}

	inline static int32_t get_offset_of_mDataSetsToActivate_4() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t1526318335, ___mDataSetsToActivate_4)); }
	inline StringU5BU5D_t1281789340* get_mDataSetsToActivate_4() const { return ___mDataSetsToActivate_4; }
	inline StringU5BU5D_t1281789340** get_address_of_mDataSetsToActivate_4() { return &___mDataSetsToActivate_4; }
	inline void set_mDataSetsToActivate_4(StringU5BU5D_t1281789340* value)
	{
		___mDataSetsToActivate_4 = value;
		Il2CppCodeGenWriteBarrier(&___mDataSetsToActivate_4, value);
	}
};

struct DatabaseLoadARController_t1526318335_StaticFields
{
public:
	// Vuforia.DatabaseLoadARController Vuforia.DatabaseLoadARController::mInstance
	DatabaseLoadARController_t1526318335 * ___mInstance_5;
	// System.Object Vuforia.DatabaseLoadARController::mPadlock
	Il2CppObject * ___mPadlock_6;

public:
	inline static int32_t get_offset_of_mInstance_5() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t1526318335_StaticFields, ___mInstance_5)); }
	inline DatabaseLoadARController_t1526318335 * get_mInstance_5() const { return ___mInstance_5; }
	inline DatabaseLoadARController_t1526318335 ** get_address_of_mInstance_5() { return &___mInstance_5; }
	inline void set_mInstance_5(DatabaseLoadARController_t1526318335 * value)
	{
		___mInstance_5 = value;
		Il2CppCodeGenWriteBarrier(&___mInstance_5, value);
	}

	inline static int32_t get_offset_of_mPadlock_6() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t1526318335_StaticFields, ___mPadlock_6)); }
	inline Il2CppObject * get_mPadlock_6() const { return ___mPadlock_6; }
	inline Il2CppObject ** get_address_of_mPadlock_6() { return &___mPadlock_6; }
	inline void set_mPadlock_6(Il2CppObject * value)
	{
		___mPadlock_6 = value;
		Il2CppCodeGenWriteBarrier(&___mPadlock_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

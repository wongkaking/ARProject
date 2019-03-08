#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Vuforia_UnityExtensions_Vuforia_TrackerManager1703337244.h"

// Vuforia.ObjectTracker
struct ObjectTracker_t4177997237;
// Vuforia.TextTracker
struct TextTracker_t3950053289;
// Vuforia.SmartTerrainTracker
struct SmartTerrainTracker_t1238706968;
// Vuforia.DeviceTracker
struct DeviceTracker_t2315692373;
// Vuforia.StateManager
struct StateManager_t1982749557;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerManagerImpl
struct  TrackerManagerImpl_t3998245004  : public TrackerManager_t1703337244
{
public:
	// Vuforia.ObjectTracker Vuforia.TrackerManagerImpl::mObjectTracker
	ObjectTracker_t4177997237 * ___mObjectTracker_1;
	// Vuforia.TextTracker Vuforia.TrackerManagerImpl::mTextTracker
	TextTracker_t3950053289 * ___mTextTracker_2;
	// Vuforia.SmartTerrainTracker Vuforia.TrackerManagerImpl::mSmartTerrainTracker
	SmartTerrainTracker_t1238706968 * ___mSmartTerrainTracker_3;
	// Vuforia.DeviceTracker Vuforia.TrackerManagerImpl::mDeviceTracker
	DeviceTracker_t2315692373 * ___mDeviceTracker_4;
	// Vuforia.StateManager Vuforia.TrackerManagerImpl::mStateManager
	StateManager_t1982749557 * ___mStateManager_5;

public:
	inline static int32_t get_offset_of_mObjectTracker_1() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t3998245004, ___mObjectTracker_1)); }
	inline ObjectTracker_t4177997237 * get_mObjectTracker_1() const { return ___mObjectTracker_1; }
	inline ObjectTracker_t4177997237 ** get_address_of_mObjectTracker_1() { return &___mObjectTracker_1; }
	inline void set_mObjectTracker_1(ObjectTracker_t4177997237 * value)
	{
		___mObjectTracker_1 = value;
		Il2CppCodeGenWriteBarrier(&___mObjectTracker_1, value);
	}

	inline static int32_t get_offset_of_mTextTracker_2() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t3998245004, ___mTextTracker_2)); }
	inline TextTracker_t3950053289 * get_mTextTracker_2() const { return ___mTextTracker_2; }
	inline TextTracker_t3950053289 ** get_address_of_mTextTracker_2() { return &___mTextTracker_2; }
	inline void set_mTextTracker_2(TextTracker_t3950053289 * value)
	{
		___mTextTracker_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTextTracker_2, value);
	}

	inline static int32_t get_offset_of_mSmartTerrainTracker_3() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t3998245004, ___mSmartTerrainTracker_3)); }
	inline SmartTerrainTracker_t1238706968 * get_mSmartTerrainTracker_3() const { return ___mSmartTerrainTracker_3; }
	inline SmartTerrainTracker_t1238706968 ** get_address_of_mSmartTerrainTracker_3() { return &___mSmartTerrainTracker_3; }
	inline void set_mSmartTerrainTracker_3(SmartTerrainTracker_t1238706968 * value)
	{
		___mSmartTerrainTracker_3 = value;
		Il2CppCodeGenWriteBarrier(&___mSmartTerrainTracker_3, value);
	}

	inline static int32_t get_offset_of_mDeviceTracker_4() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t3998245004, ___mDeviceTracker_4)); }
	inline DeviceTracker_t2315692373 * get_mDeviceTracker_4() const { return ___mDeviceTracker_4; }
	inline DeviceTracker_t2315692373 ** get_address_of_mDeviceTracker_4() { return &___mDeviceTracker_4; }
	inline void set_mDeviceTracker_4(DeviceTracker_t2315692373 * value)
	{
		___mDeviceTracker_4 = value;
		Il2CppCodeGenWriteBarrier(&___mDeviceTracker_4, value);
	}

	inline static int32_t get_offset_of_mStateManager_5() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t3998245004, ___mStateManager_5)); }
	inline StateManager_t1982749557 * get_mStateManager_5() const { return ___mStateManager_5; }
	inline StateManager_t1982749557 ** get_address_of_mStateManager_5() { return &___mStateManager_5; }
	inline void set_mStateManager_5(StateManager_t1982749557 * value)
	{
		___mStateManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___mStateManager_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

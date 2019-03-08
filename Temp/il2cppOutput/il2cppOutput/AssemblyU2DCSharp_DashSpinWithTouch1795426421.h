#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"

// UnityEngine.Transform
struct Transform_t3600365921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DashSpinWithTouch
struct  DashSpinWithTouch_t1795426421  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Transform DashSpinWithTouch::spin
	Transform_t3600365921 * ___spin_2;
	// UnityEngine.Vector3 DashSpinWithTouch::<TouchPos>k__BackingField
	Vector3_t3722313464  ___U3CTouchPosU3Ek__BackingField_3;
	// System.Boolean DashSpinWithTouch::<TouchOver>k__BackingField
	bool ___U3CTouchOverU3Ek__BackingField_4;
	// System.Boolean DashSpinWithTouch::view
	bool ___view_5;

public:
	inline static int32_t get_offset_of_spin_2() { return static_cast<int32_t>(offsetof(DashSpinWithTouch_t1795426421, ___spin_2)); }
	inline Transform_t3600365921 * get_spin_2() const { return ___spin_2; }
	inline Transform_t3600365921 ** get_address_of_spin_2() { return &___spin_2; }
	inline void set_spin_2(Transform_t3600365921 * value)
	{
		___spin_2 = value;
		Il2CppCodeGenWriteBarrier(&___spin_2, value);
	}

	inline static int32_t get_offset_of_U3CTouchPosU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DashSpinWithTouch_t1795426421, ___U3CTouchPosU3Ek__BackingField_3)); }
	inline Vector3_t3722313464  get_U3CTouchPosU3Ek__BackingField_3() const { return ___U3CTouchPosU3Ek__BackingField_3; }
	inline Vector3_t3722313464 * get_address_of_U3CTouchPosU3Ek__BackingField_3() { return &___U3CTouchPosU3Ek__BackingField_3; }
	inline void set_U3CTouchPosU3Ek__BackingField_3(Vector3_t3722313464  value)
	{
		___U3CTouchPosU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTouchOverU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DashSpinWithTouch_t1795426421, ___U3CTouchOverU3Ek__BackingField_4)); }
	inline bool get_U3CTouchOverU3Ek__BackingField_4() const { return ___U3CTouchOverU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CTouchOverU3Ek__BackingField_4() { return &___U3CTouchOverU3Ek__BackingField_4; }
	inline void set_U3CTouchOverU3Ek__BackingField_4(bool value)
	{
		___U3CTouchOverU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_view_5() { return static_cast<int32_t>(offsetof(DashSpinWithTouch_t1795426421, ___view_5)); }
	inline bool get_view_5() const { return ___view_5; }
	inline bool* get_address_of_view_5() { return &___view_5; }
	inline void set_view_5(bool value)
	{
		___view_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Vuforia_UnityExtensions_Vuforia_WordResult3640773802.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBo2769728497.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"
#include "UnityEngine_UnityEngine_Quaternion2301928331.h"
#include "Vuforia_UnityExtensions_Vuforia_TrackableBehaviour1100905814.h"

// Vuforia.Word
struct Word_t1116038618;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordResultImpl
struct  WordResultImpl_t709252498  : public WordResult_t3640773802
{
public:
	// Vuforia.OrientedBoundingBox Vuforia.WordResultImpl::mObb
	OrientedBoundingBox_t2769728497  ___mObb_0;
	// UnityEngine.Vector3 Vuforia.WordResultImpl::mPosition
	Vector3_t3722313464  ___mPosition_1;
	// UnityEngine.Quaternion Vuforia.WordResultImpl::mOrientation
	Quaternion_t2301928331  ___mOrientation_2;
	// Vuforia.Word Vuforia.WordResultImpl::mWord
	Il2CppObject * ___mWord_3;
	// Vuforia.TrackableBehaviour/Status Vuforia.WordResultImpl::mStatus
	int32_t ___mStatus_4;

public:
	inline static int32_t get_offset_of_mObb_0() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mObb_0)); }
	inline OrientedBoundingBox_t2769728497  get_mObb_0() const { return ___mObb_0; }
	inline OrientedBoundingBox_t2769728497 * get_address_of_mObb_0() { return &___mObb_0; }
	inline void set_mObb_0(OrientedBoundingBox_t2769728497  value)
	{
		___mObb_0 = value;
	}

	inline static int32_t get_offset_of_mPosition_1() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mPosition_1)); }
	inline Vector3_t3722313464  get_mPosition_1() const { return ___mPosition_1; }
	inline Vector3_t3722313464 * get_address_of_mPosition_1() { return &___mPosition_1; }
	inline void set_mPosition_1(Vector3_t3722313464  value)
	{
		___mPosition_1 = value;
	}

	inline static int32_t get_offset_of_mOrientation_2() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mOrientation_2)); }
	inline Quaternion_t2301928331  get_mOrientation_2() const { return ___mOrientation_2; }
	inline Quaternion_t2301928331 * get_address_of_mOrientation_2() { return &___mOrientation_2; }
	inline void set_mOrientation_2(Quaternion_t2301928331  value)
	{
		___mOrientation_2 = value;
	}

	inline static int32_t get_offset_of_mWord_3() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mWord_3)); }
	inline Il2CppObject * get_mWord_3() const { return ___mWord_3; }
	inline Il2CppObject ** get_address_of_mWord_3() { return &___mWord_3; }
	inline void set_mWord_3(Il2CppObject * value)
	{
		___mWord_3 = value;
		Il2CppCodeGenWriteBarrier(&___mWord_3, value);
	}

	inline static int32_t get_offset_of_mStatus_4() { return static_cast<int32_t>(offsetof(WordResultImpl_t709252498, ___mStatus_4)); }
	inline int32_t get_mStatus_4() const { return ___mStatus_4; }
	inline int32_t* get_address_of_mStatus_4() { return &___mStatus_4; }
	inline void set_mStatus_4(int32_t value)
	{
		___mStatus_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

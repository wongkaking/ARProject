#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// System.String
struct String_t;
// SpinWithTouch
struct SpinWithTouch_t2263607769;
// OverlapAmount
struct OverlapAmount_t2149109569;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CheckOverlap
struct  CheckOverlap_t1318907736  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 CheckOverlap::targetAmount
	int32_t ___targetAmount_2;
	// System.Boolean CheckOverlap::view
	bool ___view_3;
	// System.Boolean CheckOverlap::<Trigger>k__BackingField
	bool ___U3CTriggerU3Ek__BackingField_4;
	// System.String CheckOverlap::<TempName>k__BackingField
	String_t* ___U3CTempNameU3Ek__BackingField_5;
	// SpinWithTouch CheckOverlap::spin
	SpinWithTouch_t2263607769 * ___spin_6;
	// System.String CheckOverlap::<SelfName>k__BackingField
	String_t* ___U3CSelfNameU3Ek__BackingField_7;
	// OverlapAmount CheckOverlap::overlap
	OverlapAmount_t2149109569 * ___overlap_8;

public:
	inline static int32_t get_offset_of_targetAmount_2() { return static_cast<int32_t>(offsetof(CheckOverlap_t1318907736, ___targetAmount_2)); }
	inline int32_t get_targetAmount_2() const { return ___targetAmount_2; }
	inline int32_t* get_address_of_targetAmount_2() { return &___targetAmount_2; }
	inline void set_targetAmount_2(int32_t value)
	{
		___targetAmount_2 = value;
	}

	inline static int32_t get_offset_of_view_3() { return static_cast<int32_t>(offsetof(CheckOverlap_t1318907736, ___view_3)); }
	inline bool get_view_3() const { return ___view_3; }
	inline bool* get_address_of_view_3() { return &___view_3; }
	inline void set_view_3(bool value)
	{
		___view_3 = value;
	}

	inline static int32_t get_offset_of_U3CTriggerU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CheckOverlap_t1318907736, ___U3CTriggerU3Ek__BackingField_4)); }
	inline bool get_U3CTriggerU3Ek__BackingField_4() const { return ___U3CTriggerU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CTriggerU3Ek__BackingField_4() { return &___U3CTriggerU3Ek__BackingField_4; }
	inline void set_U3CTriggerU3Ek__BackingField_4(bool value)
	{
		___U3CTriggerU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CTempNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CheckOverlap_t1318907736, ___U3CTempNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CTempNameU3Ek__BackingField_5() const { return ___U3CTempNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CTempNameU3Ek__BackingField_5() { return &___U3CTempNameU3Ek__BackingField_5; }
	inline void set_U3CTempNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CTempNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTempNameU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_spin_6() { return static_cast<int32_t>(offsetof(CheckOverlap_t1318907736, ___spin_6)); }
	inline SpinWithTouch_t2263607769 * get_spin_6() const { return ___spin_6; }
	inline SpinWithTouch_t2263607769 ** get_address_of_spin_6() { return &___spin_6; }
	inline void set_spin_6(SpinWithTouch_t2263607769 * value)
	{
		___spin_6 = value;
		Il2CppCodeGenWriteBarrier(&___spin_6, value);
	}

	inline static int32_t get_offset_of_U3CSelfNameU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CheckOverlap_t1318907736, ___U3CSelfNameU3Ek__BackingField_7)); }
	inline String_t* get_U3CSelfNameU3Ek__BackingField_7() const { return ___U3CSelfNameU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CSelfNameU3Ek__BackingField_7() { return &___U3CSelfNameU3Ek__BackingField_7; }
	inline void set_U3CSelfNameU3Ek__BackingField_7(String_t* value)
	{
		___U3CSelfNameU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSelfNameU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_overlap_8() { return static_cast<int32_t>(offsetof(CheckOverlap_t1318907736, ___overlap_8)); }
	inline OverlapAmount_t2149109569 * get_overlap_8() const { return ___overlap_8; }
	inline OverlapAmount_t2149109569 ** get_address_of_overlap_8() { return &___overlap_8; }
	inline void set_overlap_8(OverlapAmount_t2149109569 * value)
	{
		___overlap_8 = value;
		Il2CppCodeGenWriteBarrier(&___overlap_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// OverlapAmount
struct OverlapAmount_t2149109569;
// SpinWithTouch
struct SpinWithTouch_t2263607769;
// ExtraGameLogic
struct ExtraGameLogic_t1116677990;
// UnityEngine.UI.Slider
struct Slider_t3903728902;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CheckCollision
struct  CheckCollision_t345719758  : public MonoBehaviour_t3962482529
{
public:
	// OverlapAmount CheckCollision::overlap
	OverlapAmount_t2149109569 * ___overlap_2;
	// SpinWithTouch CheckCollision::spin
	SpinWithTouch_t2263607769 * ___spin_3;
	// ExtraGameLogic CheckCollision::logic
	ExtraGameLogic_t1116677990 * ___logic_4;
	// UnityEngine.UI.Slider CheckCollision::slider
	Slider_t3903728902 * ___slider_5;
	// System.Boolean CheckCollision::<Trigger>k__BackingField
	bool ___U3CTriggerU3Ek__BackingField_6;
	// System.String CheckCollision::<SelfName>k__BackingField
	String_t* ___U3CSelfNameU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_overlap_2() { return static_cast<int32_t>(offsetof(CheckCollision_t345719758, ___overlap_2)); }
	inline OverlapAmount_t2149109569 * get_overlap_2() const { return ___overlap_2; }
	inline OverlapAmount_t2149109569 ** get_address_of_overlap_2() { return &___overlap_2; }
	inline void set_overlap_2(OverlapAmount_t2149109569 * value)
	{
		___overlap_2 = value;
		Il2CppCodeGenWriteBarrier(&___overlap_2, value);
	}

	inline static int32_t get_offset_of_spin_3() { return static_cast<int32_t>(offsetof(CheckCollision_t345719758, ___spin_3)); }
	inline SpinWithTouch_t2263607769 * get_spin_3() const { return ___spin_3; }
	inline SpinWithTouch_t2263607769 ** get_address_of_spin_3() { return &___spin_3; }
	inline void set_spin_3(SpinWithTouch_t2263607769 * value)
	{
		___spin_3 = value;
		Il2CppCodeGenWriteBarrier(&___spin_3, value);
	}

	inline static int32_t get_offset_of_logic_4() { return static_cast<int32_t>(offsetof(CheckCollision_t345719758, ___logic_4)); }
	inline ExtraGameLogic_t1116677990 * get_logic_4() const { return ___logic_4; }
	inline ExtraGameLogic_t1116677990 ** get_address_of_logic_4() { return &___logic_4; }
	inline void set_logic_4(ExtraGameLogic_t1116677990 * value)
	{
		___logic_4 = value;
		Il2CppCodeGenWriteBarrier(&___logic_4, value);
	}

	inline static int32_t get_offset_of_slider_5() { return static_cast<int32_t>(offsetof(CheckCollision_t345719758, ___slider_5)); }
	inline Slider_t3903728902 * get_slider_5() const { return ___slider_5; }
	inline Slider_t3903728902 ** get_address_of_slider_5() { return &___slider_5; }
	inline void set_slider_5(Slider_t3903728902 * value)
	{
		___slider_5 = value;
		Il2CppCodeGenWriteBarrier(&___slider_5, value);
	}

	inline static int32_t get_offset_of_U3CTriggerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CheckCollision_t345719758, ___U3CTriggerU3Ek__BackingField_6)); }
	inline bool get_U3CTriggerU3Ek__BackingField_6() const { return ___U3CTriggerU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CTriggerU3Ek__BackingField_6() { return &___U3CTriggerU3Ek__BackingField_6; }
	inline void set_U3CTriggerU3Ek__BackingField_6(bool value)
	{
		___U3CTriggerU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CSelfNameU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CheckCollision_t345719758, ___U3CSelfNameU3Ek__BackingField_7)); }
	inline String_t* get_U3CSelfNameU3Ek__BackingField_7() const { return ___U3CSelfNameU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CSelfNameU3Ek__BackingField_7() { return &___U3CSelfNameU3Ek__BackingField_7; }
	inline void set_U3CSelfNameU3Ek__BackingField_7(String_t* value)
	{
		___U3CSelfNameU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSelfNameU3Ek__BackingField_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

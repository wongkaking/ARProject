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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BombCollision
struct  BombCollision_t3856988916  : public MonoBehaviour_t3962482529
{
public:
	// OverlapAmount BombCollision::overlap
	OverlapAmount_t2149109569 * ___overlap_2;
	// SpinWithTouch BombCollision::spin
	SpinWithTouch_t2263607769 * ___spin_3;
	// ExtraGameLogic BombCollision::logic
	ExtraGameLogic_t1116677990 * ___logic_4;
	// UnityEngine.UI.Slider BombCollision::slider
	Slider_t3903728902 * ___slider_5;

public:
	inline static int32_t get_offset_of_overlap_2() { return static_cast<int32_t>(offsetof(BombCollision_t3856988916, ___overlap_2)); }
	inline OverlapAmount_t2149109569 * get_overlap_2() const { return ___overlap_2; }
	inline OverlapAmount_t2149109569 ** get_address_of_overlap_2() { return &___overlap_2; }
	inline void set_overlap_2(OverlapAmount_t2149109569 * value)
	{
		___overlap_2 = value;
		Il2CppCodeGenWriteBarrier(&___overlap_2, value);
	}

	inline static int32_t get_offset_of_spin_3() { return static_cast<int32_t>(offsetof(BombCollision_t3856988916, ___spin_3)); }
	inline SpinWithTouch_t2263607769 * get_spin_3() const { return ___spin_3; }
	inline SpinWithTouch_t2263607769 ** get_address_of_spin_3() { return &___spin_3; }
	inline void set_spin_3(SpinWithTouch_t2263607769 * value)
	{
		___spin_3 = value;
		Il2CppCodeGenWriteBarrier(&___spin_3, value);
	}

	inline static int32_t get_offset_of_logic_4() { return static_cast<int32_t>(offsetof(BombCollision_t3856988916, ___logic_4)); }
	inline ExtraGameLogic_t1116677990 * get_logic_4() const { return ___logic_4; }
	inline ExtraGameLogic_t1116677990 ** get_address_of_logic_4() { return &___logic_4; }
	inline void set_logic_4(ExtraGameLogic_t1116677990 * value)
	{
		___logic_4 = value;
		Il2CppCodeGenWriteBarrier(&___logic_4, value);
	}

	inline static int32_t get_offset_of_slider_5() { return static_cast<int32_t>(offsetof(BombCollision_t3856988916, ___slider_5)); }
	inline Slider_t3903728902 * get_slider_5() const { return ___slider_5; }
	inline Slider_t3903728902 ** get_address_of_slider_5() { return &___slider_5; }
	inline void set_slider_5(Slider_t3903728902 * value)
	{
		___slider_5 = value;
		Il2CppCodeGenWriteBarrier(&___slider_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

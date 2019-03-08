#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "UnityEngine_UnityEngine_Vector22156229523.h"

// System.Collections.Generic.List`1<Lean.Touch.LeanSnapshot>
struct List_1_t1313621403;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanFinger
struct  LeanFinger_t3506292858  : public Il2CppObject
{
public:
	// System.Int32 Lean.Touch.LeanFinger::Index
	int32_t ___Index_0;
	// System.Single Lean.Touch.LeanFinger::Age
	float ___Age_1;
	// System.Boolean Lean.Touch.LeanFinger::Set
	bool ___Set_2;
	// System.Boolean Lean.Touch.LeanFinger::LastSet
	bool ___LastSet_3;
	// System.Boolean Lean.Touch.LeanFinger::Tap
	bool ___Tap_4;
	// System.Int32 Lean.Touch.LeanFinger::TapCount
	int32_t ___TapCount_5;
	// System.Boolean Lean.Touch.LeanFinger::Swipe
	bool ___Swipe_6;
	// System.Single Lean.Touch.LeanFinger::LastPressure
	float ___LastPressure_7;
	// System.Single Lean.Touch.LeanFinger::Pressure
	float ___Pressure_8;
	// UnityEngine.Vector2 Lean.Touch.LeanFinger::StartScreenPosition
	Vector2_t2156229523  ___StartScreenPosition_9;
	// UnityEngine.Vector2 Lean.Touch.LeanFinger::LastScreenPosition
	Vector2_t2156229523  ___LastScreenPosition_10;
	// UnityEngine.Vector2 Lean.Touch.LeanFinger::ScreenPosition
	Vector2_t2156229523  ___ScreenPosition_11;
	// System.Boolean Lean.Touch.LeanFinger::StartedOverGui
	bool ___StartedOverGui_12;
	// System.Collections.Generic.List`1<Lean.Touch.LeanSnapshot> Lean.Touch.LeanFinger::Snapshots
	List_1_t1313621403 * ___Snapshots_13;

public:
	inline static int32_t get_offset_of_Index_0() { return static_cast<int32_t>(offsetof(LeanFinger_t3506292858, ___Index_0)); }
	inline int32_t get_Index_0() const { return ___Index_0; }
	inline int32_t* get_address_of_Index_0() { return &___Index_0; }
	inline void set_Index_0(int32_t value)
	{
		___Index_0 = value;
	}

	inline static int32_t get_offset_of_Age_1() { return static_cast<int32_t>(offsetof(LeanFinger_t3506292858, ___Age_1)); }
	inline float get_Age_1() const { return ___Age_1; }
	inline float* get_address_of_Age_1() { return &___Age_1; }
	inline void set_Age_1(float value)
	{
		___Age_1 = value;
	}

	inline static int32_t get_offset_of_Set_2() { return static_cast<int32_t>(offsetof(LeanFinger_t3506292858, ___Set_2)); }
	inline bool get_Set_2() const { return ___Set_2; }
	inline bool* get_address_of_Set_2() { return &___Set_2; }
	inline void set_Set_2(bool value)
	{
		___Set_2 = value;
	}

	inline static int32_t get_offset_of_LastSet_3() { return static_cast<int32_t>(offsetof(LeanFinger_t3506292858, ___LastSet_3)); }
	inline bool get_LastSet_3() const { return ___LastSet_3; }
	inline bool* get_address_of_LastSet_3() { return &___LastSet_3; }
	inline void set_LastSet_3(bool value)
	{
		___LastSet_3 = value;
	}

	inline static int32_t get_offset_of_Tap_4() { return static_cast<int32_t>(offsetof(LeanFinger_t3506292858, ___Tap_4)); }
	inline bool get_Tap_4() const { return ___Tap_4; }
	inline bool* get_address_of_Tap_4() { return &___Tap_4; }
	inline void set_Tap_4(bool value)
	{
		___Tap_4 = value;
	}

	inline static int32_t get_offset_of_TapCount_5() { return static_cast<int32_t>(offsetof(LeanFinger_t3506292858, ___TapCount_5)); }
	inline int32_t get_TapCount_5() const { return ___TapCount_5; }
	inline int32_t* get_address_of_TapCount_5() { return &___TapCount_5; }
	inline void set_TapCount_5(int32_t value)
	{
		___TapCount_5 = value;
	}

	inline static int32_t get_offset_of_Swipe_6() { return static_cast<int32_t>(offsetof(LeanFinger_t3506292858, ___Swipe_6)); }
	inline bool get_Swipe_6() const { return ___Swipe_6; }
	inline bool* get_address_of_Swipe_6() { return &___Swipe_6; }
	inline void set_Swipe_6(bool value)
	{
		___Swipe_6 = value;
	}

	inline static int32_t get_offset_of_LastPressure_7() { return static_cast<int32_t>(offsetof(LeanFinger_t3506292858, ___LastPressure_7)); }
	inline float get_LastPressure_7() const { return ___LastPressure_7; }
	inline float* get_address_of_LastPressure_7() { return &___LastPressure_7; }
	inline void set_LastPressure_7(float value)
	{
		___LastPressure_7 = value;
	}

	inline static int32_t get_offset_of_Pressure_8() { return static_cast<int32_t>(offsetof(LeanFinger_t3506292858, ___Pressure_8)); }
	inline float get_Pressure_8() const { return ___Pressure_8; }
	inline float* get_address_of_Pressure_8() { return &___Pressure_8; }
	inline void set_Pressure_8(float value)
	{
		___Pressure_8 = value;
	}

	inline static int32_t get_offset_of_StartScreenPosition_9() { return static_cast<int32_t>(offsetof(LeanFinger_t3506292858, ___StartScreenPosition_9)); }
	inline Vector2_t2156229523  get_StartScreenPosition_9() const { return ___StartScreenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_StartScreenPosition_9() { return &___StartScreenPosition_9; }
	inline void set_StartScreenPosition_9(Vector2_t2156229523  value)
	{
		___StartScreenPosition_9 = value;
	}

	inline static int32_t get_offset_of_LastScreenPosition_10() { return static_cast<int32_t>(offsetof(LeanFinger_t3506292858, ___LastScreenPosition_10)); }
	inline Vector2_t2156229523  get_LastScreenPosition_10() const { return ___LastScreenPosition_10; }
	inline Vector2_t2156229523 * get_address_of_LastScreenPosition_10() { return &___LastScreenPosition_10; }
	inline void set_LastScreenPosition_10(Vector2_t2156229523  value)
	{
		___LastScreenPosition_10 = value;
	}

	inline static int32_t get_offset_of_ScreenPosition_11() { return static_cast<int32_t>(offsetof(LeanFinger_t3506292858, ___ScreenPosition_11)); }
	inline Vector2_t2156229523  get_ScreenPosition_11() const { return ___ScreenPosition_11; }
	inline Vector2_t2156229523 * get_address_of_ScreenPosition_11() { return &___ScreenPosition_11; }
	inline void set_ScreenPosition_11(Vector2_t2156229523  value)
	{
		___ScreenPosition_11 = value;
	}

	inline static int32_t get_offset_of_StartedOverGui_12() { return static_cast<int32_t>(offsetof(LeanFinger_t3506292858, ___StartedOverGui_12)); }
	inline bool get_StartedOverGui_12() const { return ___StartedOverGui_12; }
	inline bool* get_address_of_StartedOverGui_12() { return &___StartedOverGui_12; }
	inline void set_StartedOverGui_12(bool value)
	{
		___StartedOverGui_12 = value;
	}

	inline static int32_t get_offset_of_Snapshots_13() { return static_cast<int32_t>(offsetof(LeanFinger_t3506292858, ___Snapshots_13)); }
	inline List_1_t1313621403 * get_Snapshots_13() const { return ___Snapshots_13; }
	inline List_1_t1313621403 ** get_address_of_Snapshots_13() { return &___Snapshots_13; }
	inline void set_Snapshots_13(List_1_t1313621403 * value)
	{
		___Snapshots_13 = value;
		Il2CppCodeGenWriteBarrier(&___Snapshots_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

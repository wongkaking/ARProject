#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "AssemblyU2DCSharp_Lean_Touch_LeanSelect_SelectType3826004921.h"
#include "UnityEngine_UnityEngine_LayerMask3493934918.h"
#include "AssemblyU2DCSharp_Lean_Touch_LeanSelect_SearchType1066087934.h"
#include "AssemblyU2DCSharp_Lean_Touch_LeanSelect_ReselectTyp452019290.h"

// System.Collections.Generic.List`1<Lean.Touch.LeanSelect>
struct List_1_t2940978232;
// UnityEngine.Camera
struct Camera_t4157153871;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSelect
struct  LeanSelect_t1468903490  : public MonoBehaviour_t3962482529
{
public:
	// Lean.Touch.LeanSelect/SelectType Lean.Touch.LeanSelect::SelectUsing
	int32_t ___SelectUsing_3;
	// UnityEngine.LayerMask Lean.Touch.LeanSelect::LayerMask
	LayerMask_t3493934918  ___LayerMask_4;
	// UnityEngine.Camera Lean.Touch.LeanSelect::Camera
	Camera_t4157153871 * ___Camera_5;
	// System.Int32 Lean.Touch.LeanSelect::MaxSelectables
	int32_t ___MaxSelectables_6;
	// Lean.Touch.LeanSelect/SearchType Lean.Touch.LeanSelect::Search
	int32_t ___Search_7;
	// Lean.Touch.LeanSelect/ReselectType Lean.Touch.LeanSelect::Reselect
	int32_t ___Reselect_8;
	// System.Boolean Lean.Touch.LeanSelect::AutoDeselect
	bool ___AutoDeselect_9;

public:
	inline static int32_t get_offset_of_SelectUsing_3() { return static_cast<int32_t>(offsetof(LeanSelect_t1468903490, ___SelectUsing_3)); }
	inline int32_t get_SelectUsing_3() const { return ___SelectUsing_3; }
	inline int32_t* get_address_of_SelectUsing_3() { return &___SelectUsing_3; }
	inline void set_SelectUsing_3(int32_t value)
	{
		___SelectUsing_3 = value;
	}

	inline static int32_t get_offset_of_LayerMask_4() { return static_cast<int32_t>(offsetof(LeanSelect_t1468903490, ___LayerMask_4)); }
	inline LayerMask_t3493934918  get_LayerMask_4() const { return ___LayerMask_4; }
	inline LayerMask_t3493934918 * get_address_of_LayerMask_4() { return &___LayerMask_4; }
	inline void set_LayerMask_4(LayerMask_t3493934918  value)
	{
		___LayerMask_4 = value;
	}

	inline static int32_t get_offset_of_Camera_5() { return static_cast<int32_t>(offsetof(LeanSelect_t1468903490, ___Camera_5)); }
	inline Camera_t4157153871 * get_Camera_5() const { return ___Camera_5; }
	inline Camera_t4157153871 ** get_address_of_Camera_5() { return &___Camera_5; }
	inline void set_Camera_5(Camera_t4157153871 * value)
	{
		___Camera_5 = value;
		Il2CppCodeGenWriteBarrier(&___Camera_5, value);
	}

	inline static int32_t get_offset_of_MaxSelectables_6() { return static_cast<int32_t>(offsetof(LeanSelect_t1468903490, ___MaxSelectables_6)); }
	inline int32_t get_MaxSelectables_6() const { return ___MaxSelectables_6; }
	inline int32_t* get_address_of_MaxSelectables_6() { return &___MaxSelectables_6; }
	inline void set_MaxSelectables_6(int32_t value)
	{
		___MaxSelectables_6 = value;
	}

	inline static int32_t get_offset_of_Search_7() { return static_cast<int32_t>(offsetof(LeanSelect_t1468903490, ___Search_7)); }
	inline int32_t get_Search_7() const { return ___Search_7; }
	inline int32_t* get_address_of_Search_7() { return &___Search_7; }
	inline void set_Search_7(int32_t value)
	{
		___Search_7 = value;
	}

	inline static int32_t get_offset_of_Reselect_8() { return static_cast<int32_t>(offsetof(LeanSelect_t1468903490, ___Reselect_8)); }
	inline int32_t get_Reselect_8() const { return ___Reselect_8; }
	inline int32_t* get_address_of_Reselect_8() { return &___Reselect_8; }
	inline void set_Reselect_8(int32_t value)
	{
		___Reselect_8 = value;
	}

	inline static int32_t get_offset_of_AutoDeselect_9() { return static_cast<int32_t>(offsetof(LeanSelect_t1468903490, ___AutoDeselect_9)); }
	inline bool get_AutoDeselect_9() const { return ___AutoDeselect_9; }
	inline bool* get_address_of_AutoDeselect_9() { return &___AutoDeselect_9; }
	inline void set_AutoDeselect_9(bool value)
	{
		___AutoDeselect_9 = value;
	}
};

struct LeanSelect_t1468903490_StaticFields
{
public:
	// System.Collections.Generic.List`1<Lean.Touch.LeanSelect> Lean.Touch.LeanSelect::Instances
	List_1_t2940978232 * ___Instances_2;

public:
	inline static int32_t get_offset_of_Instances_2() { return static_cast<int32_t>(offsetof(LeanSelect_t1468903490_StaticFields, ___Instances_2)); }
	inline List_1_t2940978232 * get_Instances_2() const { return ___Instances_2; }
	inline List_1_t2940978232 ** get_address_of_Instances_2() { return &___Instances_2; }
	inline void set_Instances_2(List_1_t2940978232 * value)
	{
		___Instances_2 = value;
		Il2CppCodeGenWriteBarrier(&___Instances_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

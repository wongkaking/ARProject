﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Lean_Touch_LeanSelectableBehavio3156997792.h"
#include "UnityEngine_UnityEngine_Color2555686324.h"

// UnityEngine.Renderer
struct Renderer_t2627027031;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Lean.Touch.LeanSelectableRendererColor
struct  LeanSelectableRendererColor_t156123418  : public LeanSelectableBehaviour_t3156997792
{
public:
	// System.Boolean Lean.Touch.LeanSelectableRendererColor::AutoGetDefaultColor
	bool ___AutoGetDefaultColor_3;
	// UnityEngine.Color Lean.Touch.LeanSelectableRendererColor::DefaultColor
	Color_t2555686324  ___DefaultColor_4;
	// UnityEngine.Color Lean.Touch.LeanSelectableRendererColor::SelectedColor
	Color_t2555686324  ___SelectedColor_5;
	// System.Boolean Lean.Touch.LeanSelectableRendererColor::CloneMaterials
	bool ___CloneMaterials_6;
	// UnityEngine.Renderer Lean.Touch.LeanSelectableRendererColor::cachedRenderer
	Renderer_t2627027031 * ___cachedRenderer_7;

public:
	inline static int32_t get_offset_of_AutoGetDefaultColor_3() { return static_cast<int32_t>(offsetof(LeanSelectableRendererColor_t156123418, ___AutoGetDefaultColor_3)); }
	inline bool get_AutoGetDefaultColor_3() const { return ___AutoGetDefaultColor_3; }
	inline bool* get_address_of_AutoGetDefaultColor_3() { return &___AutoGetDefaultColor_3; }
	inline void set_AutoGetDefaultColor_3(bool value)
	{
		___AutoGetDefaultColor_3 = value;
	}

	inline static int32_t get_offset_of_DefaultColor_4() { return static_cast<int32_t>(offsetof(LeanSelectableRendererColor_t156123418, ___DefaultColor_4)); }
	inline Color_t2555686324  get_DefaultColor_4() const { return ___DefaultColor_4; }
	inline Color_t2555686324 * get_address_of_DefaultColor_4() { return &___DefaultColor_4; }
	inline void set_DefaultColor_4(Color_t2555686324  value)
	{
		___DefaultColor_4 = value;
	}

	inline static int32_t get_offset_of_SelectedColor_5() { return static_cast<int32_t>(offsetof(LeanSelectableRendererColor_t156123418, ___SelectedColor_5)); }
	inline Color_t2555686324  get_SelectedColor_5() const { return ___SelectedColor_5; }
	inline Color_t2555686324 * get_address_of_SelectedColor_5() { return &___SelectedColor_5; }
	inline void set_SelectedColor_5(Color_t2555686324  value)
	{
		___SelectedColor_5 = value;
	}

	inline static int32_t get_offset_of_CloneMaterials_6() { return static_cast<int32_t>(offsetof(LeanSelectableRendererColor_t156123418, ___CloneMaterials_6)); }
	inline bool get_CloneMaterials_6() const { return ___CloneMaterials_6; }
	inline bool* get_address_of_CloneMaterials_6() { return &___CloneMaterials_6; }
	inline void set_CloneMaterials_6(bool value)
	{
		___CloneMaterials_6 = value;
	}

	inline static int32_t get_offset_of_cachedRenderer_7() { return static_cast<int32_t>(offsetof(LeanSelectableRendererColor_t156123418, ___cachedRenderer_7)); }
	inline Renderer_t2627027031 * get_cachedRenderer_7() const { return ___cachedRenderer_7; }
	inline Renderer_t2627027031 ** get_address_of_cachedRenderer_7() { return &___cachedRenderer_7; }
	inline void set_cachedRenderer_7(Renderer_t2627027031 * value)
	{
		___cachedRenderer_7 = value;
		Il2CppCodeGenWriteBarrier(&___cachedRenderer_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

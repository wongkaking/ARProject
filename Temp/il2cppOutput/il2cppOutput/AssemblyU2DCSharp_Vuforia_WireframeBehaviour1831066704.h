#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "UnityEngine_UnityEngine_Color2555686324.h"

// UnityEngine.Material
struct Material_t340375123;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WireframeBehaviour
struct  WireframeBehaviour_t1831066704  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material Vuforia.WireframeBehaviour::lineMaterial
	Material_t340375123 * ___lineMaterial_2;
	// System.Boolean Vuforia.WireframeBehaviour::ShowLines
	bool ___ShowLines_3;
	// UnityEngine.Color Vuforia.WireframeBehaviour::LineColor
	Color_t2555686324  ___LineColor_4;
	// UnityEngine.Material Vuforia.WireframeBehaviour::mLineMaterial
	Material_t340375123 * ___mLineMaterial_5;

public:
	inline static int32_t get_offset_of_lineMaterial_2() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___lineMaterial_2)); }
	inline Material_t340375123 * get_lineMaterial_2() const { return ___lineMaterial_2; }
	inline Material_t340375123 ** get_address_of_lineMaterial_2() { return &___lineMaterial_2; }
	inline void set_lineMaterial_2(Material_t340375123 * value)
	{
		___lineMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___lineMaterial_2, value);
	}

	inline static int32_t get_offset_of_ShowLines_3() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___ShowLines_3)); }
	inline bool get_ShowLines_3() const { return ___ShowLines_3; }
	inline bool* get_address_of_ShowLines_3() { return &___ShowLines_3; }
	inline void set_ShowLines_3(bool value)
	{
		___ShowLines_3 = value;
	}

	inline static int32_t get_offset_of_LineColor_4() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___LineColor_4)); }
	inline Color_t2555686324  get_LineColor_4() const { return ___LineColor_4; }
	inline Color_t2555686324 * get_address_of_LineColor_4() { return &___LineColor_4; }
	inline void set_LineColor_4(Color_t2555686324  value)
	{
		___LineColor_4 = value;
	}

	inline static int32_t get_offset_of_mLineMaterial_5() { return static_cast<int32_t>(offsetof(WireframeBehaviour_t1831066704, ___mLineMaterial_5)); }
	inline Material_t340375123 * get_mLineMaterial_5() const { return ___mLineMaterial_5; }
	inline Material_t340375123 ** get_address_of_mLineMaterial_5() { return &___mLineMaterial_5; }
	inline void set_mLineMaterial_5(Material_t340375123 * value)
	{
		___mLineMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&___mLineMaterial_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

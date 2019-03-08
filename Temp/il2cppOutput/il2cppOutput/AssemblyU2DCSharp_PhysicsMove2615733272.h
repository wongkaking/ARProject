#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "AssemblyU2DCSharp_PhysicsMove_Dir2572338484.h"
#include "UnityEngine_UnityEngine_Vector22156229523.h"

// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.Text
struct Text_t1901882714;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhysicsMove
struct  PhysicsMove_t2615733272  : public MonoBehaviour_t3962482529
{
public:
	// PhysicsMove/Dir PhysicsMove::_dir
	int32_t ____dir_2;
	// UnityEngine.Transform PhysicsMove::_object
	Transform_t3600365921 * ____object_3;
	// System.Single PhysicsMove::g
	float ___g_4;
	// System.Single PhysicsMove::gx
	float ___gx_5;
	// System.Single PhysicsMove::v
	float ___v_6;
	// UnityEngine.Vector2 PhysicsMove::Vr
	Vector2_t2156229523  ___Vr_7;
	// System.Boolean PhysicsMove::<StartPhysics>k__BackingField
	bool ___U3CStartPhysicsU3Ek__BackingField_8;
	// UnityEngine.UI.Text PhysicsMove::texts
	Text_t1901882714 * ___texts_9;
	// System.Int32 PhysicsMove::<I>k__BackingField
	int32_t ___U3CIU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of__dir_2() { return static_cast<int32_t>(offsetof(PhysicsMove_t2615733272, ____dir_2)); }
	inline int32_t get__dir_2() const { return ____dir_2; }
	inline int32_t* get_address_of__dir_2() { return &____dir_2; }
	inline void set__dir_2(int32_t value)
	{
		____dir_2 = value;
	}

	inline static int32_t get_offset_of__object_3() { return static_cast<int32_t>(offsetof(PhysicsMove_t2615733272, ____object_3)); }
	inline Transform_t3600365921 * get__object_3() const { return ____object_3; }
	inline Transform_t3600365921 ** get_address_of__object_3() { return &____object_3; }
	inline void set__object_3(Transform_t3600365921 * value)
	{
		____object_3 = value;
		Il2CppCodeGenWriteBarrier(&____object_3, value);
	}

	inline static int32_t get_offset_of_g_4() { return static_cast<int32_t>(offsetof(PhysicsMove_t2615733272, ___g_4)); }
	inline float get_g_4() const { return ___g_4; }
	inline float* get_address_of_g_4() { return &___g_4; }
	inline void set_g_4(float value)
	{
		___g_4 = value;
	}

	inline static int32_t get_offset_of_gx_5() { return static_cast<int32_t>(offsetof(PhysicsMove_t2615733272, ___gx_5)); }
	inline float get_gx_5() const { return ___gx_5; }
	inline float* get_address_of_gx_5() { return &___gx_5; }
	inline void set_gx_5(float value)
	{
		___gx_5 = value;
	}

	inline static int32_t get_offset_of_v_6() { return static_cast<int32_t>(offsetof(PhysicsMove_t2615733272, ___v_6)); }
	inline float get_v_6() const { return ___v_6; }
	inline float* get_address_of_v_6() { return &___v_6; }
	inline void set_v_6(float value)
	{
		___v_6 = value;
	}

	inline static int32_t get_offset_of_Vr_7() { return static_cast<int32_t>(offsetof(PhysicsMove_t2615733272, ___Vr_7)); }
	inline Vector2_t2156229523  get_Vr_7() const { return ___Vr_7; }
	inline Vector2_t2156229523 * get_address_of_Vr_7() { return &___Vr_7; }
	inline void set_Vr_7(Vector2_t2156229523  value)
	{
		___Vr_7 = value;
	}

	inline static int32_t get_offset_of_U3CStartPhysicsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PhysicsMove_t2615733272, ___U3CStartPhysicsU3Ek__BackingField_8)); }
	inline bool get_U3CStartPhysicsU3Ek__BackingField_8() const { return ___U3CStartPhysicsU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CStartPhysicsU3Ek__BackingField_8() { return &___U3CStartPhysicsU3Ek__BackingField_8; }
	inline void set_U3CStartPhysicsU3Ek__BackingField_8(bool value)
	{
		___U3CStartPhysicsU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_texts_9() { return static_cast<int32_t>(offsetof(PhysicsMove_t2615733272, ___texts_9)); }
	inline Text_t1901882714 * get_texts_9() const { return ___texts_9; }
	inline Text_t1901882714 ** get_address_of_texts_9() { return &___texts_9; }
	inline void set_texts_9(Text_t1901882714 * value)
	{
		___texts_9 = value;
		Il2CppCodeGenWriteBarrier(&___texts_9, value);
	}

	inline static int32_t get_offset_of_U3CIU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PhysicsMove_t2615733272, ___U3CIU3Ek__BackingField_10)); }
	inline int32_t get_U3CIU3Ek__BackingField_10() const { return ___U3CIU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CIU3Ek__BackingField_10() { return &___U3CIU3Ek__BackingField_10; }
	inline void set_U3CIU3Ek__BackingField_10(int32_t value)
	{
		___U3CIU3Ek__BackingField_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

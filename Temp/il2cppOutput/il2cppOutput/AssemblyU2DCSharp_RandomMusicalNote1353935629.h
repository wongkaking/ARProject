#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t736164020;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// Bomb
struct Bomb_t3788669921;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomMusicalNote
struct  RandomMusicalNote_t1353935629  : public Il2CppObject
{
public:
	// System.String RandomMusicalNote::path
	String_t* ___path_0;
	// System.Int32 RandomMusicalNote::sum
	int32_t ___sum_1;
	// System.Int32 RandomMusicalNote::j
	int32_t ___j_2;
	// System.Single RandomMusicalNote::monment
	float ___monment_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> RandomMusicalNote::<ItemMsg>k__BackingField
	Dictionary_2_t736164020 * ___U3CItemMsgU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> RandomMusicalNote::_object
	Dictionary_2_t2736202052 * ____object_5;
	// Bomb RandomMusicalNote::bomb
	Bomb_t3788669921 * ___bomb_6;

public:
	inline static int32_t get_offset_of_path_0() { return static_cast<int32_t>(offsetof(RandomMusicalNote_t1353935629, ___path_0)); }
	inline String_t* get_path_0() const { return ___path_0; }
	inline String_t** get_address_of_path_0() { return &___path_0; }
	inline void set_path_0(String_t* value)
	{
		___path_0 = value;
		Il2CppCodeGenWriteBarrier(&___path_0, value);
	}

	inline static int32_t get_offset_of_sum_1() { return static_cast<int32_t>(offsetof(RandomMusicalNote_t1353935629, ___sum_1)); }
	inline int32_t get_sum_1() const { return ___sum_1; }
	inline int32_t* get_address_of_sum_1() { return &___sum_1; }
	inline void set_sum_1(int32_t value)
	{
		___sum_1 = value;
	}

	inline static int32_t get_offset_of_j_2() { return static_cast<int32_t>(offsetof(RandomMusicalNote_t1353935629, ___j_2)); }
	inline int32_t get_j_2() const { return ___j_2; }
	inline int32_t* get_address_of_j_2() { return &___j_2; }
	inline void set_j_2(int32_t value)
	{
		___j_2 = value;
	}

	inline static int32_t get_offset_of_monment_3() { return static_cast<int32_t>(offsetof(RandomMusicalNote_t1353935629, ___monment_3)); }
	inline float get_monment_3() const { return ___monment_3; }
	inline float* get_address_of_monment_3() { return &___monment_3; }
	inline void set_monment_3(float value)
	{
		___monment_3 = value;
	}

	inline static int32_t get_offset_of_U3CItemMsgU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RandomMusicalNote_t1353935629, ___U3CItemMsgU3Ek__BackingField_4)); }
	inline Dictionary_2_t736164020 * get_U3CItemMsgU3Ek__BackingField_4() const { return ___U3CItemMsgU3Ek__BackingField_4; }
	inline Dictionary_2_t736164020 ** get_address_of_U3CItemMsgU3Ek__BackingField_4() { return &___U3CItemMsgU3Ek__BackingField_4; }
	inline void set_U3CItemMsgU3Ek__BackingField_4(Dictionary_2_t736164020 * value)
	{
		___U3CItemMsgU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CItemMsgU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of__object_5() { return static_cast<int32_t>(offsetof(RandomMusicalNote_t1353935629, ____object_5)); }
	inline Dictionary_2_t2736202052 * get__object_5() const { return ____object_5; }
	inline Dictionary_2_t2736202052 ** get_address_of__object_5() { return &____object_5; }
	inline void set__object_5(Dictionary_2_t2736202052 * value)
	{
		____object_5 = value;
		Il2CppCodeGenWriteBarrier(&____object_5, value);
	}

	inline static int32_t get_offset_of_bomb_6() { return static_cast<int32_t>(offsetof(RandomMusicalNote_t1353935629, ___bomb_6)); }
	inline Bomb_t3788669921 * get_bomb_6() const { return ___bomb_6; }
	inline Bomb_t3788669921 ** get_address_of_bomb_6() { return &___bomb_6; }
	inline void set_bomb_6(Bomb_t3788669921 * value)
	{
		___bomb_6 = value;
		Il2CppCodeGenWriteBarrier(&___bomb_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

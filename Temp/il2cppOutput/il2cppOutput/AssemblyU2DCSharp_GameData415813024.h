#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "AssemblyU2DCSharp_ExtraGameLogic_CollisionType2908449215.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector3>
struct Dictionary_2_t2611026795;
// System.Int32[]
struct Int32U5BU5D_t385246372;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameData
struct  GameData_t415813024  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct GameData_t415813024_StaticFields
{
public:
	// System.Int32 GameData::<ViewObjects>k__BackingField
	int32_t ___U3CViewObjectsU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> GameData::Objects
	Dictionary_2_t2736202052 * ___Objects_3;
	// System.Int32 GameData::<CountPosIndexLeft>k__BackingField
	int32_t ___U3CCountPosIndexLeftU3Ek__BackingField_4;
	// System.Int32 GameData::<CountPosIndexRight>k__BackingField
	int32_t ___U3CCountPosIndexRightU3Ek__BackingField_5;
	// System.Int32 GameData::<TargetCombo>k__BackingField
	int32_t ___U3CTargetComboU3Ek__BackingField_6;
	// System.Int32 GameData::<FinalCombo>k__BackingField
	int32_t ___U3CFinalComboU3Ek__BackingField_7;
	// System.Int32 GameData::<Miss>k__BackingField
	int32_t ___U3CMissU3Ek__BackingField_8;
	// System.String GameData::<Rank>k__BackingField
	String_t* ___U3CRankU3Ek__BackingField_9;
	// System.Int32 GameData::<combo>k__BackingField
	int32_t ___U3CcomboU3Ek__BackingField_10;
	// System.Boolean GameData::<noteBomb>k__BackingField
	bool ___U3CnoteBombU3Ek__BackingField_11;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector3> GameData::pos
	Dictionary_2_t2611026795 * ___pos_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Vector3> GameData::<temp_pos>k__BackingField
	Dictionary_2_t2611026795 * ___U3Ctemp_posU3Ek__BackingField_13;
	// System.Int32[] GameData::<index>k__BackingField
	Int32U5BU5D_t385246372* ___U3CindexU3Ek__BackingField_14;
	// ExtraGameLogic/CollisionType GameData::<collisionType>k__BackingField
	int32_t ___U3CcollisionTypeU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_U3CViewObjectsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GameData_t415813024_StaticFields, ___U3CViewObjectsU3Ek__BackingField_2)); }
	inline int32_t get_U3CViewObjectsU3Ek__BackingField_2() const { return ___U3CViewObjectsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CViewObjectsU3Ek__BackingField_2() { return &___U3CViewObjectsU3Ek__BackingField_2; }
	inline void set_U3CViewObjectsU3Ek__BackingField_2(int32_t value)
	{
		___U3CViewObjectsU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_Objects_3() { return static_cast<int32_t>(offsetof(GameData_t415813024_StaticFields, ___Objects_3)); }
	inline Dictionary_2_t2736202052 * get_Objects_3() const { return ___Objects_3; }
	inline Dictionary_2_t2736202052 ** get_address_of_Objects_3() { return &___Objects_3; }
	inline void set_Objects_3(Dictionary_2_t2736202052 * value)
	{
		___Objects_3 = value;
		Il2CppCodeGenWriteBarrier(&___Objects_3, value);
	}

	inline static int32_t get_offset_of_U3CCountPosIndexLeftU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GameData_t415813024_StaticFields, ___U3CCountPosIndexLeftU3Ek__BackingField_4)); }
	inline int32_t get_U3CCountPosIndexLeftU3Ek__BackingField_4() const { return ___U3CCountPosIndexLeftU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CCountPosIndexLeftU3Ek__BackingField_4() { return &___U3CCountPosIndexLeftU3Ek__BackingField_4; }
	inline void set_U3CCountPosIndexLeftU3Ek__BackingField_4(int32_t value)
	{
		___U3CCountPosIndexLeftU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CCountPosIndexRightU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GameData_t415813024_StaticFields, ___U3CCountPosIndexRightU3Ek__BackingField_5)); }
	inline int32_t get_U3CCountPosIndexRightU3Ek__BackingField_5() const { return ___U3CCountPosIndexRightU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CCountPosIndexRightU3Ek__BackingField_5() { return &___U3CCountPosIndexRightU3Ek__BackingField_5; }
	inline void set_U3CCountPosIndexRightU3Ek__BackingField_5(int32_t value)
	{
		___U3CCountPosIndexRightU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CTargetComboU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GameData_t415813024_StaticFields, ___U3CTargetComboU3Ek__BackingField_6)); }
	inline int32_t get_U3CTargetComboU3Ek__BackingField_6() const { return ___U3CTargetComboU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CTargetComboU3Ek__BackingField_6() { return &___U3CTargetComboU3Ek__BackingField_6; }
	inline void set_U3CTargetComboU3Ek__BackingField_6(int32_t value)
	{
		___U3CTargetComboU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CFinalComboU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GameData_t415813024_StaticFields, ___U3CFinalComboU3Ek__BackingField_7)); }
	inline int32_t get_U3CFinalComboU3Ek__BackingField_7() const { return ___U3CFinalComboU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CFinalComboU3Ek__BackingField_7() { return &___U3CFinalComboU3Ek__BackingField_7; }
	inline void set_U3CFinalComboU3Ek__BackingField_7(int32_t value)
	{
		___U3CFinalComboU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CMissU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(GameData_t415813024_StaticFields, ___U3CMissU3Ek__BackingField_8)); }
	inline int32_t get_U3CMissU3Ek__BackingField_8() const { return ___U3CMissU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CMissU3Ek__BackingField_8() { return &___U3CMissU3Ek__BackingField_8; }
	inline void set_U3CMissU3Ek__BackingField_8(int32_t value)
	{
		___U3CMissU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CRankU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GameData_t415813024_StaticFields, ___U3CRankU3Ek__BackingField_9)); }
	inline String_t* get_U3CRankU3Ek__BackingField_9() const { return ___U3CRankU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CRankU3Ek__BackingField_9() { return &___U3CRankU3Ek__BackingField_9; }
	inline void set_U3CRankU3Ek__BackingField_9(String_t* value)
	{
		___U3CRankU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CRankU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CcomboU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(GameData_t415813024_StaticFields, ___U3CcomboU3Ek__BackingField_10)); }
	inline int32_t get_U3CcomboU3Ek__BackingField_10() const { return ___U3CcomboU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CcomboU3Ek__BackingField_10() { return &___U3CcomboU3Ek__BackingField_10; }
	inline void set_U3CcomboU3Ek__BackingField_10(int32_t value)
	{
		___U3CcomboU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CnoteBombU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(GameData_t415813024_StaticFields, ___U3CnoteBombU3Ek__BackingField_11)); }
	inline bool get_U3CnoteBombU3Ek__BackingField_11() const { return ___U3CnoteBombU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CnoteBombU3Ek__BackingField_11() { return &___U3CnoteBombU3Ek__BackingField_11; }
	inline void set_U3CnoteBombU3Ek__BackingField_11(bool value)
	{
		___U3CnoteBombU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_pos_12() { return static_cast<int32_t>(offsetof(GameData_t415813024_StaticFields, ___pos_12)); }
	inline Dictionary_2_t2611026795 * get_pos_12() const { return ___pos_12; }
	inline Dictionary_2_t2611026795 ** get_address_of_pos_12() { return &___pos_12; }
	inline void set_pos_12(Dictionary_2_t2611026795 * value)
	{
		___pos_12 = value;
		Il2CppCodeGenWriteBarrier(&___pos_12, value);
	}

	inline static int32_t get_offset_of_U3Ctemp_posU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(GameData_t415813024_StaticFields, ___U3Ctemp_posU3Ek__BackingField_13)); }
	inline Dictionary_2_t2611026795 * get_U3Ctemp_posU3Ek__BackingField_13() const { return ___U3Ctemp_posU3Ek__BackingField_13; }
	inline Dictionary_2_t2611026795 ** get_address_of_U3Ctemp_posU3Ek__BackingField_13() { return &___U3Ctemp_posU3Ek__BackingField_13; }
	inline void set_U3Ctemp_posU3Ek__BackingField_13(Dictionary_2_t2611026795 * value)
	{
		___U3Ctemp_posU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3Ctemp_posU3Ek__BackingField_13, value);
	}

	inline static int32_t get_offset_of_U3CindexU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(GameData_t415813024_StaticFields, ___U3CindexU3Ek__BackingField_14)); }
	inline Int32U5BU5D_t385246372* get_U3CindexU3Ek__BackingField_14() const { return ___U3CindexU3Ek__BackingField_14; }
	inline Int32U5BU5D_t385246372** get_address_of_U3CindexU3Ek__BackingField_14() { return &___U3CindexU3Ek__BackingField_14; }
	inline void set_U3CindexU3Ek__BackingField_14(Int32U5BU5D_t385246372* value)
	{
		___U3CindexU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CindexU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CcollisionTypeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(GameData_t415813024_StaticFields, ___U3CcollisionTypeU3Ek__BackingField_15)); }
	inline int32_t get_U3CcollisionTypeU3Ek__BackingField_15() const { return ___U3CcollisionTypeU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CcollisionTypeU3Ek__BackingField_15() { return &___U3CcollisionTypeU3Ek__BackingField_15; }
	inline void set_U3CcollisionTypeU3Ek__BackingField_15(int32_t value)
	{
		___U3CcollisionTypeU3Ek__BackingField_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

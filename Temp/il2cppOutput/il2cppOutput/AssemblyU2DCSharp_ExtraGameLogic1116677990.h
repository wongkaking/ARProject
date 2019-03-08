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

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.UI.Slider
struct Slider_t3903728902;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2297175928;
// ExtraGameLogic/Btn
struct Btn_t2283910170;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t736164020;
// System.String
struct String_t;
// RandomMusicalNote
struct RandomMusicalNote_t1353935629;
// Dash
struct Dash_t4181194193;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExtraGameLogic
struct  ExtraGameLogic_t1116677990  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] ExtraGameLogic::_game
	GameObjectU5BU5D_t3328599146* ____game_2;
	// UnityEngine.UI.Slider ExtraGameLogic::slider
	Slider_t3903728902 * ___slider_3;
	// System.Int32 ExtraGameLogic::<Miss>k__BackingField
	int32_t ___U3CMissU3Ek__BackingField_4;
	// UnityEngine.UI.Button[] ExtraGameLogic::button
	ButtonU5BU5D_t2297175928* ___button_5;
	// ExtraGameLogic/Btn ExtraGameLogic::btn
	Btn_t2283910170 * ___btn_6;
	// System.String ExtraGameLogic::currentlySceneName
	String_t* ___currentlySceneName_8;
	// System.Boolean ExtraGameLogic::stop
	bool ___stop_9;
	// RandomMusicalNote ExtraGameLogic::note
	RandomMusicalNote_t1353935629 * ___note_10;
	// System.Int32 ExtraGameLogic::targetCombo
	int32_t ___targetCombo_11;
	// ExtraGameLogic/CollisionType ExtraGameLogic::collisionType
	int32_t ___collisionType_12;
	// Dash ExtraGameLogic::dash
	Dash_t4181194193 * ___dash_13;
	// System.Int32 ExtraGameLogic::<TempMiss>k__BackingField
	int32_t ___U3CTempMissU3Ek__BackingField_14;
	// System.Single ExtraGameLogic::<Interval>k__BackingField
	float ___U3CIntervalU3Ek__BackingField_15;
	// System.Boolean ExtraGameLogic::startTimeOut
	bool ___startTimeOut_16;

public:
	inline static int32_t get_offset_of__game_2() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990, ____game_2)); }
	inline GameObjectU5BU5D_t3328599146* get__game_2() const { return ____game_2; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__game_2() { return &____game_2; }
	inline void set__game_2(GameObjectU5BU5D_t3328599146* value)
	{
		____game_2 = value;
		Il2CppCodeGenWriteBarrier(&____game_2, value);
	}

	inline static int32_t get_offset_of_slider_3() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990, ___slider_3)); }
	inline Slider_t3903728902 * get_slider_3() const { return ___slider_3; }
	inline Slider_t3903728902 ** get_address_of_slider_3() { return &___slider_3; }
	inline void set_slider_3(Slider_t3903728902 * value)
	{
		___slider_3 = value;
		Il2CppCodeGenWriteBarrier(&___slider_3, value);
	}

	inline static int32_t get_offset_of_U3CMissU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990, ___U3CMissU3Ek__BackingField_4)); }
	inline int32_t get_U3CMissU3Ek__BackingField_4() const { return ___U3CMissU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CMissU3Ek__BackingField_4() { return &___U3CMissU3Ek__BackingField_4; }
	inline void set_U3CMissU3Ek__BackingField_4(int32_t value)
	{
		___U3CMissU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_button_5() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990, ___button_5)); }
	inline ButtonU5BU5D_t2297175928* get_button_5() const { return ___button_5; }
	inline ButtonU5BU5D_t2297175928** get_address_of_button_5() { return &___button_5; }
	inline void set_button_5(ButtonU5BU5D_t2297175928* value)
	{
		___button_5 = value;
		Il2CppCodeGenWriteBarrier(&___button_5, value);
	}

	inline static int32_t get_offset_of_btn_6() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990, ___btn_6)); }
	inline Btn_t2283910170 * get_btn_6() const { return ___btn_6; }
	inline Btn_t2283910170 ** get_address_of_btn_6() { return &___btn_6; }
	inline void set_btn_6(Btn_t2283910170 * value)
	{
		___btn_6 = value;
		Il2CppCodeGenWriteBarrier(&___btn_6, value);
	}

	inline static int32_t get_offset_of_currentlySceneName_8() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990, ___currentlySceneName_8)); }
	inline String_t* get_currentlySceneName_8() const { return ___currentlySceneName_8; }
	inline String_t** get_address_of_currentlySceneName_8() { return &___currentlySceneName_8; }
	inline void set_currentlySceneName_8(String_t* value)
	{
		___currentlySceneName_8 = value;
		Il2CppCodeGenWriteBarrier(&___currentlySceneName_8, value);
	}

	inline static int32_t get_offset_of_stop_9() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990, ___stop_9)); }
	inline bool get_stop_9() const { return ___stop_9; }
	inline bool* get_address_of_stop_9() { return &___stop_9; }
	inline void set_stop_9(bool value)
	{
		___stop_9 = value;
	}

	inline static int32_t get_offset_of_note_10() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990, ___note_10)); }
	inline RandomMusicalNote_t1353935629 * get_note_10() const { return ___note_10; }
	inline RandomMusicalNote_t1353935629 ** get_address_of_note_10() { return &___note_10; }
	inline void set_note_10(RandomMusicalNote_t1353935629 * value)
	{
		___note_10 = value;
		Il2CppCodeGenWriteBarrier(&___note_10, value);
	}

	inline static int32_t get_offset_of_targetCombo_11() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990, ___targetCombo_11)); }
	inline int32_t get_targetCombo_11() const { return ___targetCombo_11; }
	inline int32_t* get_address_of_targetCombo_11() { return &___targetCombo_11; }
	inline void set_targetCombo_11(int32_t value)
	{
		___targetCombo_11 = value;
	}

	inline static int32_t get_offset_of_collisionType_12() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990, ___collisionType_12)); }
	inline int32_t get_collisionType_12() const { return ___collisionType_12; }
	inline int32_t* get_address_of_collisionType_12() { return &___collisionType_12; }
	inline void set_collisionType_12(int32_t value)
	{
		___collisionType_12 = value;
	}

	inline static int32_t get_offset_of_dash_13() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990, ___dash_13)); }
	inline Dash_t4181194193 * get_dash_13() const { return ___dash_13; }
	inline Dash_t4181194193 ** get_address_of_dash_13() { return &___dash_13; }
	inline void set_dash_13(Dash_t4181194193 * value)
	{
		___dash_13 = value;
		Il2CppCodeGenWriteBarrier(&___dash_13, value);
	}

	inline static int32_t get_offset_of_U3CTempMissU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990, ___U3CTempMissU3Ek__BackingField_14)); }
	inline int32_t get_U3CTempMissU3Ek__BackingField_14() const { return ___U3CTempMissU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CTempMissU3Ek__BackingField_14() { return &___U3CTempMissU3Ek__BackingField_14; }
	inline void set_U3CTempMissU3Ek__BackingField_14(int32_t value)
	{
		___U3CTempMissU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CIntervalU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990, ___U3CIntervalU3Ek__BackingField_15)); }
	inline float get_U3CIntervalU3Ek__BackingField_15() const { return ___U3CIntervalU3Ek__BackingField_15; }
	inline float* get_address_of_U3CIntervalU3Ek__BackingField_15() { return &___U3CIntervalU3Ek__BackingField_15; }
	inline void set_U3CIntervalU3Ek__BackingField_15(float value)
	{
		___U3CIntervalU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_startTimeOut_16() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990, ___startTimeOut_16)); }
	inline bool get_startTimeOut_16() const { return ___startTimeOut_16; }
	inline bool* get_address_of_startTimeOut_16() { return &___startTimeOut_16; }
	inline void set_startTimeOut_16(bool value)
	{
		___startTimeOut_16 = value;
	}
};

struct ExtraGameLogic_t1116677990_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> ExtraGameLogic::<TheSaveItemMsg>k__BackingField
	Dictionary_2_t736164020 * ___U3CTheSaveItemMsgU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CTheSaveItemMsgU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ExtraGameLogic_t1116677990_StaticFields, ___U3CTheSaveItemMsgU3Ek__BackingField_7)); }
	inline Dictionary_2_t736164020 * get_U3CTheSaveItemMsgU3Ek__BackingField_7() const { return ___U3CTheSaveItemMsgU3Ek__BackingField_7; }
	inline Dictionary_2_t736164020 ** get_address_of_U3CTheSaveItemMsgU3Ek__BackingField_7() { return &___U3CTheSaveItemMsgU3Ek__BackingField_7; }
	inline void set_U3CTheSaveItemMsgU3Ek__BackingField_7(Dictionary_2_t736164020 * value)
	{
		___U3CTheSaveItemMsgU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTheSaveItemMsgU3Ek__BackingField_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

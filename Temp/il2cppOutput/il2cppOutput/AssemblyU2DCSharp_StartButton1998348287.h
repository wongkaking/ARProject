#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.UI.Button
struct Button_t4055032469;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartButton
struct  StartButton_t1998348287  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Button StartButton::startButton
	Button_t4055032469 * ___startButton_2;
	// System.String StartButton::LoadSceneName
	String_t* ___LoadSceneName_3;
	// System.String StartButton::targetSceneName
	String_t* ___targetSceneName_4;

public:
	inline static int32_t get_offset_of_startButton_2() { return static_cast<int32_t>(offsetof(StartButton_t1998348287, ___startButton_2)); }
	inline Button_t4055032469 * get_startButton_2() const { return ___startButton_2; }
	inline Button_t4055032469 ** get_address_of_startButton_2() { return &___startButton_2; }
	inline void set_startButton_2(Button_t4055032469 * value)
	{
		___startButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___startButton_2, value);
	}

	inline static int32_t get_offset_of_LoadSceneName_3() { return static_cast<int32_t>(offsetof(StartButton_t1998348287, ___LoadSceneName_3)); }
	inline String_t* get_LoadSceneName_3() const { return ___LoadSceneName_3; }
	inline String_t** get_address_of_LoadSceneName_3() { return &___LoadSceneName_3; }
	inline void set_LoadSceneName_3(String_t* value)
	{
		___LoadSceneName_3 = value;
		Il2CppCodeGenWriteBarrier(&___LoadSceneName_3, value);
	}

	inline static int32_t get_offset_of_targetSceneName_4() { return static_cast<int32_t>(offsetof(StartButton_t1998348287, ___targetSceneName_4)); }
	inline String_t* get_targetSceneName_4() const { return ___targetSceneName_4; }
	inline String_t** get_address_of_targetSceneName_4() { return &___targetSceneName_4; }
	inline void set_targetSceneName_4(String_t* value)
	{
		___targetSceneName_4 = value;
		Il2CppCodeGenWriteBarrier(&___targetSceneName_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

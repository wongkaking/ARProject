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

// BackButton
struct  BackButton_t1433403161  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Button BackButton::backButton
	Button_t4055032469 * ___backButton_2;
	// System.String BackButton::sceneName
	String_t* ___sceneName_3;

public:
	inline static int32_t get_offset_of_backButton_2() { return static_cast<int32_t>(offsetof(BackButton_t1433403161, ___backButton_2)); }
	inline Button_t4055032469 * get_backButton_2() const { return ___backButton_2; }
	inline Button_t4055032469 ** get_address_of_backButton_2() { return &___backButton_2; }
	inline void set_backButton_2(Button_t4055032469 * value)
	{
		___backButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___backButton_2, value);
	}

	inline static int32_t get_offset_of_sceneName_3() { return static_cast<int32_t>(offsetof(BackButton_t1433403161, ___sceneName_3)); }
	inline String_t* get_sceneName_3() const { return ___sceneName_3; }
	inline String_t** get_address_of_sceneName_3() { return &___sceneName_3; }
	inline void set_sceneName_3(String_t* value)
	{
		___sceneName_3 = value;
		Il2CppCodeGenWriteBarrier(&___sceneName_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

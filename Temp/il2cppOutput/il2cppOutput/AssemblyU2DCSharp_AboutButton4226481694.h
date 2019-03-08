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
// UnityEngine.Animation
struct Animation_t3648466861;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AboutButton
struct  AboutButton_t4226481694  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Button AboutButton::openButton
	Button_t4055032469 * ___openButton_2;
	// UnityEngine.UI.Button AboutButton::closeButton
	Button_t4055032469 * ___closeButton_3;
	// UnityEngine.Animation AboutButton::animation
	Animation_t3648466861 * ___animation_4;

public:
	inline static int32_t get_offset_of_openButton_2() { return static_cast<int32_t>(offsetof(AboutButton_t4226481694, ___openButton_2)); }
	inline Button_t4055032469 * get_openButton_2() const { return ___openButton_2; }
	inline Button_t4055032469 ** get_address_of_openButton_2() { return &___openButton_2; }
	inline void set_openButton_2(Button_t4055032469 * value)
	{
		___openButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___openButton_2, value);
	}

	inline static int32_t get_offset_of_closeButton_3() { return static_cast<int32_t>(offsetof(AboutButton_t4226481694, ___closeButton_3)); }
	inline Button_t4055032469 * get_closeButton_3() const { return ___closeButton_3; }
	inline Button_t4055032469 ** get_address_of_closeButton_3() { return &___closeButton_3; }
	inline void set_closeButton_3(Button_t4055032469 * value)
	{
		___closeButton_3 = value;
		Il2CppCodeGenWriteBarrier(&___closeButton_3, value);
	}

	inline static int32_t get_offset_of_animation_4() { return static_cast<int32_t>(offsetof(AboutButton_t4226481694, ___animation_4)); }
	inline Animation_t3648466861 * get_animation_4() const { return ___animation_4; }
	inline Animation_t3648466861 ** get_address_of_animation_4() { return &___animation_4; }
	inline void set_animation_4(Animation_t3648466861 * value)
	{
		___animation_4 = value;
		Il2CppCodeGenWriteBarrier(&___animation_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

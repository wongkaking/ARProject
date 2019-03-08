#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.UI.Slider
struct Slider_t3903728902;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AsyncLoadScene
struct  AsyncLoadScene_t3869859194  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Slider AsyncLoadScene::loadingSlider
	Slider_t3903728902 * ___loadingSlider_2;
	// UnityEngine.UI.Text AsyncLoadScene::loadingText
	Text_t1901882714 * ___loadingText_3;
	// System.Single AsyncLoadScene::loadingSpeed
	float ___loadingSpeed_4;
	// System.Single AsyncLoadScene::targetValue
	float ___targetValue_5;
	// UnityEngine.AsyncOperation AsyncLoadScene::operation
	AsyncOperation_t1445031843 * ___operation_6;

public:
	inline static int32_t get_offset_of_loadingSlider_2() { return static_cast<int32_t>(offsetof(AsyncLoadScene_t3869859194, ___loadingSlider_2)); }
	inline Slider_t3903728902 * get_loadingSlider_2() const { return ___loadingSlider_2; }
	inline Slider_t3903728902 ** get_address_of_loadingSlider_2() { return &___loadingSlider_2; }
	inline void set_loadingSlider_2(Slider_t3903728902 * value)
	{
		___loadingSlider_2 = value;
		Il2CppCodeGenWriteBarrier(&___loadingSlider_2, value);
	}

	inline static int32_t get_offset_of_loadingText_3() { return static_cast<int32_t>(offsetof(AsyncLoadScene_t3869859194, ___loadingText_3)); }
	inline Text_t1901882714 * get_loadingText_3() const { return ___loadingText_3; }
	inline Text_t1901882714 ** get_address_of_loadingText_3() { return &___loadingText_3; }
	inline void set_loadingText_3(Text_t1901882714 * value)
	{
		___loadingText_3 = value;
		Il2CppCodeGenWriteBarrier(&___loadingText_3, value);
	}

	inline static int32_t get_offset_of_loadingSpeed_4() { return static_cast<int32_t>(offsetof(AsyncLoadScene_t3869859194, ___loadingSpeed_4)); }
	inline float get_loadingSpeed_4() const { return ___loadingSpeed_4; }
	inline float* get_address_of_loadingSpeed_4() { return &___loadingSpeed_4; }
	inline void set_loadingSpeed_4(float value)
	{
		___loadingSpeed_4 = value;
	}

	inline static int32_t get_offset_of_targetValue_5() { return static_cast<int32_t>(offsetof(AsyncLoadScene_t3869859194, ___targetValue_5)); }
	inline float get_targetValue_5() const { return ___targetValue_5; }
	inline float* get_address_of_targetValue_5() { return &___targetValue_5; }
	inline void set_targetValue_5(float value)
	{
		___targetValue_5 = value;
	}

	inline static int32_t get_offset_of_operation_6() { return static_cast<int32_t>(offsetof(AsyncLoadScene_t3869859194, ___operation_6)); }
	inline AsyncOperation_t1445031843 * get_operation_6() const { return ___operation_6; }
	inline AsyncOperation_t1445031843 ** get_address_of_operation_6() { return &___operation_6; }
	inline void set_operation_6(AsyncOperation_t1445031843 * value)
	{
		___operation_6 = value;
		Il2CppCodeGenWriteBarrier(&___operation_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

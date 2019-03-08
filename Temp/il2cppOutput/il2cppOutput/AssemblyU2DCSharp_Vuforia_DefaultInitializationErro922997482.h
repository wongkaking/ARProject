#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t922997482  : public MonoBehaviour_t3962482529
{
public:
	// System.String Vuforia.DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_2;
	// System.Boolean Vuforia.DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_3;

public:
	inline static int32_t get_offset_of_mErrorText_2() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t922997482, ___mErrorText_2)); }
	inline String_t* get_mErrorText_2() const { return ___mErrorText_2; }
	inline String_t** get_address_of_mErrorText_2() { return &___mErrorText_2; }
	inline void set_mErrorText_2(String_t* value)
	{
		___mErrorText_2 = value;
		Il2CppCodeGenWriteBarrier(&___mErrorText_2, value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_3() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t922997482, ___mErrorOccurred_3)); }
	inline bool get_mErrorOccurred_3() const { return ___mErrorOccurred_3; }
	inline bool* get_address_of_mErrorOccurred_3() { return &___mErrorOccurred_3; }
	inline void set_mErrorOccurred_3(bool value)
	{
		___mErrorOccurred_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

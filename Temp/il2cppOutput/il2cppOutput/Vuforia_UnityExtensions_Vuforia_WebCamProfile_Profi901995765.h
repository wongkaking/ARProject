#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3640485471.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamProfile_Prof3519391925.h"

// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t3304648224;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileCollection
struct  ProfileCollection_t901995765 
{
public:
	// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile/ProfileCollection::DefaultProfile
	ProfileData_t3519391925  ___DefaultProfile_0;
	// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData> Vuforia.WebCamProfile/ProfileCollection::Profiles
	Dictionary_2_t3304648224 * ___Profiles_1;

public:
	inline static int32_t get_offset_of_DefaultProfile_0() { return static_cast<int32_t>(offsetof(ProfileCollection_t901995765, ___DefaultProfile_0)); }
	inline ProfileData_t3519391925  get_DefaultProfile_0() const { return ___DefaultProfile_0; }
	inline ProfileData_t3519391925 * get_address_of_DefaultProfile_0() { return &___DefaultProfile_0; }
	inline void set_DefaultProfile_0(ProfileData_t3519391925  value)
	{
		___DefaultProfile_0 = value;
	}

	inline static int32_t get_offset_of_Profiles_1() { return static_cast<int32_t>(offsetof(ProfileCollection_t901995765, ___Profiles_1)); }
	inline Dictionary_2_t3304648224 * get_Profiles_1() const { return ___Profiles_1; }
	inline Dictionary_2_t3304648224 ** get_address_of_Profiles_1() { return &___Profiles_1; }
	inline void set_Profiles_1(Dictionary_2_t3304648224 * value)
	{
		___Profiles_1 = value;
		Il2CppCodeGenWriteBarrier(&___Profiles_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t901995765_marshaled_pinvoke
{
	ProfileData_t3519391925  ___DefaultProfile_0;
	Dictionary_2_t3304648224 * ___Profiles_1;
};
// Native definition for COM marshalling of Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t901995765_marshaled_com
{
	ProfileData_t3519391925  ___DefaultProfile_0;
	Dictionary_2_t3304648224 * ___Profiles_1;
};

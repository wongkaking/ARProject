#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl1300500262.h"

// Vuforia.VuMarkTemplateImpl
struct VuMarkTemplateImpl_t667343433;
// Vuforia.InstanceIdImpl
struct InstanceIdImpl_t2824054591;
// Vuforia.Image
struct Image_t745056343;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTargetImpl
struct  VuMarkTargetImpl_t1052843922  : public Il2CppObject
{
public:
	// Vuforia.VuMarkTemplateImpl Vuforia.VuMarkTargetImpl::mVuMarkTemplate
	VuMarkTemplateImpl_t667343433 * ___mVuMarkTemplate_0;
	// Vuforia.InstanceIdImpl Vuforia.VuMarkTargetImpl::mInstanceId
	InstanceIdImpl_t2824054591 * ___mInstanceId_1;
	// System.Int32 Vuforia.VuMarkTargetImpl::mTargetId
	int32_t ___mTargetId_2;
	// Vuforia.Image Vuforia.VuMarkTargetImpl::mInstanceImage
	Image_t745056343 * ___mInstanceImage_3;
	// Vuforia.VuforiaManagerImpl/ImageHeaderData Vuforia.VuMarkTargetImpl::mInstanceImageHeader
	ImageHeaderData_t1300500262  ___mInstanceImageHeader_4;

public:
	inline static int32_t get_offset_of_mVuMarkTemplate_0() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mVuMarkTemplate_0)); }
	inline VuMarkTemplateImpl_t667343433 * get_mVuMarkTemplate_0() const { return ___mVuMarkTemplate_0; }
	inline VuMarkTemplateImpl_t667343433 ** get_address_of_mVuMarkTemplate_0() { return &___mVuMarkTemplate_0; }
	inline void set_mVuMarkTemplate_0(VuMarkTemplateImpl_t667343433 * value)
	{
		___mVuMarkTemplate_0 = value;
		Il2CppCodeGenWriteBarrier(&___mVuMarkTemplate_0, value);
	}

	inline static int32_t get_offset_of_mInstanceId_1() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mInstanceId_1)); }
	inline InstanceIdImpl_t2824054591 * get_mInstanceId_1() const { return ___mInstanceId_1; }
	inline InstanceIdImpl_t2824054591 ** get_address_of_mInstanceId_1() { return &___mInstanceId_1; }
	inline void set_mInstanceId_1(InstanceIdImpl_t2824054591 * value)
	{
		___mInstanceId_1 = value;
		Il2CppCodeGenWriteBarrier(&___mInstanceId_1, value);
	}

	inline static int32_t get_offset_of_mTargetId_2() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mTargetId_2)); }
	inline int32_t get_mTargetId_2() const { return ___mTargetId_2; }
	inline int32_t* get_address_of_mTargetId_2() { return &___mTargetId_2; }
	inline void set_mTargetId_2(int32_t value)
	{
		___mTargetId_2 = value;
	}

	inline static int32_t get_offset_of_mInstanceImage_3() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mInstanceImage_3)); }
	inline Image_t745056343 * get_mInstanceImage_3() const { return ___mInstanceImage_3; }
	inline Image_t745056343 ** get_address_of_mInstanceImage_3() { return &___mInstanceImage_3; }
	inline void set_mInstanceImage_3(Image_t745056343 * value)
	{
		___mInstanceImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___mInstanceImage_3, value);
	}

	inline static int32_t get_offset_of_mInstanceImageHeader_4() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mInstanceImageHeader_4)); }
	inline ImageHeaderData_t1300500262  get_mInstanceImageHeader_4() const { return ___mInstanceImageHeader_4; }
	inline ImageHeaderData_t1300500262 * get_address_of_mInstanceImageHeader_4() { return &___mInstanceImageHeader_4; }
	inline void set_mInstanceImageHeader_4(ImageHeaderData_t1300500262  value)
	{
		___mInstanceImageHeader_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

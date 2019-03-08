#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Vuforia_UnityExtensions_Vuforia_ObjectTargetImpl3614635090.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetType2834081427.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton>
struct Dictionary_2_t3569847137;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetImpl
struct  ImageTargetImpl_t2025897970  : public ObjectTargetImpl_t3614635090
{
public:
	// Vuforia.ImageTargetType Vuforia.ImageTargetImpl::mImageTargetType
	int32_t ___mImageTargetType_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VirtualButton> Vuforia.ImageTargetImpl::mVirtualButtons
	Dictionary_2_t3569847137 * ___mVirtualButtons_5;

public:
	inline static int32_t get_offset_of_mImageTargetType_4() { return static_cast<int32_t>(offsetof(ImageTargetImpl_t2025897970, ___mImageTargetType_4)); }
	inline int32_t get_mImageTargetType_4() const { return ___mImageTargetType_4; }
	inline int32_t* get_address_of_mImageTargetType_4() { return &___mImageTargetType_4; }
	inline void set_mImageTargetType_4(int32_t value)
	{
		___mImageTargetType_4 = value;
	}

	inline static int32_t get_offset_of_mVirtualButtons_5() { return static_cast<int32_t>(offsetof(ImageTargetImpl_t2025897970, ___mVirtualButtons_5)); }
	inline Dictionary_2_t3569847137 * get_mVirtualButtons_5() const { return ___mVirtualButtons_5; }
	inline Dictionary_2_t3569847137 ** get_address_of_mVirtualButtons_5() { return &___mVirtualButtons_5; }
	inline void set_mVirtualButtons_5(Dictionary_2_t3569847137 * value)
	{
		___mVirtualButtons_5 = value;
		Il2CppCodeGenWriteBarrier(&___mVirtualButtons_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

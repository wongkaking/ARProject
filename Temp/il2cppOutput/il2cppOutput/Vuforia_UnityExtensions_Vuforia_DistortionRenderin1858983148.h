#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "UnityEngine_UnityEngine_Rect2360479859.h"

// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t4111643188;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DistortionRenderingBehaviour
struct  DistortionRenderingBehaviour_t1858983148  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Vuforia.DistortionRenderingBehaviour::mSingleTexture
	bool ___mSingleTexture_2;
	// System.Int32 Vuforia.DistortionRenderingBehaviour::mRenderLayer
	int32_t ___mRenderLayer_3;
	// System.Int32[] Vuforia.DistortionRenderingBehaviour::mOriginalCullingMasks
	Int32U5BU5D_t385246372* ___mOriginalCullingMasks_4;
	// UnityEngine.Camera[] Vuforia.DistortionRenderingBehaviour::mStereoCameras
	CameraU5BU5D_t1709987734* ___mStereoCameras_5;
	// UnityEngine.GameObject[] Vuforia.DistortionRenderingBehaviour::mMeshes
	GameObjectU5BU5D_t3328599146* ___mMeshes_6;
	// UnityEngine.RenderTexture[] Vuforia.DistortionRenderingBehaviour::mTextures
	RenderTextureU5BU5D_t4111643188* ___mTextures_7;
	// System.Boolean Vuforia.DistortionRenderingBehaviour::mStarted
	bool ___mStarted_8;
	// System.Boolean Vuforia.DistortionRenderingBehaviour::mVideoBackgroundChanged
	bool ___mVideoBackgroundChanged_9;
	// UnityEngine.Rect Vuforia.DistortionRenderingBehaviour::mOriginalLeftViewport
	Rect_t2360479859  ___mOriginalLeftViewport_10;
	// UnityEngine.Rect Vuforia.DistortionRenderingBehaviour::mOriginalRightViewport
	Rect_t2360479859  ___mOriginalRightViewport_11;
	// UnityEngine.Rect Vuforia.DistortionRenderingBehaviour::mDualTextureLeftViewport
	Rect_t2360479859  ___mDualTextureLeftViewport_12;
	// UnityEngine.Rect Vuforia.DistortionRenderingBehaviour::mDualTextureRightViewport
	Rect_t2360479859  ___mDualTextureRightViewport_13;

public:
	inline static int32_t get_offset_of_mSingleTexture_2() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t1858983148, ___mSingleTexture_2)); }
	inline bool get_mSingleTexture_2() const { return ___mSingleTexture_2; }
	inline bool* get_address_of_mSingleTexture_2() { return &___mSingleTexture_2; }
	inline void set_mSingleTexture_2(bool value)
	{
		___mSingleTexture_2 = value;
	}

	inline static int32_t get_offset_of_mRenderLayer_3() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t1858983148, ___mRenderLayer_3)); }
	inline int32_t get_mRenderLayer_3() const { return ___mRenderLayer_3; }
	inline int32_t* get_address_of_mRenderLayer_3() { return &___mRenderLayer_3; }
	inline void set_mRenderLayer_3(int32_t value)
	{
		___mRenderLayer_3 = value;
	}

	inline static int32_t get_offset_of_mOriginalCullingMasks_4() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t1858983148, ___mOriginalCullingMasks_4)); }
	inline Int32U5BU5D_t385246372* get_mOriginalCullingMasks_4() const { return ___mOriginalCullingMasks_4; }
	inline Int32U5BU5D_t385246372** get_address_of_mOriginalCullingMasks_4() { return &___mOriginalCullingMasks_4; }
	inline void set_mOriginalCullingMasks_4(Int32U5BU5D_t385246372* value)
	{
		___mOriginalCullingMasks_4 = value;
		Il2CppCodeGenWriteBarrier(&___mOriginalCullingMasks_4, value);
	}

	inline static int32_t get_offset_of_mStereoCameras_5() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t1858983148, ___mStereoCameras_5)); }
	inline CameraU5BU5D_t1709987734* get_mStereoCameras_5() const { return ___mStereoCameras_5; }
	inline CameraU5BU5D_t1709987734** get_address_of_mStereoCameras_5() { return &___mStereoCameras_5; }
	inline void set_mStereoCameras_5(CameraU5BU5D_t1709987734* value)
	{
		___mStereoCameras_5 = value;
		Il2CppCodeGenWriteBarrier(&___mStereoCameras_5, value);
	}

	inline static int32_t get_offset_of_mMeshes_6() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t1858983148, ___mMeshes_6)); }
	inline GameObjectU5BU5D_t3328599146* get_mMeshes_6() const { return ___mMeshes_6; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_mMeshes_6() { return &___mMeshes_6; }
	inline void set_mMeshes_6(GameObjectU5BU5D_t3328599146* value)
	{
		___mMeshes_6 = value;
		Il2CppCodeGenWriteBarrier(&___mMeshes_6, value);
	}

	inline static int32_t get_offset_of_mTextures_7() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t1858983148, ___mTextures_7)); }
	inline RenderTextureU5BU5D_t4111643188* get_mTextures_7() const { return ___mTextures_7; }
	inline RenderTextureU5BU5D_t4111643188** get_address_of_mTextures_7() { return &___mTextures_7; }
	inline void set_mTextures_7(RenderTextureU5BU5D_t4111643188* value)
	{
		___mTextures_7 = value;
		Il2CppCodeGenWriteBarrier(&___mTextures_7, value);
	}

	inline static int32_t get_offset_of_mStarted_8() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t1858983148, ___mStarted_8)); }
	inline bool get_mStarted_8() const { return ___mStarted_8; }
	inline bool* get_address_of_mStarted_8() { return &___mStarted_8; }
	inline void set_mStarted_8(bool value)
	{
		___mStarted_8 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundChanged_9() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t1858983148, ___mVideoBackgroundChanged_9)); }
	inline bool get_mVideoBackgroundChanged_9() const { return ___mVideoBackgroundChanged_9; }
	inline bool* get_address_of_mVideoBackgroundChanged_9() { return &___mVideoBackgroundChanged_9; }
	inline void set_mVideoBackgroundChanged_9(bool value)
	{
		___mVideoBackgroundChanged_9 = value;
	}

	inline static int32_t get_offset_of_mOriginalLeftViewport_10() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t1858983148, ___mOriginalLeftViewport_10)); }
	inline Rect_t2360479859  get_mOriginalLeftViewport_10() const { return ___mOriginalLeftViewport_10; }
	inline Rect_t2360479859 * get_address_of_mOriginalLeftViewport_10() { return &___mOriginalLeftViewport_10; }
	inline void set_mOriginalLeftViewport_10(Rect_t2360479859  value)
	{
		___mOriginalLeftViewport_10 = value;
	}

	inline static int32_t get_offset_of_mOriginalRightViewport_11() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t1858983148, ___mOriginalRightViewport_11)); }
	inline Rect_t2360479859  get_mOriginalRightViewport_11() const { return ___mOriginalRightViewport_11; }
	inline Rect_t2360479859 * get_address_of_mOriginalRightViewport_11() { return &___mOriginalRightViewport_11; }
	inline void set_mOriginalRightViewport_11(Rect_t2360479859  value)
	{
		___mOriginalRightViewport_11 = value;
	}

	inline static int32_t get_offset_of_mDualTextureLeftViewport_12() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t1858983148, ___mDualTextureLeftViewport_12)); }
	inline Rect_t2360479859  get_mDualTextureLeftViewport_12() const { return ___mDualTextureLeftViewport_12; }
	inline Rect_t2360479859 * get_address_of_mDualTextureLeftViewport_12() { return &___mDualTextureLeftViewport_12; }
	inline void set_mDualTextureLeftViewport_12(Rect_t2360479859  value)
	{
		___mDualTextureLeftViewport_12 = value;
	}

	inline static int32_t get_offset_of_mDualTextureRightViewport_13() { return static_cast<int32_t>(offsetof(DistortionRenderingBehaviour_t1858983148, ___mDualTextureRightViewport_13)); }
	inline Rect_t2360479859  get_mDualTextureRightViewport_13() const { return ___mDualTextureRightViewport_13; }
	inline Rect_t2360479859 * get_address_of_mDualTextureRightViewport_13() { return &___mDualTextureRightViewport_13; }
	inline void set_mDualTextureRightViewport_13(Rect_t2360479859  value)
	{
		___mDualTextureRightViewport_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

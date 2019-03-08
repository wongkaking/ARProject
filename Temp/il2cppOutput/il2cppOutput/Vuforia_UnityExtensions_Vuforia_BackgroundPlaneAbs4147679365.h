#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi1805965052.h"
#include "UnityEngine_UnityEngine_Vector33722313464.h"

// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// Vuforia.VuforiaARController
struct VuforiaARController_t1876945237;
// System.Action
struct Action_t1264377477;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.BackgroundPlaneAbstractBehaviour
struct  BackgroundPlaneAbstractBehaviour_t4147679365  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.BackgroundPlaneAbstractBehaviour::mTextureInfo
	VideoTextureInfo_t1805965052  ___mTextureInfo_2;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mViewWidth
	int32_t ___mViewWidth_3;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mViewHeight
	int32_t ___mViewHeight_4;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mNumFramesToUpdateVideoBg
	int32_t ___mNumFramesToUpdateVideoBg_5;
	// UnityEngine.Camera Vuforia.BackgroundPlaneAbstractBehaviour::mCamera
	Camera_t4157153871 * ___mCamera_6;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::defaultNumDivisions
	int32_t ___defaultNumDivisions_8;
	// UnityEngine.Mesh Vuforia.BackgroundPlaneAbstractBehaviour::mMesh
	Mesh_t3648964284 * ___mMesh_9;
	// System.Single Vuforia.BackgroundPlaneAbstractBehaviour::mStereoDepth
	float ___mStereoDepth_10;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneAbstractBehaviour::mBackgroundOffset
	Vector3_t3722313464  ___mBackgroundOffset_11;
	// Vuforia.VuforiaARController Vuforia.BackgroundPlaneAbstractBehaviour::mVuforiaBehaviour
	VuforiaARController_t1876945237 * ___mVuforiaBehaviour_12;
	// System.Action Vuforia.BackgroundPlaneAbstractBehaviour::mBackgroundPlacedCallback
	Action_t1264377477 * ___mBackgroundPlacedCallback_13;
	// System.Int32 Vuforia.BackgroundPlaneAbstractBehaviour::mNumDivisions
	int32_t ___mNumDivisions_14;

public:
	inline static int32_t get_offset_of_mTextureInfo_2() { return static_cast<int32_t>(offsetof(BackgroundPlaneAbstractBehaviour_t4147679365, ___mTextureInfo_2)); }
	inline VideoTextureInfo_t1805965052  get_mTextureInfo_2() const { return ___mTextureInfo_2; }
	inline VideoTextureInfo_t1805965052 * get_address_of_mTextureInfo_2() { return &___mTextureInfo_2; }
	inline void set_mTextureInfo_2(VideoTextureInfo_t1805965052  value)
	{
		___mTextureInfo_2 = value;
	}

	inline static int32_t get_offset_of_mViewWidth_3() { return static_cast<int32_t>(offsetof(BackgroundPlaneAbstractBehaviour_t4147679365, ___mViewWidth_3)); }
	inline int32_t get_mViewWidth_3() const { return ___mViewWidth_3; }
	inline int32_t* get_address_of_mViewWidth_3() { return &___mViewWidth_3; }
	inline void set_mViewWidth_3(int32_t value)
	{
		___mViewWidth_3 = value;
	}

	inline static int32_t get_offset_of_mViewHeight_4() { return static_cast<int32_t>(offsetof(BackgroundPlaneAbstractBehaviour_t4147679365, ___mViewHeight_4)); }
	inline int32_t get_mViewHeight_4() const { return ___mViewHeight_4; }
	inline int32_t* get_address_of_mViewHeight_4() { return &___mViewHeight_4; }
	inline void set_mViewHeight_4(int32_t value)
	{
		___mViewHeight_4 = value;
	}

	inline static int32_t get_offset_of_mNumFramesToUpdateVideoBg_5() { return static_cast<int32_t>(offsetof(BackgroundPlaneAbstractBehaviour_t4147679365, ___mNumFramesToUpdateVideoBg_5)); }
	inline int32_t get_mNumFramesToUpdateVideoBg_5() const { return ___mNumFramesToUpdateVideoBg_5; }
	inline int32_t* get_address_of_mNumFramesToUpdateVideoBg_5() { return &___mNumFramesToUpdateVideoBg_5; }
	inline void set_mNumFramesToUpdateVideoBg_5(int32_t value)
	{
		___mNumFramesToUpdateVideoBg_5 = value;
	}

	inline static int32_t get_offset_of_mCamera_6() { return static_cast<int32_t>(offsetof(BackgroundPlaneAbstractBehaviour_t4147679365, ___mCamera_6)); }
	inline Camera_t4157153871 * get_mCamera_6() const { return ___mCamera_6; }
	inline Camera_t4157153871 ** get_address_of_mCamera_6() { return &___mCamera_6; }
	inline void set_mCamera_6(Camera_t4157153871 * value)
	{
		___mCamera_6 = value;
		Il2CppCodeGenWriteBarrier(&___mCamera_6, value);
	}

	inline static int32_t get_offset_of_defaultNumDivisions_8() { return static_cast<int32_t>(offsetof(BackgroundPlaneAbstractBehaviour_t4147679365, ___defaultNumDivisions_8)); }
	inline int32_t get_defaultNumDivisions_8() const { return ___defaultNumDivisions_8; }
	inline int32_t* get_address_of_defaultNumDivisions_8() { return &___defaultNumDivisions_8; }
	inline void set_defaultNumDivisions_8(int32_t value)
	{
		___defaultNumDivisions_8 = value;
	}

	inline static int32_t get_offset_of_mMesh_9() { return static_cast<int32_t>(offsetof(BackgroundPlaneAbstractBehaviour_t4147679365, ___mMesh_9)); }
	inline Mesh_t3648964284 * get_mMesh_9() const { return ___mMesh_9; }
	inline Mesh_t3648964284 ** get_address_of_mMesh_9() { return &___mMesh_9; }
	inline void set_mMesh_9(Mesh_t3648964284 * value)
	{
		___mMesh_9 = value;
		Il2CppCodeGenWriteBarrier(&___mMesh_9, value);
	}

	inline static int32_t get_offset_of_mStereoDepth_10() { return static_cast<int32_t>(offsetof(BackgroundPlaneAbstractBehaviour_t4147679365, ___mStereoDepth_10)); }
	inline float get_mStereoDepth_10() const { return ___mStereoDepth_10; }
	inline float* get_address_of_mStereoDepth_10() { return &___mStereoDepth_10; }
	inline void set_mStereoDepth_10(float value)
	{
		___mStereoDepth_10 = value;
	}

	inline static int32_t get_offset_of_mBackgroundOffset_11() { return static_cast<int32_t>(offsetof(BackgroundPlaneAbstractBehaviour_t4147679365, ___mBackgroundOffset_11)); }
	inline Vector3_t3722313464  get_mBackgroundOffset_11() const { return ___mBackgroundOffset_11; }
	inline Vector3_t3722313464 * get_address_of_mBackgroundOffset_11() { return &___mBackgroundOffset_11; }
	inline void set_mBackgroundOffset_11(Vector3_t3722313464  value)
	{
		___mBackgroundOffset_11 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_12() { return static_cast<int32_t>(offsetof(BackgroundPlaneAbstractBehaviour_t4147679365, ___mVuforiaBehaviour_12)); }
	inline VuforiaARController_t1876945237 * get_mVuforiaBehaviour_12() const { return ___mVuforiaBehaviour_12; }
	inline VuforiaARController_t1876945237 ** get_address_of_mVuforiaBehaviour_12() { return &___mVuforiaBehaviour_12; }
	inline void set_mVuforiaBehaviour_12(VuforiaARController_t1876945237 * value)
	{
		___mVuforiaBehaviour_12 = value;
		Il2CppCodeGenWriteBarrier(&___mVuforiaBehaviour_12, value);
	}

	inline static int32_t get_offset_of_mBackgroundPlacedCallback_13() { return static_cast<int32_t>(offsetof(BackgroundPlaneAbstractBehaviour_t4147679365, ___mBackgroundPlacedCallback_13)); }
	inline Action_t1264377477 * get_mBackgroundPlacedCallback_13() const { return ___mBackgroundPlacedCallback_13; }
	inline Action_t1264377477 ** get_address_of_mBackgroundPlacedCallback_13() { return &___mBackgroundPlacedCallback_13; }
	inline void set_mBackgroundPlacedCallback_13(Action_t1264377477 * value)
	{
		___mBackgroundPlacedCallback_13 = value;
		Il2CppCodeGenWriteBarrier(&___mBackgroundPlacedCallback_13, value);
	}

	inline static int32_t get_offset_of_mNumDivisions_14() { return static_cast<int32_t>(offsetof(BackgroundPlaneAbstractBehaviour_t4147679365, ___mNumDivisions_14)); }
	inline int32_t get_mNumDivisions_14() const { return ___mNumDivisions_14; }
	inline int32_t* get_address_of_mNumDivisions_14() { return &___mNumDivisions_14; }
	inline void set_mNumDivisions_14(int32_t value)
	{
		___mNumDivisions_14 = value;
	}
};

struct BackgroundPlaneAbstractBehaviour_t4147679365_StaticFields
{
public:
	// System.Single Vuforia.BackgroundPlaneAbstractBehaviour::maxDisplacement
	float ___maxDisplacement_7;

public:
	inline static int32_t get_offset_of_maxDisplacement_7() { return static_cast<int32_t>(offsetof(BackgroundPlaneAbstractBehaviour_t4147679365_StaticFields, ___maxDisplacement_7)); }
	inline float get_maxDisplacement_7() const { return ___maxDisplacement_7; }
	inline float* get_address_of_maxDisplacement_7() { return &___maxDisplacement_7; }
	inline void set_maxDisplacement_7(float value)
	{
		___maxDisplacement_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

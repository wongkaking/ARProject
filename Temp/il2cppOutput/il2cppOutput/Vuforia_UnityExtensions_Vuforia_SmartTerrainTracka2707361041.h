#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Vuforia_UnityExtensions_Vuforia_TrackableImpl3595316917.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl3114383412.h"

// System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable>
struct List_1_t931906994;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t3754799548;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.SmartTerrainTrackableImpl
struct  SmartTerrainTrackableImpl_t2707361041  : public TrackableImpl_t3595316917
{
public:
	// System.Collections.Generic.List`1<Vuforia.SmartTerrainTrackable> Vuforia.SmartTerrainTrackableImpl::mChildren
	List_1_t931906994 * ___mChildren_2;
	// UnityEngine.Mesh Vuforia.SmartTerrainTrackableImpl::mMesh
	Mesh_t3648964284 * ___mMesh_3;
	// System.Int32 Vuforia.SmartTerrainTrackableImpl::mMeshRevision
	int32_t ___mMeshRevision_4;
	// Vuforia.VuforiaManagerImpl/PoseData Vuforia.SmartTerrainTrackableImpl::mLocalPose
	PoseData_t3114383412  ___mLocalPose_5;
	// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableImpl::<Parent>k__BackingField
	Il2CppObject * ___U3CParentU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_mChildren_2() { return static_cast<int32_t>(offsetof(SmartTerrainTrackableImpl_t2707361041, ___mChildren_2)); }
	inline List_1_t931906994 * get_mChildren_2() const { return ___mChildren_2; }
	inline List_1_t931906994 ** get_address_of_mChildren_2() { return &___mChildren_2; }
	inline void set_mChildren_2(List_1_t931906994 * value)
	{
		___mChildren_2 = value;
		Il2CppCodeGenWriteBarrier(&___mChildren_2, value);
	}

	inline static int32_t get_offset_of_mMesh_3() { return static_cast<int32_t>(offsetof(SmartTerrainTrackableImpl_t2707361041, ___mMesh_3)); }
	inline Mesh_t3648964284 * get_mMesh_3() const { return ___mMesh_3; }
	inline Mesh_t3648964284 ** get_address_of_mMesh_3() { return &___mMesh_3; }
	inline void set_mMesh_3(Mesh_t3648964284 * value)
	{
		___mMesh_3 = value;
		Il2CppCodeGenWriteBarrier(&___mMesh_3, value);
	}

	inline static int32_t get_offset_of_mMeshRevision_4() { return static_cast<int32_t>(offsetof(SmartTerrainTrackableImpl_t2707361041, ___mMeshRevision_4)); }
	inline int32_t get_mMeshRevision_4() const { return ___mMeshRevision_4; }
	inline int32_t* get_address_of_mMeshRevision_4() { return &___mMeshRevision_4; }
	inline void set_mMeshRevision_4(int32_t value)
	{
		___mMeshRevision_4 = value;
	}

	inline static int32_t get_offset_of_mLocalPose_5() { return static_cast<int32_t>(offsetof(SmartTerrainTrackableImpl_t2707361041, ___mLocalPose_5)); }
	inline PoseData_t3114383412  get_mLocalPose_5() const { return ___mLocalPose_5; }
	inline PoseData_t3114383412 * get_address_of_mLocalPose_5() { return &___mLocalPose_5; }
	inline void set_mLocalPose_5(PoseData_t3114383412  value)
	{
		___mLocalPose_5 = value;
	}

	inline static int32_t get_offset_of_U3CParentU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SmartTerrainTrackableImpl_t2707361041, ___U3CParentU3Ek__BackingField_6)); }
	inline Il2CppObject * get_U3CParentU3Ek__BackingField_6() const { return ___U3CParentU3Ek__BackingField_6; }
	inline Il2CppObject ** get_address_of_U3CParentU3Ek__BackingField_6() { return &___U3CParentU3Ek__BackingField_6; }
	inline void set_U3CParentU3Ek__BackingField_6(Il2CppObject * value)
	{
		___U3CParentU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CParentU3Ek__BackingField_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

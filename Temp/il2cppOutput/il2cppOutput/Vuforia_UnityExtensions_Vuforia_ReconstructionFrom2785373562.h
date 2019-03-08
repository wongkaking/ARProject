#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t3809448279;
// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t818896732;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ReconstructionFromTargetAbstractBehaviour
struct  ReconstructionFromTargetAbstractBehaviour_t2785373562  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.ReconstructionFromTarget Vuforia.ReconstructionFromTargetAbstractBehaviour::mReconstructionFromTarget
	Il2CppObject * ___mReconstructionFromTarget_2;
	// Vuforia.ReconstructionAbstractBehaviour Vuforia.ReconstructionFromTargetAbstractBehaviour::mReconstructionBehaviour
	ReconstructionAbstractBehaviour_t818896732 * ___mReconstructionBehaviour_3;

public:
	inline static int32_t get_offset_of_mReconstructionFromTarget_2() { return static_cast<int32_t>(offsetof(ReconstructionFromTargetAbstractBehaviour_t2785373562, ___mReconstructionFromTarget_2)); }
	inline Il2CppObject * get_mReconstructionFromTarget_2() const { return ___mReconstructionFromTarget_2; }
	inline Il2CppObject ** get_address_of_mReconstructionFromTarget_2() { return &___mReconstructionFromTarget_2; }
	inline void set_mReconstructionFromTarget_2(Il2CppObject * value)
	{
		___mReconstructionFromTarget_2 = value;
		Il2CppCodeGenWriteBarrier(&___mReconstructionFromTarget_2, value);
	}

	inline static int32_t get_offset_of_mReconstructionBehaviour_3() { return static_cast<int32_t>(offsetof(ReconstructionFromTargetAbstractBehaviour_t2785373562, ___mReconstructionBehaviour_3)); }
	inline ReconstructionAbstractBehaviour_t818896732 * get_mReconstructionBehaviour_3() const { return ___mReconstructionBehaviour_3; }
	inline ReconstructionAbstractBehaviour_t818896732 ** get_address_of_mReconstructionBehaviour_3() { return &___mReconstructionBehaviour_3; }
	inline void set_mReconstructionBehaviour_3(ReconstructionAbstractBehaviour_t818896732 * value)
	{
		___mReconstructionBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier(&___mReconstructionBehaviour_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

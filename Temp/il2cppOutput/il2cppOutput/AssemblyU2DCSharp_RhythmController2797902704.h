#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// RandomMusicalNote
struct RandomMusicalNote_t1353935629;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RhythmController
struct  RhythmController_t2797902704  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioClip RhythmController::_audio
	AudioClip_t3680889665 * ____audio_2;
	// System.Single RhythmController::i
	float ___i_3;
	// System.Single RhythmController::audio_length
	float ___audio_length_4;
	// RandomMusicalNote RhythmController::note
	RandomMusicalNote_t1353935629 * ___note_5;

public:
	inline static int32_t get_offset_of__audio_2() { return static_cast<int32_t>(offsetof(RhythmController_t2797902704, ____audio_2)); }
	inline AudioClip_t3680889665 * get__audio_2() const { return ____audio_2; }
	inline AudioClip_t3680889665 ** get_address_of__audio_2() { return &____audio_2; }
	inline void set__audio_2(AudioClip_t3680889665 * value)
	{
		____audio_2 = value;
		Il2CppCodeGenWriteBarrier(&____audio_2, value);
	}

	inline static int32_t get_offset_of_i_3() { return static_cast<int32_t>(offsetof(RhythmController_t2797902704, ___i_3)); }
	inline float get_i_3() const { return ___i_3; }
	inline float* get_address_of_i_3() { return &___i_3; }
	inline void set_i_3(float value)
	{
		___i_3 = value;
	}

	inline static int32_t get_offset_of_audio_length_4() { return static_cast<int32_t>(offsetof(RhythmController_t2797902704, ___audio_length_4)); }
	inline float get_audio_length_4() const { return ___audio_length_4; }
	inline float* get_address_of_audio_length_4() { return &___audio_length_4; }
	inline void set_audio_length_4(float value)
	{
		___audio_length_4 = value;
	}

	inline static int32_t get_offset_of_note_5() { return static_cast<int32_t>(offsetof(RhythmController_t2797902704, ___note_5)); }
	inline RandomMusicalNote_t1353935629 * get_note_5() const { return ___note_5; }
	inline RandomMusicalNote_t1353935629 ** get_address_of_note_5() { return &___note_5; }
	inline void set_note_5(RandomMusicalNote_t1353935629 * value)
	{
		___note_5 = value;
		Il2CppCodeGenWriteBarrier(&___note_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

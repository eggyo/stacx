#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.TweenParams
struct TweenParams_t1777255335;
// System.Object
struct Object_t;
// DG.Tweening.TweenCallback
struct TweenCallback_t3786476454;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t1868435431;
// DG.Tweening.EaseFunction
struct EaseFunction_t1285385724;

#include "mscorlib_System_Object837106420.h"
#include "DOTween_DG_Tweening_UpdateType2719692729.h"
#include "DOTween_DG_Tweening_LoopType3344295956.h"
#include "DOTween_DG_Tweening_Ease1024295940.h"

// DG.Tweening.TweenParams
struct  TweenParams_t1777255335  : public Object_t
{
	// System.Object DG.Tweening.TweenParams::id
	Object_t * ___id_1;
	// System.Object DG.Tweening.TweenParams::target
	Object_t * ___target_2;
	// DG.Tweening.UpdateType DG.Tweening.TweenParams::updateType
	int32_t ___updateType_3;
	// System.Boolean DG.Tweening.TweenParams::isIndependentUpdate
	bool ___isIndependentUpdate_4;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onStart
	TweenCallback_t3786476454 * ___onStart_5;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onPlay
	TweenCallback_t3786476454 * ___onPlay_6;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onRewind
	TweenCallback_t3786476454 * ___onRewind_7;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onUpdate
	TweenCallback_t3786476454 * ___onUpdate_8;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onStepComplete
	TweenCallback_t3786476454 * ___onStepComplete_9;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onComplete
	TweenCallback_t3786476454 * ___onComplete_10;
	// DG.Tweening.TweenCallback DG.Tweening.TweenParams::onKill
	TweenCallback_t3786476454 * ___onKill_11;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.TweenParams::onWaypointChange
	TweenCallback_1_t1868435431 * ___onWaypointChange_12;
	// System.Boolean DG.Tweening.TweenParams::isRecyclable
	bool ___isRecyclable_13;
	// System.Boolean DG.Tweening.TweenParams::isSpeedBased
	bool ___isSpeedBased_14;
	// System.Boolean DG.Tweening.TweenParams::autoKill
	bool ___autoKill_15;
	// System.Int32 DG.Tweening.TweenParams::loops
	int32_t ___loops_16;
	// DG.Tweening.LoopType DG.Tweening.TweenParams::loopType
	int32_t ___loopType_17;
	// System.Single DG.Tweening.TweenParams::delay
	float ___delay_18;
	// System.Boolean DG.Tweening.TweenParams::isRelative
	bool ___isRelative_19;
	// DG.Tweening.Ease DG.Tweening.TweenParams::easeType
	int32_t ___easeType_20;
	// DG.Tweening.EaseFunction DG.Tweening.TweenParams::customEase
	EaseFunction_t1285385724 * ___customEase_21;
	// System.Single DG.Tweening.TweenParams::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_22;
	// System.Single DG.Tweening.TweenParams::easePeriod
	float ___easePeriod_23;
};
struct TweenParams_t1777255335_StaticFields{
	// DG.Tweening.TweenParams DG.Tweening.TweenParams::Params
	TweenParams_t1777255335 * ___Params_0;
};

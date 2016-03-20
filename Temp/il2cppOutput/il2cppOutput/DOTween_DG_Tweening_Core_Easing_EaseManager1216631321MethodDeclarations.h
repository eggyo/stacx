﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.EaseFunction
struct EaseFunction_t1285385724;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_Ease1024295940.h"
#include "DOTween_DG_Tweening_EaseFunction1285385724.h"

// System.Single DG.Tweening.Core.Easing.EaseManager::Evaluate(DG.Tweening.Tween,System.Single,System.Single,System.Single,System.Single)
extern "C"  float EaseManager_Evaluate_m4160843472 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, float ___time, float ___duration, float ___overshootOrAmplitude, float ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Core.Easing.EaseManager::Evaluate(DG.Tweening.Ease,DG.Tweening.EaseFunction,System.Single,System.Single,System.Single,System.Single)
extern "C"  float EaseManager_Evaluate_m433472811 (Object_t * __this /* static, unused */, int32_t ___easeType, EaseFunction_t1285385724 * ___customEase, float ___time, float ___duration, float ___overshootOrAmplitude, float ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.EaseFunction DG.Tweening.Core.Easing.EaseManager::ToEaseFunction(DG.Tweening.Ease)
extern "C"  EaseFunction_t1285385724 * EaseManager_ToEaseFunction_m2418098114 (Object_t * __this /* static, unused */, int32_t ___ease, const MethodInfo* method) IL2CPP_METHOD_ATTR;

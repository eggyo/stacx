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

// DG.Tweening.Tweener
struct Tweener_t1766303790;
// DG.Tweening.TweenCallback`1<System.Single>
struct TweenCallback_1_t4274196961;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3342907448;
struct AnimationCurve_t3342907448_marshaled;
// DG.Tweening.Tween
struct Tween_t1103364673;
// DG.Tweening.TweenCallback
struct TweenCallback_t3786476454;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Ease1024295940.h"
#include "UnityEngine_UnityEngine_AnimationCurve3342907448.h"
#include "DOTween_DG_Tweening_TweenCallback3786476454.h"

// DG.Tweening.Tweener DG.Tweening.DOVirtual::Float(System.Single,System.Single,System.Single,DG.Tweening.TweenCallback`1<System.Single>)
extern "C"  Tweener_t1766303790 * DOVirtual_Float_m1024463033 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___duration, TweenCallback_1_t4274196961 * ___onVirtualUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.DOVirtual::EasedValue(System.Single,System.Single,System.Single,DG.Tweening.Ease)
extern "C"  float DOVirtual_EasedValue_m643898405 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___lifetimePercentage, int32_t ___easeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.DOVirtual::EasedValue(System.Single,System.Single,System.Single,DG.Tweening.Ease,System.Single)
extern "C"  float DOVirtual_EasedValue_m3799056970 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___lifetimePercentage, int32_t ___easeType, float ___overshoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.DOVirtual::EasedValue(System.Single,System.Single,System.Single,DG.Tweening.Ease,System.Single,System.Single)
extern "C"  float DOVirtual_EasedValue_m4134323119 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___lifetimePercentage, int32_t ___easeType, float ___amplitude, float ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.DOVirtual::EasedValue(System.Single,System.Single,System.Single,UnityEngine.AnimationCurve)
extern "C"  float DOVirtual_EasedValue_m2231931037 (Object_t * __this /* static, unused */, float ___from, float ___to, float ___lifetimePercentage, AnimationCurve_t3342907448 * ___easeCurve, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Tween DG.Tweening.DOVirtual::DelayedCall(System.Single,DG.Tweening.TweenCallback,System.Boolean)
extern "C"  Tween_t1103364673 * DOVirtual_DelayedCall_m3084077537 (Object_t * __this /* static, unused */, float ___delay, TweenCallback_t3786476454 * ___callback, bool ___ignoreTimeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;

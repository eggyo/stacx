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

// DG.Tweening.Sequence
struct Sequence_t2436335575;
// DG.Tweening.Tween
struct Tween_t1103364673;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t1900323642;
// DG.Tweening.Tween[]
struct TweenU5BU5D_t2610237340;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Tween1103364673.h"
#include "DOTween_DG_Tweening_UpdateType2719692729.h"
#include "DOTween_DG_Tweening_Core_Enums_OperationType2199153750.h"
#include "DOTween_DG_Tweening_Core_Enums_FilterType1748606503.h"
#include "mscorlib_System_Object837106420.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateMode3005523297.h"
#include "DOTween_DG_Tweening_Core_TweenManager_CapacityIncr3284177151.h"

// DG.Tweening.Sequence DG.Tweening.Core.TweenManager::GetSequence()
extern "C"  Sequence_t2436335575 * TweenManager_GetSequence_m820409917 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::SetUpdateType(DG.Tweening.Tween,DG.Tweening.UpdateType,System.Boolean)
extern "C"  void TweenManager_SetUpdateType_m2105083394 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, int32_t ___updateType, bool ___isIndependentUpdate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::AddActiveTweenToSequence(DG.Tweening.Tween)
extern "C"  void TweenManager_AddActiveTweenToSequence_m801211459 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::DespawnAll()
extern "C"  int32_t TweenManager_DespawnAll_m3244117765 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::Despawn(DG.Tweening.Tween,System.Boolean)
extern "C"  void TweenManager_Despawn_m4133721302 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, bool ___modifyActiveLists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::PurgeAll()
extern "C"  void TweenManager_PurgeAll_m2869772806 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::PurgePools()
extern "C"  void TweenManager_PurgePools_m1001072060 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ResetCapacities()
extern "C"  void TweenManager_ResetCapacities_m1451007065 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::SetCapacities(System.Int32,System.Int32)
extern "C"  void TweenManager_SetCapacities_m841848186 (Object_t * __this /* static, unused */, int32_t ___tweenersCapacity, int32_t ___sequencesCapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::Validate()
extern "C"  int32_t TweenManager_Validate_m4093646836 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::Update(DG.Tweening.UpdateType,System.Single,System.Single)
extern "C"  void TweenManager_Update_m3326434900 (Object_t * __this /* static, unused */, int32_t ___updateType, float ___deltaTime, float ___independentTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::FilteredOperation(DG.Tweening.Core.Enums.OperationType,DG.Tweening.Core.Enums.FilterType,System.Object,System.Boolean,System.Single,System.Object,System.Object[])
extern "C"  int32_t TweenManager_FilteredOperation_m447207681 (Object_t * __this /* static, unused */, int32_t ___operationType, int32_t ___filterType, Object_t * ___id, bool ___optionalBool, float ___optionalFloat, Object_t * ___optionalObj, ObjectU5BU5D_t11523773* ___optionalArray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Complete(DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.Enums.UpdateMode)
extern "C"  bool TweenManager_Complete_m278286300 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, bool ___modifyActiveLists, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Flip(DG.Tweening.Tween)
extern "C"  bool TweenManager_Flip_m3475222510 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ForceInit(DG.Tweening.Tween)
extern "C"  void TweenManager_ForceInit_m2133114726 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Goto(DG.Tweening.Tween,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateMode)
extern "C"  bool TweenManager_Goto_m3639668801 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, float ___to, bool ___andPlay, int32_t ___updateMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Pause(DG.Tweening.Tween)
extern "C"  bool TweenManager_Pause_m2347938323 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Play(DG.Tweening.Tween)
extern "C"  bool TweenManager_Play_m1962707399 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::PlayBackwards(DG.Tweening.Tween)
extern "C"  bool TweenManager_PlayBackwards_m3213173549 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::PlayForward(DG.Tweening.Tween)
extern "C"  bool TweenManager_PlayForward_m142640632 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Restart(DG.Tweening.Tween,System.Boolean)
extern "C"  bool TweenManager_Restart_m3412874403 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, bool ___includeDelay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Rewind(DG.Tweening.Tween,System.Boolean)
extern "C"  bool TweenManager_Rewind_m3453837533 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, bool ___includeDelay, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::SmoothRewind(DG.Tweening.Tween)
extern "C"  bool TweenManager_SmoothRewind_m3106907602 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::TogglePause(DG.Tweening.Tween)
extern "C"  bool TweenManager_TogglePause_m3739906119 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::TotalPooledTweens()
extern "C"  int32_t TweenManager_TotalPooledTweens_m600279787 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::TotalPlayingTweens()
extern "C"  int32_t TweenManager_TotalPlayingTweens_m1809316848 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::GetActiveTweens(System.Boolean)
extern "C"  List_1_t1900323642 * TweenManager_GetActiveTweens_m3088081041 (Object_t * __this /* static, unused */, bool ___playing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::GetTweensById(System.Object,System.Boolean)
extern "C"  List_1_t1900323642 * TweenManager_GetTweensById_m1146229775 (Object_t * __this /* static, unused */, Object_t * ___id, bool ___playingOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::GetTweensByTarget(System.Object,System.Boolean)
extern "C"  List_1_t1900323642 * TweenManager_GetTweensByTarget_m1607274757 (Object_t * __this /* static, unused */, Object_t * ___target, bool ___playingOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::MarkForKilling(DG.Tweening.Tween)
extern "C"  void TweenManager_MarkForKilling_m118408507 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::AddActiveTween(DG.Tweening.Tween)
extern "C"  void TweenManager_AddActiveTween_m1869434239 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ReorganizeActiveTweens()
extern "C"  void TweenManager_ReorganizeActiveTweens_m3502491988 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::DespawnTweens(System.Collections.Generic.List`1<DG.Tweening.Tween>,System.Boolean)
extern "C"  void TweenManager_DespawnTweens_m171906374 (Object_t * __this /* static, unused */, List_1_t1900323642 * ___tweens, bool ___modifyActiveLists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::RemoveActiveTween(DG.Tweening.Tween)
extern "C"  void TweenManager_RemoveActiveTween_m3697489248 (Object_t * __this /* static, unused */, Tween_t1103364673 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ClearTweenArray(DG.Tweening.Tween[])
extern "C"  void TweenManager_ClearTweenArray_m2361966468 (Object_t * __this /* static, unused */, TweenU5BU5D_t2610237340* ___tweens, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::IncreaseCapacities(DG.Tweening.Core.TweenManager/CapacityIncreaseMode)
extern "C"  void TweenManager_IncreaseCapacities_m4137155233 (Object_t * __this /* static, unused */, int32_t ___increaseMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::.cctor()
extern "C"  void TweenManager__cctor_m4158543225 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

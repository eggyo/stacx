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

// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t3978043016;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_PathType2321210645.h"
#include "mscorlib_System_Nullable_1_gen179246372.h"
#include "DOTween_DG_Tweening_AxisConstraint3652844660.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "DOTween_DG_Tweening_Plugins_Core_PathCore_Path3978043016.h"

// System.Void DG.Tweening.Plugins.Core.PathCore.Path::.ctor(DG.Tweening.PathType,UnityEngine.Vector3[],System.Int32,System.Nullable`1<UnityEngine.Color>)
extern "C"  void Path__ctor_m3643346123 (Path_t3978043016 * __this, int32_t ___type, Vector3U5BU5D_t3227571696* ___waypoints, int32_t ___subdivisionsXSegment, Nullable_1_t179246372  ___gizmoColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::.ctor()
extern "C"  void Path__ctor_m385713427 (Path_t3978043016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::FinalizePath(System.Boolean,DG.Tweening.AxisConstraint,UnityEngine.Vector3)
extern "C"  void Path_FinalizePath_m2735415716 (Path_t3978043016 * __this, bool ___isClosedPath, int32_t ___lockPositionAxes, Vector3_t3525329789  ___currTargetVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.Path::GetPoint(System.Single,System.Boolean)
extern "C"  Vector3_t3525329789  Path_GetPoint_m1236893975 (Path_t3978043016 * __this, float ___perc, bool ___convertToConstantPerc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Core.PathCore.Path::ConvertToConstantPathPerc(System.Single)
extern "C"  float Path_ConvertToConstantPathPerc_m493172393 (Path_t3978043016 * __this, float ___perc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::GetWaypointIndexFromPerc(System.Single,System.Boolean)
extern "C"  int32_t Path_GetWaypointIndexFromPerc_m2093843168 (Path_t3978043016 * __this, float ___perc, bool ___isMovingForward, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::GetDrawPoints(DG.Tweening.Plugins.Core.PathCore.Path,System.Int32)
extern "C"  Vector3U5BU5D_t3227571696* Path_GetDrawPoints_m1650545755 (Object_t * __this /* static, unused */, Path_t3978043016 * ___p, int32_t ___drawSubdivisionsXSegment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::RefreshNonLinearDrawWps(DG.Tweening.Plugins.Core.PathCore.Path)
extern "C"  void Path_RefreshNonLinearDrawWps_m1666060086 (Object_t * __this /* static, unused */, Path_t3978043016 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::Destroy()
extern "C"  void Path_Destroy_m2937579435 (Path_t3978043016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.Plugins.Core.PathCore.Path::CloneIncremental(System.Int32)
extern "C"  Path_t3978043016 * Path_CloneIncremental_m2073021606 (Path_t3978043016 * __this, int32_t ___loopIncrement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::AssignWaypoints(UnityEngine.Vector3[],System.Boolean)
extern "C"  void Path_AssignWaypoints_m4189685178 (Path_t3978043016 * __this, Vector3U5BU5D_t3227571696* ___newWps, bool ___cloneWps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::AssignDecoder(DG.Tweening.PathType)
extern "C"  void Path_AssignDecoder_m1466078043 (Path_t3978043016 * __this, int32_t ___pathType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::Draw()
extern "C"  void Path_Draw_m3565069845 (Path_t3978043016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.Path::Draw(DG.Tweening.Plugins.Core.PathCore.Path)
extern "C"  void Path_Draw_m403367419 (Object_t * __this /* static, unused */, Path_t3978043016 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;

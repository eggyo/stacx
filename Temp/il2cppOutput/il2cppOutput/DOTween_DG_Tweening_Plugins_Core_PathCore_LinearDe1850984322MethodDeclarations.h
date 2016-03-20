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

// DG.Tweening.Plugins.Core.PathCore.LinearDecoder
struct LinearDecoder_t1850984322;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t3978043016;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t348442707;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Core_PathCore_Path3978043016.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void DG.Tweening.Plugins.Core.PathCore.LinearDecoder::FinalizePath(DG.Tweening.Plugins.Core.PathCore.Path,UnityEngine.Vector3[],System.Boolean)
extern "C"  void LinearDecoder_FinalizePath_m3958872846 (LinearDecoder_t1850984322 * __this, Path_t3978043016 * ___p, Vector3U5BU5D_t3227571696* ___wps, bool ___isClosedPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.LinearDecoder::GetPoint(System.Single,UnityEngine.Vector3[],DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Core.PathCore.ControlPoint[])
extern "C"  Vector3_t3525329789  LinearDecoder_GetPoint_m286004887 (LinearDecoder_t1850984322 * __this, float ___perc, Vector3U5BU5D_t3227571696* ___wps, Path_t3978043016 * ___p, ControlPointU5BU5D_t348442707* ___controlPoints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.LinearDecoder::SetTimeToLengthTables(DG.Tweening.Plugins.Core.PathCore.Path,System.Int32)
extern "C"  void LinearDecoder_SetTimeToLengthTables_m1263866383 (LinearDecoder_t1850984322 * __this, Path_t3978043016 * ___p, int32_t ___subdivisions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.LinearDecoder::SetWaypointsLengths(DG.Tweening.Plugins.Core.PathCore.Path,System.Int32)
extern "C"  void LinearDecoder_SetWaypointsLengths_m3758798183 (LinearDecoder_t1850984322 * __this, Path_t3978043016 * ___p, int32_t ___subdivisions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Core.PathCore.LinearDecoder::.ctor()
extern "C"  void LinearDecoder__ctor_m3922522767 (LinearDecoder_t1850984322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

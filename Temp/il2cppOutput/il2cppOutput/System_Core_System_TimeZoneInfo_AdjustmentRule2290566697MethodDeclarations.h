#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.TimeZoneInfo/AdjustmentRule
struct AdjustmentRule_t2290566697;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "System_Core_System_TimeZoneInfo_TransitionTime1289309666.h"
#include "System_Core_System_TimeZoneInfo_AdjustmentRule2290566697.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.TimeZoneInfo/AdjustmentRule::.ctor(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C"  void AdjustmentRule__ctor_m1713846023 (AdjustmentRule_t2290566697 * __this, DateTime_t339033936  ___dateStart, DateTime_t339033936  ___dateEnd, TimeSpan_t763862892  ___daylightDelta, TransitionTime_t1289309666  ___daylightTransitionStart, TransitionTime_t1289309666  ___daylightTransitionEnd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateEnd()
extern "C"  DateTime_t339033936  AdjustmentRule_get_DateEnd_m3953845890 (AdjustmentRule_t2290566697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateStart()
extern "C"  DateTime_t339033936  AdjustmentRule_get_DateStart_m2606242505 (AdjustmentRule_t2290566697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::get_DaylightDelta()
extern "C"  TimeSpan_t763862892  AdjustmentRule_get_DaylightDelta_m3833226735 (AdjustmentRule_t2290566697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo/AdjustmentRule::CreateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C"  AdjustmentRule_t2290566697 * AdjustmentRule_CreateAdjustmentRule_m1656297573 (Object_t * __this /* static, unused */, DateTime_t339033936  ___dateStart, DateTime_t339033936  ___dateEnd, TimeSpan_t763862892  ___daylightDelta, TransitionTime_t1289309666  ___daylightTransitionStart, TransitionTime_t1289309666  ___daylightTransitionEnd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/AdjustmentRule::Equals(System.TimeZoneInfo/AdjustmentRule)
extern "C"  bool AdjustmentRule_Equals_m235226988 (AdjustmentRule_t2290566697 * __this, AdjustmentRule_t2290566697 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo/AdjustmentRule::GetHashCode()
extern "C"  int32_t AdjustmentRule_GetHashCode_m3596128762 (AdjustmentRule_t2290566697 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/AdjustmentRule::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void AdjustmentRule_GetObjectData_m3940129623 (AdjustmentRule_t2290566697 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/AdjustmentRule::OnDeserialization(System.Object)
extern "C"  void AdjustmentRule_OnDeserialization_m1048465261 (AdjustmentRule_t2290566697 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;

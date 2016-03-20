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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_TimeZoneInfo_TransitionTime1289309666.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32,System.Int32)
extern "C"  void TransitionTime__ctor_m189938936 (TransitionTime_t1289309666 * __this, DateTime_t339033936  ___timeOfDay, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32)
extern "C"  void TransitionTime__ctor_m108674623 (TransitionTime_t1289309666 * __this, DateTime_t339033936  ___timeOfDay, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFixedDateRule(System.DateTime,System.Int32,System.Int32)
extern "C"  TransitionTime_t1289309666  TransitionTime_CreateFixedDateRule_m3570077514 (Object_t * __this /* static, unused */, DateTime_t339033936  ___timeOfDay, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TransitionTime_GetObjectData_m2320602174 (TransitionTime_t1289309666 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.Object)
extern "C"  bool TransitionTime_Equals_m2637525629 (TransitionTime_t1289309666 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
extern "C"  bool TransitionTime_Equals_m147082508 (TransitionTime_t1289309666 * __this, TransitionTime_t1289309666  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo/TransitionTime::GetHashCode()
extern "C"  int32_t TransitionTime_GetHashCode_m2738946337 (TransitionTime_t1289309666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::OnDeserialization(System.Object)
extern "C"  void TransitionTime_OnDeserialization_m2922457318 (TransitionTime_t1289309666 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Equality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C"  bool TransitionTime_op_Equality_m3881305188 (Object_t * __this /* static, unused */, TransitionTime_t1289309666  ___t1, TransitionTime_t1289309666  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Inequality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C"  bool TransitionTime_op_Inequality_m3808521823 (Object_t * __this /* static, unused */, TransitionTime_t1289309666  ___t1, TransitionTime_t1289309666  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

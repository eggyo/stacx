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

// System.TimeZoneInfo
struct TimeZoneInfo_t4131446812;
// System.String
struct String_t;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t1713960724;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>
struct List_1_t3087525666;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t1459299685;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t2773072230;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t3660159136;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "System_Core_System_TimeZoneInfo4131446812.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_DateTime339033936.h"

// System.Void System.TimeZoneInfo::.ctor(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
extern "C"  void TimeZoneInfo__ctor_m1869617058 (TimeZoneInfo_t4131446812 * __this, String_t* ___id, TimeSpan_t763862892  ___baseUtcOffset, String_t* ___displayName, String_t* ___standardDisplayName, String_t* ___daylightDisplayName, AdjustmentRuleU5BU5D_t1713960724* ___adjustmentRules, bool ___disableDaylightSavingTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo::.cctor()
extern "C"  void TimeZoneInfo__cctor_m2439572696 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZoneInfo::get_BaseUtcOffset()
extern "C"  TimeSpan_t763862892  TimeZoneInfo_get_BaseUtcOffset_m418231789 (TimeZoneInfo_t4131446812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_DisplayName()
extern "C"  String_t* TimeZoneInfo_get_DisplayName_m3106101754 (TimeZoneInfo_t4131446812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_Id()
extern "C"  String_t* TimeZoneInfo_get_Id_m4206484496 (TimeZoneInfo_t4131446812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::get_Local()
extern "C"  TimeZoneInfo_t4131446812 * TimeZoneInfo_get_Local_m1804805602 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_StandardName()
extern "C"  String_t* TimeZoneInfo_get_StandardName_m602252701 (TimeZoneInfo_t4131446812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_TimeZoneDirectory()
extern "C"  String_t* TimeZoneInfo_get_TimeZoneDirectory_m3879840545 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String)
extern "C"  TimeZoneInfo_t4131446812 * TimeZoneInfo_CreateCustomTimeZone_m2111048456 (Object_t * __this /* static, unused */, String_t* ___id, TimeSpan_t763862892  ___baseUtcOffset, String_t* ___displayName, String_t* ___standardDisplayName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[])
extern "C"  TimeZoneInfo_t4131446812 * TimeZoneInfo_CreateCustomTimeZone_m2240749902 (Object_t * __this /* static, unused */, String_t* ___id, TimeSpan_t763862892  ___baseUtcOffset, String_t* ___displayName, String_t* ___standardDisplayName, String_t* ___daylightDisplayName, AdjustmentRuleU5BU5D_t1713960724* ___adjustmentRules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
extern "C"  TimeZoneInfo_t4131446812 * TimeZoneInfo_CreateCustomTimeZone_m1574743151 (Object_t * __this /* static, unused */, String_t* ___id, TimeSpan_t763862892  ___baseUtcOffset, String_t* ___displayName, String_t* ___standardDisplayName, String_t* ___daylightDisplayName, AdjustmentRuleU5BU5D_t1713960724* ___adjustmentRules, bool ___disableDaylightSavingTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::Equals(System.TimeZoneInfo)
extern "C"  bool TimeZoneInfo_Equals_m2011180050 (TimeZoneInfo_t4131446812 * __this, TimeZoneInfo_t4131446812 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::FindSystemTimeZoneByFileName(System.String,System.String)
extern "C"  TimeZoneInfo_t4131446812 * TimeZoneInfo_FindSystemTimeZoneByFileName_m3927988317 (Object_t * __this /* static, unused */, String_t* ___id, String_t* ___filepath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::GetAdjustmentRules()
extern "C"  AdjustmentRuleU5BU5D_t1713960724* TimeZoneInfo_GetAdjustmentRules_m1143142906 (TimeZoneInfo_t4131446812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo::GetHashCode()
extern "C"  int32_t TimeZoneInfo_GetHashCode_m3350099154 (TimeZoneInfo_t4131446812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TimeZoneInfo_GetObjectData_m813942419 (TimeZoneInfo_t4131446812 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::HasSameRules(System.TimeZoneInfo)
extern "C"  bool TimeZoneInfo_HasSameRules_m2815393690 (TimeZoneInfo_t4131446812 * __this, TimeZoneInfo_t4131446812 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo::OnDeserialization(System.Object)
extern "C"  void TimeZoneInfo_OnDeserialization_m3643994545 (TimeZoneInfo_t4131446812 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::ToString()
extern "C"  String_t* TimeZoneInfo_ToString_m371589912 (TimeZoneInfo_t4131446812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::ValidTZFile(System.Byte[],System.Int32)
extern "C"  bool TimeZoneInfo_ValidTZFile_m3794122419 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo::SwapInt32(System.Int32)
extern "C"  int32_t TimeZoneInfo_SwapInt32_m3601450189 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo::ReadBigEndianInt32(System.Byte[],System.Int32)
extern "C"  int32_t TimeZoneInfo_ReadBigEndianInt32_m2013217080 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___buffer, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::ParseTZBuffer(System.String,System.Byte[],System.Int32)
extern "C"  TimeZoneInfo_t4131446812 * TimeZoneInfo_ParseTZBuffer_m3136713963 (Object_t * __this /* static, unused */, String_t* ___id, ByteU5BU5D_t58506160* ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> System.TimeZoneInfo::ValidateRules(System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>)
extern "C"  List_1_t3087525666 * TimeZoneInfo_ValidateRules_m1082179371 (Object_t * __this /* static, unused */, List_1_t3087525666 * ___adjustmentRules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.TimeZoneInfo::ParseAbbreviations(System.Byte[],System.Int32,System.Int32)
extern "C"  Dictionary_2_t1459299685 * TimeZoneInfo_ParseAbbreviations_m883393013 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType> System.TimeZoneInfo::ParseTimesTypes(System.Byte[],System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.String>)
extern "C"  Dictionary_2_t2773072230 * TimeZoneInfo_ParseTimesTypes_m298446159 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___buffer, int32_t ___index, int32_t ___count, Dictionary_2_t1459299685 * ___abbreviations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>> System.TimeZoneInfo::ParseTransitions(System.Byte[],System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>)
extern "C"  List_1_t3660159136 * TimeZoneInfo_ParseTransitions_m2742103091 (Object_t * __this /* static, unused */, ByteU5BU5D_t58506160* ___buffer, int32_t ___index, int32_t ___count, Dictionary_2_t2773072230 * ___time_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZoneInfo::DateTimeFromUnixTime(System.Int64)
extern "C"  DateTime_t339033936  TimeZoneInfo_DateTimeFromUnixTime_m1834568322 (Object_t * __this /* static, unused */, int64_t ___unix_time, const MethodInfo* method) IL2CPP_METHOD_ATTR;

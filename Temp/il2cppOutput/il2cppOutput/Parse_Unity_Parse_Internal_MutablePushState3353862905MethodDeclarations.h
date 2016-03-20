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

// Parse.Internal.MutablePushState
struct MutablePushState_t3353862905;
// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1306587746;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.String
struct String_t;
// Parse.Internal.IPushState
struct IPushState_t2870390038;
// System.Action`1<Parse.Internal.MutablePushState>
struct Action_1_t3502315610;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"
#include "mscorlib_System_Nullable_1_gen3649900800.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// Parse.ParseQuery`1<Parse.ParseInstallation> Parse.Internal.MutablePushState::get_Query()
extern "C"  ParseQuery_1_t1306587746 * MutablePushState_get_Query_m2306938625 (MutablePushState_t3353862905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutablePushState::set_Query(Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C"  void MutablePushState_set_Query_m888523914 (MutablePushState_t3353862905 * __this, ParseQuery_1_t1306587746 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.Internal.MutablePushState::get_Channels()
extern "C"  Object_t* MutablePushState_get_Channels_m2881694857 (MutablePushState_t3353862905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutablePushState::set_Channels(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  void MutablePushState_set_Channels_m1221152194 (MutablePushState_t3353862905 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.Internal.MutablePushState::get_Expiration()
extern "C"  Nullable_1_t3225071844  MutablePushState_get_Expiration_m3302219646 (MutablePushState_t3353862905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutablePushState::set_Expiration(System.Nullable`1<System.DateTime>)
extern "C"  void MutablePushState_set_Expiration_m3518095337 (MutablePushState_t3353862905 * __this, Nullable_1_t3225071844  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.TimeSpan> Parse.Internal.MutablePushState::get_ExpirationInterval()
extern "C"  Nullable_1_t3649900800  MutablePushState_get_ExpirationInterval_m2253100167 (MutablePushState_t3353862905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutablePushState::set_ExpirationInterval(System.Nullable`1<System.TimeSpan>)
extern "C"  void MutablePushState_set_ExpirationInterval_m137288810 (MutablePushState_t3353862905 * __this, Nullable_1_t3649900800  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.Internal.MutablePushState::get_PushTime()
extern "C"  Nullable_1_t3225071844  MutablePushState_get_PushTime_m308691798 (MutablePushState_t3353862905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutablePushState::set_PushTime(System.Nullable`1<System.DateTime>)
extern "C"  void MutablePushState_set_PushTime_m2754432065 (MutablePushState_t3353862905 * __this, Nullable_1_t3225071844  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.Internal.MutablePushState::get_Data()
extern "C"  Object_t* MutablePushState_get_Data_m665224706 (MutablePushState_t3353862905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutablePushState::set_Data(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void MutablePushState_set_Data_m3298189353 (MutablePushState_t3353862905 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.MutablePushState::get_Alert()
extern "C"  String_t* MutablePushState_get_Alert_m2384050380 (MutablePushState_t3353862905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutablePushState::set_Alert(System.String)
extern "C"  void MutablePushState_set_Alert_m1126526957 (MutablePushState_t3353862905 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IPushState Parse.Internal.MutablePushState::MutatedClone(System.Action`1<Parse.Internal.MutablePushState>)
extern "C"  Object_t * MutablePushState_MutatedClone_m3396816751 (MutablePushState_t3353862905 * __this, Action_1_t3502315610 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.MutablePushState Parse.Internal.MutablePushState::MutableClone()
extern "C"  MutablePushState_t3353862905 * MutablePushState_MutableClone_m575556695 (MutablePushState_t3353862905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.MutablePushState::Equals(System.Object)
extern "C"  bool MutablePushState_Equals_m565937045 (MutablePushState_t3353862905 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.Internal.MutablePushState::GetHashCode()
extern "C"  int32_t MutablePushState_GetHashCode_m2008027949 (MutablePushState_t3353862905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutablePushState::.ctor()
extern "C"  void MutablePushState__ctor_m867555096 (MutablePushState_t3353862905 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

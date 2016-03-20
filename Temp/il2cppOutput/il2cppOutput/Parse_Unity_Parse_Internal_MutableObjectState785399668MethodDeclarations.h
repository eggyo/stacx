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

// Parse.Internal.MutableObjectState
struct MutableObjectState_t785399668;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t2574693322;
// Parse.Internal.IObjectState
struct IObjectState_t24442449;
// System.Action`1<Parse.Internal.MutableObjectState>
struct Action_1_t933852373;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t3446442070;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"

// System.Boolean Parse.Internal.MutableObjectState::get_IsNew()
extern "C"  bool MutableObjectState_get_IsNew_m1163047636 (MutableObjectState_t785399668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutableObjectState::set_IsNew(System.Boolean)
extern "C"  void MutableObjectState_set_IsNew_m1971281355 (MutableObjectState_t785399668 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.MutableObjectState::get_ClassName()
extern "C"  String_t* MutableObjectState_get_ClassName_m2591875320 (MutableObjectState_t785399668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutableObjectState::set_ClassName(System.String)
extern "C"  void MutableObjectState_set_ClassName_m3960370945 (MutableObjectState_t785399668 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.MutableObjectState::get_ObjectId()
extern "C"  String_t* MutableObjectState_get_ObjectId_m2565044263 (MutableObjectState_t785399668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutableObjectState::set_ObjectId(System.String)
extern "C"  void MutableObjectState_set_ObjectId_m3354942820 (MutableObjectState_t785399668 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.Internal.MutableObjectState::get_UpdatedAt()
extern "C"  Nullable_1_t3225071844  MutableObjectState_get_UpdatedAt_m4093967462 (MutableObjectState_t785399668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutableObjectState::set_UpdatedAt(System.Nullable`1<System.DateTime>)
extern "C"  void MutableObjectState_set_UpdatedAt_m741655261 (MutableObjectState_t785399668 * __this, Nullable_1_t3225071844  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.Internal.MutableObjectState::get_CreatedAt()
extern "C"  Nullable_1_t3225071844  MutableObjectState_get_CreatedAt_m4173839379 (MutableObjectState_t785399668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutableObjectState::set_CreatedAt(System.Nullable`1<System.DateTime>)
extern "C"  void MutableObjectState_set_CreatedAt_m3087095626 (MutableObjectState_t785399668 * __this, Nullable_1_t3225071844  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.Internal.MutableObjectState::get_ServerData()
extern "C"  Object_t* MutableObjectState_get_ServerData_m2865966688 (MutableObjectState_t785399668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutableObjectState::set_ServerData(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void MutableObjectState_set_ServerData_m232638091 (MutableObjectState_t785399668 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.Internal.MutableObjectState::get_Item(System.String)
extern "C"  Object_t * MutableObjectState_get_Item_m2762469588 (MutableObjectState_t785399668 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.MutableObjectState::ContainsKey(System.String)
extern "C"  bool MutableObjectState_ContainsKey_m3340911611 (MutableObjectState_t785399668 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutableObjectState::Apply(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C"  void MutableObjectState_Apply_m85093378 (MutableObjectState_t785399668 * __this, Object_t* ___operationSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutableObjectState::Apply(Parse.Internal.IObjectState)
extern "C"  void MutableObjectState_Apply_m716170442 (MutableObjectState_t785399668 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IObjectState Parse.Internal.MutableObjectState::MutatedClone(System.Action`1<Parse.Internal.MutableObjectState>)
extern "C"  Object_t * MutableObjectState_MutatedClone_m3765929312 (MutableObjectState_t785399668 * __this, Action_1_t933852373 * ___func, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.MutableObjectState Parse.Internal.MutableObjectState::MutableClone()
extern "C"  MutableObjectState_t785399668 * MutableObjectState_MutableClone_m1004568909 (MutableObjectState_t785399668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Parse.Internal.MutableObjectState::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator()
extern "C"  Object_t* MutableObjectState_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_GetEnumerator_m858801323 (MutableObjectState_t785399668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.Internal.MutableObjectState::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * MutableObjectState_System_Collections_IEnumerable_GetEnumerator_m3333614444 (MutableObjectState_t785399668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.MutableObjectState::.ctor()
extern "C"  void MutableObjectState__ctor_m1082639229 (MutableObjectState_t785399668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

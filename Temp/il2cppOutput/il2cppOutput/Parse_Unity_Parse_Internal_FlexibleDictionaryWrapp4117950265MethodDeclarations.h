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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>
struct FlexibleDictionaryWrapper_2_t4117950265;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t1297090216;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3313246173;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t384223800;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t1161783141;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23973643989.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3845163990_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3845163990(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4117950265 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3845163990_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m481786122_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m481786122(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4117950265 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m481786122_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m134378927_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m134378927(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4117950265 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m134378927_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3018319122_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3018319122(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4117950265 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3018319122_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1407326223_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1407326223(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4117950265 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1407326223_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2159475641_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2159475641(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4117950265 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2159475641_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m166516530_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m166516530(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4117950265 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m166516530_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Item(System.String)
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Item_m3065783464_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3065783464(__this, ___key, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4117950265 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3065783464_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m4150726781_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m4150726781(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4117950265 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m4150726781_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3692722457_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3692722457(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4117950265 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3692722457_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1848126220_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1848126220(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4117950265 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1848126220_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m543469195_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m543469195(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4117950265 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m543469195_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1182293619_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, KeyValuePair_2U5BU5D_t384223800* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1182293619(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4117950265 *, KeyValuePair_2U5BU5D_t384223800*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1182293619_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3324947263_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3324947263(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4117950265 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3324947263_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3256345924_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3256345924(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4117950265 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3256345924_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m867043334_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m867043334(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4117950265 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m867043334_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1883363704_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1883363704(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4117950265 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1883363704_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2338778568_gshared (FlexibleDictionaryWrapper_2_t4117950265 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2338778568(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t4117950265 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2338778568_gshared)(__this, method)

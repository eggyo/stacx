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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>
struct FlexibleDictionaryWrapper_2_t1240660414;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t3771572712;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t3313246268;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t3622386045;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t1161783236;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23973644084.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2449390295_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2449390295(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1240660414 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2449390295_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2468273321_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2468273321(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1240660414 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2468273321_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m296175280_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m296175280(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1240660414 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m296175280_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2431770259_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2431770259(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1240660414 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2431770259_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2018306670_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2018306670(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1240660414 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2018306670_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3936438266_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3936438266(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1240660414 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3936438266_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m688574451_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m688574451(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1240660414 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m688574451_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Item(System.String)
extern "C"  int64_t FlexibleDictionaryWrapper_2_get_Item_m1561862919_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1561862919(__this, ___key, method) ((  int64_t (*) (FlexibleDictionaryWrapper_2_t1240660414 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1561862919_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1752700990_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1752700990(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1240660414 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1752700990_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2296948762_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2296948762(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1240660414 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2296948762_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1110486187_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1110486187(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1240660414 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1110486187_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3310816042_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3310816042(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1240660414 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3310816042_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2976067380_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, KeyValuePair_2U5BU5D_t3622386045* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2976067380(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1240660414 *, KeyValuePair_2U5BU5D_t3622386045*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2976067380_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2156885726_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2156885726(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1240660414 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2156885726_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m209507205_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m209507205(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1240660414 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m209507205_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3497853029_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3497853029(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1240660414 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3497853029_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m239908951_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m239908951(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1240660414 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m239908951_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2996510537_gshared (FlexibleDictionaryWrapper_2_t1240660414 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2996510537(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1240660414 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2996510537_gshared)(__this, method)
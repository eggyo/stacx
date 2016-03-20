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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>
struct FlexibleDictionaryWrapper_2_t4186671326;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t1365811277;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2914275129_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2914275129(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4186671326 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2914275129_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2247436679_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2247436679(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4186671326 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2247436679_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3286281850_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3286281850(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4186671326 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3286281850_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2688375825_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2688375825(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4186671326 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2688375825_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1775258724_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1775258724(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4186671326 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1775258724_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2912694340_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2912694340(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4186671326 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2912694340_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1504046413_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1504046413(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4186671326 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1504046413_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Item(System.String)
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Item_m2306439675_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2306439675(__this, ___key, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4186671326 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2306439675_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m4135921184_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m4135921184(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4186671326 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m4135921184_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2761833596_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2761833596(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4186671326 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2761833596_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2588439945_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2588439945(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4186671326 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2588439945_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1309590432_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1309590432(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4186671326 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1309590432_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1704275734_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, KeyValuePair_2U5BU5D_t384223800* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1704275734(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4186671326 *, KeyValuePair_2U5BU5D_t384223800*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1704275734_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2889445576_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2889445576(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4186671326 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2889445576_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1867878351_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1867878351(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4186671326 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1867878351_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1100242523_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1100242523(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4186671326 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1100242523_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m4292799063_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m4292799063(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4186671326 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m4292799063_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3264748139_gshared (FlexibleDictionaryWrapper_2_t4186671326 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3264748139(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t4186671326 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3264748139_gshared)(__this, method)

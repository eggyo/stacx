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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>
struct FlexibleDictionaryWrapper_2_t493456734;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3024369032;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3128009917_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3128009917(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t493456734 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3128009917_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2380861059_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2380861059(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t493456734 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2380861059_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m4284197630_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m4284197630(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t493456734 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m4284197630_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1560390165_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1560390165(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t493456734 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1560390165_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m969051488_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m969051488(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t493456734 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m969051488_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3466639816_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3466639816(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t493456734 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3466639816_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m795729617_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m795729617(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t493456734 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m795729617_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::get_Item(System.String)
extern "C"  int64_t FlexibleDictionaryWrapper_2_get_Item_m1611406391_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1611406391(__this, ___key, method) ((  int64_t (*) (FlexibleDictionaryWrapper_2_t493456734 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1611406391_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2909077156_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2909077156(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t493456734 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2909077156_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2975568384_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2975568384(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t493456734 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2975568384_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3107836549_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3107836549(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t493456734 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3107836549_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3252833692_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3252833692(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t493456734 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3252833692_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m996256666_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, KeyValuePair_2U5BU5D_t3622386045* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m996256666(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t493456734 *, KeyValuePair_2U5BU5D_t3622386045*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m996256666_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1464200772_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1464200772(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t493456734 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1464200772_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m285581651_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m285581651(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t493456734 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m285581651_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2541369175_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2541369175(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t493456734 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2541369175_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m399550227_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m399550227(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t493456734 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m399550227_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1949311471_gshared (FlexibleDictionaryWrapper_2_t493456734 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1949311471(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t493456734 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1949311471_gshared)(__this, method)

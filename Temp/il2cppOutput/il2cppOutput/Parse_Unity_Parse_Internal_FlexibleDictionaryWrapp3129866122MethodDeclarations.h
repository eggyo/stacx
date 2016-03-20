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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>
struct FlexibleDictionaryWrapper_2_t3129866122;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t1365811124;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3599785681_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3599785681(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3129866122 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3599785681_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2560526575_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2560526575(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3129866122 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2560526575_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1878406674_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1878406674(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3129866122 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1878406674_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3888452521_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3888452521(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3129866122 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3888452521_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2258265548_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2258265548(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3129866122 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2258265548_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m132359644_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m132359644(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3129866122 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m132359644_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3726515941_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3726515941(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3129866122 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3726515941_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Item(System.String)
extern "C"  int64_t FlexibleDictionaryWrapper_2_get_Item_m2619529571_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2619529571(__this, ___key, method) ((  int64_t (*) (FlexibleDictionaryWrapper_2_t3129866122 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2619529571_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m4082575288_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m4082575288(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3129866122 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m4082575288_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3447344148_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3447344148(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3129866122 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3447344148_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m573416689_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m573416689(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3129866122 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m573416689_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3938759432_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3938759432(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3129866122 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3938759432_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2824177838_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, KeyValuePair_2U5BU5D_t3622386045* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2824177838(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3129866122 *, KeyValuePair_2U5BU5D_t3622386045*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2824177838_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1437117488_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1437117488(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3129866122 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1437117488_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2997564775_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2997564775(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3129866122 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2997564775_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m575604675_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m575604675(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3129866122 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m575604675_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2666672575_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2666672575(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3129866122 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2666672575_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3061179907_gshared (FlexibleDictionaryWrapper_2_t3129866122 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3061179907(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3129866122 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3061179907_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>
struct FlexibleDictionaryWrapper_2_t1119557813;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1107727936_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1107727936(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1119557813 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1107727936_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1863623904_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1863623904(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1119557813 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1863623904_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m278232857_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m278232857(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1119557813 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m278232857_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m130550012_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m130550012(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1119557813 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m130550012_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3434435685_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3434435685(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1119557813 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3434435685_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2389953955_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2389953955(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1119557813 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2389953955_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1124074524_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1124074524(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1119557813 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1124074524_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Item(System.String)
extern "C"  int64_t FlexibleDictionaryWrapper_2_get_Item_m957213502_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m957213502(__this, ___key, method) ((  int64_t (*) (FlexibleDictionaryWrapper_2_t1119557813 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m957213502_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1689901671_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1689901671(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1119557813 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1689901671_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m955286403_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m955286403(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1119557813 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m955286403_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1452524258_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1452524258(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1119557813 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1452524258_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1781328225_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1781328225(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1119557813 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1781328225_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m707551837_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, KeyValuePair_2U5BU5D_t3622386045* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m707551837(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1119557813 *, KeyValuePair_2U5BU5D_t3622386045*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m707551837_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3833502101_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3833502101(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1119557813 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3833502101_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m49924910_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m49924910(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1119557813 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m49924910_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3000172636_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3000172636(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1119557813 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3000172636_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3421349774_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3421349774(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1119557813 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3421349774_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2398751026_gshared (FlexibleDictionaryWrapper_2_t1119557813 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2398751026(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1119557813 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2398751026_gshared)(__this, method)

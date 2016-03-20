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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>
struct FlexibleDictionaryWrapper_2_t3061145214;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t1297090216;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m956755287_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m956755287(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3061145214 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m956755287_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3021158953_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3021158953(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3061145214 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3021158953_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3331402800_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3331402800(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3061145214 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3331402800_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1670233491_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1670233491(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3061145214 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1670233491_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2670302446_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2670302446(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3061145214 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2670302446_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m4075359610_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m4075359610(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3061145214 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m4075359610_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1736348531_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1736348531(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3061145214 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1736348531_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Item(System.String)
extern "C"  int64_t FlexibleDictionaryWrapper_2_get_Item_m1310188999_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1310188999(__this, ___key, method) ((  int64_t (*) (FlexibleDictionaryWrapper_2_t3061145214 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1310188999_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1294084798_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1294084798(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3061145214 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1294084798_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m804313754_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m804313754(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3061145214 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m804313754_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m4136634923_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m4136634923(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3061145214 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m4136634923_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m612636074_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m612636074(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3061145214 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m612636074_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3266560436_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, KeyValuePair_2U5BU5D_t3622386045* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3266560436(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3061145214 *, KeyValuePair_2U5BU5D_t3622386045*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3266560436_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m188998366_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m188998366(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3061145214 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m188998366_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1275042053_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1275042053(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3061145214 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1275042053_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1953147621_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1953147621(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3061145214 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1953147621_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m849619351_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m849619351(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3061145214 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m849619351_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2391955913_gshared (FlexibleDictionaryWrapper_2_t3061145214 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2391955913(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3061145214 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2391955913_gshared)(__this, method)

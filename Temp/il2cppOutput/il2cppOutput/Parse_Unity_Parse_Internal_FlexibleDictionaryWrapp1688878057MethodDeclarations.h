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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>
struct FlexibleDictionaryWrapper_2_t1688878057;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t1297103094;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t3313246115;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t2250106010;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t1161783083;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23973643931.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2017132354_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2017132354(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1688878057 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2017132354_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3732422942_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3732422942(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1688878057 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3732422942_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1228260635_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1228260635(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1688878057 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1228260635_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1805618302_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1805618302(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1688878057 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1805618302_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2510148899_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2510148899(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1688878057 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2510148899_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m756288037_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m756288037(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1688878057 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m756288037_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2992133022_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2992133022(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1688878057 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2992133022_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::get_Item(System.String)
extern "C"  int16_t FlexibleDictionaryWrapper_2_get_Item_m2021452988_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2021452988(__this, ___key, method) ((  int16_t (*) (FlexibleDictionaryWrapper_2_t1688878057 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2021452988_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3104060649_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3104060649(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1688878057 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3104060649_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1864690821_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1864690821(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1688878057 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1864690821_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2810420000_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2810420000(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1688878057 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2810420000_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3644161695_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3644161695(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1688878057 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3644161695_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m952979167_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, KeyValuePair_2U5BU5D_t2250106010* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m952979167(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1688878057 *, KeyValuePair_2U5BU5D_t2250106010*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m952979167_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m90960211_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m90960211(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1688878057 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m90960211_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m374819760_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m374819760(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1688878057 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m374819760_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2161888538_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2161888538(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1688878057 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2161888538_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2760242572_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2760242572(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1688878057 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2760242572_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Char>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3110358836_gshared (FlexibleDictionaryWrapper_2_t1688878057 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3110358836(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1688878057 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3110358836_gshared)(__this, method)

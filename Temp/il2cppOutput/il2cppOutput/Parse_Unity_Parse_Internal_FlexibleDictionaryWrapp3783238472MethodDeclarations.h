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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>
struct FlexibleDictionaryWrapper_2_t3783238472;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Char>
struct ICollection_1_t3244538085;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>[]
struct KeyValuePair_2U5BU5D_t1991099408;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>
struct IEnumerator_1_t1093075053;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23904935901.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3456373117_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3456373117(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3783238472 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3456373117_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1721244099_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1721244099(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3783238472 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1721244099_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m4113761470_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m4113761470(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3783238472 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m4113761470_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1122810453_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1122810453(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3783238472 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1122810453_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3651804064_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3651804064(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3783238472 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3651804064_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2122171272_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2122171272(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3783238472 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2122171272_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m234277521_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m234277521(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3783238472 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m234277521_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m1780247095_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1780247095(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t3783238472 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1780247095_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m479918948_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m479918948(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3783238472 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m479918948_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3303931584_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3303931584(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3783238472 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3303931584_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m636181957_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m636181957(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3783238472 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m636181957_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2270284764_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2270284764(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3783238472 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2270284764_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1870293082_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, KeyValuePair_2U5BU5D_t1991099408* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1870293082(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3783238472 *, KeyValuePair_2U5BU5D_t1991099408*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1870293082_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1601559300_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1601559300(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3783238472 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1601559300_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2846763795_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2846763795(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3783238472 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2846763795_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1664370071_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1664370071(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3783238472 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1664370071_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2384713363_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2384713363(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3783238472 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2384713363_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3523520175_gshared (FlexibleDictionaryWrapper_2_t3783238472 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3523520175(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3783238472 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3523520175_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1599368879;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t3799288959;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t3321177450;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t3953378263;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t1169714418;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23981575266.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m73719474_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m73719474(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599368879 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m73719474_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3531466670_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3531466670(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599368879 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3531466670_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2800394635_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2800394635(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599368879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2800394635_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3083095918_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3083095918(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1599368879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3083095918_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2274161331_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2274161331(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599368879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2274161331_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1936577173_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1936577173(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599368879 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1936577173_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3842274830_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3842274830(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1599368879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3842274830_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Item(System.String)
extern "C"  int8_t FlexibleDictionaryWrapper_2_get_Item_m2625056268_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2625056268(__this, ___key, method) ((  int8_t (*) (FlexibleDictionaryWrapper_2_t1599368879 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2625056268_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3125815385_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3125815385(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599368879 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3125815385_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4216245237_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4216245237(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599368879 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4216245237_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3796394416_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3796394416(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599368879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3796394416_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m302258223_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m302258223(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599368879 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m302258223_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3530043983_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, KeyValuePair_2U5BU5D_t3953378263* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3530043983(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599368879 *, KeyValuePair_2U5BU5D_t3953378263*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3530043983_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m873144675_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m873144675(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1599368879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m873144675_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1219490848_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1219490848(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599368879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1219490848_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2359528106_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2359528106(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599368879 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2359528106_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m4013267036_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m4013267036(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1599368879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m4013267036_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2508684964_gshared (FlexibleDictionaryWrapper_2_t1599368879 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2508684964(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1599368879 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2508684964_gshared)(__this, method)

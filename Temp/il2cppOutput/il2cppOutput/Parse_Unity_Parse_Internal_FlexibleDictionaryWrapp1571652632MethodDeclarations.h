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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>
struct FlexibleDictionaryWrapper_2_t1571652632;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t3771572712;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m429951721_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m429951721(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1571652632 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m429951721_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1278647255_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1278647255(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1571652632 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1278647255_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2216169666_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2216169666(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1571652632 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2216169666_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1737297061_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1737297061(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1571652632 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1737297061_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2030476572_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2030476572(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1571652632 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2030476572_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m738376844_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m738376844(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1571652632 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m738376844_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3314729349_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3314729349(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1571652632 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3314729349_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Item(System.String)
extern "C"  int8_t FlexibleDictionaryWrapper_2_get_Item_m372236853_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m372236853(__this, ___key, method) ((  int8_t (*) (FlexibleDictionaryWrapper_2_t1571652632 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m372236853_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m31368656_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m31368656(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1571652632 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m31368656_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m277510188_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m277510188(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1571652632 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m277510188_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1507362777_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1507362777(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1571652632 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1507362777_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3910039128_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3910039128(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1571652632 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3910039128_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3626753734_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, KeyValuePair_2U5BU5D_t3953378263* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3626753734(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1571652632 *, KeyValuePair_2U5BU5D_t3953378263*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3626753734_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2103053068_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2103053068(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1571652632 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2103053068_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1504554007_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1504554007(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1571652632 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1504554007_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2010210067_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2010210067(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1571652632 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2010210067_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3191178629_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3191178629(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1571652632 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3191178629_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m562310235_gshared (FlexibleDictionaryWrapper_2_t1571652632 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m562310235(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1571652632 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m562310235_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>
struct FlexibleDictionaryWrapper_2_t1498579543;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1365811182;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2354965498_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2354965498(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1498579543 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2354965498_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m278214502_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m278214502(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1498579543 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m278214502_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m26069459_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m26069459(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1498579543 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m26069459_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2168979766_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2168979766(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1498579543 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2168979766_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3985882475_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3985882475(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1498579543 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3985882475_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3788743901_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3788743901(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1498579543 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3788743901_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m4290148950_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m4290148950(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1498579543 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m4290148950_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m2862211844_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2862211844(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t1498579543 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2862211844_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3144543137_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3144543137(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1498579543 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3144543137_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2202523965_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2202523965(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1498579543 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2202523965_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3282444648_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3282444648(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1498579543 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3282444648_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m4227974375_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m4227974375(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1498579543 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m4227974375_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m755203479_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, KeyValuePair_2U5BU5D_t1991099408* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m755203479(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1498579543 *, KeyValuePair_2U5BU5D_t1991099408*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m755203479_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2765231003_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2765231003(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1498579543 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2765231003_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2790479464_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2790479464(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1498579543 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2790479464_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3440706914_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3440706914(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1498579543 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3440706914_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m67220436_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m67220436(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1498579543 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m67220436_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1199753196_gshared (FlexibleDictionaryWrapper_2_t1498579543 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1199753196(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1498579543 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1199753196_gshared)(__this, method)

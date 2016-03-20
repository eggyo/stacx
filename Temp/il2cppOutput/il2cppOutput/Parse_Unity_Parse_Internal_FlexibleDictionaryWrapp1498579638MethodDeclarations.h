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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>
struct FlexibleDictionaryWrapper_2_t1498579638;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t1365811277;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2812397307_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2812397307(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1498579638 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2812397307_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1437232901_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1437232901(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1498579638 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1437232901_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1101101524_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1101101524(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1498579638 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1101101524_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1385550647_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1385550647(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1498579638 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1385550647_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4219490506_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4219490506(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1498579638 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4219490506_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m88707102_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m88707102(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1498579638 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m88707102_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3034042391_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3034042391(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1498579638 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3034042391_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m4021230243_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m4021230243(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t1498579638 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m4021230243_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1163239266_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1163239266(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1498579638 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1163239266_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2659955774_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2659955774(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1498579638 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2659955774_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m75790087_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m75790087(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1498579638 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m75790087_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m698589830_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m698589830(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1498579638 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m698589830_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2899376728_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, KeyValuePair_2U5BU5D_t1991099408* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2899376728(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1498579638 *, KeyValuePair_2U5BU5D_t1991099408*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2899376728_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m4248732090_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m4248732090(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1498579638 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m4248732090_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2606883753_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2606883753(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1498579638 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2606883753_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2860498625_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2860498625(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1498579638 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2860498625_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1446771315_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1446771315(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1498579638 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1446771315_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4118244717_gshared (FlexibleDictionaryWrapper_2_t1498579638 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4118244717(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1498579638 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4118244717_gshared)(__this, method)

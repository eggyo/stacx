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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>
struct FlexibleDictionaryWrapper_2_t1550261785;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3024369032;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3313246173;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t384223800;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t1161783141;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23973643989.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2041905630_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2041905630(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1550261785 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2041905630_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3478804482_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3478804482(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1550261785 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3478804482_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2645785887_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2645785887(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1550261785 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2645785887_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m140238390_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m140238390(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1550261785 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m140238390_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3852872351_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3852872351(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1550261785 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3852872351_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3187715881_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3187715881(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1550261785 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3187715881_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1829473970_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1829473970(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1550261785 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1829473970_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::get_Item(System.String)
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Item_m2709349814_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2709349814(__this, ___key, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1550261785 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2709349814_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m353422469_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m353422469(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1550261785 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m353422469_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1889464097_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1889464097(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1550261785 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1889464097_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m160954884_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m160954884(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1550261785 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m160954884_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m4286643483_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m4286643483(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1550261785 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m4286643483_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m945709691_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, KeyValuePair_2U5BU5D_t384223800* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m945709691(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1550261785 *, KeyValuePair_2U5BU5D_t384223800*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m945709691_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m389168707_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m389168707(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1550261785 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m389168707_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3868620980_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3868620980(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1550261785 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3868620980_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m397195926_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m397195926(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1550261785 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m397195926_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1762058130_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1762058130(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1550261785 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1762058130_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2585958800_gshared (FlexibleDictionaryWrapper_2_t1550261785 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2585958800(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1550261785 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2585958800_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>
struct FlexibleDictionaryWrapper_2_t4046769732;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3024369032;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1302937806;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t2880731747;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t3446442070;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21963335622.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m731249481_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m731249481(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4046769732 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m731249481_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1935288183_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1935288183(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4046769732 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1935288183_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3895520802_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3895520802(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4046769732 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3895520802_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1349390469_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1349390469(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4046769732 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1349390469_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2339431356_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2339431356(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4046769732 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2339431356_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3046642156_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3046642156(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4046769732 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3046642156_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3712338149_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3712338149(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4046769732 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3712338149_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::get_Item(System.String)
extern "C"  Object_t * FlexibleDictionaryWrapper_2_get_Item_m1116493973_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1116493973(__this, ___key, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t4046769732 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1116493973_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m457268784_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m457268784(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4046769732 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m457268784_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m578807948_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m578807948(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4046769732 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m578807948_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m4291253113_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m4291253113(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4046769732 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m4291253113_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m235787512_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m235787512(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4046769732 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m235787512_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3783915302_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, KeyValuePair_2U5BU5D_t2880731747* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3783915302(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4046769732 *, KeyValuePair_2U5BU5D_t2880731747*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3783915302_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3392395308_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3392395308(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4046769732 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3392395308_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2354692471_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2354692471(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4046769732 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2354692471_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2757223859_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2757223859(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4046769732 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2757223859_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2845248869_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2845248869(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4046769732 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2845248869_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m987940027_gshared (FlexibleDictionaryWrapper_2_t4046769732 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m987940027(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t4046769732 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m987940027_gshared)(__this, method)

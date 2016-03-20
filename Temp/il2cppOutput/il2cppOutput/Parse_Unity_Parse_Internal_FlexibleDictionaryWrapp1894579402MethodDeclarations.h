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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>
struct FlexibleDictionaryWrapper_2_t1894579402;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t1373742459;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t676836727;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2379167990;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>
struct IEnumerator_1_t2820340991;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21337234543.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m4270868773_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m4270868773(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1894579402 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m4270868773_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2854058779_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, String_t* ___key, bool ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2854058779(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1894579402 *, String_t*, bool, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2854058779_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m939841382_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m939841382(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1894579402 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m939841382_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2518722173_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2518722173(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1894579402 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2518722173_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3235463160_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3235463160(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1894579402 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3235463160_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m876673072_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, String_t* ___key, bool* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m876673072(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1894579402 *, String_t*, bool*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m876673072_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2629787961_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2629787961(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1894579402 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2629787961_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::get_Item(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_get_Item_m2084604111_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2084604111(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1894579402 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2084604111_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1618260236_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, String_t* ___key, bool ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1618260236(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1894579402 *, String_t*, bool, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1618260236_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4118427240_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, KeyValuePair_2_t1337234543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4118427240(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1894579402 *, KeyValuePair_2_t1337234543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4118427240_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2370727709_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2370727709(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1894579402 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2370727709_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3972147764_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, KeyValuePair_2_t1337234543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3972147764(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1894579402 *, KeyValuePair_2_t1337234543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3972147764_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2815886850_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, KeyValuePair_2U5BU5D_t2379167990* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2815886850(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1894579402 *, KeyValuePair_2U5BU5D_t2379167990*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2815886850_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1107721948_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1107721948(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1894579402 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1107721948_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2608836539_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2608836539(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1894579402 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2608836539_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3243792879_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, KeyValuePair_2_t1337234543  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3243792879(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1894579402 *, KeyValuePair_2_t1337234543 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3243792879_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2552703915_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2552703915(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1894579402 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2552703915_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Boolean,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m649005655_gshared (FlexibleDictionaryWrapper_2_t1894579402 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m649005655(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1894579402 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m649005655_gshared)(__this, method)

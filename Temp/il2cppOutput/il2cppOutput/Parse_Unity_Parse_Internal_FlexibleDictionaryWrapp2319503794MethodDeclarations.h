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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>
struct FlexibleDictionaryWrapper_2_t2319503794;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t1297103094;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1298497725_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1298497725(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2319503794 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1298497725_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2354492035_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2354492035(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2319503794 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2354492035_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1411691518_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1411691518(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2319503794 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1411691518_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3081038229_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3081038229(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2319503794 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3081038229_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1270342752_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1270342752(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2319503794 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1270342752_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3233743560_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3233743560(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2319503794 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3233743560_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m895494609_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m895494609(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2319503794 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m895494609_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::get_Item(System.String)
extern "C"  Object_t * FlexibleDictionaryWrapper_2_get_Item_m2413495031_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2413495031(__this, ___key, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2319503794 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2413495031_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2245909156_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2245909156(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2319503794 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2245909156_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1146056192_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1146056192(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2319503794 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1146056192_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m4017321605_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m4017321605(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2319503794 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m4017321605_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1404298396_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1404298396(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2319503794 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1404298396_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2207680410_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, KeyValuePair_2U5BU5D_t2880731747* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2207680410(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2319503794 *, KeyValuePair_2U5BU5D_t2880731747*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2207680410_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2177078212_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2177078212(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2319503794 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2177078212_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m852879955_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m852879955(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2319503794 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m852879955_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3469053527_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3469053527(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2319503794 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3469053527_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3982962515_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3982962515(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2319503794 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3982962515_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Char>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m75904495_gshared (FlexibleDictionaryWrapper_2_t2319503794 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m75904495(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2319503794 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m75904495_gshared)(__this, method)

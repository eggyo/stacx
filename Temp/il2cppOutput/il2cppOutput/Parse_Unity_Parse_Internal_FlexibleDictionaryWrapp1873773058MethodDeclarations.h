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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>
struct FlexibleDictionaryWrapper_2_t1873773058;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t3347880305;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1468650413_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1468650413(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1873773058 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1468650413_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m477697427_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m477697427(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1873773058 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m477697427_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3958140294_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3958140294(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1873773058 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3958140294_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2392551785_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2392551785(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1873773058 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2392551785_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1171543512_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1171543512(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1873773058 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1171543512_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2724689488_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2724689488(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1873773058 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2724689488_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1654326601_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1654326601(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1873773058 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1654326601_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Item(System.String)
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Item_m3866254321_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3866254321(__this, ___key, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1873773058 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3866254321_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3322864020_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3322864020(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1873773058 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3322864020_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1316208880_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1316208880(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1873773058 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1316208880_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2623404437_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2623404437(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1873773058 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2623404437_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m539494420_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m539494420(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1873773058 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m539494420_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m801504906_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, KeyValuePair_2U5BU5D_t384223800* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m801504906(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1873773058 *, KeyValuePair_2U5BU5D_t384223800*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m801504906_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m941113032_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m941113032(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1873773058 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m941113032_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3987107291_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3987107291(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1873773058 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3987107291_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m643575759_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m643575759(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1873773058 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m643575759_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3271260993_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3271260993(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1873773058 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3271260993_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4105076511_gshared (FlexibleDictionaryWrapper_2_t1873773058 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4105076511(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1873773058 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4105076511_gshared)(__this, method)

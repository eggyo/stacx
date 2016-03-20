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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>
struct FlexibleDictionaryWrapper_2_t3739762724;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3024369032;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t1451756654;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t2573724739;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t3595260918;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22112154470.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2551035625_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2551035625(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3739762724 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2551035625_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1553788887_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1553788887(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3739762724 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1553788887_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3133458882_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3133458882(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3739762724 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3133458882_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2892835877_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2892835877(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3739762724 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2892835877_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2508866588_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2508866588(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3739762724 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2508866588_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m310424972_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m310424972(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3739762724 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m310424972_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m904690821_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m904690821(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3739762724 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m904690821_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m734994677_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m734994677(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t3739762724 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m734994677_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2555171280_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2555171280(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3739762724 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2555171280_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2398594092_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2398594092(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3739762724 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2398594092_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2305219545_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2305219545(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3739762724 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2305219545_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m4282015064_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m4282015064(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3739762724 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m4282015064_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3190164166_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, KeyValuePair_2U5BU5D_t2573724739* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3190164166(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3739762724 *, KeyValuePair_2U5BU5D_t2573724739*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3190164166_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3994562700_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3994562700(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3739762724 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3994562700_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m87926039_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m87926039(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3739762724 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m87926039_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m634062355_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m634062355(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3739762724 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m634062355_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m416822725_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m416822725(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3739762724 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m416822725_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3214184539_gshared (FlexibleDictionaryWrapper_2_t3739762724 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3214184539(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3739762724 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3214184539_gshared)(__this, method)

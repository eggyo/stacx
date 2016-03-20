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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>
struct FlexibleDictionaryWrapper_2_t2012483908;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t1297090216;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m51636907_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m51636907(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2012483908 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m51636907_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m392624469_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m392624469(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2012483908 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m392624469_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1329996780_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1329996780(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2012483908 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1329996780_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m508556675_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m508556675(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2012483908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m508556675_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1701820338_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1701820338(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2012483908 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1701820338_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m551307318_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m551307318(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2012483908 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m551307318_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2641883711_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2641883711(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2012483908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2641883711_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m451627465_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m451627465(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t2012483908 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m451627465_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1046677266_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1046677266(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2012483908 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1046677266_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4194162670_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4194162670(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2012483908 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4194162670_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2294260055_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2294260055(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2012483908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2294260055_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3183509358_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3183509358(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2012483908 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3183509358_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2151911944_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, KeyValuePair_2U5BU5D_t2573724739* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2151911944(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2012483908 *, KeyValuePair_2U5BU5D_t2573724739*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2151911944_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m4034528662_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m4034528662(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2012483908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m4034528662_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3218590657_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3218590657(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2012483908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3218590657_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1115600297_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1115600297(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2012483908 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1115600297_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1426876453_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1426876453(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2012483908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1426876453_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m768500445_gshared (FlexibleDictionaryWrapper_2_t2012483908 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m768500445(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2012483908 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m768500445_gshared)(__this, method)

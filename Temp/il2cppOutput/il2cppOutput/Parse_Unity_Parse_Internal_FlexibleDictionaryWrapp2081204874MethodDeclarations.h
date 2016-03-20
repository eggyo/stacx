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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>
struct FlexibleDictionaryWrapper_2_t2081204874;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1365811182;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m821620739_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m821620739(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2081204874 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m821620739_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2619374333_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2619374333(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2081204874 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2619374333_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m620697564_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m620697564(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2081204874 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m620697564_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2978580415_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2978580415(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2081204874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2978580415_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2081033666_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2081033666(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2081204874 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2081033666_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m4004153382_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m4004153382(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2081204874 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m4004153382_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2187124255_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2187124255(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2081204874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2187124255_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m1712963931_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1712963931(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t2081204874 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1712963931_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m86003306_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m86003306(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2081204874 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m86003306_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m669179206_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m669179206(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2081204874 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m669179206_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2445374207_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2445374207(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2081204874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2445374207_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m780874110_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m780874110(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2081204874 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m780874110_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3848466784_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, KeyValuePair_2U5BU5D_t2573724739* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3848466784(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2081204874 *, KeyValuePair_2U5BU5D_t2573724739*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3848466784_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1928131378_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1928131378(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2081204874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1928131378_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m881060785_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m881060785(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2081204874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m881060785_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m795782073_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m795782073(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2081204874 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m795782073_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1647045291_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1647045291(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2081204874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1647045291_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3207242357_gshared (FlexibleDictionaryWrapper_2_t2081204874 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3207242357(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2081204874 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3207242357_gshared)(__this, method)

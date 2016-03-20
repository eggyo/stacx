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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>
struct FlexibleDictionaryWrapper_2_t817075463;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3024369032;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t1451756807;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t3946004774;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t3595261071;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22112154623.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2220566786_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2220566786(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t817075463 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2220566786_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3357126494_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3357126494(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t817075463 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3357126494_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m618203355_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m618203355(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t817075463 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m618203355_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1563213118_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1563213118(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t817075463 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1563213118_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2792307043_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2792307043(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t817075463 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2792307043_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1889893861_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1889893861(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t817075463 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1889893861_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3037473630_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3037473630(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t817075463 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3037473630_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::get_Item(System.String)
extern "C"  uint64_t FlexibleDictionaryWrapper_2_get_Item_m2538332284_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2538332284(__this, ___key, method) ((  uint64_t (*) (FlexibleDictionaryWrapper_2_t817075463 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2538332284_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3461197481_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3461197481(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t817075463 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3461197481_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2068125253_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2068125253(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t817075463 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2068125253_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2756282720_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2756282720(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t817075463 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2756282720_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1848464095_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1848464095(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t817075463 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1848464095_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m106858655_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, KeyValuePair_2U5BU5D_t3946004774* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m106858655(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t817075463 *, KeyValuePair_2U5BU5D_t3946004774*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m106858655_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1430962835_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1430962835(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t817075463 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1430962835_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2093498224_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2093498224(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t817075463 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2093498224_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3996889434_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3996889434(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t817075463 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3996889434_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2698275916_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2698275916(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t817075463 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2698275916_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m922962164_gshared (FlexibleDictionaryWrapper_2_t817075463 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m922962164(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t817075463 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m922962164_gshared)(__this, method)

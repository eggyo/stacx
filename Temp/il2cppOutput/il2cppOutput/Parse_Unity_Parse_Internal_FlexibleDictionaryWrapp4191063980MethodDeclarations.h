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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>
struct FlexibleDictionaryWrapper_2_t4191063980;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t3799289017;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t3313246115;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t2250106010;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t1161783083;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23973643931.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1475972063_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1475972063(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191063980 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1475972063_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m168444065_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m168444065(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191063980 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m168444065_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3696082872_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3696082872(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191063980 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3696082872_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m544958363_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m544958363(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4191063980 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m544958363_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1479601254_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1479601254(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191063980 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1479601254_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m435870466_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m435870466(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191063980 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m435870466_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m4233508603_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m4233508603(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4191063980 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m4233508603_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Item(System.String)
extern "C"  int16_t FlexibleDictionaryWrapper_2_get_Item_m3557000959_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3557000959(__this, ___key, method) ((  int16_t (*) (FlexibleDictionaryWrapper_2_t4191063980 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3557000959_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m593784646_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m593784646(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191063980 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m593784646_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1323530530_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1323530530(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191063980 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1323530530_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2241003683_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2241003683(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191063980 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2241003683_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1578999586_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1578999586(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191063980 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1578999586_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m872336956_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, KeyValuePair_2U5BU5D_t2250106010* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m872336956(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191063980 *, KeyValuePair_2U5BU5D_t2250106010*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m872336956_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3795259094_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3795259094(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4191063980 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3795259094_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3995956877_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3995956877(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191063980 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3995956877_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4014486109_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4014486109(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191063980 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4014486109_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2717357135_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2717357135(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4191063980 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2717357135_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1595065425_gshared (FlexibleDictionaryWrapper_2_t4191063980 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1595065425(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t4191063980 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1595065425_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>
struct FlexibleDictionaryWrapper_2_t4194602508;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t1373742459;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m4077897419_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m4077897419(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4194602508 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m4077897419_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1393750325_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1393750325(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4194602508 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1393750325_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1617469452_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1617469452(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4194602508 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1617469452_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3610161571_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3610161571(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4194602508 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3610161571_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2172135314_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2172135314(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4194602508 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2172135314_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1912155222_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1912155222(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4194602508 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1912155222_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2576885343_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2576885343(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4194602508 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2576885343_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_Item(System.String)
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Item_m1452753321_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1452753321(__this, ___key, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4194602508 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1452753321_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2430008114_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2430008114(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4194602508 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2430008114_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3925455886_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3925455886(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4194602508 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3925455886_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1343707447_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1343707447(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4194602508 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1343707447_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m862533454_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m862533454(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4194602508 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m862533454_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2831984168_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, KeyValuePair_2U5BU5D_t384223800* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2831984168(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4194602508 *, KeyValuePair_2U5BU5D_t384223800*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2831984168_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1400032630_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1400032630(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4194602508 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1400032630_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2323705825_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2323705825(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4194602508 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2323705825_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1890837897_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1890837897(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4194602508 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1890837897_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2090745861_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2090745861(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4194602508 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2090745861_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m66686717_gshared (FlexibleDictionaryWrapper_2_t4194602508 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m66686717(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t4194602508 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m66686717_gshared)(__this, method)

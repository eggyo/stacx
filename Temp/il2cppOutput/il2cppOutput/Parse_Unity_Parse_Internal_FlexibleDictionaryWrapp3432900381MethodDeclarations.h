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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>
struct FlexibleDictionaryWrapper_2_t3432900381;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t1373742459;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t1000348000;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t3917488969;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t3143852264;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21660745816.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3254331144_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3254331144(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3432900381 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3254331144_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2144575768_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2144575768(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3432900381 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2144575768_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3518920673_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3518920673(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3432900381 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3518920673_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3964375492_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3964375492(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3432900381 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3964375492_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1794506397_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1794506397(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3432900381 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1794506397_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m786501739_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m786501739(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3432900381 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m786501739_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m348420836_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m348420836(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3432900381 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m348420836_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Item(System.String)
extern "C"  double FlexibleDictionaryWrapper_2_get_Item_m1238165366_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1238165366(__this, ___key, method) ((  double (*) (FlexibleDictionaryWrapper_2_t3432900381 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1238165366_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2139603247_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2139603247(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3432900381 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2139603247_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3101889611_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, KeyValuePair_2_t1660745816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3101889611(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3432900381 *, KeyValuePair_2_t1660745816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3101889611_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3028430618_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3028430618(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3432900381 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3028430618_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m547198361_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, KeyValuePair_2_t1660745816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m547198361(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3432900381 *, KeyValuePair_2_t1660745816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m547198361_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3585560869_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, KeyValuePair_2U5BU5D_t3917488969* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3585560869(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3432900381 *, KeyValuePair_2U5BU5D_t3917488969*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3585560869_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2423007693_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2423007693(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3432900381 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2423007693_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3700792822_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3700792822(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3432900381 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3700792822_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m393304724_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, KeyValuePair_2_t1660745816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m393304724(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3432900381 *, KeyValuePair_2_t1660745816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m393304724_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2846383046_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2846383046(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3432900381 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2846383046_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m829869562_gshared (FlexibleDictionaryWrapper_2_t3432900381 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m829869562(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3432900381 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m829869562_gshared)(__this, method)

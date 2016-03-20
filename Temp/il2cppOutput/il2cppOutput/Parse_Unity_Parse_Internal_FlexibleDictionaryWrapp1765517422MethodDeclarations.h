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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>
struct FlexibleDictionaryWrapper_2_t1765517422;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t1373742459;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m16806161_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m16806161(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1765517422 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m16806161_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2521456303_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2521456303(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1765517422 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2521456303_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1872070738_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1872070738(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1765517422 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1872070738_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3671123433_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3671123433(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1765517422 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3671123433_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1958783884_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1958783884(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1765517422 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1958783884_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2362198044_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2362198044(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1765517422 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2362198044_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1031692581_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1031692581(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1765517422 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1031692581_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Item(System.String)
extern "C"  int16_t FlexibleDictionaryWrapper_2_get_Item_m2580459299_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2580459299(__this, ___key, method) ((  int16_t (*) (FlexibleDictionaryWrapper_2_t1765517422 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2580459299_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2288708088_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2288708088(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1765517422 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2288708088_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4159331924_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4159331924(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1765517422 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4159331924_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m935131825_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m935131825(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1765517422 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m935131825_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3938846920_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3938846920(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1765517422 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3938846920_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2084408046_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, KeyValuePair_2U5BU5D_t2250106010* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2084408046(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1765517422 *, KeyValuePair_2U5BU5D_t2250106010*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2084408046_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3289850352_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3289850352(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1765517422 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3289850352_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m127948711_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m127948711(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1765517422 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m127948711_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2854931843_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2854931843(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1765517422 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2854931843_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2712651647_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2712651647(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1765517422 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2712651647_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3581253699_gshared (FlexibleDictionaryWrapper_2_t1765517422 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3581253699(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1765517422 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3581253699_gshared)(__this, method)

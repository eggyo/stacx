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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>
struct FlexibleDictionaryWrapper_2_t4191064075;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t3799289112;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1933403872_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1933403872(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191064075 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1933403872_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1327462464_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1327462464(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191064075 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1327462464_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m476147641_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m476147641(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191064075 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m476147641_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m4056496540_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m4056496540(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4191064075 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m4056496540_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1713209285_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1713209285(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191064075 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1713209285_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1030800963_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1030800963(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191064075 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1030800963_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2977402044_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2977402044(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4191064075 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2977402044_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Item(System.String)
extern "C"  int16_t FlexibleDictionaryWrapper_2_get_Item_m421052062_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m421052062(__this, ___key, method) ((  int16_t (*) (FlexibleDictionaryWrapper_2_t4191064075 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m421052062_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2907448071_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2907448071(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191064075 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2907448071_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1780962339_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1780962339(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191064075 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1780962339_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3329316418_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3329316418(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191064075 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3329316418_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2344582337_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2344582337(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191064075 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2344582337_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3016510205_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, KeyValuePair_2U5BU5D_t2250106010* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3016510205(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191064075 *, KeyValuePair_2U5BU5D_t2250106010*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3016510205_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m983792885_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m983792885(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4191064075 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m983792885_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3812361166_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3812361166(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191064075 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3812361166_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3434277820_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3434277820(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191064075 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3434277820_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m4096908014_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m4096908014(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4191064075 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m4096908014_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m218589650_gshared (FlexibleDictionaryWrapper_2_t4191064075 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m218589650(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t4191064075 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m218589650_gshared)(__this, method)

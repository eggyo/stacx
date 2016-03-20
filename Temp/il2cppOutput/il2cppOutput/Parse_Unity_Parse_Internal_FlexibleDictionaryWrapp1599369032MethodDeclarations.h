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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1599369032;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t3799289112;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t3321177450;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t3953378263;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t1169714418;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23981575266.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m41852345_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m41852345(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599369032 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m41852345_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m334555911_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m334555911(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599369032 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m334555911_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m236794770_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m236794770(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599369032 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m236794770_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3042037621_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3042037621(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1599369032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3042037621_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2288711756_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2288711756(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599369032 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2288711756_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3979772764_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3979772764(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599369032 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3979772764_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3039957077_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3039957077(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1599369032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3039957077_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Item(System.String)
extern "C"  int8_t FlexibleDictionaryWrapper_2_get_Item_m3723112805_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3723112805(__this, ___key, method) ((  int8_t (*) (FlexibleDictionaryWrapper_2_t1599369032 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3723112805_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m522605728_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m522605728(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599369032 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m522605728_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4184378108_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4184378108(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599369032 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4184378108_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3740743433_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3740743433(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599369032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3740743433_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m4112229768_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m4112229768(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599369032 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m4112229768_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2597903766_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, KeyValuePair_2U5BU5D_t3953378263* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2597903766(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599369032 *, KeyValuePair_2U5BU5D_t3953378263*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2597903766_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3895304764_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3895304764(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1599369032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3895304764_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3093893863_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3093893863(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599369032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3093893863_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2193660483_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2193660483(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599369032 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2193660483_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3658089653_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3658089653(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1599369032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3658089653_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m65783595_gshared (FlexibleDictionaryWrapper_2_t1599369032 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m65783595(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1599369032 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m65783595_gshared)(__this, method)

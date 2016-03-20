﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>
struct FlexibleDictionaryWrapper_2_t4117963143;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t1297103094;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m208472648_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m208472648(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4117963143 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m208472648_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1756382680_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1756382680(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4117963143 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1756382680_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m4129541665_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m4129541665(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4117963143 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m4129541665_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3604767108_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3604767108(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4117963143 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3604767108_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m161726557_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m161726557(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4117963143 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m161726557_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1157412523_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1157412523(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4117963143 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1157412523_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1102315300_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1102315300(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4117963143 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1102315300_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::get_Item(System.String)
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Item_m45412726_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m45412726(__this, ___key, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4117963143 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m45412726_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3801355375_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3801355375(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4117963143 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3801355375_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m56031115_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m56031115(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4117963143 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m56031115_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1992315866_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1992315866(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4117963143 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1992315866_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3822020441_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3822020441(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4117963143 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3822020441_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m145810533_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, KeyValuePair_2U5BU5D_t384223800* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m145810533(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4117963143 *, KeyValuePair_2U5BU5D_t384223800*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m145810533_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m29998349_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m29998349(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4117963143 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m29998349_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m4047881270_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m4047881270(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4117963143 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m4047881270_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m745315412_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m745315412(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4117963143 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m745315412_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1631802438_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1631802438(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4117963143 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1631802438_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Char>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1334417722_gshared (FlexibleDictionaryWrapper_2_t4117963143 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1334417722(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t4117963143 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1334417722_gshared)(__this, method)

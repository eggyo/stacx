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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>
struct FlexibleDictionaryWrapper_2_t2396143159;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t1373742459;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1302937806;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t2880731747;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t3446442070;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21963335622.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3508936438_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3508936438(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2396143159 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3508936438_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2755271146_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2755271146(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2396143159 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2755271146_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3263460815_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3263460815(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2396143159 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3263460815_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m259468210_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m259468210(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2396143159 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m259468210_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2179498991_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2179498991(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2396143159 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2179498991_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1853907929_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1853907929(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2396143159 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1853907929_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m460411218_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m460411218(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2396143159 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m460411218_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Item(System.String)
extern "C"  Object_t * FlexibleDictionaryWrapper_2_get_Item_m1848860744_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1848860744(__this, ___key, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2396143159 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1848860744_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1455815581_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1455815581(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2396143159 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1455815581_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3356494905_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3356494905(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2396143159 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3356494905_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3989343212_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3989343212(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2396143159 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3989343212_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3222561387_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3222561387(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2396143159 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3222561387_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2325440915_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, KeyValuePair_2U5BU5D_t2880731747* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2325440915(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2396143159 *, KeyValuePair_2U5BU5D_t2880731747*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2325440915_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3534998943_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3534998943(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2396143159 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3534998943_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2062912868_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2062912868(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2396143159 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2062912868_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m427373542_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m427373542(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2396143159 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m427373542_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1962264216_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1962264216(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2396143159 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1962264216_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4002449640_gshared (FlexibleDictionaryWrapper_2_t2396143159 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4002449640(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2396143159 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4002449640_gshared)(__this, method)

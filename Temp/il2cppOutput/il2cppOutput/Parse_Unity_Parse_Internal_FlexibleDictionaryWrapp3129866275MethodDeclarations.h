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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>
struct FlexibleDictionaryWrapper_2_t3129866275;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t1365811277;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t3313246268;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t3622386045;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t1161783236;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23973644084.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3567918552_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3567918552(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3129866275 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3567918552_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3658583112_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3658583112(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3129866275 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3658583112_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3609774105_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3609774105(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3129866275 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3609774105_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3847394224_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3847394224(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3129866275 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3847394224_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2272815973_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2272815973(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3129866275 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2272815973_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2175555235_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2175555235(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3129866275 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2175555235_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2924198188_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2924198188(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3129866275 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2924198188_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Item(System.String)
extern "C"  int64_t FlexibleDictionaryWrapper_2_get_Item_m3717586108_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3717586108(__this, ___key, method) ((  int64_t (*) (FlexibleDictionaryWrapper_2_t3129866275 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3717586108_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1479365631_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1479365631(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3129866275 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1479365631_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3415477019_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3415477019(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3129866275 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3415477019_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m517765706_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m517765706(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3129866275 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m517765706_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3453763681_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3453763681(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3129866275 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3453763681_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1892037621_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, KeyValuePair_2U5BU5D_t3622386045* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1892037621(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3129866275 *, KeyValuePair_2U5BU5D_t3622386045*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1892037621_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m164310281_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m164310281(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3129866275 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m164310281_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m577000494_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m577000494(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3129866275 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m577000494_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m409737052_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m409737052(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3129866275 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m409737052_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2311495192_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2311495192(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3129866275 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2311495192_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m618278538_gshared (FlexibleDictionaryWrapper_2_t3129866275 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m618278538(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3129866275 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m618278538_gshared)(__this, method)

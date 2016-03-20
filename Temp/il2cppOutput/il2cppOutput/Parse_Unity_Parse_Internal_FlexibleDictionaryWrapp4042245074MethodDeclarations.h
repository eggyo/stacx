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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>
struct FlexibleDictionaryWrapper_2_t4042245074;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m979840889_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m979840889(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4042245074 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m979840889_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1666904391_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1666904391(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4042245074 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1666904391_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2437580114_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2437580114(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4042245074 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2437580114_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m450535733_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m450535733(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4042245074 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m450535733_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2871103116_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2871103116(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4042245074 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2871103116_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m537888028_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m537888028(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4042245074 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m537888028_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3687674389_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3687674389(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4042245074 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3687674389_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Item(System.String)
extern "C"  int16_t FlexibleDictionaryWrapper_2_get_Item_m760493989_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m760493989(__this, ___key, method) ((  int16_t (*) (FlexibleDictionaryWrapper_2_t4042245074 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m760493989_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2353411680_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2353411680(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4042245074 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2353411680_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m827399356_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m827399356(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4042245074 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m827399356_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1437973833_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1437973833(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4042245074 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1437973833_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m612903880_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m612903880(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4042245074 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m612903880_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1776844630_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, KeyValuePair_2U5BU5D_t2250106010* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1776844630(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4042245074 *, KeyValuePair_2U5BU5D_t2250106010*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1776844630_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m868157564_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m868157564(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4042245074 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m868157564_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2063439015_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2063439015(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4042245074 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2063439015_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2753147011_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2753147011(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4042245074 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2753147011_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2516470517_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2516470517(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4042245074 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2516470517_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m117356779_gshared (FlexibleDictionaryWrapper_2_t4042245074 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m117356779(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t4042245074 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m117356779_gshared)(__this, method)

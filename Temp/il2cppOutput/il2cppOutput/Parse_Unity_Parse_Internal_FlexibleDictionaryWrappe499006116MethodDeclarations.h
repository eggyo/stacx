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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>
struct FlexibleDictionaryWrapper_2_t499006116;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t3771572712;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3203359435_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3203359435(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t499006116 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3203359435_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m929879349_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m929879349(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t499006116 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m929879349_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2638941964_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2638941964(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t499006116 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2638941964_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m69659171_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m69659171(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t499006116 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m69659171_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4002175122_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4002175122(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t499006116 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4002175122_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3507247958_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3507247958(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t499006116 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3507247958_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2722321247_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2722321247(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t499006116 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2722321247_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Item(System.String)
extern "C"  Object_t * FlexibleDictionaryWrapper_2_get_Item_m160424681_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m160424681(__this, ___key, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t499006116 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m160424681_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2366347058_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2366347058(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t499006116 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2366347058_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3050917902_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3050917902(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t499006116 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3050917902_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1287208247_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1287208247(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t499006116 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1287208247_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1412376654_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1412376654(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t499006116 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1412376654_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2927444520_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, KeyValuePair_2U5BU5D_t2880731747* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2927444520(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t499006116 *, KeyValuePair_2U5BU5D_t2880731747*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2927444520_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2496180214_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2496180214(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t499006116 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2496180214_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2077368033_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2077368033(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t499006116 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2077368033_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1010964105_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1010964105(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t499006116 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1010964105_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1842823109_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1842823109(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t499006116 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1842823109_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m887288573_gshared (FlexibleDictionaryWrapper_2_t499006116 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m887288573(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t499006116 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m887288573_gshared)(__this, method)

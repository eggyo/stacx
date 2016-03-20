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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>
struct FlexibleDictionaryWrapper_2_t2319490916;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t1297090216;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m640221771_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m640221771(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2319490916 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m640221771_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1079895477_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1079895477(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2319490916 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1079895477_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1711496076_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1711496076(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2319490916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1711496076_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2494590243_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2494590243(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2319490916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2494590243_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2515942418_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2515942418(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2319490916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2515942418_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m4235806678_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m4235806678(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2319490916 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m4235806678_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m4254663135_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m4254663135(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2319490916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m4254663135_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Item(System.String)
extern "C"  Object_t * FlexibleDictionaryWrapper_2_get_Item_m1138898473_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1138898473(__this, ___key, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2319490916 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1138898473_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2595280562_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2595280562(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2319490916 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2595280562_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m487780238_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m487780238(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2319490916 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m487780238_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3873131959_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3873131959(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2319490916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3873131959_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2420714446_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2420714446(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2319490916 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2420714446_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3244163496_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, KeyValuePair_2U5BU5D_t2880731747* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3244163496(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2319490916 *, KeyValuePair_2U5BU5D_t2880731747*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3244163496_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1177059830_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1177059830(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2319490916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1177059830_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m61344609_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m61344609(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2319490916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m61344609_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3590781449_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3590781449(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2319490916 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3590781449_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m4234523781_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m4234523781(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2319490916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m4234523781_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1080265341_gshared (FlexibleDictionaryWrapper_2_t2319490916 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1080265341(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2319490916 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1080265341_gshared)(__this, method)

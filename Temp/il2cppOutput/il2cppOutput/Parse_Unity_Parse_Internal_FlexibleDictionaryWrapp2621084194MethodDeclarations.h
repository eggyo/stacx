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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>
struct FlexibleDictionaryWrapper_2_t2621084194;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t3771572712;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t1451756712;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t707842529;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t3595260976;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22112154528.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1553798321_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1553798321(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2621084194 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1553798321_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1288257295_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1288257295(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2621084194 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1288257295_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1787633394_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1787633394(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2621084194 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1787633394_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m862029321_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m862029321(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2621084194 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m862029321_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1338863852_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1338863852(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2621084194 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1338863852_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m689989308_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m689989308(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2621084194 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m689989308_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3980824005_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3980824005(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2621084194 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3980824005_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Item(System.String)
extern "C"  uint32_t FlexibleDictionaryWrapper_2_get_Item_m518802627_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m518802627(__this, ___key, method) ((  uint32_t (*) (FlexibleDictionaryWrapper_2_t2621084194 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m518802627_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m302597528_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m302597528(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2621084194 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m302597528_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1401356788_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1401356788(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2621084194 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1401356788_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m4190673681_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m4190673681(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2621084194 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m4190673681_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3437409832_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3437409832(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2621084194 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3437409832_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2945746574_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, KeyValuePair_2U5BU5D_t707842529* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2945746574(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2621084194 *, KeyValuePair_2U5BU5D_t707842529*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2945746574_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1289851088_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1289851088(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2621084194 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1289851088_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3292902983_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3292902983(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2621084194 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3292902983_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1951617763_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1951617763(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2621084194 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1951617763_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3128959903_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3128959903(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2621084194 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3128959903_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m351540195_gshared (FlexibleDictionaryWrapper_2_t2621084194 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m351540195(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2621084194 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m351540195_gshared)(__this, method)

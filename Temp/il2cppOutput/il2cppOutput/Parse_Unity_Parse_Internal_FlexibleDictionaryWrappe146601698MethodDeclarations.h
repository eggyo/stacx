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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>
struct FlexibleDictionaryWrapper_2_t146601698;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t1297090216;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2537944497_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2537944497(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t146601698 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2537944497_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2711551503_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2711551503(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t146601698 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2711551503_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m4231277810_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m4231277810(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t146601698 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m4231277810_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2307705481_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2307705481(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t146601698 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2307705481_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3648365292_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3648365292(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t146601698 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3648365292_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m952431804_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m952431804(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t146601698 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m952431804_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m752065989_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m752065989(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t146601698 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m752065989_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Item(System.String)
extern "C"  uint32_t FlexibleDictionaryWrapper_2_get_Item_m2770554499_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2770554499(__this, ___key, method) ((  uint32_t (*) (FlexibleDictionaryWrapper_2_t146601698 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2770554499_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1743971992_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1743971992(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t146601698 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1743971992_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2385502964_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2385502964(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t146601698 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2385502964_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1476155921_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1476155921(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t146601698 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1476155921_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3361368104_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3361368104(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t146601698 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3361368104_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1344743310_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, KeyValuePair_2U5BU5D_t707842529* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1344743310(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t146601698 *, KeyValuePair_2U5BU5D_t707842529*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1344743310_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3973566800_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3973566800(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t146601698 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3973566800_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2596684871_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2596684871(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t146601698 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2596684871_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3993994467_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3993994467(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t146601698 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3993994467_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m298436319_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m298436319(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t146601698 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m298436319_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3287526627_gshared (FlexibleDictionaryWrapper_2_t146601698 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3287526627(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t146601698 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3287526627_gshared)(__this, method)

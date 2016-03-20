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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>
struct FlexibleDictionaryWrapper_2_t223253941;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t1373742459;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2208798800_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2208798800(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t223253941 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2208798800_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1797000400_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1797000400(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t223253941 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1797000400_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m4067283241_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m4067283241(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t223253941 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m4067283241_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3055975180_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3055975180(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t223253941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3055975180_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2924869717_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2924869717(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t223253941 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2924869717_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3148501939_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3148501939(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t223253941 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3148501939_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3549049388_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3549049388(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t223253941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3549049388_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Item(System.String)
extern "C"  uint32_t FlexibleDictionaryWrapper_2_get_Item_m890589998_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m890589998(__this, ___key, method) ((  uint32_t (*) (FlexibleDictionaryWrapper_2_t223253941 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m890589998_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m835053687_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m835053687(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t223253941 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m835053687_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2056357267_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2056357267(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t223253941 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2056357267_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2697530066_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2697530066(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t223253941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2697530066_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2318053713_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2318053713(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t223253941 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2318053713_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3572957293_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, KeyValuePair_2U5BU5D_t707842529* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3572957293(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t223253941 *, KeyValuePair_2U5BU5D_t707842529*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3572957293_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m32401797_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m32401797(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t223253941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m32401797_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3349049662_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3349049662(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t223253941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3349049662_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m42075212_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m42075212(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t223253941 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m42075212_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m202637182_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m202637182(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t223253941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m202637182_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3708072770_gshared (FlexibleDictionaryWrapper_2_t223253941 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3708072770(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t223253941 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3708072770_gshared)(__this, method)

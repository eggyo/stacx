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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>
struct FlexibleDictionaryWrapper_2_t3468789675;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t1373742459;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2311093016_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2311093016(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3468789675 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2311093016_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3182163720_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3182163720(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3468789675 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3182163720_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1171613017_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1171613017(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3468789675 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1171613017_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3915493616_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3915493616(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3468789675 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3915493616_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3224274469_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3224274469(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3468789675 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3224274469_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2872968163_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2872968163(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3468789675 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2872968163_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3943204460_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3943204460(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3468789675 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3943204460_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Item(System.String)
extern "C"  int8_t FlexibleDictionaryWrapper_2_get_Item_m3241166716_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3241166716(__this, ___key, method) ((  int8_t (*) (FlexibleDictionaryWrapper_2_t3468789675 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3241166716_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3458703679_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3458703679(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3468789675 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3458703679_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2158651483_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2158651483(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3468789675 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2158651483_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2888066314_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2888066314(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3468789675 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2888066314_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m4134415137_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m4134415137(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3468789675 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m4134415137_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2625093941_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, KeyValuePair_2U5BU5D_t3953378263* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2625093941(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3468789675 *, KeyValuePair_2U5BU5D_t3953378263*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2625093941_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2275391433_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2275391433(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3468789675 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2275391433_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3984097646_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3984097646(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3468789675 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3984097646_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1845080604_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1845080604(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3468789675 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1845080604_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2698496216_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2698496216(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3468789675 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2698496216_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2052303818_gshared (FlexibleDictionaryWrapper_2_t3468789675 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2052303818(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3468789675 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2052303818_gshared)(__this, method)

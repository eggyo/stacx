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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>
struct FlexibleDictionaryWrapper_2_t2176362864;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2319618303_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2319618303(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2176362864 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2319618303_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1067757441_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1067757441(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2176362864 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1067757441_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3134874840_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3134874840(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2176362864 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3134874840_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2855685307_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2855685307(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2176362864 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2855685307_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m895062854_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m895062854(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2176362864 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m895062854_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3766429730_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3766429730(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2176362864 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3766429730_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m49042459_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m49042459(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2176362864 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m49042459_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Item(System.String)
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Item_m161347039_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m161347039(__this, ___key, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2176362864 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m161347039_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2438745190_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2438745190(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2176362864 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2438745190_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2167176770_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2167176770(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2176362864 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2167176770_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1218916227_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1218916227(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2176362864 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1218916227_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m4031434242_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m4031434242(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2176362864 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m4031434242_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3476867932_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, KeyValuePair_2U5BU5D_t384223800* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3476867932(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2176362864 *, KeyValuePair_2U5BU5D_t384223800*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3476867932_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2413350326_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2413350326(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2176362864 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2413350326_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1412432813_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1412432813(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2176362864 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1412432813_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2931005757_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2931005757(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2176362864 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2931005757_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m417260335_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m417260335(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2176362864 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m417260335_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2834930033_gshared (FlexibleDictionaryWrapper_2_t2176362864 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2834930033(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2176362864 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2834930033_gshared)(__this, method)

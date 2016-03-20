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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>
struct FlexibleDictionaryWrapper_2_t4163347675;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t3771572712;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2321503248_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2321503248(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4163347675 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2321503248_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2271553808_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2271553808(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4163347675 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2271553808_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2455522537_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2455522537(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4163347675 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2455522537_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2751755980_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2751755980(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4163347675 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2751755980_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1454974101_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1454974101(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4163347675 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1454974101_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2084372339_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2084372339(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4163347675 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2084372339_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3252174316_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3252174316(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4163347675 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3252174316_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Item(System.String)
extern "C"  int16_t FlexibleDictionaryWrapper_2_get_Item_m1365143406_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1365143406(__this, ___key, method) ((  int16_t (*) (FlexibleDictionaryWrapper_2_t4163347675 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1365143406_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2416210999_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2416210999(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4163347675 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2416210999_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2169061715_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2169061715(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4163347675 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2169061715_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1095935762_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1095935762(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4163347675 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1095935762_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2142391697_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2142391697(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4163347675 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2142391697_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m4045360173_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, KeyValuePair_2U5BU5D_t2250106010* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m4045360173(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4163347675 *, KeyValuePair_2U5BU5D_t2250106010*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m4045360173_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3486508485_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3486508485(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4163347675 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3486508485_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2223021310_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2223021310(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4163347675 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2223021310_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3250827404_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3250827404(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4163347675 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3250827404_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3629996990_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3629996990(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4163347675 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3629996990_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m715116290_gshared (FlexibleDictionaryWrapper_2_t4163347675 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m715116290(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t4163347675 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m715116290_gshared)(__this, method)

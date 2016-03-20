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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1734630023;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t3799289112;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t1424040407;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t4088639254;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t3567544671;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22084438223.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2166506994_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2166506994(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1734630023 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2166506994_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4207642734_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4207642734(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1734630023 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4207642734_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m111502643_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m111502643(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1734630023 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m111502643_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2938662474_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2938662474(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1734630023 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2938662474_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3460335115_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3460335115(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1734630023 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3460335115_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3051436093_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3051436093(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1734630023 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3051436093_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2465491398_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2465491398(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1734630023 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2465491398_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Item(System.String)
extern "C"  float FlexibleDictionaryWrapper_2_get_Item_m3438188066_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3438188066(__this, ___key, method) ((  float (*) (FlexibleDictionaryWrapper_2_t1734630023 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3438188066_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m153681817_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m153681817(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1734630023 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m153681817_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2014065461_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2014065461(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1734630023 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2014065461_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2104459888_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2104459888(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1734630023 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2104459888_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3219072391_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3219072391(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1734630023 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3219072391_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1909606799_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, KeyValuePair_2U5BU5D_t4088639254* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1909606799(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1734630023 *, KeyValuePair_2U5BU5D_t4088639254*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1909606799_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1240969391_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1240969391(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1734630023 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1240969391_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3887311304_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3887311304(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1734630023 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3887311304_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1544687106_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1544687106(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1734630023 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1544687106_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m4256513022_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m4256513022(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1734630023 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m4256513022_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3137580964_gshared (FlexibleDictionaryWrapper_2_t1734630023 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3137580964(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1734630023 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3137580964_gshared)(__this, method)

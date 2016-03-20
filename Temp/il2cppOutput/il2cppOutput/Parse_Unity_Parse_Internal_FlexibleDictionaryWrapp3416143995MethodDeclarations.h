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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>
struct FlexibleDictionaryWrapper_2_t3416143995;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3024369032;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3458478756_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3458478756(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3416143995 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3458478756_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m577523452_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m577523452(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3416143995 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m577523452_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2504485861_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2504485861(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3416143995 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2504485861_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2890012924_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2890012924(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3416143995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2890012924_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m685611033_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m685611033(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3416143995 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m685611033_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1887170927_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1887170927(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3416143995 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1887170927_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2957914104_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2957914104(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3416143995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2957914104_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::get_Item(System.String)
extern "C"  int16_t FlexibleDictionaryWrapper_2_get_Item_m4103036080_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m4103036080(__this, ___key, method) ((  int16_t (*) (FlexibleDictionaryWrapper_2_t3416143995 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m4103036080_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2003050955_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2003050955(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3416143995 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2003050955_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3306037223_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3306037223(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3416143995 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3306037223_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2656773374_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2656773374(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3416143995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2656773374_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1391417365_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1391417365(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3416143995 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1391417365_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m4079562177_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, KeyValuePair_2U5BU5D_t2250106010* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m4079562177(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3416143995 *, KeyValuePair_2U5BU5D_t2250106010*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m4079562177_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m4027800637_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m4027800637(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3416143995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m4027800637_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2574976762_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2574976762(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3416143995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2574976762_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3473509392_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3473509392(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3416143995 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3473509392_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2413064332_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2413064332(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3416143995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2413064332_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4240533846_gshared (FlexibleDictionaryWrapper_2_t3416143995 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4240533846(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3416143995 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4240533846_gshared)(__this, method)

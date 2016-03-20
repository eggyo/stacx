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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>
struct FlexibleDictionaryWrapper_2_t3460858493;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t1365811277;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1147470726_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1147470726(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3460858493 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1147470726_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4035850074_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4035850074(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3460858493 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4035850074_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2840425415_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2840425415(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3460858493 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2840425415_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2993707870_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2993707870(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3460858493 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2993707870_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2827397879_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2827397879(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3460858493 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2827397879_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3873507281_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3873507281(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3460858493 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3873507281_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2870365530_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2870365530(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3460858493 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2870365530_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Item(System.String)
extern "C"  int8_t FlexibleDictionaryWrapper_2_get_Item_m4094853070_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m4094853070(__this, ___key, method) ((  int8_t (*) (FlexibleDictionaryWrapper_2_t3460858493 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m4094853070_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m869649453_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m869649453(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3460858493 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m869649453_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m995029193_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m995029193(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3460858493 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m995029193_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m4132798812_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m4132798812(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3460858493 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m4132798812_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m286504819_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m286504819(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3460858493 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m286504819_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1497385507_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, KeyValuePair_2U5BU5D_t3953378263* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1497385507(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3460858493 *, KeyValuePair_2U5BU5D_t3953378263*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1497385507_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3764804379_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3764804379(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3460858493 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3764804379_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3528270172_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3528270172(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3460858493 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3528270172_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1054485230_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1054485230(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3460858493 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1054485230_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m605582122_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m605582122(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3460858493 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m605582122_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m955397944_gshared (FlexibleDictionaryWrapper_2_t3460858493 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m955397944(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3460858493 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m955397944_gshared)(__this, method)

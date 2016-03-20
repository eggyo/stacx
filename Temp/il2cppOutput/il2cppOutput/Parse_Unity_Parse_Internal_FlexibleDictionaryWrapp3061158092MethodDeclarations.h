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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>
struct FlexibleDictionaryWrapper_2_t3061158092;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t1297103094;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Int64>
struct ICollection_1_t3313246268;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t3622386045;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>
struct IEnumerator_1_t1161783236;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23973644084.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1615031241_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1615031241(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3061158092 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1615031241_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m788215_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m788215(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3061158092 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m788215_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3031598242_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3031598242(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3061158092 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3031598242_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2256681477_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2256681477(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3061158092 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2256681477_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1424702780_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1424702780(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3061158092 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1424702780_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3073296492_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3073296492(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3061158092 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3073296492_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2672147301_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2672147301(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3061158092 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2672147301_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::get_Item(System.String)
extern "C"  int64_t FlexibleDictionaryWrapper_2_get_Item_m2584785557_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2584785557(__this, ___key, method) ((  int64_t (*) (FlexibleDictionaryWrapper_2_t3061158092 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2584785557_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m944713392_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m944713392(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3061158092 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m944713392_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1462589708_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1462589708(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3061158092 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1462589708_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m4280824569_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m4280824569(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3061158092 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m4280824569_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3891187320_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3891187320(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3061158092 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3891187320_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2230077350_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, KeyValuePair_2U5BU5D_t3622386045* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2230077350(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3061158092 *, KeyValuePair_2U5BU5D_t3622386045*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2230077350_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1189016748_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1189016748(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3061158092 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1189016748_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2066577399_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2066577399(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3061158092 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2066577399_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1831419699_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1831419699(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3061158092 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1831419699_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m598058085_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m598058085(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3061158092 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m598058085_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.Char>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1387595067_gshared (FlexibleDictionaryWrapper_2_t3061158092 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1387595067(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3061158092 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1387595067_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>
struct FlexibleDictionaryWrapper_2_t3137797457;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t1373742459;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m436573546_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m436573546(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3137797457 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m436573546_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2804896758_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2804896758(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3137797457 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2804896758_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1940961707_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1940961707(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3137797457 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1940961707_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m474212674_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m474212674(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3137797457 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m474212674_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2669692563_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2669692563(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3137797457 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2669692563_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1175016117_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1175016117(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3137797457 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1175016117_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3997037118_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3997037118(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3137797457 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3997037118_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Item(System.String)
extern "C"  int64_t FlexibleDictionaryWrapper_2_get_Item_m2863899754_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2863899754(__this, ___key, method) ((  int64_t (*) (FlexibleDictionaryWrapper_2_t3137797457 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2863899754_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m4068419857_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m4068419857(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3137797457 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m4068419857_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m284132013_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m284132013(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3137797457 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m284132013_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3568000504_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3568000504(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3137797457 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3568000504_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3006706703_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3006706703(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3137797457 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3006706703_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3019746055_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, KeyValuePair_2U5BU5D_t3622386045* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3019746055(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3137797457 *, KeyValuePair_2U5BU5D_t3622386045*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3019746055_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2969864631_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2969864631(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3137797457 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2969864631_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1032827968_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1032827968(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3137797457 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1032827968_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1200332426_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1200332426(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3137797457 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1200332426_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m109441990_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m109441990(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3137797457 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m109441990_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1715184412_gshared (FlexibleDictionaryWrapper_2_t3137797457 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1715184412(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3137797457 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1715184412_gshared)(__this, method)

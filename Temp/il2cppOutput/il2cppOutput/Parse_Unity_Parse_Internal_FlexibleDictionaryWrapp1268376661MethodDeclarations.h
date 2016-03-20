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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1268376661;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t3799288959;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2093158048_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2093158048(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1268376661 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2093158048_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m426125440_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m426125440(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1268376661 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m426125440_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m880400249_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m880400249(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1268376661 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m880400249_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3777569116_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3777569116(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1268376661 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3777569116_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2261991429_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2261991429(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1268376661 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2261991429_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m839671299_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m839671299(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1268376661 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m839671299_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1216119932_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1216119932(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1268376661 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1216119932_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Item(System.String)
extern "C"  int64_t FlexibleDictionaryWrapper_2_get_Item_m3814682334_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3814682334(__this, ___key, method) ((  int64_t (*) (FlexibleDictionaryWrapper_2_t1268376661 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3814682334_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m552180423_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m552180423(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1268376661 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m552180423_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1940716515_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1940716515(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1268376661 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1940716515_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3399517826_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3399517826(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1268376661 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3399517826_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3998002433_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3998002433(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1268376661 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3998002433_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2879357629_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, KeyValuePair_2U5BU5D_t3622386045* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2879357629(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1268376661 *, KeyValuePair_2U5BU5D_t3622386045*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2879357629_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m926977333_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m926977333(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1268376661 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m926977333_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m4219411342_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m4219411342(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1268376661 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m4219411342_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3847171068_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3847171068(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1268376661 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3847171068_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1061997358_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1061997358(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1268376661 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1061997358_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m647917970_gshared (FlexibleDictionaryWrapper_2_t1268376661 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m647917970(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1268376661 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m647917970_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1268376719;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t3799289017;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1603859110_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1603859110(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1268376719 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1603859110_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m365163578_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m365163578(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1268376719 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m365163578_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1536735615_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1536735615(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1268376719 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1536735615_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m224972642_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m224972642(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1268376719 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m224972642_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2042933823_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2042933823(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1268376719 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2042933823_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2287936393_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, String_t* ___key, int64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2287936393(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1268376719 *, String_t*, int64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2287936393_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1669908738_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1669908738(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1268376719 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1669908738_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Item(System.String)
extern "C"  int64_t FlexibleDictionaryWrapper_2_get_Item_m3753720472_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3753720472(__this, ___key, method) ((  int64_t (*) (FlexibleDictionaryWrapper_2_t1268376719 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3753720472_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m4225241933_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, String_t* ___key, int64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m4225241933(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1268376719 *, String_t*, int64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m4225241933_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1451417577_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1451417577(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1268376719 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1451417577_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2255554108_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2255554108(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1268376719 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2255554108_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2747423931_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2747423931(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1268376719 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2747423931_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m4098011459_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, KeyValuePair_2U5BU5D_t3622386045* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m4098011459(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1268376719 *, KeyValuePair_2U5BU5D_t3622386045*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m4098011459_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2465636335_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2465636335(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1268376719 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2465636335_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1982442772_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1982442772(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1268376719 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1982442772_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4261511734_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, KeyValuePair_2_t3973644084  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4261511734(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1268376719 *, KeyValuePair_2_t3973644084 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4261511734_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3622236392_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3622236392(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1268376719 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3622236392_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int64,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3876459672_gshared (FlexibleDictionaryWrapper_2_t1268376719 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3876459672(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1268376719 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3876459672_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>
struct FlexibleDictionaryWrapper_2_t1564279143;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t3771572712;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t1451756807;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t3946004774;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t3595261071;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22112154623.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m341907954_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m341907954(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1564279143 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m341907954_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2084123758_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2084123758(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1564279143 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2084123758_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3225958707_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3225958707(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1564279143 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3225958707_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2431861322_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2431861322(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1564279143 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2431861322_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3878236683_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3878236683(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1564279143 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3878236683_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3608480829_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3608480829(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1564279143 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3608480829_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m760888774_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m760888774(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1564279143 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m760888774_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_Item(System.String)
extern "C"  uint64_t FlexibleDictionaryWrapper_2_get_Item_m1314669090_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1314669090(__this, ___key, method) ((  uint64_t (*) (FlexibleDictionaryWrapper_2_t1564279143 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1314669090_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3848721305_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3848721305(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1564279143 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3848721305_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m189466421_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m189466421(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1564279143 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m189466421_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m129314416_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m129314416(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1564279143 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m129314416_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1187303815_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1187303815(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1564279143 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1187303815_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m176430479_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, KeyValuePair_2U5BU5D_t3946004774* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m176430479(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1564279143 *, KeyValuePair_2U5BU5D_t3946004774*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m176430479_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2710002863_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2710002863(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1564279143 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2710002863_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1930395080_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1930395080(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1564279143 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1930395080_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2020784642_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2020784642(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1564279143 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2020784642_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1838082046_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1838082046(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1564279143 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1838082046_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4210328484_gshared (FlexibleDictionaryWrapper_2_t1564279143 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4210328484(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1564279143 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4210328484_gshared)(__this, method)

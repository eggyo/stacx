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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>
struct FlexibleDictionaryWrapper_2_t3453484909;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1365811182;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1241388124_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1241388124(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3453484909 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1241388124_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2902814788_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2902814788(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3453484909 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2902814788_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m689588533_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m689588533(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3453484909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m689588533_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m4076636952_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m4076636952(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3453484909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m4076636952_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2791942345_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2791942345(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3453484909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2791942345_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2816971455_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2816971455(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3453484909 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2816971455_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m857501496_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m857501496(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3453484909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m857501496_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Item(System.String)
extern "C"  uint64_t FlexibleDictionaryWrapper_2_get_Item_m1996404386_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1996404386(__this, ___key, method) ((  uint64_t (*) (FlexibleDictionaryWrapper_2_t3453484909 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1996404386_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1865715075_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1865715075(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3453484909 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1865715075_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1088946591_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1088946591(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3453484909 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1088946591_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m783275590_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m783275590(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3453484909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m783275590_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m4143701189_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m4143701189(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3453484909 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m4143701189_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m488837497_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, KeyValuePair_2U5BU5D_t3946004774* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m488837497(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3453484909 *, KeyValuePair_2U5BU5D_t3946004774*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m488837497_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1608145657_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1608145657(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3453484909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1608145657_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1785940042_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1785940042(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3453484909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1785940042_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3436149952_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3436149952(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3453484909 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3436149952_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3338802930_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3338802930(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3453484909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3338802930_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1341173070_gshared (FlexibleDictionaryWrapper_2_t3453484909 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1341173070(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3453484909 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1341173070_gshared)(__this, method)

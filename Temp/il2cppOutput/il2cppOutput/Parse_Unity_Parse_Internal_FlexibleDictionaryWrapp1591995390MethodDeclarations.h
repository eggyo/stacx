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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1591995390;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t3799288959;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m4280643003_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m4280643003(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995390 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m4280643003_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m41975877_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m41975877(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995390 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m41975877_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3810183676_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3810183676(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995390 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3810183676_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3777660179_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3777660179(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1591995390 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3777660179_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4121921442_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4121921442(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995390 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4121921442_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m511713862_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m511713862(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995390 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m511713862_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1288434255_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1288434255(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1591995390 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1288434255_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Item(System.String)
extern "C"  uint64_t FlexibleDictionaryWrapper_2_get_Item_m3567488505_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3567488505(__this, ___key, method) ((  uint64_t (*) (FlexibleDictionaryWrapper_2_t1591995390 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3567488505_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2648200738_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2648200738(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995390 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2648200738_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4128201470_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4128201470(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995390 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4128201470_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2418346055_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2418346055(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995390 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2418346055_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1874490206_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1874490206(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995390 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1874490206_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m79720728_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, KeyValuePair_2U5BU5D_t3946004774* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m79720728(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995390 *, KeyValuePair_2U5BU5D_t3946004774*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m79720728_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1480094470_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1480094470(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1591995390 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1480094470_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1645331921_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1645331921(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995390 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1645331921_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2370102681_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2370102681(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995390 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2370102681_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2660170453_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2660170453(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1591995390 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2660170453_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1861735917_gshared (FlexibleDictionaryWrapper_2_t1591995390 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1861735917(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1591995390 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1861735917_gshared)(__this, method)

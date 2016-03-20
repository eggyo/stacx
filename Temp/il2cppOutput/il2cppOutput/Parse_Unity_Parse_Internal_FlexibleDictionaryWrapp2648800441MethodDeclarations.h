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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>
struct FlexibleDictionaryWrapper_2_t2648800441;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t3799288959;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t1451756712;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t707842529;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t3595260976;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22112154528.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1197566074_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1197566074(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800441 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1197566074_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3541076710_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3541076710(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800441 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3541076710_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2371858363_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2371858363(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800441 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2371858363_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2207828178_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2207828178(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2648800441 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2207828178_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1582548611_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1582548611(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800441 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1582548611_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1888189637_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1888189637(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800441 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1888189637_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m213402190_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m213402190(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2648800441 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m213402190_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Item(System.String)
extern "C"  uint32_t FlexibleDictionaryWrapper_2_get_Item_m2771622042_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2771622042(__this, ___key, method) ((  uint32_t (*) (FlexibleDictionaryWrapper_2_t2648800441 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2771622042_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3397044257_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3397044257(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800441 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3397044257_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1045124541_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1045124541(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800441 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1045124541_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2184738024_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2184738024(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800441 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2184738024_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m4124596223_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m4124596223(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800441 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m4124596223_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2849036823_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, KeyValuePair_2U5BU5D_t707842529* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2849036823(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800441 *, KeyValuePair_2U5BU5D_t707842529*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2849036823_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m59942695_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m59942695(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2648800441 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m59942695_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3007839824_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3007839824(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800441 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3007839824_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2300935802_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2300935802(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800441 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2300935802_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3951048310_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3951048310(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2648800441 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3951048310_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2297914924_gshared (FlexibleDictionaryWrapper_2_t2648800441 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2297914924(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2648800441 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2297914924_gshared)(__this, method)

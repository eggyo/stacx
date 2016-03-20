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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>
struct FlexibleDictionaryWrapper_2_t2388211882;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1365811182;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1302937806;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t2880731747;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t3446442070;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21963335622.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1887882339_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1887882339(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2388211882 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1887882339_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2449939101_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2449939101(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2388211882 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2449939101_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3857241148_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3857241148(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2388211882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3857241148_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m121111583_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m121111583(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2388211882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m121111583_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1549014370_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1549014370(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2388211882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1549014370_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2259516550_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2259516550(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2388211882 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2259516550_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m643678847_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m643678847(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2388211882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m643678847_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Item(System.String)
extern "C"  Object_t * FlexibleDictionaryWrapper_2_get_Item_m1543528699_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1543528699(__this, ___key, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2388211882 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1543528699_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m848065226_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m848065226(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2388211882 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m848065226_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1735440806_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1735440806(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2388211882 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1735440806_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m4145762975_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m4145762975(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2388211882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m4145762975_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2904035614_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2904035614(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2388211882 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2904035614_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3348526528_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, KeyValuePair_2U5BU5D_t2880731747* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3348526528(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2388211882 *, KeyValuePair_2U5BU5D_t2880731747*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3348526528_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3540910802_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3540910802(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2388211882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3540910802_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1790681105_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1790681105(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2388211882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1790681105_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m216986457_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m216986457(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2388211882 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m216986457_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2784766539_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2784766539(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2388211882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2784766539_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4282019541_gshared (FlexibleDictionaryWrapper_2_t2388211882 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4282019541(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2388211882 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4282019541_gshared)(__this, method)

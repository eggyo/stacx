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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>
struct FlexibleDictionaryWrapper_2_t75313709;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t3347880305;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1010729186_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1010729186(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t75313709 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1010729186_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4030137214_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4030137214(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t75313709 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4030137214_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3444264995_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3444264995(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t75313709 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3444264995_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1600272698_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1600272698(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t75313709 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1600272698_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1399817499_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1399817499(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t75313709 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1399817499_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m919023405_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m919023405(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t75313709 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m919023405_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m468138166_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m468138166(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t75313709 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m468138166_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Item(System.String)
extern "C"  Object_t * FlexibleDictionaryWrapper_2_get_Item_m3260682546_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3260682546(__this, ___key, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t75313709 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3260682546_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3187666569_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3187666569(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t75313709 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3187666569_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m858287653_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m858287653(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t75313709 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m858287653_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3033734528_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3033734528(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t75313709 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3033734528_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m685916311_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m685916311(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t75313709 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m685916311_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2278533247_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, KeyValuePair_2U5BU5D_t2880731747* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2278533247(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t75313709 *, KeyValuePair_2U5BU5D_t2880731747*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2278533247_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2700559295_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2700559295(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t75313709 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2700559295_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m197492920_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m197492920(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t75313709 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m197492920_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2520821010_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2520821010(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t75313709 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2520821010_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3583297294_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3583297294(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t75313709 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3583297294_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1559675540_gshared (FlexibleDictionaryWrapper_2_t75313709 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1559675540(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t75313709 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1559675540_gshared)(__this, method)

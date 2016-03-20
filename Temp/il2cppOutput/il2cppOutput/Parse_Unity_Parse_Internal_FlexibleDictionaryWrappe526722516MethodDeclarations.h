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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>
struct FlexibleDictionaryWrapper_2_t526722516;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t3799289112;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2815260059_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2815260059(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t526722516 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2815260059_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4280755301_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4280755301(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t526722516 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4280755301_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m659567068_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m659567068(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t526722516 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m659567068_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1374399731_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1374399731(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t526722516 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1374399731_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4260410306_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4260410306(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t526722516 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4260410306_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2453676582_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, String_t* ___key, Object_t ** ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2453676582(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t526722516 *, String_t*, Object_t **, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2453676582_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2447548975_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2447548975(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t526722516 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2447548975_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Item(System.String)
extern "C"  Object_t * FlexibleDictionaryWrapper_2_get_Item_m3511300633_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3511300633(__this, ___key, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t526722516 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3511300633_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2857584130_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2857584130(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t526722516 *, String_t*, Object_t *, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2857584130_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2662818526_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2662818526(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t526722516 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2662818526_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3520588903_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3520588903(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t526722516 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3520588903_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1614567294_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1614567294(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t526722516 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1614567294_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1898594552_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, KeyValuePair_2U5BU5D_t2880731747* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1898594552(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t526722516 *, KeyValuePair_2U5BU5D_t2880731747*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1898594552_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m4288431910_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m4288431910(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t526722516 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m4288431910_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3666707889_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3666707889(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t526722516 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3666707889_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1194414521_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, KeyValuePair_2_t1963335622  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1194414521(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t526722516 *, KeyValuePair_2_t1963335622 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1194414521_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2309734133_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2309734133(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t526722516 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2309734133_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Object,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m390761933_gshared (FlexibleDictionaryWrapper_2_t526722516 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m390761933(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t526722516 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m390761933_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>
struct FlexibleDictionaryWrapper_2_t4191063922;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t3799288959;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t3313246115;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t2250106010;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t1161783083;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23973643931.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1965271001_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1965271001(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191063922 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1965271001_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m229405927_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m229405927(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191063922 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m229405927_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3039747506_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3039747506(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191063922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3039747506_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m4097554837_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m4097554837(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4191063922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m4097554837_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1698658860_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1698658860(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191063922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1698658860_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3282572668_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3282572668(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191063922 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3282572668_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3779719797_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3779719797(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4191063922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3779719797_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Item(System.String)
extern "C"  int16_t FlexibleDictionaryWrapper_2_get_Item_m3617962821_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3617962821(__this, ___key, method) ((  int16_t (*) (FlexibleDictionaryWrapper_2_t4191063922 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3617962821_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1215690432_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1215690432(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191063922 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1215690432_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1812829468_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1812829468(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191063922 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1812829468_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3384967401_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3384967401(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191063922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3384967401_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2829578088_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2829578088(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191063922 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2829578088_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3948650422_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, KeyValuePair_2U5BU5D_t2250106010* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3948650422(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4191063922 *, KeyValuePair_2U5BU5D_t2250106010*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3948650422_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2256600092_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2256600092(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4191063922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2256600092_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1937958151_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1937958151(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191063922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1937958151_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3600145443_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3600145443(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4191063922 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3600145443_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m157118101_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m157118101(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4191063922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m157118101_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2661491019_gshared (FlexibleDictionaryWrapper_2_t4191063922 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2661491019(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t4191063922 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2661491019_gshared)(__this, method)

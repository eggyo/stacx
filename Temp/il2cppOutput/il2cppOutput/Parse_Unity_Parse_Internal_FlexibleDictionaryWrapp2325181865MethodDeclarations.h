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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>
struct FlexibleDictionaryWrapper_2_t2325181865;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t3799289112;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3313246173;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t384223800;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t1161783141;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23973643989.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3273181286_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3273181286(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2325181865 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3273181286_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m728315514_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m728315514(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2325181865 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m728315514_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1173442367_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1173442367(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2325181865 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1173442367_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2166678818_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2166678818(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2325181865 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2166678818_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4032136319_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4032136319(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2325181865 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4032136319_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m4259342665_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m4259342665(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2325181865 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m4259342665_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3633737410_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3633737410(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2325181865 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3633737410_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Item(System.String)
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Item_m4116872408_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m4116872408(__this, ___key, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2325181865 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m4116872408_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2992781581_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2992781581(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2325181865 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2992781581_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3120739753_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3120739753(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2325181865 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3120739753_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3110258812_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3110258812(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2325181865 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3110258812_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1468145403_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1468145403(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2325181865 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1468145403_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m421566211_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, KeyValuePair_2U5BU5D_t384223800* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m421566211(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2325181865 *, KeyValuePair_2U5BU5D_t384223800*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m421566211_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2528985647_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2528985647(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2325181865 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2528985647_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3161354964_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3161354964(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2325181865 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3161354964_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3612136566_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3612136566(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2325181865 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3612136566_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1997697832_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1997697832(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2325181865 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1997697832_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2936162904_gshared (FlexibleDictionaryWrapper_2_t2325181865 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2936162904(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2325181865 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2936162904_gshared)(__this, method)

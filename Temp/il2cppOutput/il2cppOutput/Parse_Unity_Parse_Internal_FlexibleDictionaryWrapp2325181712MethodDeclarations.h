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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>
struct FlexibleDictionaryWrapper_2_t2325181712;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t3799288959;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3305048415_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3305048415(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2325181712 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3305048415_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3925226273_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3925226273(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2325181712 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3925226273_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3737042232_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3737042232(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2325181712 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3737042232_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2207737115_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2207737115(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2325181712 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2207737115_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4017585894_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4017585894(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2325181712 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4017585894_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2216147074_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2216147074(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2325181712 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2216147074_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m141087867_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m141087867(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2325181712 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m141087867_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Item(System.String)
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Item_m3018815871_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3018815871(__this, ___key, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2325181712 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3018815871_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1301023942_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1301023942(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2325181712 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1301023942_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3152606882_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3152606882(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2325181712 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3152606882_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3165909795_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3165909795(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2325181712 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3165909795_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1953141154_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1953141154(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2325181712 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1953141154_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1353706428_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, KeyValuePair_2U5BU5D_t384223800* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1353706428(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2325181712 *, KeyValuePair_2U5BU5D_t384223800*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1353706428_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3801792854_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3801792854(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2325181712 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3801792854_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1286951949_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1286951949(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2325181712 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1286951949_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3778004189_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3778004189(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2325181712 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3778004189_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2352875215_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2352875215(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2325181712 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2352875215_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1084096977_gshared (FlexibleDictionaryWrapper_2_t2325181712 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1084096977(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2325181712 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1084096977_gshared)(__this, method)

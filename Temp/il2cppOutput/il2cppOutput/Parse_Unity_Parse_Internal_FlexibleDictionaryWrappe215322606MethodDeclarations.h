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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>
struct FlexibleDictionaryWrapper_2_t215322606;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t1365811124;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1077043639_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1077043639(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322606 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1077043639_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1552630217_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1552630217(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322606 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1552630217_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m4004728208_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m4004728208(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322606 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m4004728208_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2175247731_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2175247731(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t215322606 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2175247731_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2513442702_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2513442702(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322606 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2513442702_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2105845466_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2105845466(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322606 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2105845466_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3278528211_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3278528211(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t215322606 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3278528211_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Item(System.String)
extern "C"  uint32_t FlexibleDictionaryWrapper_2_get_Item_m646219815_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m646219815(__this, ___key, method) ((  uint32_t (*) (FlexibleDictionaryWrapper_2_t215322606 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m646219815_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m849209118_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m849209118(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322606 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m849209118_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m924602106_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m924602106(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322606 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m924602106_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3997913547_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3997913547(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322606 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3997913547_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3250106442_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3250106442(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322606 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3250106442_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3377389076_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, KeyValuePair_2U5BU5D_t707842529* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3377389076(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322606 *, KeyValuePair_2U5BU5D_t707842529*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3377389076_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2794621950_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2794621950(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t215322606 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2794621950_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1018819173_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1018819173(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322606 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1018819173_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3712314757_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3712314757(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322606 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3712314757_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2759867767_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2759867767(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t215322606 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2759867767_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m759100969_gshared (FlexibleDictionaryWrapper_2_t215322606 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m759100969(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t215322606 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m759100969_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>
struct FlexibleDictionaryWrapper_2_t146614576;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t1297103094;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3196220451_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3196220451(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t146614576 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3196220451_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3986148061_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3986148061(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t146614576 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3986148061_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3931473252_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3931473252(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t146614576 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3931473252_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2894153467_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2894153467(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t146614576 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2894153467_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2402765626_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2402765626(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t146614576 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2402765626_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m4245335982_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m4245335982(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t146614576 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m4245335982_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1687864759_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1687864759(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t146614576 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1687864759_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::get_Item(System.String)
extern "C"  uint32_t FlexibleDictionaryWrapper_2_get_Item_m4045151057_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m4045151057(__this, ___key, method) ((  uint32_t (*) (FlexibleDictionaryWrapper_2_t146614576 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m4045151057_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1394600586_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1394600586(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t146614576 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1394600586_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3043778918_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3043778918(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t146614576 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3043778918_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1620345567_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1620345567(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t146614576 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1620345567_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2344952054_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2344952054(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t146614576 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2344952054_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m308260224_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, KeyValuePair_2U5BU5D_t707842529* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m308260224(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t146614576 *, KeyValuePair_2U5BU5D_t707842529*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m308260224_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m678617886_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m678617886(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t146614576 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m678617886_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3388220217_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3388220217(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t146614576 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3388220217_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3872266545_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3872266545(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t146614576 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3872266545_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m46875053_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m46875053(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t146614576 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m46875053_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Char>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2283165781_gshared (FlexibleDictionaryWrapper_2_t146614576 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2283165781(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t146614576 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2283165781_gshared)(__this, method)

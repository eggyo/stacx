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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>
struct FlexibleDictionaryWrapper_2_t215322759;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t1365811277;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1045176510_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1045176510(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322759 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1045176510_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2650686754_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2650686754(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322759 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2650686754_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1441128343_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1441128343(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322759 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1441128343_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2134189434_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2134189434(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t215322759 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2134189434_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2527993127_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2527993127(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322759 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2527993127_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m4149041057_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m4149041057(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322759 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m4149041057_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2476210458_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2476210458(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t215322759 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2476210458_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Item(System.String)
extern "C"  uint32_t FlexibleDictionaryWrapper_2_get_Item_m1744276352_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1744276352(__this, ___key, method) ((  uint32_t (*) (FlexibleDictionaryWrapper_2_t215322759 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1744276352_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2540966757_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2540966757(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322759 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2540966757_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m892734977_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m892734977(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322759 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m892734977_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3942262564_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3942262564(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322759 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3942262564_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2765110691_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2765110691(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322759 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2765110691_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2445248859_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, KeyValuePair_2U5BU5D_t707842529* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2445248859(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322759 *, KeyValuePair_2U5BU5D_t707842529*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2445248859_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1521814743_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1521814743(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t215322759 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1521814743_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2893222188_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2893222188(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322759 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2893222188_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3546447134_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3546447134(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322759 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3546447134_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2404690384_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2404690384(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t215322759 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2404690384_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2611166896_gshared (FlexibleDictionaryWrapper_2_t215322759 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2611166896(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t215322759 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2611166896_gshared)(__this, method)

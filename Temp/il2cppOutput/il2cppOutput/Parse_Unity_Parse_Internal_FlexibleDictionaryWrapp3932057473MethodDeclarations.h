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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>
struct FlexibleDictionaryWrapper_2_t3932057473;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t3799289112;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Char>
struct ICollection_1_t3244538085;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>[]
struct KeyValuePair_2U5BU5D_t1991099408;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>
struct IEnumerator_1_t1093075053;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23904935901.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m114968804_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m114968804(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3932057473 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m114968804_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1381802172_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1381802172(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3932057473 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1381802172_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2152328997_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2152328997(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3932057473 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2152328997_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m433803964_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m433803964(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3932057473 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m433803964_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2493910233_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2493910233(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3932057473 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2493910233_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2615084207_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2615084207(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3932057473 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2615084207_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3818972472_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3818972472(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3932057473 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3818972472_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m1440805168_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1440805168(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t3932057473 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1440805168_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1033955339_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1033955339(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3932057473 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1033955339_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4257494567_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4257494567(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3932057473 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4257494567_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2527524542_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2527524542(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3932057473 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2527524542_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m4001963221_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m4001963221(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3932057473 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m4001963221_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3109958657_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, KeyValuePair_2U5BU5D_t1991099408* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3109958657(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3932057473 *, KeyValuePair_2U5BU5D_t1991099408*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3109958657_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1717194621_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1717194621(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3932057473 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1717194621_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m300718650_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m300718650(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3932057473 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m300718650_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2345500880_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2345500880(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3932057473 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2345500880_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3965150860_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3965150860(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3932057473 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3965150860_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3624753046_gshared (FlexibleDictionaryWrapper_2_t3932057473 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3624753046(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3932057473 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3624753046_gshared)(__this, method)

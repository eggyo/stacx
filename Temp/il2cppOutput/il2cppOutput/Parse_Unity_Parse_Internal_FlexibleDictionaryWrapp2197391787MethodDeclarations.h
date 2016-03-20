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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>
struct FlexibleDictionaryWrapper_2_t2197391787;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t3347880305;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3656135368_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3656135368(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2197391787 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3656135368_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m93547864_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m93547864(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2197391787 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m93547864_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2592956425_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2592956425(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2197391787 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2592956425_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2392642848_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2392642848(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2197391787 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2392642848_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3031473525_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3031473525(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2197391787 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3031473525_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2396732051_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2396732051(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2197391787 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2396732051_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1726640924_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1726640924(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2197391787 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1726640924_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Item(System.String)
extern "C"  uint32_t FlexibleDictionaryWrapper_2_get_Item_m3619060492_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3619060492(__this, ___key, method) ((  uint32_t (*) (FlexibleDictionaryWrapper_2_t2197391787 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3619060492_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1123917039_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1123917039(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2197391787 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1123917039_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3503693835_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3503693835(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2197391787 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3503693835_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1642232666_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1642232666(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2197391787 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1642232666_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2710949489_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2710949489(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2197391787 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2710949489_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2296835301_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, KeyValuePair_2U5BU5D_t707842529* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2296835301(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2197391787 *, KeyValuePair_2U5BU5D_t707842529*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2296835301_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1494230169_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1494230169(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2197391787 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1494230169_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1413027870_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1413027870(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2197391787 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1413027870_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3461474668_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3461474668(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2197391787 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3461474668_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m574466792_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m574466792(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2197391787 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m574466792_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1023927162_gshared (FlexibleDictionaryWrapper_2_t2197391787 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1023927162(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2197391787 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1023927162_gshared)(__this, method)

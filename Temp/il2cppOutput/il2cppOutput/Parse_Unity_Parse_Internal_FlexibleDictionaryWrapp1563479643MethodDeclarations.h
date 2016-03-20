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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1563479643;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t3799289017;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t1000348000;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t3917488969;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t3143852264;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21660745816.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3054998728_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3054998728(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1563479643 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3054998728_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1370049368_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1370049368(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1563479643 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1370049368_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3208823305_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3208823305(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1563479643 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3208823305_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1045837600_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1045837600(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1563479643 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1045837600_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m681966453_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m681966453(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1563479643 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m681966453_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3128892563_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3128892563(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1563479643 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3128892563_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m231953692_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m231953692(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1563479643 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m231953692_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Item(System.String)
extern "C"  double FlexibleDictionaryWrapper_2_get_Item_m600594700_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m600594700(__this, ___key, method) ((  double (*) (FlexibleDictionaryWrapper_2_t1563479643 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m600594700_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m266501871_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m266501871(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1563479643 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m266501871_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2902557195_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, KeyValuePair_2_t1660745816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2902557195(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1563479643 *, KeyValuePair_2_t1660745816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2902557195_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2708756826_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2708756826(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1563479643 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2708756826_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3812076657_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, KeyValuePair_2_t1660745816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3812076657(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1563479643 *, KeyValuePair_2_t1660745816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3812076657_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m163434213_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, KeyValuePair_2U5BU5D_t3917488969* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m163434213(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1563479643 *, KeyValuePair_2U5BU5D_t3917488969*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m163434213_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2692940441_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2692940441(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1563479643 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2692940441_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3084974622_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3084974622(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1563479643 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3084974622_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m718489452_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, KeyValuePair_2_t1660745816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m718489452(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1563479643 *, KeyValuePair_2_t1660745816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m718489452_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2568063208_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2568063208(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1563479643 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2568063208_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2201503098_gshared (FlexibleDictionaryWrapper_2_t1563479643 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2201503098(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1563479643 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2201503098_gshared)(__this, method)

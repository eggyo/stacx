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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>
struct FlexibleDictionaryWrapper_2_t2089136151;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t1373742459;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.UInt16>
struct ICollection_1_t1451756654;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t2573724739;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct IEnumerator_1_t3595260918;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22112154470.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2442674838_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2442674838(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2089136151 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2442674838_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2924706378_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2924706378(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2089136151 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2924706378_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m26917231_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m26917231(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2089136151 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m26917231_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3116937042_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3116937042(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2089136151 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3116937042_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2711518287_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2711518287(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2089136151 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2711518287_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3598544761_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3598544761(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2089136151 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3598544761_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2003856626_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2003856626(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2089136151 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2003856626_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m2018295976_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2018295976(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t2089136151 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2018295976_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m693753661_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m693753661(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2089136151 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m693753661_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2290233305_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2290233305(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2089136151 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2290233305_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2288954444_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2288954444(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2089136151 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2288954444_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1099399883_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1099399883(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2089136151 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1099399883_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2825381171_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, KeyValuePair_2U5BU5D_t2573724739* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2825381171(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2089136151 *, KeyValuePair_2U5BU5D_t2573724739*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2825381171_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1922219519_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1922219519(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2089136151 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1922219519_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1153292548_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1153292548(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2089136151 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1153292548_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1006169158_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1006169158(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2089136151 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1006169158_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m824542968_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m824542968(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2089136151 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m824542968_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2927672456_gshared (FlexibleDictionaryWrapper_2_t2089136151 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2927672456(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2089136151 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2927672456_gshared)(__this, method)

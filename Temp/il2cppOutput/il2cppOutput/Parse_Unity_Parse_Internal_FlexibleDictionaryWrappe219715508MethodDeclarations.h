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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>
struct FlexibleDictionaryWrapper_2_t219715508;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t3799289112;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m4120888827_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m4120888827(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t219715508 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m4120888827_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m943312901_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m943312901(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t219715508 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m943312901_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3405931068_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3405931068(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t219715508 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3405931068_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m4056587603_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m4056587603(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t219715508 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m4056587603_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3573139298_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3573139298(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t219715508 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3573139298_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m702843526_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m702843526(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t219715508 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m702843526_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3049716367_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3049716367(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t219715508 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3049716367_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m173858233_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m173858233(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t219715508 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m173858233_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m708501090_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m708501090(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t219715508 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m708501090_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3968447294_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3968447294(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t219715508 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3968447294_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2348144647_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2348144647(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t219715508 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2348144647_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m221070110_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m221070110(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t219715508 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m221070110_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m216873304_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, KeyValuePair_2U5BU5D_t2573724739* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m216873304(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t219715508 *, KeyValuePair_2U5BU5D_t2573724739*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m216873304_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1536910022_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1536910022(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t219715508 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1536910022_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1238281745_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1238281745(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t219715508 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1238281745_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1957209433_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1957209433(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t219715508 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1957209433_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1400113813_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1400113813(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t219715508 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1400113813_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1432407597_gshared (FlexibleDictionaryWrapper_2_t219715508 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1432407597(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t219715508 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1432407597_gshared)(__this, method)

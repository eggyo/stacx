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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>
struct FlexibleDictionaryWrapper_2_t191999108;
// System.Collections.Generic.IDictionary`2<System.String,System.Single>
struct IDictionary_2_t3771572712;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m214020907_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m214020907(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t191999108 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m214020907_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1887404245_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1887404245(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t191999108 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1887404245_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1090338668_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1090338668(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t191999108 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1090338668_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2751847043_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2751847043(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t191999108 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2751847043_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3314904114_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3314904114(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t191999108 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3314904114_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1756414902_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1756414902(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t191999108 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1756414902_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3324488639_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3324488639(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t191999108 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3324488639_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m1117949577_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1117949577(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t191999108 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1117949577_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m217264018_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m217264018(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t191999108 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m217264018_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m61579374_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m61579374(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t191999108 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m61579374_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m114763991_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m114763991(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t191999108 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m114763991_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m18879470_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m18879470(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t191999108 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m18879470_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1245723272_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, KeyValuePair_2U5BU5D_t2573724739* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1245723272(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t191999108 *, KeyValuePair_2U5BU5D_t2573724739*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1245723272_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m4039625622_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m4039625622(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t191999108 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m4039625622_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3943909185_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3943909185(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t191999108 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3943909185_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1773759017_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1773759017(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t191999108 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1773759017_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m933202789_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m933202789(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t191999108 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m933202789_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1928934237_gshared (FlexibleDictionaryWrapper_2_t191999108 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1928934237(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t191999108 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1928934237_gshared)(__this, method)

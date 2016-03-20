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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>
struct FlexibleDictionaryWrapper_2_t3932057320;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t3799288959;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m146835933_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m146835933(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3932057320 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m146835933_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m283745635_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m283745635(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3932057320 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m283745635_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m420961566_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m420961566(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3932057320 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m420961566_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m474862261_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m474862261(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3932057320 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m474862261_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2479359808_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2479359808(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3932057320 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2479359808_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m571888616_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m571888616(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3932057320 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m571888616_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m326322929_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m326322929(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3932057320 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m326322929_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m342748631_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m342748631(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t3932057320 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m342748631_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3637164996_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3637164996(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3932057320 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3637164996_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4289361696_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4289361696(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3932057320 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4289361696_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2583175525_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2583175525(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3932057320 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2583175525_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m191991676_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m191991676(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3932057320 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m191991676_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m4042098874_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, KeyValuePair_2U5BU5D_t1991099408* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m4042098874(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3932057320 *, KeyValuePair_2U5BU5D_t1991099408*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m4042098874_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2990001828_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2990001828(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3932057320 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2990001828_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2721282931_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2721282931(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3932057320 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2721282931_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2511368503_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2511368503(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3932057320 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2511368503_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m25360947_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m25360947(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3932057320 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m25360947_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1772687119_gshared (FlexibleDictionaryWrapper_2_t3932057320 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1772687119(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3932057320 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1772687119_gshared)(__this, method)

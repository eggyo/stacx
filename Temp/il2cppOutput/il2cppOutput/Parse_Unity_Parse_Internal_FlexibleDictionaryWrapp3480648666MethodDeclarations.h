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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>
struct FlexibleDictionaryWrapper_2_t3480648666;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t3347880305;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2605405227_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2605405227(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3480648666 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2605405227_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1131184085_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1131184085(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3480648666 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1131184085_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m642059628_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m642059628(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3480648666 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m642059628_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m659676931_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m659676931(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3480648666 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m659676931_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3928284722_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3928284722(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3480648666 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3928284722_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1080431030_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1080431030(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3480648666 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1080431030_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1839561663_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1839561663(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3480648666 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1839561663_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m1190187081_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1190187081(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t3480648666 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1190187081_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1364037778_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1364037778(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3480648666 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1364037778_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2452963694_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2452963694(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3480648666 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2452963694_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2040670167_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2040670167(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3480648666 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2040670167_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3073312238_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3073312238(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3480648666 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3073312238_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3489897352_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, KeyValuePair_2U5BU5D_t1991099408* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3489897352(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3480648666 *, KeyValuePair_2U5BU5D_t1991099408*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3489897352_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m129322006_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m129322006(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3480648666 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m129322006_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1126470977_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1126470977(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3480648666 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1126470977_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3671907369_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3671907369(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3480648666 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3671907369_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m943746725_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m943746725(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3480648666 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m943746725_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m498699357_gshared (FlexibleDictionaryWrapper_2_t3480648666 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m498699357(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3480648666 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m498699357_gshared)(__this, method)

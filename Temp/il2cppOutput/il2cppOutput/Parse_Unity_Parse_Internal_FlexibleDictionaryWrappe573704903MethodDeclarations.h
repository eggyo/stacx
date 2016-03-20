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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>
struct FlexibleDictionaryWrapper_2_t573704903;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t3799289112;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t3244525207;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t2927714134;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t1093062175;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23904923023.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m916257266_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m916257266(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704903 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m916257266_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m824792174_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m824792174(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704903 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m824792174_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m4021110323_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m4021110323(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m4021110323_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3870983626_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3870983626(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t573704903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3870983626_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m638584075_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m638584075(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m638584075_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3619445053_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3619445053(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704903 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3619445053_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m4118777030_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m4118777030(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t573704903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m4118777030_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Item(System.String)
extern "C"  uint8_t FlexibleDictionaryWrapper_2_get_Item_m883795170_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m883795170(__this, ___key, method) ((  uint8_t (*) (FlexibleDictionaryWrapper_2_t573704903 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m883795170_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1636479897_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1636479897(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704903 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1636479897_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m763815733_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m763815733(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704903 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m763815733_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3773124208_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3773124208(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3773124208_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1773200519_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1773200519(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704903 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1773200519_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1233649039_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, KeyValuePair_2U5BU5D_t2927714134* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1233649039(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704903 *, KeyValuePair_2U5BU5D_t2927714134*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1233649039_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m895581743_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m895581743(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t573704903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m895581743_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1039190728_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1039190728(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1039190728_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2101841154_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2101841154(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704903 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2101841154_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1910762558_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1910762558(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t573704903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1910762558_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1673304996_gshared (FlexibleDictionaryWrapper_2_t573704903 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1673304996(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t573704903 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1673304996_gshared)(__this, method)

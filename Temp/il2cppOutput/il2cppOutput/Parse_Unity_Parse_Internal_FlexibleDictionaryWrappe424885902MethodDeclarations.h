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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>
struct FlexibleDictionaryWrapper_2_t424885902;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m4257661579_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m4257661579(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t424885902 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m4257661579_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1164234101_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1164234101(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t424885902 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1164234101_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1687575500_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1687575500(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t424885902 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1687575500_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m265022819_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m265022819(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t424885902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m265022819_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1796477906_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1796477906(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t424885902 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1796477906_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3126532118_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3126532118(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t424885902 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3126532118_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m534082079_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m534082079(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t424885902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m534082079_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Item(System.String)
extern "C"  uint8_t FlexibleDictionaryWrapper_2_get_Item_m1223237097_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1223237097(__this, ___key, method) ((  uint8_t (*) (FlexibleDictionaryWrapper_2_t424885902 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1223237097_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1082443506_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1082443506(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t424885902 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1082443506_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4105220046_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4105220046(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t424885902 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4105220046_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1881781623_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1881781623(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t424885902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1881781623_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m41522062_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m41522062(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t424885902 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m41522062_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m4288950760_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, KeyValuePair_2U5BU5D_t2927714134* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m4288950760(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t424885902 *, KeyValuePair_2U5BU5D_t2927714134*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m4288950760_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m779946422_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m779946422(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t424885902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m779946422_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3585235873_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3585235873(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t424885902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3585235873_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1420710345_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1420710345(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t424885902 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1420710345_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m330325061_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m330325061(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t424885902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m330325061_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1572072125_gshared (FlexibleDictionaryWrapper_2_t424885902 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1572072125(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t424885902 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1572072125_gshared)(__this, method)

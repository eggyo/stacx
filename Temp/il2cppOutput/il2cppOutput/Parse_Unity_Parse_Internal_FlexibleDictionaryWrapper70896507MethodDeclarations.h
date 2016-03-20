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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>
struct FlexibleDictionaryWrapper_2_t70896507;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3167325844_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3167325844(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t70896507 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3167325844_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1282754828_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1282754828(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t70896507 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1282754828_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1072396245_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1072396245(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t70896507 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1072396245_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m450626796_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m450626796(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t70896507 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m450626796_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m436065833_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m436065833(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t70896507 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m436065833_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m209930591_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m209930591(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t70896507 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m209930591_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3759988712_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3759988712(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t70896507 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3759988712_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m513300160_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m513300160(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t70896507 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m513300160_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m154464699_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m154464699(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t70896507 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m154464699_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3014884311_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3014884311(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t70896507 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3014884311_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m456802062_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m456802062(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t70896507 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m456802062_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2784358949_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2784358949(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t70896507 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2784358949_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3272175025_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, KeyValuePair_2U5BU5D_t2573724739* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3272175025(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t70896507 *, KeyValuePair_2U5BU5D_t2573724739*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3272175025_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1421274701_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1421274701(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t70896507 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1421274701_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3784326890_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3784326890(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t70896507 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3784326890_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1276078624_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, KeyValuePair_2_t2112154470  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1276078624(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t70896507 *, KeyValuePair_2_t2112154470 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1276078624_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m4114643612_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m4114643612(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t70896507 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m4114643612_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt16,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1331174726_gshared (FlexibleDictionaryWrapper_2_t70896507 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1331174726(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t70896507 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1331174726_gshared)(__this, method)

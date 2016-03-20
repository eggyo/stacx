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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>
struct FlexibleDictionaryWrapper_2_t1140586736;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t3347880305;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t1451756807;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t3946004774;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t3595261071;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22112154623.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2444245001_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2444245001(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1140586736 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2444245001_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m889414327_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m889414327(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1140586736 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m889414327_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m4031281738_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m4031281738(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1140586736 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m4031281738_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3962474849_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3962474849(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1140586736 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3962474849_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1275879060_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1275879060(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1140586736 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1275879060_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1020256276_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1020256276(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1140586736 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1020256276_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2801672989_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2801672989(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1140586736 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2801672989_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Item(System.String)
extern "C"  uint64_t FlexibleDictionaryWrapper_2_get_Item_m119959659_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m119959659(__this, ___key, method) ((  uint64_t (*) (FlexibleDictionaryWrapper_2_t1140586736 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m119959659_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m375073520_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m375073520(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1140586736 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m375073520_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2291803468_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2291803468(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1140586736 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2291803468_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1875840697_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1875840697(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1140586736 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1875840697_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m460843472_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m460843472(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1140586736 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m460843472_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3822486502_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, KeyValuePair_2U5BU5D_t3946004774* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3822486502(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1140586736 *, KeyValuePair_2U5BU5D_t3946004774*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3822486502_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2914381944_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2914381944(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1140586736 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2914381944_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m50519967_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m50519967(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1140586736 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m50519967_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3530641547_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3530641547(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1140586736 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3530641547_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3578556231_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3578556231(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1140586736 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3578556231_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m587748155_gshared (FlexibleDictionaryWrapper_2_t1140586736 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m587748155(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1140586736 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m587748155_gshared)(__this, method)

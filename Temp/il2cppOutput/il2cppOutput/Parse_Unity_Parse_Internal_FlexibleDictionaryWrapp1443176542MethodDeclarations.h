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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>
struct FlexibleDictionaryWrapper_2_t1443176542;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3295212891_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3295212891(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1443176542 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3295212891_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1479474341_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1479474341(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1443176542 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1479474341_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3208016284_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3208016284(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1443176542 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3208016284_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m130641075_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m130641075(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1443176542 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m130641075_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m999398402_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m999398402(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1443176542 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m999398402_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2061996518_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2061996518(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1443176542 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2061996518_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1196388847_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1196388847(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1443176542 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1196388847_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Item(System.String)
extern "C"  uint64_t FlexibleDictionaryWrapper_2_get_Item_m710019673_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m710019673(__this, ___key, method) ((  uint64_t (*) (FlexibleDictionaryWrapper_2_t1443176542 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m710019673_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3785921986_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3785921986(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1443176542 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3785921986_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3142771358_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3142771358(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1443176542 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3142771358_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m471352487_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m471352487(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1443176542 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m471352487_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3952783294_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3952783294(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1443176542 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3952783294_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2202882232_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, KeyValuePair_2U5BU5D_t3946004774* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2202882232(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1443176542 *, KeyValuePair_2U5BU5D_t3946004774*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2202882232_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m91651942_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m91651942(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1443176542 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m91651942_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1770812785_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1770812785(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1443176542 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1770812785_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1523104249_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1523104249(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1443176542 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1523104249_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m724555573_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m724555573(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1443176542 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m724555573_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3612568973_gshared (FlexibleDictionaryWrapper_2_t1443176542 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3612568973(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1443176542 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3612568973_gshared)(__this, method)

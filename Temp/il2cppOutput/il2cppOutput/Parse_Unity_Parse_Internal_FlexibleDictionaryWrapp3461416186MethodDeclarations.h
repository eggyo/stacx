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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>
struct FlexibleDictionaryWrapper_2_t3461416186;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t1373742459;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2862442223_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2862442223(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3461416186 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2862442223_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3208146833_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3208146833(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3461416186 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3208146833_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m95808200_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m95808200(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3461416186 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m95808200_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m4214993579_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m4214993579(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3461416186 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m4214993579_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3422426966_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3422426966(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3461416186 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3422426966_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2411362834_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2411362834(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3461416186 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2411362834_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m674233867_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m674233867(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3461416186 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m674233867_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Item(System.String)
extern "C"  uint64_t FlexibleDictionaryWrapper_2_get_Item_m2301736431_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2301736431(__this, ___key, method) ((  uint64_t (*) (FlexibleDictionaryWrapper_2_t3461416186 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2301736431_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2473465430_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2473465430(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3461416186 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2473465430_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2710000690_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2710000690(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3461416186 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2710000690_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m626855827_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m626855827(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3461416186 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m626855827_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m167259666_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m167259666(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3461416186 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m167259666_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3760719180_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, KeyValuePair_2U5BU5D_t3946004774* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3760719180(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3461416186 *, KeyValuePair_2U5BU5D_t3946004774*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3760719180_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1602233798_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1602233798(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3461416186 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1602233798_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2058171805_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2058171805(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3461416186 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2058171805_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3646537037_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3646537037(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3461416186 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3646537037_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2516300607_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2516300607(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3461416186 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2516300607_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1061603169_gshared (FlexibleDictionaryWrapper_2_t3461416186 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1061603169(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3461416186 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1061603169_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>
struct FlexibleDictionaryWrapper_2_t3384776821;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t1297103094;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m307811748_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m307811748(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3384776821 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m307811748_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2230553596_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2230553596(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3384776821 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2230553596_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2833529829_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2833529829(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3384776821 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2833529829_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1546067836_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1546067836(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3384776821 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1546067836_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3665741849_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3665741849(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3384776821 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3665741849_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1866252655_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1866252655(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3384776821 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1866252655_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3257696760_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3257696760(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3384776821 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3257696760_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::get_Item(System.String)
extern "C"  uint64_t FlexibleDictionaryWrapper_2_get_Item_m2289556592_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2289556592(__this, ___key, method) ((  uint64_t (*) (FlexibleDictionaryWrapper_2_t3384776821 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2289556592_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2832925899_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2832925899(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3384776821 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2832925899_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m155370215_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m155370215(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3384776821 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m155370215_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3908854270_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3908854270(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3384776821 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3908854270_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2414118933_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2414118933(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3384776821 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2414118933_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2392527041_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, KeyValuePair_2U5BU5D_t3946004774* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2392527041(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3384776821 *, KeyValuePair_2U5BU5D_t3946004774*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2392527041_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1837636285_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1837636285(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3384776821 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1837636285_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1406916346_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1406916346(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3384776821 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1406916346_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m663403536_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m663403536(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3384776821 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m663403536_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3308097996_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3308097996(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3384776821 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3308097996_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Char>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2336343126_gshared (FlexibleDictionaryWrapper_2_t3384776821 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2336343126(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3384776821 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2336343126_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1591995448;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t3799289017;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3791344065_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3791344065(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995448 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3791344065_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4275981311_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4275981311(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995448 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4275981311_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m171551746_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m171551746(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995448 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m171551746_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m225063705_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m225063705(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1591995448 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m225063705_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3902863836_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3902863836(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995448 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3902863836_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1959978956_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1959978956(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995448 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1959978956_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1742223061_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1742223061(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1591995448 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1742223061_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Item(System.String)
extern "C"  uint64_t FlexibleDictionaryWrapper_2_get_Item_m3506526643_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3506526643(__this, ___key, method) ((  uint64_t (*) (FlexibleDictionaryWrapper_2_t1591995448 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3506526643_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2026294952_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2026294952(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995448 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2026294952_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3638902532_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3638902532(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995448 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3638902532_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1274382337_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1274382337(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995448 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1274382337_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m623911704_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m623911704(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995448 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m623911704_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1298374558_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, KeyValuePair_2U5BU5D_t3946004774* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1298374558(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995448 *, KeyValuePair_2U5BU5D_t3946004774*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1298374558_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3018753472_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3018753472(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1591995448 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3018753472_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3703330647_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3703330647(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995448 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3703330647_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2784443347_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2784443347(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995448 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2784443347_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m925442191_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m925442191(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1591995448 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m925442191_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m795310323_gshared (FlexibleDictionaryWrapper_2_t1591995448 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m795310323(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1591995448 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m795310323_gshared)(__this, method)

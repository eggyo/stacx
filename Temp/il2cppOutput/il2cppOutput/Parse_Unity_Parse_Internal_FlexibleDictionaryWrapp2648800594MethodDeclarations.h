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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>
struct FlexibleDictionaryWrapper_2_t2648800594;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t3799289112;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t1451756712;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t707842529;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t3595260976;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22112154528.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1165698945_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1165698945(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800594 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1165698945_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m344165951_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m344165951(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800594 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m344165951_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m4103225794_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m4103225794(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800594 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m4103225794_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2166769881_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2166769881(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2648800594 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2166769881_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1597099036_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1597099036(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800594 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1597099036_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3931385228_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3931385228(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800594 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3931385228_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3706051733_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3706051733(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2648800594 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3706051733_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::get_Item(System.String)
extern "C"  uint32_t FlexibleDictionaryWrapper_2_get_Item_m3869678579_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3869678579(__this, ___key, method) ((  uint32_t (*) (FlexibleDictionaryWrapper_2_t2648800594 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3869678579_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m793834600_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m793834600(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800594 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m793834600_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1013257412_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1013257412(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800594 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1013257412_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2129087041_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2129087041(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800594 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2129087041_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3639600472_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3639600472(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800594 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3639600472_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1916896606_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, KeyValuePair_2U5BU5D_t707842529* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1916896606(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2648800594 *, KeyValuePair_2U5BU5D_t707842529*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1916896606_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3082102784_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3082102784(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2648800594 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3082102784_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m587275543_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m587275543(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800594 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m587275543_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2135068179_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2135068179(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2648800594 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2135068179_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3595870927_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3595870927(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2648800594 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3595870927_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4149980851_gshared (FlexibleDictionaryWrapper_2_t2648800594 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4149980851(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2648800594 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4149980851_gshared)(__this, method)

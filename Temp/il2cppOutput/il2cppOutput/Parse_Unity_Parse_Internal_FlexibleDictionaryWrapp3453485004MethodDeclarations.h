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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>
struct FlexibleDictionaryWrapper_2_t3453485004;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t1365811277;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1698819933_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1698819933(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3453485004 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1698819933_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4061833187_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4061833187(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3453485004 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4061833187_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1764620598_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1764620598(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3453485004 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1764620598_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3293207833_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3293207833(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3453485004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3293207833_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3025550376_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3025550376(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3453485004 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3025550376_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3411901952_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3411901952(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3453485004 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3411901952_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3896362233_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3896362233(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3453485004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3896362233_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_Item(System.String)
extern "C"  uint64_t FlexibleDictionaryWrapper_2_get_Item_m3155422785_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3155422785(__this, ___key, method) ((  uint64_t (*) (FlexibleDictionaryWrapper_2_t3453485004 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3155422785_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m4179378500_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m4179378500(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3453485004 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m4179378500_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1546378400_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1546378400(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3453485004 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1546378400_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1871588325_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1871588325(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3453485004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1871588325_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m614316644_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m614316644(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3453485004 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m614316644_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2633010746_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, KeyValuePair_2U5BU5D_t3946004774* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2633010746(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3453485004 *, KeyValuePair_2U5BU5D_t3946004774*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2633010746_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3091646744_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3091646744(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3453485004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3091646744_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1602344331_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1602344331(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3453485004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1602344331_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2855941663_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2855941663(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3453485004 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2855941663_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m423386513_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m423386513(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3453485004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m423386513_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4259664591_gshared (FlexibleDictionaryWrapper_2_t3453485004 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4259664591(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3453485004 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4259664591_gshared)(__this, method)

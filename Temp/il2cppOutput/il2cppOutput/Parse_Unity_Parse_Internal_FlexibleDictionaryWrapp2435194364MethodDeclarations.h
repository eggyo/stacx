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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>
struct FlexibleDictionaryWrapper_2_t2435194364;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t1365811277;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1868413997_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1868413997(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194364 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1868413997_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4051664147_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4051664147(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194364 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4051664147_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2685405446_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2685405446(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194364 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2685405446_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m110954089_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m110954089(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2435194364 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m110954089_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m834505304_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m834505304(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194364 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m834505304_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1229484496_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1229484496(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194364 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1229484496_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2212429513_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2212429513(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2435194364 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2212429513_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Item(System.String)
extern "C"  uint8_t FlexibleDictionaryWrapper_2_get_Item_m2340694193_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2340694193(__this, ___key, method) ((  uint8_t (*) (FlexibleDictionaryWrapper_2_t2435194364 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2340694193_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3260885524_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3260885524(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194364 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3260885524_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1715972464_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1715972464(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194364 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1715972464_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3995296021_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3995296021(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194364 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3995296021_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1735072916_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1735072916(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194364 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1735072916_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1453377290_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, KeyValuePair_2U5BU5D_t2927714134* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1453377290(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194364 *, KeyValuePair_2U5BU5D_t2927714134*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1453377290_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3390944456_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3390944456(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2435194364 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3390944456_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m552495451_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m552495451(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194364 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m552495451_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4099564623_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4099564623(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194364 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4099564623_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1796142721_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1796142721(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2435194364 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1796142721_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3085463455_gshared (FlexibleDictionaryWrapper_2_t2435194364 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3085463455(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2435194364 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3085463455_gshared)(__this, method)

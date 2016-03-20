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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>
struct FlexibleDictionaryWrapper_2_t2435194211;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t1365811124;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1900281126_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1900281126(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194211 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1900281126_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2953607610_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2953607610(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194211 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2953607610_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m954038015_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m954038015(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194211 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m954038015_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m152012386_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m152012386(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2435194211 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m152012386_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m819954879_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m819954879(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194211 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m819954879_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3481256201_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3481256201(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194211 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3481256201_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3014747266_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3014747266(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2435194211 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3014747266_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Item(System.String)
extern "C"  uint8_t FlexibleDictionaryWrapper_2_get_Item_m1242637656_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1242637656(__this, ___key, method) ((  uint8_t (*) (FlexibleDictionaryWrapper_2_t2435194211 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1242637656_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1569127885_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1569127885(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194211 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1569127885_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1747839593_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1747839593(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194211 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1747839593_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m4050947004_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m4050947004(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194211 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m4050947004_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2220068667_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2220068667(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194211 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2220068667_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2385517507_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, KeyValuePair_2U5BU5D_t2927714134* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2385517507(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2435194211 *, KeyValuePair_2U5BU5D_t2927714134*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2385517507_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m368784367_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m368784367(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2435194211 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m368784367_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2973059732_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2973059732(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194211 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2973059732_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4265432246_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4265432246(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2435194211 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4265432246_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2151320104_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2151320104(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2435194211 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2151320104_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1233397528_gshared (FlexibleDictionaryWrapper_2_t2435194211 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1233397528(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2435194211 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1233397528_gshared)(__this, method)

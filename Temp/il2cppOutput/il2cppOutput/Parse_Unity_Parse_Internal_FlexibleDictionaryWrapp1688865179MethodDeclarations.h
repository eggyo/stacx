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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>
struct FlexibleDictionaryWrapper_2_t1688865179;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t1297090216;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Int16>
struct ICollection_1_t3313246115;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>[]
struct KeyValuePair_2U5BU5D_t2250106010;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int16>>
struct IEnumerator_1_t1161783083;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23973643931.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1358856400_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1358856400(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1688865179 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1358856400_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2457826384_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2457826384(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1688865179 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2457826384_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1528065193_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1528065193(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1688865179 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1528065193_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1219170316_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1219170316(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1688865179 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1219170316_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3755748565_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3755748565(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1688865179 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3755748565_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1758351155_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1758351155(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1688865179 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1758351155_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2056334252_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2056334252(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1688865179 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2056334252_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Item(System.String)
extern "C"  int16_t FlexibleDictionaryWrapper_2_get_Item_m746856430_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m746856430(__this, ___key, method) ((  int16_t (*) (FlexibleDictionaryWrapper_2_t1688865179 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m746856430_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3453432055_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3453432055(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1688865179 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3453432055_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1206414867_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1206414867(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1688865179 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1206414867_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2666230354_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2666230354(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1688865179 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2666230354_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m365610449_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m365610449(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1688865179 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m365610449_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1989462253_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, KeyValuePair_2U5BU5D_t2250106010* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1989462253(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1688865179 *, KeyValuePair_2U5BU5D_t2250106010*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1989462253_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3385909125_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3385909125(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1688865179 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3385909125_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3878251710_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3878251710(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1688865179 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3878251710_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2283616460_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2283616460(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1688865179 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2283616460_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3011803838_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3011803838(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1688865179 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3011803838_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4114719682_gshared (FlexibleDictionaryWrapper_2_t1688865179 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4114719682(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1688865179 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4114719682_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>
struct FlexibleDictionaryWrapper_2_t3739655268;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t3347880305;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m128872999_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m128872999(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3739655268 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m128872999_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1076844377_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1076844377(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3739655268 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1076844377_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3260845568_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3260845568(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3739655268 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3260845568_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m4282369507_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m4282369507(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3739655268 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m4282369507_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3147583774_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3147583774(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3739655268 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3147583774_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3791115082_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, String_t* ___key, int16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3791115082(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3739655268 *, String_t*, int16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3791115082_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m997991235_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m997991235(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3739655268 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m997991235_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Item(System.String)
extern "C"  int16_t FlexibleDictionaryWrapper_2_get_Item_m170433975_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m170433975(__this, ___key, method) ((  int16_t (*) (FlexibleDictionaryWrapper_2_t3739655268 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m170433975_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3237530510_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, String_t* ___key, int16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3237530510(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3739655268 *, String_t*, int16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3237530510_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4271398762_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4271398762(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3739655268 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4271398762_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2842462043_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2842462043(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3739655268 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2842462043_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1415931354_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1415931354(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3739655268 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1415931354_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3396448900_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, KeyValuePair_2U5BU5D_t2250106010* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3396448900(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3739655268 *, KeyValuePair_2U5BU5D_t2250106010*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3396448900_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3690887566_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3690887566(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3739655268 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3690887566_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m343146197_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m343146197(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3739655268 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m343146197_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m465717013_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, KeyValuePair_2_t3973643931  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m465717013(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3739655268 *, KeyValuePair_2_t3973643931 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m465717013_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1075503879_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1075503879(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3739655268 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1075503879_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int16,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1387503257_gshared (FlexibleDictionaryWrapper_2_t3739655268 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1387503257(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3739655268 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1387503257_gshared)(__this, method)

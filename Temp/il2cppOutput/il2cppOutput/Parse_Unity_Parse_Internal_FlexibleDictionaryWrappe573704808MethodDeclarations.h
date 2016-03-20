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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>
struct FlexibleDictionaryWrapper_2_t573704808;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t3799289017;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m458825457_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m458825457(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704808 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m458825457_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3960741071_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3960741071(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704808 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3960741071_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2946078258_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2946078258(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704808 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2946078258_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m359445449_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m359445449(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t573704808 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m359445449_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m404976044_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m404976044(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704808 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m404976044_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3024514556_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3024514556(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704808 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3024514556_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1079916293_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1079916293(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t573704808 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1079916293_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Item(System.String)
extern "C"  uint8_t FlexibleDictionaryWrapper_2_get_Item_m4019744067_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m4019744067(__this, ___key, method) ((  uint8_t (*) (FlexibleDictionaryWrapper_2_t573704808 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m4019744067_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3617783768_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3617783768(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704808 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3617783768_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m306383924_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m306383924(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704808 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m306383924_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2684811473_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2684811473(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704808 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2684811473_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1007617768_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1007617768(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704808 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1007617768_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3384443086_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, KeyValuePair_2U5BU5D_t2927714134* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3384443086(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704808 *, KeyValuePair_2U5BU5D_t2927714134*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3384443086_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3707047952_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3707047952(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t573704808 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3707047952_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1222786439_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1222786439(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704808 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1222786439_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2682049443_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2682049443(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704808 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2682049443_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m531211679_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m531211679(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t573704808 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m531211679_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3049780771_gshared (FlexibleDictionaryWrapper_2_t573704808 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3049780771(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t573704808 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3049780771_gshared)(__this, method)

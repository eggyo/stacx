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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>
struct FlexibleDictionaryWrapper_2_t2443125546;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t1373742459;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3032036287_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3032036287(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2443125546 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3032036287_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3197977793_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3197977793(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2443125546 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3197977793_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1016593048_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1016593048(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2443125546 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1016593048_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1032739835_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1032739835(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2443125546 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1032739835_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1231381894_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1231381894(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2443125546 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1231381894_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m228945378_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m228945378(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2443125546 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m228945378_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3285268443_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3285268443(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2443125546 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3285268443_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Item(System.String)
extern "C"  uint8_t FlexibleDictionaryWrapper_2_get_Item_m1487007839_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1487007839(__this, ___key, method) ((  uint8_t (*) (FlexibleDictionaryWrapper_2_t2443125546 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1487007839_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1554972454_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1554972454(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2443125546 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1554972454_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2879594754_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2879594754(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2443125546 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2879594754_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2750563523_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2750563523(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2443125546 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2750563523_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1288015938_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1288015938(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2443125546 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1288015938_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2581085724_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, KeyValuePair_2U5BU5D_t2927714134* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2581085724(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2443125546 *, KeyValuePair_2U5BU5D_t2927714134*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2581085724_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1901531510_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1901531510(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2443125546 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1901531510_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1008322925_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1008322925(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2443125546 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1008322925_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m595192701_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m595192701(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2443125546 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m595192701_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3889056815_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3889056815(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2443125546 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3889056815_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4182369329_gshared (FlexibleDictionaryWrapper_2_t2443125546 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4182369329(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2443125546 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4182369329_gshared)(__this, method)

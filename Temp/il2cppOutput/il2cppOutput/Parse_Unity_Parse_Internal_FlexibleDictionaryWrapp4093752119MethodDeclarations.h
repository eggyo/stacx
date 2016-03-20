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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>
struct FlexibleDictionaryWrapper_2_t4093752119;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3024369032;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1991705042_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1991705042(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4093752119 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1991705042_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2174613646_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2174613646(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4093752119 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2174613646_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m729179307_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m729179307(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4093752119 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m729179307_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1434079886_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1434079886(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4093752119 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1434079886_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1731967891_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1731967891(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4093752119 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1731967891_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m530759093_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m530759093(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4093752119 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m530759093_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3980800302_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3980800302(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4093752119 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3980800302_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::get_Item(System.String)
extern "C"  uint8_t FlexibleDictionaryWrapper_2_get_Item_m1268203244_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1268203244(__this, ___key, method) ((  uint8_t (*) (FlexibleDictionaryWrapper_2_t4093752119 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1268203244_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1257743225_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1257743225(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4093752119 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1257743225_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1839263509_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1839263509(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4093752119 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1839263509_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3529912976_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3529912976(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4093752119 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3529912976_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m858450191_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m858450191(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4093752119 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m858450191_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m350473583_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, KeyValuePair_2U5BU5D_t2927714134* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m350473583(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4093752119 *, KeyValuePair_2U5BU5D_t2927714134*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m350473583_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1293255235_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1293255235(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4093752119 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1293255235_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2506039104_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2506039104(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4093752119 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2506039104_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m822678410_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m822678410(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4093752119 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m822678410_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3362031932_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3362031932(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4093752119 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3362031932_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2092069316_gshared (FlexibleDictionaryWrapper_2_t4093752119 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2092069316(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t4093752119 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2092069316_gshared)(__this, method)

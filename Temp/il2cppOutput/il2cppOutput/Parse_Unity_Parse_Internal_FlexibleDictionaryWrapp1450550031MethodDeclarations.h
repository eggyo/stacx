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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>
struct FlexibleDictionaryWrapper_2_t1450550031;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.SByte>
struct ICollection_1_t3321177450;
// System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>[]
struct KeyValuePair_2U5BU5D_t3953378263;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.SByte>>
struct IEnumerator_1_t1169714418;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23981575266.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3383256658_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3383256658(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1450550031 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3383256658_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m673997838_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m673997838(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1450550031 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m673997838_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2198227243_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2198227243(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1450550031 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2198227243_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3731044110_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3731044110(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1450550031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3731044110_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3446605587_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3446605587(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1450550031 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3446605587_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3486859829_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3486859829(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1450550031 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3486859829_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3750229422_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3750229422(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1450550031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3750229422_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Item(System.String)
extern "C"  int8_t FlexibleDictionaryWrapper_2_get_Item_m4062554732_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m4062554732(__this, ___key, method) ((  int8_t (*) (FlexibleDictionaryWrapper_2_t1450550031 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m4062554732_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m4263536633_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m4263536633(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1450550031 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m4263536633_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3230815125_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3230815125(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1450550031 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3230815125_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1849400848_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1849400848(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1450550031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1849400848_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2380551311_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2380551311(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1450550031 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2380551311_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1358238191_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, KeyValuePair_2U5BU5D_t3953378263* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1358238191(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1450550031 *, KeyValuePair_2U5BU5D_t3953378263*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1358238191_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3779669443_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3779669443(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1450550031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3779669443_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1344971712_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1344971712(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1450550031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1344971712_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1512529674_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1512529674(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1450550031 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1512529674_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2077652156_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2077652156(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1450550031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2077652156_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4259518020_gshared (FlexibleDictionaryWrapper_2_t1450550031 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4259518020(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1450550031 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4259518020_gshared)(__this, method)

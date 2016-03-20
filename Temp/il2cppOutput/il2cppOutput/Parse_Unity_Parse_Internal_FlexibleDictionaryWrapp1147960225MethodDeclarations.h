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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>
struct FlexibleDictionaryWrapper_2_t1147960225;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t3347880305;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2532288768_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2532288768(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1147960225 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2532288768_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m83937824_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m83937824(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1147960225 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m83937824_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3021492697_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3021492697(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1147960225 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3021492697_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3267910588_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3267910588(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1147960225 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3267910588_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3723086245_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3723086245(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1147960225 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3723086245_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2445119587_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2445119587(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1147960225 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2445119587_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1060546268_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1060546268(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1147960225 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1060546268_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_Item(System.String)
extern "C"  int8_t FlexibleDictionaryWrapper_2_get_Item_m3472494718_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3472494718(__this, ___key, method) ((  int8_t (*) (FlexibleDictionaryWrapper_2_t1147960225 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3472494718_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m852688167_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m852688167(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1147960225 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m852688167_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2379847235_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2379847235(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1147960225 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2379847235_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3253889058_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3253889058(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1147960225 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3253889058_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3183578785_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3183578785(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1147960225 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3183578785_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2977842461_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, KeyValuePair_2U5BU5D_t3953378263* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2977842461(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1147960225 *, KeyValuePair_2U5BU5D_t3953378263*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2977842461_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2307432149_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2307432149(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1147960225 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2307432149_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3919646190_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3919646190(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1147960225 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3919646190_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3520066972_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3520066972(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1147960225 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3520066972_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m636685518_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m636685518(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1147960225 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m636685518_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1234697202_gshared (FlexibleDictionaryWrapper_2_t1147960225 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1234697202(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1147960225 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1234697202_gshared)(__this, method)

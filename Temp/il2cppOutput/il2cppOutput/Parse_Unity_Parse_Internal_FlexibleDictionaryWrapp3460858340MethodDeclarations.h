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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>
struct FlexibleDictionaryWrapper_2_t3460858340;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t1365811124;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1179337855_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1179337855(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3460858340 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1179337855_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2937793537_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2937793537(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3460858340 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2937793537_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1109057984_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1109057984(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3460858340 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1109057984_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3034766167_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3034766167(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3460858340 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3034766167_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2812847454_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2812847454(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3460858340 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2812847454_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1830311690_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1830311690(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3460858340 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1830311690_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3672683283_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3672683283(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3460858340 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3672683283_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Item(System.String)
extern "C"  int8_t FlexibleDictionaryWrapper_2_get_Item_m2996796533_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2996796533(__this, ___key, method) ((  int8_t (*) (FlexibleDictionaryWrapper_2_t3460858340 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2996796533_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3472859110_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3472859110(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3460858340 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3472859110_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1026896322_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1026896322(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3460858340 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1026896322_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m4188449795_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m4188449795(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3460858340 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m4188449795_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m771500570_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m771500570(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3460858340 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m771500570_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2429525724_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, KeyValuePair_2U5BU5D_t3953378263* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2429525724(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3460858340 *, KeyValuePair_2U5BU5D_t3953378263*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2429525724_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m742644290_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m742644290(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3460858340 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m742644290_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1653867157_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1653867157(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3460858340 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1653867157_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1220352853_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1220352853(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3460858340 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1220352853_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m960759505_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m960759505(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3460858340 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m960759505_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3398299313_gshared (FlexibleDictionaryWrapper_2_t3460858340 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3398299313(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3460858340 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3398299313_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>
struct FlexibleDictionaryWrapper_2_t824448952;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3024369032;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m654956267_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m654956267(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t824448952 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m654956267_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4157158677_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4157158677(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t824448952 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4157158677_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3674481452_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3674481452(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t824448952 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3674481452_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m1506557507_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m1506557507(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t824448952 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m1506557507_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1346318450_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1346318450(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t824448952 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1346318450_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3110983542_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3110983542(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t824448952 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3110983542_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m602152831_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m602152831(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t824448952 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m602152831_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::get_Item(System.String)
extern "C"  int8_t FlexibleDictionaryWrapper_2_get_Item_m3387704009_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3387704009(__this, ___key, method) ((  int8_t (*) (FlexibleDictionaryWrapper_2_t824448952 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3387704009_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1087382354_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1087382354(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t824448952 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1087382354_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m502514734_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m502514734(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t824448952 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m502514734_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2526108951_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2526108951(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t824448952 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2526108951_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m353912878_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m353912878(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t824448952 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m353912878_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3987664456_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, KeyValuePair_2U5BU5D_t3953378263* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3987664456(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t824448952 *, KeyValuePair_2U5BU5D_t3953378263*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3987664456_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m4090355670_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m4090355670(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t824448952 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m4090355670_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1777326849_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1777326849(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t824448952 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1777326849_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3669077609_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3669077609(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t824448952 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3669077609_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1694597029_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1694597029(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t824448952 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1694597029_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3798513437_gshared (FlexibleDictionaryWrapper_2_t824448952 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3798513437(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t824448952 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3798513437_gshared)(__this, method)

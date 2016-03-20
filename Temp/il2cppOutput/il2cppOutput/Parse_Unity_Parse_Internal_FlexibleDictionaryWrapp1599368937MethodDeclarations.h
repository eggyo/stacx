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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>
struct FlexibleDictionaryWrapper_2_t1599368937;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt32>
struct IDictionary_2_t3799289017;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3879387832_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3879387832(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599368937 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3879387832_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3470504808_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3470504808(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599368937 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3470504808_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3456730001_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3456730001(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599368937 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3456730001_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3825466740_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3825466740(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1599368937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3825466740_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2055103725_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2055103725(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599368937 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2055103725_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3384842267_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, String_t* ___key, int8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3384842267(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599368937 *, String_t*, int8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3384842267_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1096340_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1096340(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1599368937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1096340_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Item(System.String)
extern "C"  int8_t FlexibleDictionaryWrapper_2_get_Item_m2564094406_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2564094406(__this, ___key, method) ((  int8_t (*) (FlexibleDictionaryWrapper_2_t1599368937 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2564094406_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2503909599_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, String_t* ___key, int8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2503909599(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599368937 *, String_t*, int8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2503909599_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3726946299_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3726946299(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599368937 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3726946299_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2652430698_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2652430698(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599368937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2652430698_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3346647017_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3346647017(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599368937 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3346647017_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m453730517_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, KeyValuePair_2U5BU5D_t3953378263* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m453730517(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1599368937 *, KeyValuePair_2U5BU5D_t3953378263*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m453730517_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2411803677_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2411803677(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1599368937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2411803677_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3277489574_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3277489574(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599368937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3277489574_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2773868772_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, KeyValuePair_2_t3981575266  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2773868772(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1599368937 *, KeyValuePair_2_t3981575266 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2773868772_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2278538774_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2278538774(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1599368937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2278538774_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.SByte,System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1442259370_gshared (FlexibleDictionaryWrapper_2_t1599368937 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1442259370(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1599368937 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1442259370_gshared)(__this, method)

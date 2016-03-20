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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>
struct FlexibleDictionaryWrapper_2_t4186671173;
// System.Collections.Generic.IDictionary`2<System.String,System.Int16>
struct IDictionary_2_t1365811124;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3313246173;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t384223800;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct IEnumerator_1_t1161783141;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23973643989.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2946142258_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2946142258(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4186671173 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2946142258_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1149380142_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1149380142(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4186671173 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1149380142_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1554914419_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1554914419(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4186671173 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1554914419_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2729434122_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2729434122(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4186671173 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2729434122_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1760708299_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1760708299(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4186671173 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1760708299_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m869498749_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, String_t* ___key, int32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m869498749(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4186671173 *, String_t*, int32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m869498749_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2306364166_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2306364166(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4186671173 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2306364166_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Item(System.String)
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Item_m1208383138_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1208383138(__this, ___key, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4186671173 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1208383138_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2444163545_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, String_t* ___key, int32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2444163545(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4186671173 *, String_t*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2444163545_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2793700725_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2793700725(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4186671173 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2793700725_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2644090928_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2644090928(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4186671173 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2644090928_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1794586183_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1794586183(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4186671173 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1794586183_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2636415951_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, KeyValuePair_2U5BU5D_t384223800* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2636415951(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t4186671173 *, KeyValuePair_2U5BU5D_t384223800*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2636415951_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m4162252783_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m4162252783(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t4186671173 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m4162252783_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m4288442632_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m4288442632(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4186671173 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m4288442632_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1266110146_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, KeyValuePair_2_t3973643989  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1266110146(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t4186671173 *, KeyValuePair_2_t3973643989 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1266110146_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m353009150_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m353009150(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t4186671173 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m353009150_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Int32,System.Int16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1412682212_gshared (FlexibleDictionaryWrapper_2_t4186671173 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1412682212(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t4186671173 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1412682212_gshared)(__this, method)

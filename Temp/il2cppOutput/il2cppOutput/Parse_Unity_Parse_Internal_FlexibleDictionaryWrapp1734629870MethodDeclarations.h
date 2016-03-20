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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>
struct FlexibleDictionaryWrapper_2_t1734629870;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t3799288959;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Single>
struct ICollection_1_t1424040407;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Single>[]
struct KeyValuePair_2U5BU5D_t4088639254;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Single>>
struct IEnumerator_1_t3567544671;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22084438223.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2198374123_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2198374123(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1734629870 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2198374123_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3109586197_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3109586197(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1734629870 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3109586197_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2675102508_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2675102508(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1734629870 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2675102508_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2979720771_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2979720771(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1734629870 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2979720771_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3445784690_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3445784690(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1734629870 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3445784690_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1008240502_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1008240502(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1734629870 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1008240502_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3267809151_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3267809151(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1734629870 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3267809151_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Item(System.String)
extern "C"  float FlexibleDictionaryWrapper_2_get_Item_m2340131529_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2340131529(__this, ___key, method) ((  float (*) (FlexibleDictionaryWrapper_2_t1734629870 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2340131529_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2756891474_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2756891474(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1734629870 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2756891474_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2045932590_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2045932590(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1734629870 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2045932590_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2160110871_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2160110871(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1734629870 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2160110871_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3704068142_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3704068142(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1734629870 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3704068142_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2841747016_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, KeyValuePair_2U5BU5D_t4088639254* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2841747016(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1734629870 *, KeyValuePair_2U5BU5D_t4088639254*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2841747016_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2513776598_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2513776598(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1734629870 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2513776598_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2012908289_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2012908289(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1734629870 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2012908289_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1710554729_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1710554729(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1734629870 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1710554729_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m316723109_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m316723109(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1734629870 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m316723109_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1285515037_gshared (FlexibleDictionaryWrapper_2_t1734629870 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1285515037(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1734629870 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1285515037_gshared)(__this, method)

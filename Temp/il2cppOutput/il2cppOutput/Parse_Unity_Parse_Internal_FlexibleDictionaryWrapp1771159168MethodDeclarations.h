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

// Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>
struct FlexibleDictionaryWrapper_2_t1771159168;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<Parse.ParseGeoPoint>
struct ICollection_1_t2168685581;
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>[]
struct KeyValuePair_2U5BU5D_t4273987400;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseGeoPoint>>
struct IEnumerator_1_t17222549;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_Parse_ParseGeoPoint1702854195.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22829083397.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3786743707_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3786743707(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1771159168 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3786743707_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m423475813_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, String_t* ___key, ParseGeoPoint_t1702854195  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m423475813(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1771159168 *, String_t*, ParseGeoPoint_t1702854195 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m423475813_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m10081500_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m10081500(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1771159168 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m10081500_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m4269304947_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m4269304947(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1771159168 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m4269304947_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1340944578_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1340944578(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1771159168 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1340944578_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m679707942_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, String_t* ___key, ParseGeoPoint_t1702854195 * ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m679707942(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1771159168 *, String_t*, ParseGeoPoint_t1702854195 *, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m679707942_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3813146415_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3813146415(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1771159168 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3813146415_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Item(System.String)
extern "C"  ParseGeoPoint_t1702854195  FlexibleDictionaryWrapper_2_get_Item_m1529815001_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1529815001(__this, ___key, method) ((  ParseGeoPoint_t1702854195  (*) (FlexibleDictionaryWrapper_2_t1771159168 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1529815001_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1693085698_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, String_t* ___key, ParseGeoPoint_t1702854195  ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1693085698(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1771159168 *, String_t*, ParseGeoPoint_t1702854195 , const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1693085698_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3634302174_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, KeyValuePair_2_t2829083397  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3634302174(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1771159168 *, KeyValuePair_2_t2829083397 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3634302174_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2816115303_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2816115303(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1771159168 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2816115303_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2831127678_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, KeyValuePair_2_t2829083397  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2831127678(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1771159168 *, KeyValuePair_2_t2829083397 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2831127678_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3292228344_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, KeyValuePair_2U5BU5D_t4273987400* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3292228344(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1771159168 *, KeyValuePair_2U5BU5D_t4273987400*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3292228344_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1337202854_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1337202854(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1771159168 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1337202854_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2985748657_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2985748657(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1771159168 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2985748657_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1633668793_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, KeyValuePair_2_t2829083397  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1633668793(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1771159168 *, KeyValuePair_2_t2829083397 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1633668793_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2596931637_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2596931637(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1771159168 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2596931637_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<Parse.ParseGeoPoint,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m933924813_gshared (FlexibleDictionaryWrapper_2_t1771159168 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m933924813(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1771159168 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m933924813_gshared)(__this, method)

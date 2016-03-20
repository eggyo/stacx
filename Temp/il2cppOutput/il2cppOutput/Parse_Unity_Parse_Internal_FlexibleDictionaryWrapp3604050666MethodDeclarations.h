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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>
struct FlexibleDictionaryWrapper_2_t3604050666;
// System.Collections.Generic.IDictionary`2<System.String,System.SByte>
struct IDictionary_2_t1373742459;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2656724927_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2656724927(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3604050666 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2656724927_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3722744001_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3722744001(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3604050666 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3722744001_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1721760664_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1721760664(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3604050666 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1721760664_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m864117627_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m864117627(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3604050666 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m864117627_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2292237446_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2292237446(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3604050666 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2292237446_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2011737826_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2011737826(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3604050666 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2011737826_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1707915995_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1707915995(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3604050666 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1707915995_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Item(System.String)
extern "C"  float FlexibleDictionaryWrapper_2_get_Item_m2816333599_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2816333599(__this, ___key, method) ((  float (*) (FlexibleDictionaryWrapper_2_t3604050666 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2816333599_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m1645687590_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m1645687590(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3604050666 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m1645687590_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2504283394_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2504283394(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3604050666 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2504283394_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m4082208963_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m4082208963(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3604050666 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m4082208963_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1196109634_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1196109634(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3604050666 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1196109634_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m1494512156_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, KeyValuePair_2U5BU5D_t4088639254* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m1494512156(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3604050666 *, KeyValuePair_2U5BU5D_t4088639254*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m1494512156_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m804294390_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m804294390(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3604050666 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m804294390_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m4009691757_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m4009691757(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3604050666 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m4009691757_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4040903293_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4040903293(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3604050666 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4040903293_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2025063535_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2025063535(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3604050666 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2025063535_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.SByte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3536867377_gshared (FlexibleDictionaryWrapper_2_t3604050666 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3536867377(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3604050666 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3536867377_gshared)(__this, method)

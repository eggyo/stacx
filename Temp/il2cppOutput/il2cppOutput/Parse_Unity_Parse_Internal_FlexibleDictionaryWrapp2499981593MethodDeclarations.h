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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>
struct FlexibleDictionaryWrapper_2_t2499981593;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.UInt32>
struct ICollection_1_t1451756712;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t707842529;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>
struct IEnumerator_1_t3595260976;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22112154528.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m212135962_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m212135962(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2499981593 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m212135962_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m683607878_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m683607878(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2499981593 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m683607878_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1769690971_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1769690971(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2499981593 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1769690971_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2855776370_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2855776370(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2499981593 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2855776370_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2754992867_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2754992867(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2499981593 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2754992867_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3438472293_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3438472293(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2499981593 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3438472293_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m121356782_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m121356782(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2499981593 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m121356782_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Item(System.String)
extern "C"  uint32_t FlexibleDictionaryWrapper_2_get_Item_m4209120506_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m4209120506(__this, ___key, method) ((  uint32_t (*) (FlexibleDictionaryWrapper_2_t2499981593 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m4209120506_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m239798209_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m239798209(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2499981593 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m239798209_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m59694429_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m59694429(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2499981593 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m59694429_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m237744456_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m237744456(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2499981593 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m237744456_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1907922015_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1907922015(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2499981593 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1907922015_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m677231031_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, KeyValuePair_2U5BU5D_t707842529* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m677231031(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t2499981593 *, KeyValuePair_2U5BU5D_t707842529*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m677231031_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2966467463_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2966467463(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t2499981593 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2966467463_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3133320688_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3133320688(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2499981593 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3133320688_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1453937370_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1453937370(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t2499981593 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1453937370_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2015433430_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2015433430(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t2499981593 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2015433430_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4048747980_gshared (FlexibleDictionaryWrapper_2_t2499981593 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4048747980(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t2499981593 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4048747980_gshared)(__this, method)

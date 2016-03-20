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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>
struct FlexibleDictionaryWrapper_2_t3157137393;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3024369032;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Char>
struct ICollection_1_t3244538085;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>[]
struct KeyValuePair_2U5BU5D_t1991099408;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>
struct IEnumerator_1_t1093075053;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23904935901.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2921566496_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2921566496(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3157137393 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2921566496_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2262054400_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2262054400(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3157137393 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2262054400_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2926500345_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2926500345(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3157137393 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2926500345_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2255692764_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2255692764(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3157137393 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2255692764_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3412503941_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3412503941(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3157137393 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3412503941_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3755311235_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3755311235(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3157137393 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3755311235_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3276793596_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3276793596(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3157137393 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3276793596_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m1355643998_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1355643998(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t3157137393 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1355643998_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m4054318407_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m4054318407(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3157137393 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m4054318407_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2769124963_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2769124963(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3157137393 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2769124963_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3571028994_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3571028994(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3157137393 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3571028994_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1230617217_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1230617217(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3157137393 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1230617217_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2681496893_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, KeyValuePair_2U5BU5D_t1991099408* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2681496893(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3157137393 *, KeyValuePair_2U5BU5D_t1991099408*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2681496893_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m993450677_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m993450677(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3157137393 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m993450677_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1088241166_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1088241166(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3157137393 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1088241166_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4081162620_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4081162620(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3157137393 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4081162620_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2623559854_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2623559854(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3157137393 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2623559854_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2457416722_gshared (FlexibleDictionaryWrapper_2_t3157137393 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2457416722(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3157137393 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m2457416722_gshared)(__this, method)

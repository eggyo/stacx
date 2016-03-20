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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>
struct FlexibleDictionaryWrapper_2_t1429858577;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t1297090216;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3149140948_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3149140948(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1429858577 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3149140948_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m178555852_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m178555852(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1429858577 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m178555852_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2142099221_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2142099221(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1429858577 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2142099221_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3669029164_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3669029164(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1429858577 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3669029164_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m931983081_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m931983081(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1429858577 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m931983081_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2622568607_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, String_t* ___key, uint16_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2622568607(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1429858577 *, String_t*, uint16_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2622568607_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m1324249896_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m1324249896(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1429858577 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m1324249896_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::get_Item(System.String)
extern "C"  uint16_t FlexibleDictionaryWrapper_2_get_Item_m2289815296_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m2289815296(__this, ___key, method) ((  uint16_t (*) (FlexibleDictionaryWrapper_2_t1429858577 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m2289815296_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3085002491_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, String_t* ___key, uint16_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3085002491(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1429858577 *, String_t*, uint16_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3085002491_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2996699415_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2996699415(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1429858577 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2996699415_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m935789006_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m935789006(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1429858577 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m935789006_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3571800805_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3571800805(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1429858577 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3571800805_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2329223921_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, KeyValuePair_2U5BU5D_t1991099408* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2329223921(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1429858577 *, KeyValuePair_2U5BU5D_t1991099408*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2329223921_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m1152037901_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m1152037901(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1429858577 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m1152037901_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1201974826_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1201974826(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1429858577 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1201974826_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4248961760_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, KeyValuePair_2_t3904935901  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4248961760(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1429858577 *, KeyValuePair_2_t3904935901 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4248961760_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m406083036_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m406083036(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1429858577 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m406083036_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Char,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m565195398_gshared (FlexibleDictionaryWrapper_2_t1429858577 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m565195398(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1429858577 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m565195398_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>
struct FlexibleDictionaryWrapper_2_t1283221216;
// System.Collections.Generic.IDictionary`2<System.String,System.Double>
struct IDictionary_2_t3347880305;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m361976121_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m361976121(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1283221216 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m361976121_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3957024647_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3957024647(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1283221216 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3957024647_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2896200570_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2896200570(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1283221216 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2896200570_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3164535441_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3164535441(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1283221216 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3164535441_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m599742308_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m599742308(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1283221216 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m599742308_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1516782916_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1516782916(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1283221216 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1516782916_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m486080589_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m486080589(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1283221216 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m486080589_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Item(System.String)
extern "C"  float FlexibleDictionaryWrapper_2_get_Item_m3187569979_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3187569979(__this, ___key, method) ((  float (*) (FlexibleDictionaryWrapper_2_t1283221216 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3187569979_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m483764256_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m483764256(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1283221216 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m483764256_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m209534588_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m209534588(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1283221216 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m209534588_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m1617605513_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m1617605513(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1283221216 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m1617605513_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2290421408_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2290421408(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1283221216 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2290421408_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2289545494_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, KeyValuePair_2U5BU5D_t4088639254* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2289545494(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1283221216 *, KeyValuePair_2U5BU5D_t4088639254*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2289545494_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3948064072_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3948064072(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1283221216 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3948064072_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m418096335_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m418096335(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1283221216 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m418096335_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2871093595_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2871093595(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1283221216 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2871093595_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1235108887_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1235108887(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1283221216 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1235108887_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Double>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m11527275_gshared (FlexibleDictionaryWrapper_2_t1283221216 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m11527275(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1283221216 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m11527275_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>
struct FlexibleDictionaryWrapper_2_t573704750;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt16>
struct IDictionary_2_t3799288959;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t3244525207;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>[]
struct KeyValuePair_2U5BU5D_t2927714134;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct IEnumerator_1_t1093062175;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23904923023.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m948124395_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m948124395(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704750 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m948124395_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4021702933_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4021702933(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704750 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4021702933_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m2289742892_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m2289742892(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704750 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m2289742892_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3912041923_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3912041923(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t573704750 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3912041923_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m624033650_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m624033650(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704750 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m624033650_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1576249462_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, String_t* ___key, uint8_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1576249462(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704750 *, String_t*, uint8_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1576249462_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m626127487_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m626127487(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t573704750 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m626127487_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Item(System.String)
extern "C"  uint8_t FlexibleDictionaryWrapper_2_get_Item_m4080705929_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m4080705929(__this, ___key, method) ((  uint8_t (*) (FlexibleDictionaryWrapper_2_t573704750 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m4080705929_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m4239689554_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, String_t* ___key, uint8_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m4239689554(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704750 *, String_t*, uint8_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m4239689554_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m795682862_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m795682862(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704750 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m795682862_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3828775191_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3828775191(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704750 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3828775191_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2258196270_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2258196270(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704750 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2258196270_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2165789256_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, KeyValuePair_2U5BU5D_t2927714134* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2165789256(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t573704750 *, KeyValuePair_2U5BU5D_t2927714134*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2165789256_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m2168388950_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m2168388950(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t573704750 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m2168388950_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3459755009_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3459755009(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704750 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3459755009_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2267708777_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, KeyValuePair_2_t3904923023  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2267708777(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t573704750 *, KeyValuePair_2_t3904923023 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2267708777_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2265939941_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2265939941(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t573704750 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2265939941_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Byte,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4116206365_gshared (FlexibleDictionaryWrapper_2_t573704750 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4116206365(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t573704750 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m4116206365_gshared)(__this, method)

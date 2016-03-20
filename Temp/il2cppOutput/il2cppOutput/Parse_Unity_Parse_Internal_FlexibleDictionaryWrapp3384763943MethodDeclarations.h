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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>
struct FlexibleDictionaryWrapper_2_t3384763943;
// System.Collections.Generic.IDictionary`2<System.String,System.Byte>
struct IDictionary_2_t1297090216;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.UInt64>
struct ICollection_1_t1451756807;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>[]
struct KeyValuePair_2U5BU5D_t3946004774;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt64>>
struct IEnumerator_1_t3595261071;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22112154623.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3944503090_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3944503090(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3384763943 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3944503090_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m955957038_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m955957038(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3384763943 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m955957038_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3133334387_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3133334387(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3384763943 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3133334387_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m959619850_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m959619850(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3384763943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m959619850_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m616374219_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m616374219(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3384763943 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m616374219_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2868315773_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2868315773(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3384763943 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2868315773_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m2321897990_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m2321897990(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3384763943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m2321897990_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Item(System.String)
extern "C"  uint64_t FlexibleDictionaryWrapper_2_get_Item_m1014960034_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1014960034(__this, ___key, method) ((  uint64_t (*) (FlexibleDictionaryWrapper_2_t3384763943 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1014960034_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m3182297305_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m3182297305(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3384763943 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m3182297305_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3792061557_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3792061557(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3384763943 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3792061557_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3764664624_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3764664624(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3384763943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3764664624_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m3430534983_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m3430534983(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3384763943 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m3430534983_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3429010127_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, KeyValuePair_2U5BU5D_t3946004774* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3429010127(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t3384763943 *, KeyValuePair_2U5BU5D_t3946004774*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3429010127_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m837617903_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m837617903(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t3384763943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m837617903_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m615381000_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m615381000(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3384763943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m615381000_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m785131458_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m785131458(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t3384763943 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m785131458_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3559659262_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3559659262(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t3384763943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3559659262_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.Byte>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3340703972_gshared (FlexibleDictionaryWrapper_2_t3384763943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3340703972(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t3384763943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3340703972_gshared)(__this, method)

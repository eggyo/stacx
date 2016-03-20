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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1591995543;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t3799289112;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m4248775874_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m4248775874(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995543 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m4248775874_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1140032414_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1140032414(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995543 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1140032414_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m1246583811_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m1246583811(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995543 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m1246583811_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m3736601882_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m3736601882(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1591995543 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m3736601882_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4136471867_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4136471867(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995543 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4136471867_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m2554909453_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, String_t* ___key, uint64_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m2554909453(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995543 *, String_t*, uint64_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m2554909453_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m486116502_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m486116502(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1591995543 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m486116502_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Item(System.String)
extern "C"  uint64_t FlexibleDictionaryWrapper_2_get_Item_m370577746_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m370577746(__this, ___key, method) ((  uint64_t (*) (FlexibleDictionaryWrapper_2_t1591995543 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m370577746_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m44991081_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, String_t* ___key, uint64_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m44991081(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995543 *, String_t*, uint64_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m44991081_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m4096334341_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m4096334341(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995543 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m4096334341_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2362695072_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2362695072(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995543 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2362695072_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1389494455_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1389494455(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995543 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1389494455_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m3442547807_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, KeyValuePair_2U5BU5D_t3946004774* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m3442547807(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1591995543 *, KeyValuePair_2U5BU5D_t3946004774*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m3442547807_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m207287263_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m207287263(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1591995543 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m207287263_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3519734936_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3519734936(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995543 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3519734936_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2204235058_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, KeyValuePair_2_t2112154623  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2204235058(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1591995543 *, KeyValuePair_2_t2112154623 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2204235058_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m2304993070_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m2304993070(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1591995543 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m2304993070_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt64,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3713801844_gshared (FlexibleDictionaryWrapper_2_t1591995543 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3713801844(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1591995543 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3713801844_gshared)(__this, method)

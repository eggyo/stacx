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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>
struct FlexibleDictionaryWrapper_2_t1563479738;
// System.Collections.Generic.IDictionary`2<System.String,System.UInt64>
struct IDictionary_2_t3799289112;
// System.String
struct String_t;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Collections.Generic.ICollection`1<System.Double>
struct ICollection_1_t1000348000;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>[]
struct KeyValuePair_2U5BU5D_t3917488969;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct IEnumerator_1_t3143852264;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21660745816.h"

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m3512430537_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m3512430537(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1563479738 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m3512430537_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m2529067767_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m2529067767(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1563479738 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m2529067767_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m4283855370_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m4283855370(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1563479738 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m4283855370_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m262408481_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m262408481(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1563479738 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m262408481_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m915574484_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m915574484(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1563479738 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m915574484_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3723823060_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, String_t* ___key, double* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3723823060(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1563479738 *, String_t*, double*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3723823060_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3270814429_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3270814429(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1563479738 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3270814429_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Item(System.String)
extern "C"  double FlexibleDictionaryWrapper_2_get_Item_m1759613099_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m1759613099(__this, ___key, method) ((  double (*) (FlexibleDictionaryWrapper_2_t1563479738 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m1759613099_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2580165296_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, String_t* ___key, double ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2580165296(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1563479738 *, String_t*, double, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2580165296_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3359989004_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, KeyValuePair_2_t1660745816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3359989004(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1563479738 *, KeyValuePair_2_t1660745816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3359989004_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3797069561_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3797069561(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1563479738 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3797069561_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m282692112_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, KeyValuePair_2_t1660745816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m282692112(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1563479738 *, KeyValuePair_2_t1660745816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m282692112_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m2307607462_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, KeyValuePair_2U5BU5D_t3917488969* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m2307607462(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1563479738 *, KeyValuePair_2U5BU5D_t3917488969*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m2307607462_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m4176441528_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m4176441528(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1563479738 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m4176441528_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m2901378911_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m2901378911(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1563479738 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m2901378911_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m138281163_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, KeyValuePair_2_t1660745816  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m138281163(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1563479738 *, KeyValuePair_2_t1660745816 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m138281163_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3947614087_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3947614087(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1563479738 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3947614087_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Double,System.UInt64>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m825027323_gshared (FlexibleDictionaryWrapper_2_t1563479738 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m825027323(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1563479738 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m825027323_gshared)(__this, method)

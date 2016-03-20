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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>
struct FlexibleDictionaryWrapper_2_t959709943;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3024369032;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m2094740946_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m2094740946(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t959709943 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m2094740946_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m3963765902_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m3963765902(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t959709943 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m3963765902_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m4085392811_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m4085392811(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t959709943 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m4085392811_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2596895246_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2596895246(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t959709943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2596895246_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m3306904211_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m3306904211(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t959709943 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m3306904211_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m102350517_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, String_t* ___key, float* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m102350517(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t959709943 *, String_t*, float*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m102350517_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m4268553262_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m4268553262(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t959709943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m4268553262_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::get_Item(System.String)
extern "C"  float FlexibleDictionaryWrapper_2_get_Item_m3144971692_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3144971692(__this, ___key, method) ((  float (*) (FlexibleDictionaryWrapper_2_t959709943 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3144971692_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m2535643001_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, String_t* ___key, float ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m2535643001(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t959709943 *, String_t*, float, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m2535643001_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1942299413_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1942299413(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t959709943 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1942299413_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m3340926608_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m3340926608(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t959709943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m3340926608_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2730805263_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2730805263(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t959709943 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2730805263_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m4125294959_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, KeyValuePair_2U5BU5D_t4088639254* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m4125294959(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t959709943 *, KeyValuePair_2U5BU5D_t4088639254*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m4125294959_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m3410337731_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m3410337731(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t959709943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m3410337731_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m603463744_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m603463744(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t959709943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m603463744_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m730772106_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, KeyValuePair_2_t2084438223  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m730772106(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t959709943 *, KeyValuePair_2_t2084438223 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m730772106_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m3065852284_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m3065852284(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t959709943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m3065852284_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.Single,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m239984068_gshared (FlexibleDictionaryWrapper_2_t959709943 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m239984068(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t959709943 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m239984068_gshared)(__this, method)

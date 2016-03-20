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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>
struct FlexibleDictionaryWrapper_2_t1873880514;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t3024369032;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m1134462499_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m1134462499(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1873880514 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m1134462499_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m160102621_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m160102621(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1873880514 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m160102621_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m3274758908_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m3274758908(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1873880514 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m3274758908_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m143061343_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m143061343(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1873880514 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m143061343_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1381160610_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1381160610(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1873880514 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1381160610_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m1610969926_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m1610969926(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1873880514 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m1610969926_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m4071217983_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m4071217983(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1873880514 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m4071217983_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::get_Item(System.String)
extern "C"  uint32_t FlexibleDictionaryWrapper_2_get_Item_m3636275707_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m3636275707(__this, ___key, method) ((  uint32_t (*) (FlexibleDictionaryWrapper_2_t1873880514 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m3636275707_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m905542794_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m905542794(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1873880514 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m905542794_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m982020966_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m982020966(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1873880514 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m982020966_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m4104368351_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m4104368351(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1873880514 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m4104368351_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m2882273886_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m2882273886(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1873880514 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m2882273886_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m56311680_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, KeyValuePair_2U5BU5D_t707842529* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m56311680(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t1873880514 *, KeyValuePair_2U5BU5D_t707842529*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m56311680_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m355930770_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m355930770(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t1873880514 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m355930770_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m1381570257_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m1381570257(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1873880514 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m1381570257_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m1852716185_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m1852716185(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t1873880514 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m1852716185_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m4060783819_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m4060783819(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t1873880514 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m4060783819_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1559609493_gshared (FlexibleDictionaryWrapper_2_t1873880514 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1559609493(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t1873880514 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m1559609493_gshared)(__this, method)

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

// Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>
struct FlexibleDictionaryWrapper_2_t215322664;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1365811182;
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

// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<System.String,TIn>)
extern "C"  void FlexibleDictionaryWrapper_2__ctor_m587744701_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, Object_t* ___toWrap, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2__ctor_m587744701(__this, ___toWrap, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322664 *, Object_t*, const MethodInfo*))FlexibleDictionaryWrapper_2__ctor_m587744701_gshared)(__this, ___toWrap, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Add(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m1491668355_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m1491668355(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322664 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m1491668355_gshared)(__this, ___key, ___value, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::ContainsKey(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_ContainsKey_m366096278_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_ContainsKey_m366096278(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322664 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_ContainsKey_m366096278_gshared)(__this, ___key, method)
// System.Collections.Generic.ICollection`1<System.String> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Keys()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Keys_m2917618553_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Keys_m2917618553(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t215322664 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Keys_m2917618553_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Remove(System.String)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m2294385096_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m2294385096(__this, ___key, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322664 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m2294385096_gshared)(__this, ___key, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::TryGetValue(System.String,TOut&)
extern "C"  bool FlexibleDictionaryWrapper_2_TryGetValue_m3554110560_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, String_t* ___key, uint32_t* ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_TryGetValue_m3554110560(__this, ___key, ___value, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322664 *, String_t*, uint32_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_TryGetValue_m3554110560_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TOut> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Values()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_get_Values_m3732317017_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Values_m3732317017(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t215322664 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Values_m3732317017_gshared)(__this, method)
// TOut Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Item(System.String)
extern "C"  uint32_t FlexibleDictionaryWrapper_2_get_Item_m585257953_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, String_t* ___key, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Item_m585257953(__this, ___key, method) ((  uint32_t (*) (FlexibleDictionaryWrapper_2_t215322664 *, String_t*, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Item_m585257953_gshared)(__this, ___key, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::set_Item(System.String,TOut)
extern "C"  void FlexibleDictionaryWrapper_2_set_Item_m227303332_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, String_t* ___key, uint32_t ___value, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_set_Item_m227303332(__this, ___key, ___value, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322664 *, String_t*, uint32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_set_Item_m227303332_gshared)(__this, ___key, ___value, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Add(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  void FlexibleDictionaryWrapper_2_Add_m435303168_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Add_m435303168(__this, ___item, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322664 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Add_m435303168_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Clear()
extern "C"  void FlexibleDictionaryWrapper_2_Clear_m2853949829_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Clear_m2853949829(__this, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322664 *, const MethodInfo*))FlexibleDictionaryWrapper_2_Clear_m2853949829_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Contains(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Contains_m1999527940_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Contains_m1999527940(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322664 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Contains_m1999527940_gshared)(__this, ___item, method)
// System.Void Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,TOut>[],System.Int32)
extern "C"  void FlexibleDictionaryWrapper_2_CopyTo_m301075610_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, KeyValuePair_2U5BU5D_t707842529* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_CopyTo_m301075610(__this, ___array, ___arrayIndex, method) ((  void (*) (FlexibleDictionaryWrapper_2_t215322664 *, KeyValuePair_2U5BU5D_t707842529*, int32_t, const MethodInfo*))FlexibleDictionaryWrapper_2_CopyTo_m301075610_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_Count()
extern "C"  int32_t FlexibleDictionaryWrapper_2_get_Count_m38313656_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_Count_m38313656(__this, method) ((  int32_t (*) (FlexibleDictionaryWrapper_2_t215322664 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_Count_m38313656_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::get_IsReadOnly()
extern "C"  bool FlexibleDictionaryWrapper_2_get_IsReadOnly_m3076817899_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_get_IsReadOnly_m3076817899(__this, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322664 *, const MethodInfo*))FlexibleDictionaryWrapper_2_get_IsReadOnly_m3076817899_gshared)(__this, method)
// System.Boolean Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::Remove(System.Collections.Generic.KeyValuePair`2<System.String,TOut>)
extern "C"  bool FlexibleDictionaryWrapper_2_Remove_m4126655423_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, KeyValuePair_2_t2112154528  ___item, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_Remove_m4126655423(__this, ___item, method) ((  bool (*) (FlexibleDictionaryWrapper_2_t215322664 *, KeyValuePair_2_t2112154528 , const MethodInfo*))FlexibleDictionaryWrapper_2_Remove_m4126655423_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,TOut>> Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::GetEnumerator()
extern "C"  Object_t* FlexibleDictionaryWrapper_2_GetEnumerator_m1025139505_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_GetEnumerator_m1025139505(__this, method) ((  Object_t* (*) (FlexibleDictionaryWrapper_2_t215322664 *, const MethodInfo*))FlexibleDictionaryWrapper_2_GetEnumerator_m1025139505_gshared)(__this, method)
// System.Collections.IEnumerator Parse.Internal.FlexibleDictionaryWrapper`2<System.UInt32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3987642671_gshared (FlexibleDictionaryWrapper_2_t215322664 * __this, const MethodInfo* method);
#define FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3987642671(__this, method) ((  Object_t * (*) (FlexibleDictionaryWrapper_2_t215322664 *, const MethodInfo*))FlexibleDictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3987642671_gshared)(__this, method)

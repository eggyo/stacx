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

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t271112152;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enu38140093.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24054610746.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void Enumerator__ctor_m3662731183_gshared (Enumerator_t38140094 * __this, Dictionary_2_t271112152 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m3662731183(__this, ___dictionary, method) ((  void (*) (Enumerator_t38140094 *, Dictionary_2_t271112152 *, const MethodInfo*))Enumerator__ctor_m3662731183_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C"  Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1090819612_gshared (Enumerator_t38140094 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1090819612(__this, method) ((  Object_t * (*) (Enumerator_t38140094 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1090819612_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IEnumerator.Reset()
extern "C"  void Enumerator_System_Collections_IEnumerator_Reset_m446458278_gshared (Enumerator_t38140094 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m446458278(__this, method) ((  void (*) (Enumerator_t38140094 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m446458278_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C"  DictionaryEntry_t130027246  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m2891646429_gshared (Enumerator_t38140094 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m2891646429(__this, method) ((  DictionaryEntry_t130027246  (*) (Enumerator_t38140094 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m2891646429_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C"  Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3950628344_gshared (Enumerator_t38140094 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3950628344(__this, method) ((  Object_t * (*) (Enumerator_t38140094 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m3950628344_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C"  Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m851185290_gshared (Enumerator_t38140094 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m851185290(__this, method) ((  Object_t * (*) (Enumerator_t38140094 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m851185290_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2783827030_gshared (Enumerator_t38140094 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m2783827030(__this, method) ((  bool (*) (Enumerator_t38140094 *, const MethodInfo*))Enumerator_MoveNext_m2783827030_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_Current()
extern "C"  KeyValuePair_2_t4054610746  Enumerator_get_Current_m366116006_gshared (Enumerator_t38140094 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m366116006(__this, method) ((  KeyValuePair_2_t4054610746  (*) (Enumerator_t38140094 *, const MethodInfo*))Enumerator_get_Current_m366116006_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentKey()
extern "C"  int64_t Enumerator_get_CurrentKey_m404890207_gshared (Enumerator_t38140094 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m404890207(__this, method) ((  int64_t (*) (Enumerator_t38140094 *, const MethodInfo*))Enumerator_get_CurrentKey_m404890207_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::get_CurrentValue()
extern "C"  Object_t * Enumerator_get_CurrentValue_m3979777247_gshared (Enumerator_t38140094 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m3979777247(__this, method) ((  Object_t * (*) (Enumerator_t38140094 *, const MethodInfo*))Enumerator_get_CurrentValue_m3979777247_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Reset()
extern "C"  void Enumerator_Reset_m1313692545_gshared (Enumerator_t38140094 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1313692545(__this, method) ((  void (*) (Enumerator_t38140094 *, const MethodInfo*))Enumerator_Reset_m1313692545_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyState()
extern "C"  void Enumerator_VerifyState_m1370769098_gshared (Enumerator_t38140094 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1370769098(__this, method) ((  void (*) (Enumerator_t38140094 *, const MethodInfo*))Enumerator_VerifyState_m1370769098_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::VerifyCurrent()
extern "C"  void Enumerator_VerifyCurrent_m1499015090_gshared (Enumerator_t38140094 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1499015090(__this, method) ((  void (*) (Enumerator_t38140094 *, const MethodInfo*))Enumerator_VerifyCurrent_m1499015090_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int64,System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m2261579793_gshared (Enumerator_t38140094 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m2261579793(__this, method) ((  void (*) (Enumerator_t38140094 *, const MethodInfo*))Enumerator_Dispose_m2261579793_gshared)(__this, method)

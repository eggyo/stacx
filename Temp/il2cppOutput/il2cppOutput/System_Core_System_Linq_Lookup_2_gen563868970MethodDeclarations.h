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

// System.Linq.Lookup`2<System.Object,System.Object>
struct Lookup_2_t563868970;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t326416823;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<System.Object,System.Object>>
struct IEnumerator_1_t3402498288;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Linq.Lookup`2<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,System.Collections.Generic.List`1<TElement>>,System.Collections.Generic.IEnumerable`1<TElement>)
extern "C"  void Lookup_2__ctor_m1612739349_gshared (Lookup_2_t563868970 * __this, Dictionary_2_t326416823 * ___lookup, Object_t* ___nullKeyElements, const MethodInfo* method);
#define Lookup_2__ctor_m1612739349(__this, ___lookup, ___nullKeyElements, method) ((  void (*) (Lookup_2_t563868970 *, Dictionary_2_t326416823 *, Object_t*, const MethodInfo*))Lookup_2__ctor_m1612739349_gshared)(__this, ___lookup, ___nullKeyElements, method)
// System.Collections.IEnumerator System.Linq.Lookup`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Object_t * Lookup_2_System_Collections_IEnumerable_GetEnumerator_m3786473685_gshared (Lookup_2_t563868970 * __this, const MethodInfo* method);
#define Lookup_2_System_Collections_IEnumerable_GetEnumerator_m3786473685(__this, method) ((  Object_t * (*) (Lookup_2_t563868970 *, const MethodInfo*))Lookup_2_System_Collections_IEnumerable_GetEnumerator_m3786473685_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.Lookup`2<System.Object,System.Object>::get_Item(TKey)
extern "C"  Object_t* Lookup_2_get_Item_m1675116185_gshared (Lookup_2_t563868970 * __this, Object_t * ___key, const MethodInfo* method);
#define Lookup_2_get_Item_m1675116185(__this, ___key, method) ((  Object_t* (*) (Lookup_2_t563868970 *, Object_t *, const MethodInfo*))Lookup_2_get_Item_m1675116185_gshared)(__this, ___key, method)
// System.Boolean System.Linq.Lookup`2<System.Object,System.Object>::Contains(TKey)
extern "C"  bool Lookup_2_Contains_m892253272_gshared (Lookup_2_t563868970 * __this, Object_t * ___key, const MethodInfo* method);
#define Lookup_2_Contains_m892253272(__this, ___key, method) ((  bool (*) (Lookup_2_t563868970 *, Object_t *, const MethodInfo*))Lookup_2_Contains_m892253272_gshared)(__this, ___key, method)
// System.Collections.Generic.IEnumerator`1<System.Linq.IGrouping`2<TKey,TElement>> System.Linq.Lookup`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Object_t* Lookup_2_GetEnumerator_m3719855666_gshared (Lookup_2_t563868970 * __this, const MethodInfo* method);
#define Lookup_2_GetEnumerator_m3719855666(__this, method) ((  Object_t* (*) (Lookup_2_t563868970 *, const MethodInfo*))Lookup_2_GetEnumerator_m3719855666_gshared)(__this, method)

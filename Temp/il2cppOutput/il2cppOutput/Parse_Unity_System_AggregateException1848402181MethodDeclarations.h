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

// System.AggregateException
struct AggregateException_t1848402181;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t544421048;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t835412040;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
extern "C"  void AggregateException__ctor_m191805355 (AggregateException_t1848402181 * __this, Object_t* ___innerExceptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
extern "C"  ReadOnlyCollection_1_t835412040 * AggregateException_get_InnerExceptions_m4013237907 (AggregateException_t1848402181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AggregateException::set_InnerExceptions(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>)
extern "C"  void AggregateException_set_InnerExceptions_m824807048 (AggregateException_t1848402181 * __this, ReadOnlyCollection_1_t835412040 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AggregateException System.AggregateException::Flatten()
extern "C"  AggregateException_t1848402181 * AggregateException_Flatten_m926879446 (AggregateException_t1848402181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AggregateException::ToString()
extern "C"  String_t* AggregateException_ToString_m3416060861 (AggregateException_t1848402181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

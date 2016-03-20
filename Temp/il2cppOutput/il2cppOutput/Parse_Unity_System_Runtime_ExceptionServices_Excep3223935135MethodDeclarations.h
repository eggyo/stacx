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

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t3223935135;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
extern "C"  ExceptionDispatchInfo_t3223935135 * ExceptionDispatchInfo_Capture_m585319750 (Object_t * __this /* static, unused */, Exception_t1967233988 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::.ctor(System.Exception)
extern "C"  void ExceptionDispatchInfo__ctor_m240324822 (ExceptionDispatchInfo_t3223935135 * __this, Exception_t1967233988 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::get_SourceException()
extern "C"  Exception_t1967233988 * ExceptionDispatchInfo_get_SourceException_m2138103466 (ExceptionDispatchInfo_t3223935135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::set_SourceException(System.Exception)
extern "C"  void ExceptionDispatchInfo_set_SourceException_m1091560843 (ExceptionDispatchInfo_t3223935135 * __this, Exception_t1967233988 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
extern "C"  void ExceptionDispatchInfo_Throw_m1283684010 (ExceptionDispatchInfo_t3223935135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

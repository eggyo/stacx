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

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t3757341492;
// System.Action
struct Action_t437523947;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"
#include "Parse_Unity_System_Threading_CancellationTokenSour3757341492.h"
#include "Parse_Unity_System_Threading_CancellationTokenRegi1944451922.h"
#include "System_Core_System_Action437523947.h"

// System.Void System.Threading.CancellationToken::.ctor(System.Threading.CancellationTokenSource)
extern "C"  void CancellationToken__ctor_m4289938154 (CancellationToken_t2348806009 * __this, CancellationTokenSource_t3757341492 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
extern "C"  CancellationToken_t2348806009  CancellationToken_get_None_m2197792211 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
extern "C"  bool CancellationToken_get_IsCancellationRequested_m2049406960 (CancellationToken_t2348806009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
extern "C"  CancellationTokenRegistration_t1944451922  CancellationToken_Register_m359868289 (CancellationToken_t2348806009 * __this, Action_t437523947 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
extern "C"  void CancellationToken_ThrowIfCancellationRequested_m2053630438 (CancellationToken_t2348806009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

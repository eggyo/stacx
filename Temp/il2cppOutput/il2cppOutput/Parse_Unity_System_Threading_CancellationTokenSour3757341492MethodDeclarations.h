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
#include "Parse_Unity_System_Threading_CancellationTokenRegi1944451922.h"
#include "System_Core_System_Action437523947.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Threading.CancellationTokenRegistration System.Threading.CancellationTokenSource::Register(System.Action)
extern "C"  CancellationTokenRegistration_t1944451922  CancellationTokenSource_Register_m1768359334 (CancellationTokenSource_t3757341492 * __this, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Unregister(System.Action)
extern "C"  void CancellationTokenSource_Unregister_m3718803656 (CancellationTokenSource_t3757341492 * __this, Action_t437523947 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CancellationTokenSource::get_IsCancellationRequested()
extern "C"  bool CancellationTokenSource_get_IsCancellationRequested_m1828654869 (CancellationTokenSource_t3757341492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
extern "C"  CancellationToken_t2348806009  CancellationTokenSource_get_Token_m1784917189 (CancellationTokenSource_t3757341492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Cancel()
extern "C"  void CancellationTokenSource_Cancel_m2286249363 (CancellationTokenSource_t3757341492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Cancel(System.Boolean)
extern "C"  void CancellationTokenSource_Cancel_m1473600970 (CancellationTokenSource_t3757341492 * __this, bool ___throwOnFirstException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::.ctor()
extern "C"  void CancellationTokenSource__ctor_m2835629131 (CancellationTokenSource_t3757341492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Parse.Internal.ParseQueryController
struct ParseQueryController_t4188043577;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Task_1_t1509325269;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.Internal.ParseQueryController::FindAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String,System.Threading.CancellationToken)
extern "C"  Task_1_t1509325269 * ParseQueryController_FindAsync_m2990809958 (ParseQueryController_t4188043577 * __this, String_t* ___className, Object_t* ___parameters, String_t* ___sessionToken, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseQueryController::.ctor()
extern "C"  void ParseQueryController__ctor_m3566437848 (ParseQueryController_t4188043577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

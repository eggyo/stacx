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

// Parse.Internal.ParseCommandRunner
struct ParseCommandRunner_t3696072784;
// Parse.Internal.IHttpClient
struct IHttpClient_t3242720612;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t3306624148;
// Parse.Internal.ParseCommand
struct ParseCommand_t2256508672;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t2545696568;
// System.IProgress`1<Parse.ParseDownloadProgressEventArgs>
struct IProgress_1_t3240148049;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_Parse_Internal_ParseCommand2256508672.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Void Parse.Internal.ParseCommandRunner::.ctor(Parse.Internal.IHttpClient)
extern "C"  void ParseCommandRunner__ctor_m41933403 (ParseCommandRunner_t3696072784 * __this, Object_t * ___httpClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.Internal.ParseCommandRunner::RunCommandAsync(Parse.Internal.ParseCommand,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.IProgress`1<Parse.ParseDownloadProgressEventArgs>,System.Threading.CancellationToken)
extern "C"  Task_1_t3306624148 * ParseCommandRunner_RunCommandAsync_m4103252199 (ParseCommandRunner_t3696072784 * __this, ParseCommand_t2256508672 * ___command, Object_t* ___uploadProgress, Object_t* ___downloadProgress, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;

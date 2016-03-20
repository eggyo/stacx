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

// Parse.Internal.HttpClient
struct HttpClient_t1276183643;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t624642939;
// Parse.Internal.HttpRequest
struct HttpRequest_t2429798031;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t2545696568;
// System.IProgress`1<Parse.ParseDownloadProgressEventArgs>
struct IProgress_1_t3240148049;
// UnityEngine.WWW
struct WWW_t1522972100;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_Parse_Internal_HttpRequest2429798031.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"
#include "System_System_Net_HttpStatusCode2736938801.h"
#include "UnityEngine_UnityEngine_WWW1522972100.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"

// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.Internal.HttpClient::ExecuteAsync(Parse.Internal.HttpRequest,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.IProgress`1<Parse.ParseDownloadProgressEventArgs>,System.Threading.CancellationToken)
extern "C"  Task_1_t624642939 * HttpClient_ExecuteAsync_m308449042 (HttpClient_t1276183643 * __this, HttpRequest_t2429798031 * ___httpRequest, Object_t* ___uploadProgress, Object_t* ___downloadProgress, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode Parse.Internal.HttpClient::GetStatusCode(UnityEngine.WWW)
extern "C"  int32_t HttpClient_GetStatusCode_m4077020845 (Object_t * __this /* static, unused */, WWW_t1522972100 * ___www, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW Parse.Internal.HttpClient::GenerateWWWInstance(System.String,System.Byte[],System.Collections.Hashtable)
extern "C"  WWW_t1522972100 * HttpClient_GenerateWWWInstance_m4268405271 (Object_t * __this /* static, unused */, String_t* ___uri, ByteU5BU5D_t58506160* ___bytes, Hashtable_t3875263730 * ___headerTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.HttpClient::.ctor()
extern "C"  void HttpClient__ctor_m606673014 (HttpClient_t1276183643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Parse.Internal.ParseFileController
struct ParseFileController_t1573767539;
// Parse.Internal.IParseCommandRunner
struct IParseCommandRunner_t2179168345;
// System.Threading.Tasks.Task`1<Parse.Internal.FileState>
struct Task_1_t1642171155;
// Parse.Internal.FileState
struct FileState_t3783315997;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t2545696568;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_Parse_Internal_FileState3783315997.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_String968488902.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Void Parse.Internal.ParseFileController::.ctor(Parse.Internal.IParseCommandRunner)
extern "C"  void ParseFileController__ctor_m2340800631 (ParseFileController_t1573767539 * __this, Object_t * ___commandRunner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.Internal.FileState> Parse.Internal.ParseFileController::SaveAsync(Parse.Internal.FileState,System.IO.Stream,System.String,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C"  Task_1_t1642171155 * ParseFileController_SaveAsync_m3330756998 (ParseFileController_t1573767539 * __this, FileState_t3783315997 * ___state, Stream_t219029575 * ___dataStream, String_t* ___sessionToken, Object_t* ___progress, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;

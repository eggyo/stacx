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

// Parse.ParseFile
struct ParseFile_t37979248;
// System.String
struct String_t;
// System.Uri
struct Uri_t2776692961;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IO.Stream
struct Stream_t219029575;
// Parse.Internal.IParseFileController
struct IParseFileController_t1794370186;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t2545696568;
// System.Threading.Tasks.Task`1<Parse.Internal.FileState>
struct Task_1_t1642171155;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Void Parse.ParseFile::.ctor(System.String,System.Uri,System.String)
extern "C"  void ParseFile__ctor_m1888832862 (ParseFile_t37979248 * __this, String_t* ___name, Uri_t2776692961 * ___uri, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::.ctor(System.String,System.Byte[],System.String)
extern "C"  void ParseFile__ctor_m3436689206 (ParseFile_t37979248 * __this, String_t* ___name, ByteU5BU5D_t58506160* ___data, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::.ctor(System.String,System.IO.Stream,System.String)
extern "C"  void ParseFile__ctor_m1820624386 (ParseFile_t37979248 * __this, String_t* ___name, Stream_t219029575 * ___data, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseFile::get_IsDirty()
extern "C"  bool ParseFile_get_IsDirty_m4073513460 (ParseFile_t37979248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::get_Name()
extern "C"  String_t* ParseFile_get_Name_m1903948938 (ParseFile_t37979248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::get_MimeType()
extern "C"  String_t* ParseFile_get_MimeType_m2944771021 (ParseFile_t37979248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.ParseFile::get_Url()
extern "C"  Uri_t2776692961 * ParseFile_get_Url_m349239959 (ParseFile_t37979248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFileController Parse.ParseFile::get_FileController()
extern "C"  Object_t * ParseFile_get_FileController_m1303155487 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseFile::Parse.Internal.IJsonConvertible.ToJSON()
extern "C"  Object_t* ParseFile_Parse_Internal_IJsonConvertible_ToJSON_m659758563 (ParseFile_t37979248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync()
extern "C"  Task_t2616336456 * ParseFile_SaveAsync_m2713952833 (ParseFile_t37979248 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseFile_SaveAsync_m471180256 (ParseFile_t37979248 * __this, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.IProgress`1<Parse.ParseUploadProgressEventArgs>)
extern "C"  Task_t2616336456 * ParseFile_SaveAsync_m1518533704 (ParseFile_t37979248 * __this, Object_t* ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * ParseFile_SaveAsync_m766087069 (ParseFile_t37979248 * __this, Object_t* ___progress, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::<SaveAsync>b__20_1(System.Threading.Tasks.Task`1<Parse.Internal.FileState>)
extern "C"  void ParseFile_U3CSaveAsyncU3Eb__20_1_m2415942964 (ParseFile_t37979248 * __this, Task_1_t1642171155 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;

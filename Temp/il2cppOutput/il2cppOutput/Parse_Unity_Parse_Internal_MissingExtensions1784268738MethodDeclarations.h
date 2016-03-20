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

// System.Type
struct Type_t;
// System.Enum
struct Enum_t2778772662;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3122311356;
// System.IO.StreamReader
struct StreamReader_t717565226;
// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.IO.Stream
struct Stream_t219029575;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t706269945;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Enum2778772662.h"
#include "mscorlib_System_IO_StreamReader717565226.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// System.Type Parse.Internal.MissingExtensions::GetTypeInfo(System.Type)
extern "C"  Type_t * MissingExtensions_GetTypeInfo_m697882292 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.MissingExtensions::HasFlag(System.Enum,System.Enum)
extern "C"  bool MissingExtensions_HasFlag_m2452962275 (Object_t * __this /* static, unused */, Enum_t2778772662 * ___enumValue, Enum_t2778772662 * ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.String> Parse.Internal.MissingExtensions::ReadToEndAsync(System.IO.StreamReader)
extern "C"  Task_1_t3122311356 * MissingExtensions_ReadToEndAsync_m1065505405 (Object_t * __this /* static, unused */, StreamReader_t717565226 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::CopyToAsync(System.IO.Stream,System.IO.Stream)
extern "C"  Task_t2616336456 * MissingExtensions_CopyToAsync_m3292978098 (Object_t * __this /* static, unused */, Stream_t219029575 * ___stream, Stream_t219029575 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::CopyToAsync(System.IO.Stream,System.IO.Stream,System.Int32,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * MissingExtensions_CopyToAsync_m1880611936 (Object_t * __this /* static, unused */, Stream_t219029575 * ___stream, Stream_t219029575 * ___destination, int32_t ___bufferSize, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.Internal.MissingExtensions::ReadAsync(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern "C"  Task_1_t706269945 * MissingExtensions_ReadAsync_m396426841 (Object_t * __this /* static, unused */, Stream_t219029575 * ___stream, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::WriteAsync(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * MissingExtensions_WriteAsync_m1478238196 (Object_t * __this /* static, unused */, Stream_t219029575 * ___stream, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;

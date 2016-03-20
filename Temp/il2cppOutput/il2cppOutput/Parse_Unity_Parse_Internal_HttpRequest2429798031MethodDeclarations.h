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

// Parse.Internal.HttpRequest
struct HttpRequest_t2429798031;
// System.Uri
struct Uri_t2776692961;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IList_1_t4261210418;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_String968488902.h"

// System.Uri Parse.Internal.HttpRequest::get_Uri()
extern "C"  Uri_t2776692961 * HttpRequest_get_Uri_m706726927 (HttpRequest_t2429798031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.HttpRequest::set_Uri(System.Uri)
extern "C"  void HttpRequest_set_Uri_m102967254 (HttpRequest_t2429798031 * __this, Uri_t2776692961 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Parse.Internal.HttpRequest::get_Headers()
extern "C"  Object_t* HttpRequest_get_Headers_m2023853358 (HttpRequest_t2429798031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.HttpRequest::set_Headers(System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>)
extern "C"  void HttpRequest_set_Headers_m1496688587 (HttpRequest_t2429798031 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Parse.Internal.HttpRequest::get_Data()
extern "C"  Stream_t219029575 * HttpRequest_get_Data_m880925229 (HttpRequest_t2429798031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.HttpRequest::set_Data(System.IO.Stream)
extern "C"  void HttpRequest_set_Data_m902063372 (HttpRequest_t2429798031 * __this, Stream_t219029575 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.Internal.HttpRequest::get_Method()
extern "C"  String_t* HttpRequest_get_Method_m2170077979 (HttpRequest_t2429798031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.HttpRequest::set_Method(System.String)
extern "C"  void HttpRequest_set_Method_m241377558 (HttpRequest_t2429798031 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.HttpRequest::.ctor()
extern "C"  void HttpRequest__ctor_m1733067574 (HttpRequest_t2429798031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Parse.Internal.ParseCommand
struct ParseCommand_t2256508672;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IList_1_t4261210418;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_String968488902.h"

// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.Internal.ParseCommand::get_DataObject()
extern "C"  Object_t* ParseCommand_get_DataObject_m2667387816 (ParseCommand_t2256508672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseCommand::set_DataObject(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void ParseCommand_set_DataObject_m869012611 (ParseCommand_t2256508672 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Parse.Internal.ParseCommand::get_Data()
extern "C"  Stream_t219029575 * ParseCommand_get_Data_m701696186 (ParseCommand_t2256508672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseCommand::set_Data(System.IO.Stream)
extern "C"  void ParseCommand_set_Data_m1195328113 (ParseCommand_t2256508672 * __this, Stream_t219029575 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseCommand::.ctor(System.String,System.String,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void ParseCommand__ctor_m3897816289 (ParseCommand_t2256508672 * __this, String_t* ___relativeUri, String_t* ___method, String_t* ___sessionToken, Object_t* ___headers, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.Internal.ParseCommand::.ctor(System.String,System.String,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String)
extern "C"  void ParseCommand__ctor_m2405753582 (ParseCommand_t2256508672 * __this, String_t* ___relativeUri, String_t* ___method, String_t* ___sessionToken, Object_t* ___headers, Stream_t219029575 * ___stream, String_t* ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t2776692961;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IList_1_t4261210418;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

// Parse.Internal.HttpRequest
struct  HttpRequest_t2429798031  : public Object_t
{
	// System.Uri Parse.Internal.HttpRequest::<Uri>k__BackingField
	Uri_t2776692961 * ___U3CUriU3Ek__BackingField_0;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> Parse.Internal.HttpRequest::<Headers>k__BackingField
	Object_t* ___U3CHeadersU3Ek__BackingField_1;
	// System.IO.Stream Parse.Internal.HttpRequest::<Data>k__BackingField
	Stream_t219029575 * ___U3CDataU3Ek__BackingField_2;
	// System.String Parse.Internal.HttpRequest::<Method>k__BackingField
	String_t* ___U3CMethodU3Ek__BackingField_3;
};

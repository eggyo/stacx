#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Parse.Internal.FileState
struct FileState_t3783315997;
// System.IO.Stream
struct Stream_t219029575;

#include "mscorlib_System_Object837106420.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// Parse.Internal.ParseFileController/<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t1751282383  : public Object_t
{
	// System.Threading.CancellationToken Parse.Internal.ParseFileController/<>c__DisplayClass2_0::cancellationToken
	CancellationToken_t2348806009  ___cancellationToken_0;
	// Parse.Internal.FileState Parse.Internal.ParseFileController/<>c__DisplayClass2_0::state
	FileState_t3783315997 * ___state_1;
	// System.IO.Stream Parse.Internal.ParseFileController/<>c__DisplayClass2_0::dataStream
	Stream_t219029575 * ___dataStream_2;
	// System.Int64 Parse.Internal.ParseFileController/<>c__DisplayClass2_0::oldPosition
	int64_t ___oldPosition_3;
};

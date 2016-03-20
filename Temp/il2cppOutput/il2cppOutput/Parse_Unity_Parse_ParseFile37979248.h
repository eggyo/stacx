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
// Parse.Internal.TaskQueue
struct TaskQueue_t983729204;

#include "mscorlib_System_Object837106420.h"

// Parse.ParseFile
struct  ParseFile_t37979248  : public Object_t
{
	// Parse.Internal.FileState Parse.ParseFile::state
	FileState_t3783315997 * ___state_0;
	// System.IO.Stream Parse.ParseFile::dataStream
	Stream_t219029575 * ___dataStream_1;
	// Parse.Internal.TaskQueue Parse.ParseFile::taskQueue
	TaskQueue_t983729204 * ___taskQueue_2;
};

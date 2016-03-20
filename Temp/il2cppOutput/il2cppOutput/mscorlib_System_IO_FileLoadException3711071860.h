#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_IO_IOException544650864.h"

// System.IO.FileLoadException
struct  FileLoadException_t3711071860  : public IOException_t544650864
{
	// System.String System.IO.FileLoadException::msg
	String_t* ___msg_11;
	// System.String System.IO.FileLoadException::fileName
	String_t* ___fileName_12;
	// System.String System.IO.FileLoadException::fusionLog
	String_t* ___fusionLog_13;
};

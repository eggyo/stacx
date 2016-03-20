#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct TaskCompletionSource_1_t2079353050;
// Parse.Internal.HttpRequest
struct HttpRequest_t2429798031;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.IDisposable
struct IDisposable_t1628921374;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t2545696568;
// System.IProgress`1<Parse.ParseDownloadProgressEventArgs>
struct IProgress_1_t3240148049;

#include "mscorlib_System_Object837106420.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"

// Parse.Internal.HttpClient/<>c__DisplayClass0_0
struct  U3CU3Ec__DisplayClass0_0_t1751280460  : public Object_t
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.Internal.HttpClient/<>c__DisplayClass0_0::tcs
	TaskCompletionSource_1_t2079353050 * ___tcs_0;
	// Parse.Internal.HttpRequest Parse.Internal.HttpClient/<>c__DisplayClass0_0::httpRequest
	HttpRequest_t2429798031 * ___httpRequest_1;
	// System.Byte[] Parse.Internal.HttpClient/<>c__DisplayClass0_0::bytes
	ByteU5BU5D_t58506160* ___bytes_2;
	// System.IDisposable Parse.Internal.HttpClient/<>c__DisplayClass0_0::toDisposeAfterReading
	Object_t * ___toDisposeAfterReading_3;
	// System.Collections.Hashtable Parse.Internal.HttpClient/<>c__DisplayClass0_0::headerTable
	Hashtable_t3875263730 * ___headerTable_4;
	// System.Threading.CancellationToken Parse.Internal.HttpClient/<>c__DisplayClass0_0::cancellationToken
	CancellationToken_t2348806009  ___cancellationToken_5;
	// System.IProgress`1<Parse.ParseUploadProgressEventArgs> Parse.Internal.HttpClient/<>c__DisplayClass0_0::uploadProgress
	Object_t* ___uploadProgress_6;
	// System.IProgress`1<Parse.ParseDownloadProgressEventArgs> Parse.Internal.HttpClient/<>c__DisplayClass0_0::downloadProgress
	Object_t* ___downloadProgress_7;
};

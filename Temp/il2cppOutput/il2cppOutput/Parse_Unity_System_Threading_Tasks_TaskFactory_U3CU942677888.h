#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t150671689;
// System.Func`2<System.IAsyncResult,System.Object>
struct Func_2_t850390275;

#include "mscorlib_System_Object837106420.h"
#include "Parse_Unity_System_Threading_CancellationTokenRegi1944451922.h"

// System.Threading.Tasks.TaskFactory/<>c__DisplayClass17_0`1<System.Object>
struct  U3CU3Ec__DisplayClass17_0_1_t942677888  : public Object_t
{
	// System.Threading.Tasks.TaskCompletionSource`1<TResult> System.Threading.Tasks.TaskFactory/<>c__DisplayClass17_0`1::tcs
	TaskCompletionSource_1_t150671689 * ___tcs_0;
	// System.Func`2<System.IAsyncResult,TResult> System.Threading.Tasks.TaskFactory/<>c__DisplayClass17_0`1::endMethod
	Func_2_t850390275 * ___endMethod_1;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.TaskFactory/<>c__DisplayClass17_0`1::cancellation
	CancellationTokenRegistration_t1944451922  ___cancellation_2;
};

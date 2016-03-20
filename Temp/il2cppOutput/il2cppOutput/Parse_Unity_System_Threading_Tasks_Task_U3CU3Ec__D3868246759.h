#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t2160980056;
// System.Func`2<System.Threading.Tasks.Task,System.Int32>
struct Func_2_t4249857443;

#include "mscorlib_System_Object837106420.h"
#include "Parse_Unity_System_Threading_CancellationTokenRegi1944451922.h"

// System.Threading.Tasks.Task/<>c__DisplayClass20_0`1<System.Int32>
struct  U3CU3Ec__DisplayClass20_0_1_t3868246759  : public Object_t
{
	// System.Threading.Tasks.TaskCompletionSource`1<T> System.Threading.Tasks.Task/<>c__DisplayClass20_0`1::tcs
	TaskCompletionSource_1_t2160980056 * ___tcs_0;
	// System.Func`2<System.Threading.Tasks.Task,T> System.Threading.Tasks.Task/<>c__DisplayClass20_0`1::continuation
	Func_2_t4249857443 * ___continuation_1;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.Task/<>c__DisplayClass20_0`1::cancellation
	CancellationTokenRegistration_t1944451922  ___cancellation_2;
};

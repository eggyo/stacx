﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t3819537906;
// System.Func`2<System.Threading.Tasks.Task,System.Boolean>
struct Func_2_t1613447997;

#include "mscorlib_System_Object837106420.h"
#include "Parse_Unity_System_Threading_CancellationTokenRegi1944451922.h"

// System.Threading.Tasks.Task/<>c__DisplayClass20_0`1<System.Boolean>
struct  U3CU3Ec__DisplayClass20_0_1_t1231837313  : public Object_t
{
	// System.Threading.Tasks.TaskCompletionSource`1<T> System.Threading.Tasks.Task/<>c__DisplayClass20_0`1::tcs
	TaskCompletionSource_1_t3819537906 * ___tcs_0;
	// System.Func`2<System.Threading.Tasks.Task,T> System.Threading.Tasks.Task/<>c__DisplayClass20_0`1::continuation
	Func_2_t1613447997 * ___continuation_1;
	// System.Threading.CancellationTokenRegistration System.Threading.Tasks.Task/<>c__DisplayClass20_0`1::cancellation
	CancellationTokenRegistration_t1944451922  ___cancellation_2;
};
﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




#pragma once
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const MethodInfo*);

	static inline void Invoke (const MethodInfo* method, void* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetGenericVirtualInvokeData (method, obj);
		((Action)data.methodInfo->method)(data.target, p1, p2, data.methodInfo);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const MethodInfo*);

	static inline R Invoke (const MethodInfo* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetGenericVirtualInvokeData (method, obj);
		return ((Func)data.methodInfo->method)(data.target, p1, p2, p3, data.methodInfo);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const MethodInfo*);

	static inline R Invoke (const MethodInfo* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetGenericVirtualInvokeData (method, obj);
		return ((Func)data.methodInfo->method)(data.target, p1, p2, p3, p4, data.methodInfo);
	}
};

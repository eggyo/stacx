﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m476686225 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m2088237919 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Monitor_pulse(System.Object)
extern "C"  void Monitor_Monitor_pulse_m2154028149 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Monitor_test_synchronised(System.Object)
extern "C"  bool Monitor_Monitor_test_synchronised_m711788182 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Pulse(System.Object)
extern "C"  void Monitor_Pulse_m2153339056 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Monitor_pulse_all(System.Object)
extern "C"  void Monitor_Monitor_pulse_all_m2821661267 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::PulseAll(System.Object)
extern "C"  void Monitor_PulseAll_m1214329589 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Monitor_wait(System.Object,System.Int32)
extern "C"  bool Monitor_Monitor_wait_m1648946806 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Wait(System.Object)
extern "C"  bool Monitor_Wait_m3392185958 (Object_t * __this /* static, unused */, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Wait(System.Object,System.Int32)
extern "C"  bool Monitor_Wait_m34507825 (Object_t * __this /* static, unused */, Object_t * ___obj, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
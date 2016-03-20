#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Threading.Tasks.Task
struct Task_t2616336456;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t782787144;
// System.AggregateException
struct AggregateException_t1848402181;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t2764789161;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t115289497;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t1193523516;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t475191614;
// System.Action
struct Action_t437523947;

#include "codegen/il2cpp-codegen.h"
#include "Parse_Unity_System_Threading_CancellationToken2348806009.h"
#include "System_Core_System_Action437523947.h"
#include "mscorlib_System_TimeSpan763862892.h"

// System.Void System.Threading.Tasks.Task::.ctor()
extern "C"  void Task__ctor_m4127575653 (Task_t2616336456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
extern "C"  TaskFactory_t782787144 * Task_get_Factory_m3978317033 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
extern "C"  AggregateException_t1848402181 * Task_get_Exception_m1441545325 (Task_t2616336456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
extern "C"  bool Task_get_IsCanceled_m1638302751 (Task_t2616336456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
extern "C"  bool Task_get_IsCompleted_m1216835687 (Task_t2616336456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
extern "C"  bool Task_get_IsFaulted_m560125341 (Task_t2616336456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::Wait()
extern "C"  void Task_Wait_m889128564 (Task_t2616336456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
extern "C"  Task_t2616336456 * Task_ContinueWith_m817027065 (Task_t2616336456 * __this, Action_1_t2764789161 * ___continuation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>,System.Threading.CancellationToken)
extern "C"  Task_t2616336456 * Task_ContinueWith_m1711918668 (Task_t2616336456 * __this, Action_1_t2764789161 * ___continuation, CancellationToken_t2348806009  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Threading.Tasks.Task[])
extern "C"  Task_t2616336456 * Task_WhenAll_m419428819 (Object_t * __this /* static, unused */, TaskU5BU5D_t115289497* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
extern "C"  Task_t2616336456 * Task_WhenAll_m448652898 (Object_t * __this /* static, unused */, Object_t* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Threading.Tasks.Task[])
extern "C"  Task_1_t475191614 * Task_WhenAny_m3579646241 (Object_t * __this /* static, unused */, TaskU5BU5D_t115289497* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::WhenAny(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
extern "C"  Task_1_t475191614 * Task_WhenAny_m2999261104 (Object_t * __this /* static, unused */, Object_t* ___tasks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
extern "C"  Task_t2616336456 * Task_Run_m2230673174 (Object_t * __this /* static, unused */, Action_t437523947 * ___toRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Delay(System.TimeSpan)
extern "C"  Task_t2616336456 * Task_Delay_m3622792125 (Object_t * __this /* static, unused */, TimeSpan_t763862892  ___timespan, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.Task::.cctor()
extern "C"  void Task__cctor_m2918697448 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

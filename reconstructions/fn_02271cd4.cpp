#include "botw/ghs_intrinsics.h"

extern "C" void fn_02430a14(void* context);
extern "C" void fn_02271be4(void* context);

extern "C" void fn_02271cd4(void* context) {
    __schedule_barrier();
    fn_02430a14(context);
    fn_02271be4(context);
}

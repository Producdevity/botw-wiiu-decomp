#include "botw/ghs_intrinsics.h"

extern "C" void fn_02f661c0(void* context);
extern "C" void fn_02f5f42c(void* context);

extern "C" void fn_02f661d0(void* context) {
    __schedule_barrier();
    fn_02f661c0(context);
    fn_02f5f42c(context);
}

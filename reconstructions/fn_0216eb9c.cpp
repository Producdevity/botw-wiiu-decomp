#include "botw/ghs_intrinsics.h"

extern "C" void fn_023587f4(void* context);
extern "C" void fn_0216e7ac(void* context);

extern "C" void fn_0216eb9c(void* context) {
    __schedule_barrier();
    fn_023587f4(context);
    fn_0216e7ac(context);
}

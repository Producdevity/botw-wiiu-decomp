#include "botw/ghs_intrinsics.h"

extern "C" void fn_0332cf9c(void* context);
extern "C" void fn_029b2d40(void* context);

extern "C" void fn_029b2f4c(void* context) {
    __schedule_barrier();
    fn_0332cf9c(context);
    fn_029b2d40(context);
}

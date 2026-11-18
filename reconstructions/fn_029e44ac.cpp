#include "botw/ghs_intrinsics.h"

extern "C" void fn_029cc980(void* context);
extern "C" void fn_029e4178(void* context);

extern "C" void fn_029e44ac(void* context) {
    __schedule_barrier();
    fn_029cc980(context);
    fn_029e4178(context);
}

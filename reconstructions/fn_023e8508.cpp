#include "botw/ghs_intrinsics.h"

extern "C" void fn_023e8348(void* context);
extern "C" void fn_022f90a4(void* context);

extern "C" void fn_023e8508(void* context) {
    __schedule_barrier();
    fn_023e8348(context);
    fn_022f90a4(context);
}

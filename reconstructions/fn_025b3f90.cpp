#include "botw/ghs_intrinsics.h"

extern "C" void fn_030ea2cc(void* context);
extern "C" void fn_025b3d84(void* context);

extern "C" void fn_025b3f90(void* context) {
    __schedule_barrier();
    fn_030ea2cc(context);
    fn_025b3d84(context);
}

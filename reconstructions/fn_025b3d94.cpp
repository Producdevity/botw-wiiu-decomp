#include "botw/ghs_intrinsics.h"

extern "C" void fn_030ea2e0(void* context);
extern "C" void fn_025b3d84(void* context);

extern "C" void fn_025b3d94(void* context) {
    __schedule_barrier();
    fn_030ea2e0(context);
    fn_025b3d84(context);
}

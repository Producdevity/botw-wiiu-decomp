#include "botw/ghs_intrinsics.h"

extern "C" void fn_0245cc44(void* context);
extern "C" void fn_024127f0(void* context);

extern "C" void fn_02412c1c(void* context) {
    __schedule_barrier();
    fn_0245cc44(context);
    fn_024127f0(context);
}

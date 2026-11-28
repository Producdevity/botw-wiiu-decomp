#include "botw/ghs_intrinsics.h"

extern "C" void fn_029c8794(void* context);
extern "C" void fn_029c9280(void* context);

extern "C" void fn_029c87b0(void* context) {
    __schedule_barrier();
    fn_029c8794(context);
    fn_029c9280(context);
}

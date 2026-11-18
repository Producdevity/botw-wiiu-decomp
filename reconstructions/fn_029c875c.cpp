#include "botw/ghs_intrinsics.h"

extern "C" void fn_029c8700(void* context);
extern "C" void fn_029c9218(void* context);

extern "C" void fn_029c875c(void* context) {
    __schedule_barrier();
    fn_029c8700(context);
    fn_029c9218(context);
}

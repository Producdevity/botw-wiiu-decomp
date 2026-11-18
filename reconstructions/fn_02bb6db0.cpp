#include "botw/ghs_intrinsics.h"

extern "C" void fn_02bb6d88(void* context);
extern "C" void fn_02bb6d9c(void* context);

extern "C" void fn_02bb6db0(void* context) {
    __schedule_barrier();
    fn_02bb6d88(context);
    fn_02bb6d9c(context);
}

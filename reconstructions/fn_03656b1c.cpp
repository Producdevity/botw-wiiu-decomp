#include "botw/ghs_intrinsics.h"

extern "C" void fn_03655de8(void* context);
extern "C" void fn_03656950(void* context);

extern "C" void fn_03656b1c(void* context) {
    __schedule_barrier();
    fn_03655de8(context);
    fn_03656950(context);
}

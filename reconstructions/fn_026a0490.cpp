#include "botw/ghs_intrinsics.h"

extern "C" void fn_026a02c8(void* context);
extern "C" void fn_0295fd2c(void* context);

extern "C" void fn_026a0490(void* context) {
    __schedule_barrier();
    fn_026a02c8(context);
    fn_0295fd2c(context);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_03bd1a9c(void* context);
extern "C" void fn_03bd1b30(void* context);

extern "C" void fn_03bd1b70(void* context) {
    __schedule_barrier();
    fn_03bd1a9c(context);
    fn_03bd1b30(context);
}

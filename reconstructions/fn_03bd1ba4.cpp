#include "botw/ghs_intrinsics.h"

extern "C" void fn_03bd19a0(void* context);
extern "C" void fn_03bd1b30(void* context);

extern "C" void fn_03bd1ba4(void* context) {
    __schedule_barrier();
    fn_03bd19a0(context);
    fn_03bd1b30(context);
}

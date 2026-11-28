#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b4cda0(void* context);
extern "C" void fn_02b471c0(void* context);

extern "C" void fn_02b479a8(void* context) {
    __schedule_barrier();
    fn_02b4cda0(context);
    fn_02b471c0(context);
}

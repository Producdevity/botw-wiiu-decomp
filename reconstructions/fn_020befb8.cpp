#include "botw/ghs_intrinsics.h"

extern "C" void fn_023572e8(void* context);
extern "C" void fn_020bef98(void* context);

extern "C" void fn_020befb8(void* context) {
    __schedule_barrier();
    fn_023572e8(context);
    fn_020bef98(context);
}

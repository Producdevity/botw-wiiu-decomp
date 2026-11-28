#include "botw/ghs_intrinsics.h"

extern "C" void fn_027ba8d0(void* context);
extern "C" void fn_02795c88(void* context);

extern "C" void fn_02795dec(void* context) {
    __schedule_barrier();
    fn_027ba8d0(context);
    fn_02795c88(context);
}

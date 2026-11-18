#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b1a7a4(void* context);
extern "C" void fn_02b1a810(void* context);

extern "C" void fn_02b1a87c(void* context) {
    __schedule_barrier();
    fn_02b1a7a4(context);
    fn_02b1a810(context);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_02bd0868(void* context);
extern "C" void fn_02bd09c4(void* context);

extern "C" void fn_02bd09cc(void* context) {
    __schedule_barrier();
    fn_02bd0868(context);
    fn_02bd09c4(context);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_02bf81e0(void* context);
extern "C" void fn_02bf82a0(void* context);

extern "C" void fn_02bf835c(void* context) {
    __schedule_barrier();
    fn_02bf81e0(context);
    fn_02bf82a0(context);
}

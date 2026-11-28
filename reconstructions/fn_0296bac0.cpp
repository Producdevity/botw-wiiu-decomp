#include "botw/ghs_intrinsics.h"

extern "C" void fn_0296d3b0(void* context);
extern "C" void fn_0296d228(void* context);

extern "C" void fn_0296bac0(void* context) {
    __schedule_barrier();
    fn_0296d3b0(context);
    fn_0296d228(context);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_0265b5c0(void* context);
extern "C" void fn_025c7c54(void* context);

extern "C" void fn_0265bb1c(void* context) {
    __schedule_barrier();
    fn_0265b5c0(context);
    fn_025c7c54(context);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_025c6a20(void* context);
extern "C" void fn_02910c0c(void* context);

extern "C" void fn_02910c54(void* context) {
    __schedule_barrier();
    fn_025c6a20(context);
    fn_02910c0c(context);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_0337d27c(void* context);
extern "C" void fn_0337b7f4(void* context);

extern "C" void fn_0338ae04(void* context) {
    __schedule_barrier();
    fn_0337d27c(context);
    fn_0337b7f4(context);
}

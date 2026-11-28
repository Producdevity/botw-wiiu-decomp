#include "botw/ghs_intrinsics.h"

extern "C" void fn_0265b5c0(void* context);
extern "C" void fn_025c7b60(void** object);

extern "C" void fn_0265bae8(void** context) {
    __schedule_barrier();
    fn_0265b5c0(context);
    fn_025c7b60(context);
}

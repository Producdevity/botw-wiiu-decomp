#include "botw/ghs_intrinsics.h"

extern "C" void fn_0210e5e4(void* context);
extern "C" void fn_02270654(void* context);

extern "C" void fn_02270744(void* context) {
    __schedule_barrier();
    fn_0210e5e4(context);
    fn_02270654(context);
}

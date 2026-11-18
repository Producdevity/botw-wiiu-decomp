#include "botw/ghs_intrinsics.h"

extern "C" void fn_022c4950(void* context);
extern "C" void fn_022c41d4(void* context);

extern "C" void fn_022c4284(void* context) {
    __schedule_barrier();
    fn_022c4950(context);
    fn_022c41d4(context);
}

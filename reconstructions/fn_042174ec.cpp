#include "botw/ghs_intrinsics.h"

extern "C" void fn_042173c8(void* context);
extern "C" void fn_0421744c(void* context);

extern "C" void fn_042174ec(void* context) {
    __schedule_barrier();
    fn_042173c8(context);
    fn_0421744c(context);
}

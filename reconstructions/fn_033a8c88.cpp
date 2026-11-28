#include "botw/ghs_intrinsics.h"

extern "C" void fn_033a7118(void* context);
extern "C" void fn_033a8c6c(void* context);

extern "C" void fn_033a8c88(void* context) {
    __schedule_barrier();
    fn_033a7118(context);
    fn_033a8c6c(context);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_028c36c0(void* context);
extern "C" void fn_028cb23c(void* context);

extern "C" void fn_028c3bac(void* context) {
    __schedule_barrier();
    fn_028c36c0(context);
    fn_028cb23c(context);
}

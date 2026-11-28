#include "botw/ghs_intrinsics.h"

extern "C" void fn_023fe96c(void*);
extern "C" void fn_022f6920(void* context);

extern "C" void fn_022f6a54(void* context) {
    __schedule_barrier();
    fn_023fe96c(context);
    fn_022f6920(context);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_030bb668(void* context);
extern "C" void fn_030bb69c(void* context);

extern "C" void fn_0378d9e0(void* context) {
    __schedule_barrier();
    fn_030bb668(context);
    fn_030bb69c(context);
}

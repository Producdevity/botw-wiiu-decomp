#include "botw/ghs_intrinsics.h"

extern "C" void fn_021eb588(void* context);
extern "C" void fn_021eb800(void* context);

extern "C" void fn_021eb93c(void* context) {
    __schedule_barrier();
    fn_021eb588(context);
    fn_021eb800(context);
}

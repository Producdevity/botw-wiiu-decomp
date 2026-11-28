#include "botw/ghs_intrinsics.h"

extern "C" void fn_0217f290(void* context);
extern "C" void fn_0242a694(void* context);

extern "C" void fn_0217f4e0(void* context) {
    __schedule_barrier();
    fn_0217f290(context);
    fn_0242a694(context);
}

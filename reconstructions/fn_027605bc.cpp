#include "botw/ghs_intrinsics.h"

extern "C" void fn_02760590(void* context);
extern "C" void fn_0327d844(void* context);

extern "C" void fn_027605bc(void* context) {
    __schedule_barrier();
    fn_02760590(context);
    fn_0327d844(context);
}

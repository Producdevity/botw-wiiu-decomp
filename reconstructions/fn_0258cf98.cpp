#include "botw/ghs_intrinsics.h"

extern "C" void fn_0258cb70(void* context);
extern "C" void fn_0258cd88(void* context);

extern "C" void fn_0258cf98(void* context) {
    __schedule_barrier();
    fn_0258cb70(context);
    fn_0258cd88(context);
}

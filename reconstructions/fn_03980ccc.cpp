#include "botw/ghs_intrinsics.h"

extern "C" void fn_03ad42f0(void* context);
extern "C" void fn_03ad42bc(void* context);

extern "C" void fn_03980ccc(void* context) {
    __schedule_barrier();
    fn_03ad42f0(context);
    fn_03ad42bc(context);
}

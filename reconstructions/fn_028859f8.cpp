#include "botw/ghs_intrinsics.h"

extern "C" void fn_028858bc(void* context);
extern "C" void fn_02885950(void* context);

extern "C" void fn_028859f8(void* context) {
    __schedule_barrier();
    fn_028858bc(context);
    fn_02885950(context);
}

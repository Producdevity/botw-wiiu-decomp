#include "botw/ghs_intrinsics.h"

extern "C" void fn_02d44ca4(void* context);
extern "C" void fn_02aedc04(void* context);

extern "C" void fn_02d44d88(void* context) {
    __schedule_barrier();
    fn_02d44ca4(context);
    fn_02aedc04(context);
}

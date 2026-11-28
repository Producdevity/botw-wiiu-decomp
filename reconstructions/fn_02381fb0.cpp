#include "botw/ghs_intrinsics.h"

extern "C" void fn_02380e1c(void* context);
extern "C" void fn_0237b084(void* context);

extern "C" void fn_02381fb0(void* context) {
    __schedule_barrier();
    fn_02380e1c(context);
    fn_0237b084(context);
}

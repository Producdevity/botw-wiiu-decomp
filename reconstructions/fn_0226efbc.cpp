#include "botw/ghs_intrinsics.h"

extern "C" void fn_0226ee8c(void* context);
extern "C" void fn_0226ee18(void* context);

extern "C" void fn_0226efbc(void* context) {
    __schedule_barrier();
    fn_0226ee8c(context);
    fn_0226ee18(context);
}

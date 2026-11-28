#include "botw/ghs_intrinsics.h"

extern "C" void fn_0240ab54(void* context);
extern "C" void fn_0240c03c(void* context);

extern "C" void fn_0240c164(void* context) {
    __schedule_barrier();
    fn_0240ab54(context);
    fn_0240c03c(context);
}

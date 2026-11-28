#include "botw/ghs_intrinsics.h"

extern "C" void fn_029cca00(void* context);
extern "C" void fn_029e3e90(void* context);

extern "C" void fn_029e3f38(void* context) {
    __schedule_barrier();
    fn_029cca00(context);
    fn_029e3e90(context);
}

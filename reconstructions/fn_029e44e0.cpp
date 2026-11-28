#include "botw/ghs_intrinsics.h"

extern "C" void fn_029cca00(void* context);
extern "C" void fn_029e4178(void* context);

extern "C" void fn_029e44e0(void* context) {
    __schedule_barrier();
    fn_029cca00(context);
    fn_029e4178(context);
}

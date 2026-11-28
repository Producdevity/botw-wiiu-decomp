#include "botw/ghs_intrinsics.h"

extern "C" void fn_02dcd124(void* context);
extern "C" void fn_02dcd158(void* context);

extern "C" void fn_02dcd1ac(void* context) {
    __schedule_barrier();
    fn_02dcd124(context);
    fn_02dcd158(context);
}

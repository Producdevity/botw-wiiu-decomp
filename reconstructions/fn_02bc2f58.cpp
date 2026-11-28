#include "botw/ghs_intrinsics.h"

extern "C" void fn_02bc2ec8(void* context);
extern "C" void fn_02bc2f20(void* context);

extern "C" void fn_02bc2f58(void* context) {
    __schedule_barrier();
    fn_02bc2ec8(context);
    fn_02bc2f20(context);
}

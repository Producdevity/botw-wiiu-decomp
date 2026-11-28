#include "botw/ghs_intrinsics.h"

extern "C" void fn_02f10b04(void* context);
extern "C" void fn_02f10b60(void* context);

extern "C" void fn_02f16600(void* context) {
    __schedule_barrier();
    fn_02f10b04(context);
    fn_02f10b60(context);
}

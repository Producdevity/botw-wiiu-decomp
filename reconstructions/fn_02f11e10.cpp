#include "botw/ghs_intrinsics.h"

extern "C" void fn_02f118b4(void* context);
extern "C" void fn_02f11ab8(void* context);

extern "C" void fn_02f11e10(void* context) {
    __schedule_barrier();
    fn_02f118b4(context);
    fn_02f11ab8(context);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_023b0550(void* context);
extern "C" void fn_023b0610(void* context);

extern "C" void fn_023b0770(void* context) {
    __schedule_barrier();
    fn_023b0550(context);
    fn_023b0610(context);
}

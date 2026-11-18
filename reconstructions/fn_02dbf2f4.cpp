#include "botw/ghs_intrinsics.h"

extern "C" void fn_02dbf240(void* context);
extern "C" void fn_02dbf234(void* context);

extern "C" void fn_02dbf2f4(void* context) {
    __schedule_barrier();
    fn_02dbf240(context);
    fn_02dbf234(context);
}

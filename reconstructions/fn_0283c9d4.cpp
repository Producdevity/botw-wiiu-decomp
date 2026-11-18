#include "botw/ghs_intrinsics.h"

extern "C" void fn_025a1ce8(void* object);
extern "C" void fn_0283c854(void* object);

extern "C" void fn_0283c9d4(void* object) {
    __schedule_barrier();
    fn_025a1ce8(object);
    fn_0283c854(object);
}

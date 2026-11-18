#include "botw/ghs_intrinsics.h"

extern "C" void fn_0285db10(void* object);
extern "C" void fn_0285dbf0(void* object);

extern "C" void fn_0285dc18(void* object) {
    __schedule_barrier();
    fn_0285db10(object);
    fn_0285dbf0(object);
}

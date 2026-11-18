#include "botw/ghs_intrinsics.h"

extern "C" void fn_024c7c68(void* object);
extern "C" void fn_025e83d8(void* object);

extern "C" void fn_024c8880(void* object) {
    __schedule_barrier();
    fn_024c7c68(object);
    fn_025e83d8(object);
}

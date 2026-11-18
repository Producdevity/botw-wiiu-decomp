#include "botw/ghs_intrinsics.h"

extern "C" void fn_025124b4(void* object);
extern "C" void fn_02669a8c(void* object);

extern "C" void fn_02669a9c(void* object) {
    __schedule_barrier();
    fn_025124b4(object);
    fn_02669a8c(object);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_0215fda8(void* object);
extern "C" void fn_0216021c(void* object);

extern "C" void fn_02160290(void* object) {
    __schedule_barrier();
    fn_0215fda8(object);
    fn_0216021c(object);
}

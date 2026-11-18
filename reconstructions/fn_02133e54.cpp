#include "botw/ghs_intrinsics.h"

extern "C" void fn_02132a6c(void* object);
extern "C" void fn_02133df4(void* object);

extern "C" void fn_02133e54(void* object) {
    __schedule_barrier();
    fn_02132a6c(object);
    fn_02133df4(object);
}

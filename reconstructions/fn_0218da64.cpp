#include "botw/ghs_intrinsics.h"

extern "C" void fn_0218d8b0(void* object);
extern "C" void fn_030ea2cc(void* object);

extern "C" void fn_0218da64(void* object) {
    __schedule_barrier();
    fn_0218d8b0(object);
    fn_030ea2cc(object);
}

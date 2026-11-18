#include "botw/ghs_intrinsics.h"

extern "C" void fn_02674a80(void* object);
extern "C" void fn_030ea2e0(void* object);

extern "C" void fn_02675428(void* object) {
    __schedule_barrier();
    fn_02674a80(object);
    fn_030ea2e0(object);
}

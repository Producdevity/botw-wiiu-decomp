#include "botw/ghs_intrinsics.h"

extern "C" void fn_024073d8(void* object);
extern "C" void fn_0240639c(void* object);

extern "C" void fn_0240671c(void* object) {
    __schedule_barrier();
    fn_024073d8(object);
    fn_0240639c(object);
}

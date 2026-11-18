#include "botw/ghs_intrinsics.h"

extern "C" void fn_0210daa4(void* object);
extern "C" void fn_02108208(void* object);

extern "C" void fn_0210826c(void* object) {
    __schedule_barrier();
    fn_0210daa4(object);
    fn_02108208(object);
}

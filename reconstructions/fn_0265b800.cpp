#include "botw/ghs_intrinsics.h"

extern "C" void fn_0265b648(void* object);
extern "C" void fn_025c6c00(void* object);

extern "C" void fn_0265b800(void* object) {
    __schedule_barrier();
    fn_0265b648(object);
    fn_025c6c00(object);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_0287bbbc(void* context);
extern "C" void fn_0287be14(void* context);

extern "C" void fn_0287bf74(void* context) {
    __schedule_barrier();
    fn_0287bbbc(context);
    fn_0287be14(context);
}

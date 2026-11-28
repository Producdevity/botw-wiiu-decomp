#include "botw/ghs_intrinsics.h"

extern "C" void fn_0327d5ac(void*);
extern "C" void fn_02504258(void* context);

extern "C" void fn_025043a0(void* context) {
    __schedule_barrier();
    fn_0327d5ac(context);
    fn_02504258(context);
}

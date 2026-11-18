#include "botw/ghs_intrinsics.h"

extern "C" void fn_02ef9f20(void* context);
extern "C" void fn_02efa5cc(void* context);

extern "C" void fn_02efacec(void* context) {
    __schedule_barrier();
    fn_02ef9f20(context);
    fn_02efa5cc(context);
}

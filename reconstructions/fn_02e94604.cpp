#include "botw/ghs_intrinsics.h"

extern "C" void fn_02e92d2c(void* context);
extern "C" void fn_02e940d0(void* context);

extern "C" void fn_02e94604(void* context) {
    __schedule_barrier();
    fn_02e92d2c(context);
    fn_02e940d0(context);
}

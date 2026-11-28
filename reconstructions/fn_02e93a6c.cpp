#include "botw/ghs_intrinsics.h"

extern "C" void fn_02e92d2c(void* context);
extern "C" void fn_02e93538(void* context);

extern "C" void fn_02e93a6c(void* context) {
    __schedule_barrier();
    fn_02e92d2c(context);
    fn_02e93538(context);
}

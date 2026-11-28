#include "botw/ghs_intrinsics.h"

extern "C" void fn_02e92d2c(void* context);
extern "C" void fn_02e94c08(void* context);

extern "C" void fn_02e94c18(void* context) {
    __schedule_barrier();
    fn_02e92d2c(context);
    fn_02e94c08(context);
}

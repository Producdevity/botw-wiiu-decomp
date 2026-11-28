#include "botw/ghs_intrinsics.h"

extern "C" void fn_02e92d2c(void* context);
extern "C" void fn_02e96f1c(void* context);

extern "C" void fn_02e97318(void* context) {
    __schedule_barrier();
    fn_02e92d2c(context);
    fn_02e96f1c(context);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_025f7144(void* context);
extern "C" void fn_025f778c(void* context);

extern "C" void fn_025f77f4(void* context) {
    __schedule_barrier();
    fn_025f7144(context);
    fn_025f778c(context);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_0237de68(void* context);
extern "C" void fn_0237c22c(void* context);

extern "C" void fn_0237c27c(void* context) {
    __schedule_barrier();
    fn_0237de68(context);
    fn_0237c22c(context);
}

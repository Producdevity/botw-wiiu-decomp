#include "botw/ghs_intrinsics.h"

extern "C" void fn_037a335c(void* context);
extern "C" void fn_037a39a4(void* context);

extern "C" void fn_037a3c34(void* context) {
    __schedule_barrier();
    fn_037a335c(context);
    fn_037a39a4(context);
}

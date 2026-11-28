#include "botw/ghs_intrinsics.h"

extern "C" void fn_0208d024(void* context);
extern "C" void fn_0236370c(void* context);

extern "C" void fn_0236389c(void* context) {
    __schedule_barrier();
    fn_0208d024(context);
    fn_0236370c(context);
}

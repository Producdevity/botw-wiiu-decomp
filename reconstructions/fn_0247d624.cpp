#include "botw/ghs_intrinsics.h"

extern "C" void fn_02afac1c(void* context);
extern "C" void fn_0247c94c(void* context);

extern "C" void fn_0247d624(void* context) {
    __schedule_barrier();
    fn_02afac1c(context);
    fn_0247c94c(context);
}

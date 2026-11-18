#include "botw/ghs_intrinsics.h"

extern "C" void fn_0229685c(void* context);
extern "C" void fn_02296adc(void* context);

extern "C" void fn_02298a80(void* context) {
    __schedule_barrier();
    fn_0229685c(context);
    fn_02296adc(context);
}

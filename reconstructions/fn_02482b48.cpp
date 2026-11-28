#include "botw/ghs_intrinsics.h"

extern "C" void fn_02a3e628(void* context);
extern "C" void fn_02482adc(void* context);

extern "C" void fn_02482b48(void* context) {
    __schedule_barrier();
    fn_02a3e628(context);
    fn_02482adc(context);
}

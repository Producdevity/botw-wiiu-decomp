#include "botw/ghs_intrinsics.h"

extern "C" void fn_02e6e898(void* context);
extern "C" void fn_02e6f278(void* context);

extern "C" void fn_02e6fa78(void* context) {
    __schedule_barrier();
    fn_02e6e898(context);
    fn_02e6f278(context);
}

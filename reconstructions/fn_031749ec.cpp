#include "botw/ghs_intrinsics.h"

extern "C" void fn_0317468c(void* context);
extern "C" void fn_031747c4(void* context);

extern "C" void fn_031749ec(void* context) {
    __schedule_barrier();
    fn_0317468c(context);
    fn_031747c4(context);
}

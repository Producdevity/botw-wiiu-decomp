#include "botw/ghs_intrinsics.h"

extern "C" void fn_026ddcdc(void* context);
extern "C" void fn_024deb18(void* context);

extern "C" void fn_026ddf4c(void* context) {
    __schedule_barrier();
    fn_026ddcdc(context);
    fn_024deb18(context);
}

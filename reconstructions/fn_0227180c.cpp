#include "botw/ghs_intrinsics.h"

extern "C" void fn_02420278(void* context);
extern "C" void fn_0227171c(void* context);

extern "C" void fn_0227180c(void* context) {
    __schedule_barrier();
    fn_02420278(context);
    fn_0227171c(context);
}

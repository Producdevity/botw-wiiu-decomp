#include "botw/ghs_intrinsics.h"

extern "C" void fn_022f181c(void* context);
extern "C" void fn_0213ef70(void* context);

extern "C" void fn_022f18c4(void* context) {
    __schedule_barrier();
    fn_022f181c(context);
    fn_0213ef70(context);
}

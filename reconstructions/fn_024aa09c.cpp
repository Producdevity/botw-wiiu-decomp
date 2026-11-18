#include "botw/ghs_intrinsics.h"

extern "C" void fn_024a6700(void* context);
extern "C" void fn_024aa068(void* context);

extern "C" void fn_024aa09c(void* context) {
    __schedule_barrier();
    fn_024a6700(context);
    fn_024aa068(context);
}

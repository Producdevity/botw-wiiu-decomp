#include "botw/ghs_intrinsics.h"

extern "C" void fn_02bb63fc(void* context);
extern "C" void fn_02bb6434(void* context);

extern "C" void fn_02bb646c(void* context) {
    __schedule_barrier();
    fn_02bb63fc(context);
    fn_02bb6434(context);
}

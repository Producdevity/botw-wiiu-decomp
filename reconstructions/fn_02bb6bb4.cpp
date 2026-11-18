#include "botw/ghs_intrinsics.h"

extern "C" void fn_02bb6a44(void* context);
extern "C" void fn_02bb6afc(void* context);

extern "C" void fn_02bb6bb4(void* context) {
    __schedule_barrier();
    fn_02bb6a44(context);
    fn_02bb6afc(context);
}

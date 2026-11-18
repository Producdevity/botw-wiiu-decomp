#include "botw/ghs_intrinsics.h"

extern "C" void fn_02eaa090(void* context);
extern "C" void fn_02ea9e68(void* context);

extern "C" void fn_02eaa108(void* context) {
    __schedule_barrier();
    fn_02eaa090(context);
    fn_02ea9e68(context);
}

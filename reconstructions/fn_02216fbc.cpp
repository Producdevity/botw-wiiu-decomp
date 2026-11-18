#include "botw/ghs_intrinsics.h"

extern "C" void fn_02217c54(void* context);
extern "C" void fn_022177b0(void* context);

extern "C" void fn_02216fbc(void* context) {
    __schedule_barrier();
    fn_02217c54(context);
    fn_022177b0(context);
}

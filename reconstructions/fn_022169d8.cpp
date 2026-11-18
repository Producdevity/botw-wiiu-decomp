#include "botw/ghs_intrinsics.h"

extern "C" void fn_02217c54(void* object);
extern "C" void fn_022177b0(void* object);

extern "C" void fn_022169d8(void* object) {
    __schedule_barrier();
    fn_02217c54(object);
    fn_022177b0(object);
}

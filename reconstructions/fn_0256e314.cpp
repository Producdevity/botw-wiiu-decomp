#include "botw/ghs_intrinsics.h"

extern "C" void fn_025796c8(void* object);
extern "C" void fn_0256e300(void* object);

extern "C" void fn_0256e314(void* object) {
    __schedule_barrier();
    fn_025796c8(object);
    fn_0256e300(object);
}

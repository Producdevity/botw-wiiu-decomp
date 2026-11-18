#include "botw/ghs_intrinsics.h"

extern "C" void fn_02670c0c(void* object);
extern "C" void fn_02671288(void* object);

extern "C" void fn_026712b4(void* object) {
    __schedule_barrier();
    fn_02670c0c(object);
    fn_02671288(object);
}

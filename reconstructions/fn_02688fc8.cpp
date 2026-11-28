#include "botw/ghs_intrinsics.h"

extern "C" void fn_02688f6c(void **object);
extern "C" void fn_02688fb8(void* context);

extern "C" void fn_02688fc8(void **context) {
    __schedule_barrier();
    fn_02688f6c(context);
    fn_02688fb8(context);
}

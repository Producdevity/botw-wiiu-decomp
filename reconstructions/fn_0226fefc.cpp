#include "botw/ghs_intrinsics.h"

extern "C" void fn_0226dd24(void* context);
extern "C" void fn_0226fb44(void* object);

extern "C" void fn_0226fefc(void* context) {
    __schedule_barrier();
    fn_0226dd24(context);
    fn_0226fb44(context);
}

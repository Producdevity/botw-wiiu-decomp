#include "botw/ghs_intrinsics.h"

extern "C" void fn_0226fb44(void* object);
extern "C" void fn_0226dd28(void* object);

extern "C" void fn_0226ff30(void* object) {
    __schedule_barrier();
    fn_0226fb44(object);
    fn_0226dd28(object);
}

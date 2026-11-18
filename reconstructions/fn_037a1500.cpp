#include "botw/ghs_intrinsics.h"

extern "C" void fn_03798f68(void* context);
extern "C" void fn_03798fa4(void* context);

extern "C" void fn_037a1500(void* context) {
    __schedule_barrier();
    fn_03798f68(context);
    fn_03798fa4(context);
}

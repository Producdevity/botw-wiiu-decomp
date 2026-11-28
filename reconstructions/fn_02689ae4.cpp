#include "botw/ghs_intrinsics.h"

extern "C" void fn_02689a84(void* context);
extern "C" void fn_02689a94(void **object);

extern "C" void fn_02689ae4(void **context) {
    __schedule_barrier();
    fn_02689a84(context);
    fn_02689a94(context);
}

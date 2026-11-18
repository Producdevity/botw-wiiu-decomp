#include "botw/ghs_intrinsics.h"

extern "C" void fn_020ea974(void* context);
extern "C" void fn_020eafcc(void* context);

extern "C" void fn_020eb100(void* context) {
    __schedule_barrier();
    fn_020ea974(context);
    fn_020eafcc(context);
}

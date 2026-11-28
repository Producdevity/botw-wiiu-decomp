#include "botw/ghs_intrinsics.h"

extern "C" void fn_02f37210(void* context);
extern "C" void fn_02f37260(void* context);

extern "C" void fn_02f37894(void* context) {
    __schedule_barrier();
    fn_02f37210(context);
    fn_02f37260(context);
}

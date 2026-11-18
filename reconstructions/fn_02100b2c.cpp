#include "botw/ghs_intrinsics.h"

extern "C" void fn_0230b260(void* context);
extern "C" void fn_02100ad0(void* context);

extern "C" void fn_02100b2c(void* context) {
    __schedule_barrier();
    fn_0230b260(context);
    fn_02100ad0(context);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_024469e8(void* context);
extern "C" void fn_02274848(void* context);

extern "C" void fn_022749bc(void* context) {
    __schedule_barrier();
    fn_024469e8(context);
    fn_02274848(context);
}

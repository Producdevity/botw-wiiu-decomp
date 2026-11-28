#include "botw/ghs_intrinsics.h"

extern "C" void fn_025daec8(void* context);
extern "C" void fn_025306a0(void*);

extern "C" void fn_02530b1c(void* context) {
    __schedule_barrier();
    fn_025daec8(context);
    fn_025306a0(context);
}

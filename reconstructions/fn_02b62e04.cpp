#include "botw/ghs_intrinsics.h"

extern "C" void fn_0339bd70(void* context);
extern "C" void fn_02c1a924(void* context);

extern "C" void fn_02b62e04(void* context) {
    __schedule_barrier();
    fn_0339bd70(context);
    fn_02c1a924(context);
}

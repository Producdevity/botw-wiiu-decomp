#include "botw/ghs_intrinsics.h"

extern "C" void fn_034cc278(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_02e37ea8(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        fn_034cc278(object, 2);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

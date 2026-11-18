#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b3b9e0(void* object, unsigned flags);
extern "C" void fn_020c5aa4(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_022ed53c(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        fn_02b3b9e0(static_cast<unsigned char*>(object) + 68, 2);
        fn_020c5aa4(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

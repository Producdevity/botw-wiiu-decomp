#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b2d1bc(void* object, unsigned flags);
extern "C" void fn_02341de0(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_0225e7cc(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        fn_02b2d1bc(static_cast<unsigned char*>(object) + 432, 2);
        fn_02341de0(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

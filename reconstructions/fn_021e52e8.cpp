#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b61568(void* object, unsigned flags);
extern "C" void fn_021e703c(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_021e52e8(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        fn_02b61568(static_cast<unsigned char*>(object) + 128, 2);
        fn_021e703c(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

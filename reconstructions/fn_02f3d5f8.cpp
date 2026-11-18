#include "botw/ghs_intrinsics.h"

extern "C" void fn_02f3d10c(void* object, unsigned flags);
extern "C" void fn_02e73dd8(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_02f3d5f8(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        fn_02f3d10c(static_cast<unsigned char*>(object) + 48, 2);
        fn_02e73dd8(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

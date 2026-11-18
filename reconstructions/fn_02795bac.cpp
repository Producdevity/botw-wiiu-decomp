#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b27110(void* object, unsigned flags);
extern "C" void fn_027b8364(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_02795bac(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        fn_02b27110(static_cast<unsigned char*>(object) + 420, 2);
        fn_027b8364(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

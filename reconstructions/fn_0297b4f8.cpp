#include "botw/ghs_intrinsics.h"

extern "C" void fn_0366fea8(void* object, unsigned flags);
extern "C" void fn_037b7d90(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_0297b4f8(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        fn_0366fea8(static_cast<unsigned char*>(object) + 48, 2);
        fn_037b7d90(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

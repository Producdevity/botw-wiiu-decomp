#include "botw/ghs_intrinsics.h"

extern "C" void fn_037e6024(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_038ea080(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        fn_037e6024(object, 2);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

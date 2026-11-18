#include "botw/ghs_intrinsics.h"

extern "C" void fn_02000d78(void* object, unsigned flags);
extern "C" void fn_022fa430(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_022fbb20(void* object, unsigned flags) {
    __schedule_barrier();
    if (object) {
        fn_02000d78(static_cast<unsigned char*>(object) + 52, 2);
        fn_022fa430(object, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}

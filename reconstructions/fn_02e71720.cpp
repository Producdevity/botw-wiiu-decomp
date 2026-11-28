#include "botw/ghs_intrinsics.h"

extern "C" void fn_02e73dd8(void* object, unsigned flags);
extern "C" void fn_02f277e4(void*, unsigned);
extern "C" void fn_0305d994(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02e71720(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_0305d994((char*)object + 132, 2);
        fn_02f277e4((char*)object + 48, 2);
        fn_02e73dd8(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}

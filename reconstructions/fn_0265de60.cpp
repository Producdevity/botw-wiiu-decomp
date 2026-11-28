#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);
extern "C" void fn_0398849c(void*, unsigned);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_0398849c((char*)object + 80, 2);
        fn_0398849c((char*)object + 48, 2);
        fn_037b7d90(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_0265de60(void *object, unsigned flags) {
    destroy(object, flags);
}

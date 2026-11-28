#include "botw/ghs_intrinsics.h"

extern "C" void fn_024bdfc8(void*, void*);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0378da14(void* handle);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_0378da14((char *)object + 0x84);
        fn_024bdfc8(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_024c01b8(void *object, unsigned flags) {
    destroy(object, flags);
}

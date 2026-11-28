#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03b9d0b4(void*, int);

namespace {
inline void destroy(void *object, int flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_03b9d0b4((char *)object + 0x3C, 2);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_03ba12fc(void *object, unsigned flags) {
    destroy(object, flags);
}

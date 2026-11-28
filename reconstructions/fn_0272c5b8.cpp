#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b27110(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void *, unsigned);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02b27110((char *)object + 0x3C, 2U);
        fn_037b7d90(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_0272c5b8(void *object, unsigned flags) {
    destroy(object, flags);
}

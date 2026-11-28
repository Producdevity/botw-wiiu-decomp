#include "botw/ghs_intrinsics.h"

extern "C" void fn_022c059c(void *, unsigned);
extern "C" void fn_02b61568(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02b61568((char *)object + 0x94, 2U);
        fn_022c059c(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_022c1b18(void *object, unsigned flags) {
    destroy(object, flags);
}

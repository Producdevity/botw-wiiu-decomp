#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b12214(void*, int);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02b12214((char *)object + 0x40, 2);
        fn_030eb73c((char *)object + 4, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_02088d2c(void *object, unsigned flags) {
    destroy(object, flags);
}

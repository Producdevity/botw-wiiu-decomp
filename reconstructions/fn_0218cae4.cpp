#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void *, unsigned);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_0378c734((ProcLink *)((char *)object + 0x58));
        fn_030eb73c((char *)object + 4, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_0218cae4(void *object, unsigned flags) {
    destroy(object, flags);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

namespace {
inline void destroy(void *object, int flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_0378c734((ProcLink *)((char *)object + 0x24));
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_029b4dd0(void *object, unsigned flags) {
    destroy(object, flags);
}

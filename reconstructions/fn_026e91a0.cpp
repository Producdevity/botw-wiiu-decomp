#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
struct ProcAccessor;
extern "C" void fn_031f9d70(ProcAccessor *, unsigned);
extern "C" void fn_037b7d90(void *, unsigned);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_031f9d70((ProcAccessor *)((char *)object + 0x34), 2U);
        fn_037b7d90(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_026e91a0(void *object, unsigned flags) {
    destroy(object, flags);
}

#include "botw/ghs_intrinsics.h"

extern "C" void fn_02c4f9ac(void*, unsigned);
extern "C" void fn_02c57924(void*, unsigned);
extern "C" void fn_0308e6d0(void*);

namespace {
inline void destroy(void* object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02c57924((char*)object + 8, 2U);
        fn_02c4f9ac(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_02c405f4(void* object, unsigned flags) {
    destroy(object, flags);
}

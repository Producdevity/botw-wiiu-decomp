#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b257f8(void* object, unsigned flags);
extern "C" void fn_02b61568(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);

namespace {
inline void destroy(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        fn_02b257f8((char*)object + 52, 2U);
        fn_02b61568((char*)object + 44, 2U);
        fn_030eb73c((char*)object + 4, 2);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
}

extern "C" void fn_02461168(void *object, unsigned flags) {
    destroy(object, flags);
}

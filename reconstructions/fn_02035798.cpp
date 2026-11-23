#include "botw/ghs_intrinsics.h"

extern "C" void fn_02034668(void*, int);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0333b26c(void* object, unsigned flags);

extern "C" void fn_02035798(void* arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02034668((char*)arg0 + 112, 2);
        fn_02034668((char*)arg0 + 36, 2);
        fn_0333b26c(arg0, 0U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

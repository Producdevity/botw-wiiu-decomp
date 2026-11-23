#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);
extern "C" void fn_0398849c(void*, unsigned);

extern "C" void fn_0265de60(void* arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_0398849c((char*)arg0 + 80, 2);
        fn_0398849c((char*)arg0 + 48, 2);
        fn_037b7d90(arg0, 0);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

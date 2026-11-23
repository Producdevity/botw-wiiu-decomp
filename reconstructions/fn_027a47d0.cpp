#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_037b7d90(void* object, unsigned flags);

extern "C" void fn_027a47d0(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        fn_030bb614((char*)arg0 + 104, 2U);
        fn_030bb614((char*)arg0 + 32, 2U);
        fn_037b7d90(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

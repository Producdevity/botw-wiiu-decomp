#include "botw/ghs_intrinsics.h"

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_034eecd8(void*);
extern "C" void fn_037e5be8(void* object, unsigned flags);
extern "C" void fn_037e6024(void* storage, unsigned flags);

extern "C" void fn_034eedf4(void* arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_034eecd8(arg0);
        if (((char*)arg0 + 60) != 0) {
            fn_037e5be8((char*)arg0 + 68, 0U);
        }
        fn_037e6024((char*)arg0 + 12, 2);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

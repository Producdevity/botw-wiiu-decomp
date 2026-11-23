#include "botw/ghs_intrinsics.h"

extern "C" void fn_02e73dd8(void* object, unsigned flags);
extern "C" void fn_02ecfdcc(void*, unsigned);
extern "C" void fn_0305d994(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_03010ab8(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        fn_0305d994((char*)arg0 + 120, 2);
        fn_02ecfdcc((char*)arg0 + 48, 2);
        fn_02e73dd8(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

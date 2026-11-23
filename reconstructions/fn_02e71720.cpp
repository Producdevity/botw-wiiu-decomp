#include "botw/ghs_intrinsics.h"

extern "C" void fn_02e73dd8(void* object, unsigned flags);
extern "C" void fn_02f277e4(void*, unsigned);
extern "C" void fn_0305d994(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02e71720(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        fn_0305d994((char*)arg0 + 132, 2);
        fn_02f277e4((char*)arg0 + 48, 2);
        fn_02e73dd8(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

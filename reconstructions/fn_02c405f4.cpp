#include "botw/ghs_intrinsics.h"

extern "C" void fn_02c4f9ac(void *, unsigned);
extern "C" void fn_02c57924(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02c405f4(void *arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02c57924((char *)arg0 + 8, 2U);
        fn_02c4f9ac(arg0, 0U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

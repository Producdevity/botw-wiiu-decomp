#include "botw/ghs_intrinsics.h"

extern "C" void fn_02b257f8(void* object, unsigned flags);
extern "C" void fn_02b61568(void* object, unsigned flags);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);

extern "C" void fn_02461168(void* arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        fn_02b257f8((char*)arg0 + 52, 2U);
        fn_02b61568((char*)arg0 + 44, 2U);
        fn_030eb73c((char*)arg0 + 4, 2);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

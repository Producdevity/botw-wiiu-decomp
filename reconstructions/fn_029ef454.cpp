#include "botw/ghs_intrinsics.h"

extern "C" void fn_029ef414(void*);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_0333bcec(void* object, unsigned flags);

extern "C" void fn_029ef454(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        fn_029ef414(arg0);
        fn_030bb614((char*)arg0 + 88, 2U);
        fn_0333bcec((char*)arg0 + 56, 2U);
        fn_0333bcec((char*)arg0 + 44, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

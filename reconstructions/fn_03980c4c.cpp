#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10349338[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0397dad8(void*);
extern "C" void fn_03980b18(void*, int);
extern "C" void fn_03980ba8(void*, int);
extern "C" void fn_03980c38(void* object, unsigned flags);

extern "C" void fn_03980c4c(void* arg0, unsigned arg1) {
    const unsigned flags = arg1;
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 32)) = data_10349338;
        fn_0397dad8(arg0);
        fn_03980ba8((char*)arg0 + 352, 2);
        fn_03980b18((char*)arg0 + 252, 2);
        fn_03980c38((char*)arg0 + 116, 2U);
        if (flags & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

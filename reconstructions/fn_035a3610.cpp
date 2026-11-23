#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102e92f0[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_035a3510(int value);
extern "C" void fn_03a83798(void *, unsigned);

extern "C" void fn_035a3610(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 172)) = data_102e92f0;
        fn_035a3510((int)(arg0));
        fn_03a83798((char*)arg0 + 104, 2);
        fn_03a83798((char*)arg0 + 60, 2);
        fn_030bb614(arg0, 2U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

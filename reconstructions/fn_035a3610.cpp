#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102e92f0[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void* object, unsigned flags);
extern "C" void fn_035a3510(int value);
extern "C" void fn_03a83798(void *, unsigned);

extern "C" void fn_035a3610(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 172)) = data_102e92f0;
        fn_035a3510((int)(object));
        fn_03a83798((char*)object + 104, 2);
        fn_03a83798((char*)object + 60, 2);
        fn_030bb614(object, 2U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}

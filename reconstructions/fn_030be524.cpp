#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1027b08c[];
extern "C" unsigned char data_1027b0c4[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030a5ab4(void* object, unsigned flags);
extern "C" void fn_030be4c8(void*);

extern "C" void fn_030be524(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 304)) = data_1027b08c;
        (*(const void**)((char*)object + 320)) = data_1027b0c4;
        fn_030be4c8(object);
        fn_030a5ab4((char*)object + 308, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}

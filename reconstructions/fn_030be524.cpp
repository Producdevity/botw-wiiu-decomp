#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1027b08c[];
extern "C" unsigned char data_1027b0c4[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030a5ab4(void* object, unsigned flags);
extern "C" void fn_030be4c8(void*);

extern "C" void fn_030be524(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 304)) = data_1027b08c;
        (*(const void**)((char*)arg0 + 320)) = data_1027b0c4;
        fn_030be4c8(arg0);
        fn_030a5ab4((char*)arg0 + 308, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

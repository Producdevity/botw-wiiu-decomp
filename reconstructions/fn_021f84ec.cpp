#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1004f96c[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030eb73c(void* object, unsigned flags);
extern "C" void fn_0362aee8(void*, void*);
extern "C" void fn_0362b074(void*, int);

extern "C" void fn_021f84ec(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 12)) = data_1004f96c;
        fn_0362aee8((char*)arg0 + 32, 0);
        fn_0362b074((char*)arg0 + 32, 2);
        fn_030eb73c((char*)arg0 + 4, 2);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

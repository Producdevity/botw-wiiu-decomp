#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102e4f50[];
extern "C" unsigned char data_102e4f78[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03bc27f0(void* p);
extern "C" void fn_03bc27fc(void*, int);

extern "C" void fn_03576f30(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)arg0) = data_102e4f50;
        {
            const void* const table = data_102e4f78;
            (*(const void**)((char*)arg0 + 4)) = table;
        }
        fn_03bc27f0((char*)arg0 + 84);
        fn_03bc27fc((char*)arg0 + 84, 2);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

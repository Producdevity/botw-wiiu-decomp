#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102e4f50[];
extern "C" unsigned char data_102e4f78[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03bc27f0(void* p);
extern "C" void fn_03bc27fc(void*, int);

extern "C" void fn_03576f30(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)object) = data_102e4f50;
        {
            const void* const table = data_102e4f78;
            (*(const void**)((char*)object + 4)) = table;
        }
        fn_03bc27f0((char*)object + 84);
        fn_03bc27fc((char*)object + 84, 2);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}

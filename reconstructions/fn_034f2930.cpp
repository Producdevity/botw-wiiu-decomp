#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_102d020c[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_034f28c0(void*);
extern "C" void fn_037e6024(void* storage, unsigned flags);

extern "C" void fn_034f2930(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        {
            const void* const table = data_102d020c;
            (*(const void**)((char*)arg0 + 228)) = table;
        }
        fn_034f28c0(arg0);
        fn_037e6024((char*)arg0 + 172, 2);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

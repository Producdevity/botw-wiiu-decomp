#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1041842c[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bbd6c(void*, void*);
extern "C" void fn_030dea80(void* object, unsigned flags);

extern "C" void fn_042147cc(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        {
            const void* const table = data_1041842c;
            (*(const void**)((char*)arg0 + 24)) = table;
        }
        fn_030dea80((char*)arg0 + 228, 2U);
        fn_030dea80((char*)arg0 + 176, 2U);
        fn_030bbd6c(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

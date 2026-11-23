#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_103ce934[];
extern "C" unsigned char data_103ce94c[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03bd0744(void*);

extern "C" void fn_03bd1140(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        {
            const void* const table = data_103ce934;
            (*(const void**)((char*)arg0 + 8)) = table;
        }
        {
            const void* const table2 = data_103ce94c;
            (*(const void**)((char*)arg0 + 56)) = table2;
        }
        fn_03bd0744(arg0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

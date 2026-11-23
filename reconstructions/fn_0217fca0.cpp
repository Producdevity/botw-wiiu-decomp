#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10037e64[];
extern "C" void fn_0211bb00(void* object, unsigned flags);
extern "C" void fn_0217fbe0(void*);
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_0217fca0(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        {
            const void* const table = data_10037e64;
            (*(const void**)((char*)arg0 + 12)) = table;
        }
        fn_0217fbe0(arg0);
        fn_0211bb00(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

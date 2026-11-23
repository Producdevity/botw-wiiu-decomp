#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_101129ec[];
extern "C" void fn_026cb06c(void*);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

extern "C" void fn_026cb0dc(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 12)) = data_101129ec;
        fn_026cb06c(arg0);
        fn_037b7d90(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

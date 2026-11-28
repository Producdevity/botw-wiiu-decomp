#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_101129ec[];
extern "C" void fn_026cb06c(void*);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

extern "C" void fn_026cb0dc(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        (*(const void**)((char*)object + 12)) = data_101129ec;
        fn_026cb06c(object);
        fn_037b7d90(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}

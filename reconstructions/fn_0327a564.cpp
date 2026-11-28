#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1029dd70[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_032775f0(void*);
extern "C" void fn_037b7d90(void* object, unsigned flags);

extern "C" void fn_0327a564(void *object, unsigned flags) {
    __schedule_barrier();
    if (object != 0) {
        {
            const void* const table = data_1029dd70;
            (*(const void**)((char*)object + 12)) = table;
        }
        fn_032775f0(object);
        fn_037b7d90(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}

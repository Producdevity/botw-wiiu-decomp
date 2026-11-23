#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_1029dd70[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_032775f0(void*);
extern "C" void fn_037b7d90(void* object, unsigned flags);

extern "C" void fn_0327a564(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        {
            const void* const table = data_1029dd70;
            (*(const void**)((char*)arg0 + 12)) = table;
        }
        fn_032775f0(arg0);
        fn_037b7d90(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

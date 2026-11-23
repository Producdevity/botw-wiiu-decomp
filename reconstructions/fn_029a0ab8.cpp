#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_10177360[];
extern "C" void fn_029a0a30(void *arg0);
extern "C" void fn_029a0a78(void*);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_037b7d90(void* object, unsigned flags);

extern "C" void fn_029a0ab8(void* arg0, unsigned arg1) {
    __schedule_barrier();
    if (arg0 != 0) {
        (*(const void**)((char*)arg0 + 12)) = data_10177360;
        fn_029a0a30(arg0);
        fn_029a0a78(arg0);
        fn_037b7d90(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

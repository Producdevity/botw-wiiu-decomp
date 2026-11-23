#include "botw/ghs_intrinsics.h"

extern "C" unsigned char data_101c6dc4[];
extern "C" void fn_0308e6d0(void *);

extern "C" void fn_02c5799c(void* arg0, unsigned arg1) {
    __schedule_barrier();
    void* temp_r3;

    if (arg0 != 0) {
        temp_r3 = (*(void**)((char*)arg0 + 4));
        (*(const void**)arg0) = data_101c6dc4;
        (*(int (**)(void*))((char*)((*(void**)((char*)temp_r3 + 12))) + 36))(temp_r3);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}

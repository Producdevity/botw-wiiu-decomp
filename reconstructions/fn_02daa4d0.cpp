#include "botw/ghs_intrinsics.h"

extern "C" void* data_10463fec;
extern "C" void *data_10463fe8;

extern "C" void fn_02daa4d0() {
    if (data_10463fec) {
        void* p = data_10463fec;
        data_10463fec = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_10463fe8) {
            void* q = data_10463fe8;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_10463fe8 = 0;
    }
}

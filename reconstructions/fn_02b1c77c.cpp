#include "botw/ghs_intrinsics.h"

extern "C" void* data_10463c64;
extern "C" void *data_10463c60;

extern "C" void fn_02b1c77c() {
    if (data_10463c64) {
        void* p = data_10463c64;
        data_10463c64 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_10463c60) {
            void* q = data_10463c60;
            (*(void (**)(void*, int))(*(char**)((char*)q + 224) + 12))(q, 3);
        }
        data_10463c60 = 0;
    }
}

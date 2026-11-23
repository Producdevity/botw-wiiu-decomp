#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047ec54;
extern "C" void* data_1047ec50;

extern "C" void fn_03ae403c() {
    if (data_1047ec54) {
        void* p = data_1047ec54;
        data_1047ec54 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047ec50) {
            void* q = data_1047ec50;
            (*(void (**)(void*, int))(*(char**)((char*)q + 2176) + 12))(q, 3);
        }
        data_1047ec50 = 0;
    }
}

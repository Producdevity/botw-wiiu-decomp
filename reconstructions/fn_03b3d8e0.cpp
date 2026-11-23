#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047ed2c;
extern "C" void* data_1047ed28;

extern "C" void fn_03b3d8e0() {
    if (data_1047ed2c) {
        void* p = data_1047ed2c;
        data_1047ed2c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047ed28) {
            void* q = data_1047ed28;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047ed28 = 0;
    }
}

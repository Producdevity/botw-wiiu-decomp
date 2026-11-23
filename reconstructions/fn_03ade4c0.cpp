#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047ec3c;
extern "C" void* data_1047ec38;

extern "C" void fn_03ade4c0() {
    if (data_1047ec3c) {
        void* p = data_1047ec3c;
        data_1047ec3c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047ec38) {
            void* q = data_1047ec38;
            (*(void (**)(void*, int))(*(char**)((char*)q + 1144) + 12))(q, 3);
        }
        data_1047ec38 = 0;
    }
}

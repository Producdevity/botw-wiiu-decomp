#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047c254;
extern "C" void* data_1047c250;

extern "C" void fn_037922d0() {
    if (data_1047c254) {
        void* p = data_1047c254;
        data_1047c254 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047c250) {
            void* q = data_1047c250;
            (*(void (**)(void*, int))(*(char**)((char*)q + 24) + 12))(q, 3);
        }
        data_1047c250 = 0;
    }
}

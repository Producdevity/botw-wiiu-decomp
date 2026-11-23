#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047f0c0;
extern "C" void *data_1047f0bc;

extern "C" void fn_03bd1d3c() {
    if (data_1047f0c0) {
        void* p = data_1047f0c0;
        data_1047f0c0 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047f0bc) {
            void* q = data_1047f0bc;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047f0bc = 0;
    }
}

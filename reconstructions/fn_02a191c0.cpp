#include "botw/ghs_intrinsics.h"
extern "C" void* data_1046374c;
extern "C" void* data_10463748;

extern "C" void fn_02a191c0() {
    if (data_1046374c) {
        void* p = data_1046374c;
        data_1046374c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_10463748) {
            void* q = data_10463748;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_10463748 = 0;
    }
}

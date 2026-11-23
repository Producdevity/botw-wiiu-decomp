#include "botw/ghs_intrinsics.h"

extern "C" void* data_1046357c;
extern "C" void *data_10463578;

extern "C" void fn_029fb77c() {
    if (data_1046357c) {
        void* p = data_1046357c;
        data_1046357c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_10463578) {
            void* q = data_10463578;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_10463578 = 0;
    }
}

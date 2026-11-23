#include "botw/ghs_intrinsics.h"

extern "C" void* data_1046e11c;
extern "C" void* data_1046e118;

extern "C" void fn_0338f5ec() {
    if (data_1046e11c) {
        void* p = data_1046e11c;
        data_1046e11c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1046e118) {
            void* q = data_1046e118;
            (*(void (**)(void*, int))(*(char**)((char*)q + 40) + 12))(q, 3);
        }
        data_1046e118 = 0;
    }
}

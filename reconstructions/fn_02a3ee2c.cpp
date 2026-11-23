#include "botw/ghs_intrinsics.h"
extern "C" void* data_10463834;
extern "C" void* data_10463830;

extern "C" void fn_02a3ee2c() {
    if (data_10463834) {
        void* p = data_10463834;
        data_10463834 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_10463830) {
            void* q = data_10463830;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_10463830 = 0;
    }
}

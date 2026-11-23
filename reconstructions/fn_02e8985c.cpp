#include "botw/ghs_intrinsics.h"
extern "C" void* data_104698a0;
extern "C" void* data_1046989c;

extern "C" void fn_02e8985c() {
    if (data_104698a0) {
        void* p = data_104698a0;
        data_104698a0 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1046989c) {
            void* q = data_1046989c;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_1046989c = 0;
    }
}

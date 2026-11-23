#include "botw/ghs_intrinsics.h"

extern "C" void* data_1046d220;
extern "C" void* data_1046d21c;

extern "C" void fn_0319fbbc() {
    if (data_1046d220) {
        void* p = data_1046d220;
        data_1046d220 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1046d21c) {
            void* q = data_1046d21c;
            (*(void (**)(void*, int))(*(char**)((char*)q + 32) + 12))(q, 3);
        }
        data_1046d21c = 0;
    }
}

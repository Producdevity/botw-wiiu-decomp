#include "botw/ghs_intrinsics.h"
typedef int s32;

extern "C" void* data_1046ce64;
extern "C" s32 data_1046ce60;

extern "C" void fn_03178ba4() {
    if (data_1046ce64) {
        void* p = data_1046ce64;
        data_1046ce64 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1046ce60) {
            void* q = (void*)data_1046ce60;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_1046ce60 = 0;
    }
}

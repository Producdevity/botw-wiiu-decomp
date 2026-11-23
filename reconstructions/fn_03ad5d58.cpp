#include "botw/ghs_intrinsics.h"
typedef int s32;

extern "C" void* data_1047ebc4;
extern "C" s32 data_1047ebc0;

extern "C" void fn_03ad5d58() {
    if (data_1047ebc4) {
        void* p = data_1047ebc4;
        data_1047ebc4 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047ebc0) {
            void* q = (void*)data_1047ebc0;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047ebc0 = 0;
    }
}

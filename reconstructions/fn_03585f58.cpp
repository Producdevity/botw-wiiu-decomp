#include "botw/ghs_intrinsics.h"
typedef int s32;

extern "C" void* data_104722ac;
extern "C" s32 data_104722a8;

extern "C" void fn_03585f58() {
    if (data_104722ac) {
        void* p = data_104722ac;
        data_104722ac = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_104722a8) {
            void* q = (void*)data_104722a8;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_104722a8 = 0;
    }
}

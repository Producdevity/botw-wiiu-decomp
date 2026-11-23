#include "botw/ghs_intrinsics.h"
extern "C" void* data_1047d744;
extern "C" void* data_1047d740;

extern "C" void fn_03932dfc() {
    if (data_1047d744) {
        void* p = data_1047d744;
        data_1047d744 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047d740) {
            void* q = data_1047d740;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_1047d740 = 0;
    }
}

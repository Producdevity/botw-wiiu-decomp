#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047eb88;
extern "C" void* data_1047eb84;

extern "C" void fn_03abca44() {
    if (data_1047eb88) {
        void* p = data_1047eb88;
        data_1047eb88 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047eb84) {
            void* q = data_1047eb84;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047eb84 = 0;
    }
}

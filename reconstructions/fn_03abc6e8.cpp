#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047eb80;
extern "C" void* data_1047eb7c;

extern "C" void fn_03abc6e8() {
    if (data_1047eb80) {
        void* p = data_1047eb80;
        data_1047eb80 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047eb7c) {
            void* q = data_1047eb7c;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047eb7c = 0;
    }
}

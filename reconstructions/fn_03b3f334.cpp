#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047ed3c;
extern "C" void* data_1047ed38;

extern "C" void fn_03b3f334() {
    if (data_1047ed3c) {
        void* p = data_1047ed3c;
        data_1047ed3c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047ed38) {
            void* q = data_1047ed38;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047ed38 = 0;
    }
}

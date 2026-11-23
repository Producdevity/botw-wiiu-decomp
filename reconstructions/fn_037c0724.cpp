#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047c31c;
extern "C" void *data_1047c318;

extern "C" void fn_037c0724() {
    if (data_1047c31c) {
        void* p = data_1047c31c;
        data_1047c31c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047c318) {
            void* q = data_1047c318;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_1047c318 = 0;
    }
}

#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047c38c;
extern "C" void* data_1047c388;

extern "C" void fn_037da6f4() {
    if (data_1047c38c) {
        void* p = data_1047c38c;
        data_1047c38c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047c388) {
            void* q = data_1047c388;
            (*(void (**)(void*, int))(*(char**)((char*)q + 28) + 12))(q, 3);
        }
        data_1047c388 = 0;
    }
}

#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047c2bc;
extern "C" char* data_1047c2b8;

extern "C" void fn_037b59a0() {
    if (data_1047c2bc) {
        void* p = data_1047c2bc;
        data_1047c2bc = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047c2b8) {
            void* q = (void*)data_1047c2b8;
            (*(void (**)(void*, int))(*(char**)((char*)q + 148) + 12))(q, 3);
        }
        data_1047c2b8 = 0;
    }
}

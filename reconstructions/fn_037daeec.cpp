#include "botw/ghs_intrinsics.h"
extern "C" void* data_1047c39c;
extern "C" void* data_1047c398;

extern "C" void fn_037daeec() {
    if (data_1047c39c) {
        void* p = data_1047c39c;
        data_1047c39c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047c398) {
            void* q = data_1047c398;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_1047c398 = 0;
    }
}

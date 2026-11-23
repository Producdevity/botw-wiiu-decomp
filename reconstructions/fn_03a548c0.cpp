#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047e664;
extern "C" void **data_1047e660;

extern "C" void fn_03a548c0() {
    if (data_1047e664) {
        void* p = data_1047e664;
        data_1047e664 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047e660) {
            void* q = (void*)data_1047e660;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047e660 = 0;
    }
}

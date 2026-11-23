#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047ed5c;
extern "C" void *data_1047ed58;

extern "C" void fn_03b403b4() {
    if (data_1047ed5c) {
        void* p = data_1047ed5c;
        data_1047ed5c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047ed58) {
            void* q = data_1047ed58;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047ed58 = 0;
    }
}

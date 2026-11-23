#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047ed34;
extern "C" void *data_1047ed30;

extern "C" void fn_03b3e8e4() {
    if (data_1047ed34) {
        void* p = data_1047ed34;
        data_1047ed34 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047ed30) {
            void* q = data_1047ed30;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047ed30 = 0;
    }
}

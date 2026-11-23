#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047e404;
extern "C" void* data_1047e400;

extern "C" void fn_03a09364() {
    if (data_1047e404) {
        void* p = data_1047e404;
        data_1047e404 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047e400) {
            void* q = data_1047e400;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047e400 = 0;
    }
}

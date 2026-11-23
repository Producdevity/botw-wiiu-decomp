#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047e65c;
extern "C" void* data_1047e658;

extern "C" void fn_03a53e94() {
    if (data_1047e65c) {
        void* p = data_1047e65c;
        data_1047e65c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047e658) {
            void* q = data_1047e658;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047e658 = 0;
    }
}

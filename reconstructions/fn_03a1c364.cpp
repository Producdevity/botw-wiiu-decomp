#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047e554;
extern "C" void* data_1047e550;

extern "C" void fn_03a1c364() {
    if (data_1047e554) {
        void* p = data_1047e554;
        data_1047e554 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047e550) {
            void* q = data_1047e550;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047e550 = 0;
    }
}

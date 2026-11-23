#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047dc3c;
extern "C" void* data_1047dc38;

extern "C" void fn_039a2be8() {
    if (data_1047dc3c) {
        void* p = data_1047dc3c;
        data_1047dc3c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047dc38) {
            void* q = data_1047dc38;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047dc38 = 0;
    }
}

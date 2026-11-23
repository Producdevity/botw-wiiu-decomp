#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047e428;
extern "C" void* data_1047e424;

extern "C" void fn_03a1a8f8() {
    if (data_1047e428) {
        void* p = data_1047e428;
        data_1047e428 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047e424) {
            void* q = data_1047e424;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047e424 = 0;
    }
}

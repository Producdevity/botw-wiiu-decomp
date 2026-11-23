#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047eba0;
extern "C" void *data_1047eb9c;

extern "C" void fn_03ac2b7c() {
    if (data_1047eba0) {
        void* p = data_1047eba0;
        data_1047eba0 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047eb9c) {
            void* q = data_1047eb9c;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047eb9c = 0;
    }
}

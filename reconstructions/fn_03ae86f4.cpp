#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047ec7c;
extern "C" void* data_1047ec78;

extern "C" void fn_03ae86f4() {
    if (data_1047ec7c) {
        void* p = data_1047ec7c;
        data_1047ec7c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047ec78) {
            void* q = data_1047ec78;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047ec78 = 0;
    }
}

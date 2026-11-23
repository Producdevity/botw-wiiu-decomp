#include "botw/ghs_intrinsics.h"

extern "C" void* data_10469a7c;
extern "C" void* data_10469a78;

extern "C" void fn_02ec8a54() {
    if (data_10469a7c) {
        void* p = data_10469a7c;
        data_10469a7c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_10469a78) {
            void* q = data_10469a78;
            (*(void (**)(void*, int))(*(char**)((char*)q + 560) + 12))(q, 3);
        }
        data_10469a78 = 0;
    }
}

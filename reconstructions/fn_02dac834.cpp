#include "botw/ghs_intrinsics.h"
extern "C" void* data_10463ff8;
extern "C" void* data_10463ff4;

extern "C" void fn_02dac834() {
    if (data_10463ff8) {
        void* p = data_10463ff8;
        data_10463ff8 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_10463ff4) {
            void* q = data_10463ff4;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_10463ff4 = 0;
    }
}

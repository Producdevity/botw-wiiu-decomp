#include "botw/ghs_intrinsics.h"
extern "C" void* data_10467cc4;
extern "C" void* data_10467cc0;

extern "C" void fn_02e54518() {
    if (data_10467cc4) {
        void* p = data_10467cc4;
        data_10467cc4 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_10467cc0) {
            void* q = data_10467cc0;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_10467cc0 = 0;
    }
}

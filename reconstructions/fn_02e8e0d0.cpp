#include "botw/ghs_intrinsics.h"

extern "C" void* data_104698d4;
extern "C" void *data_104698d0;

extern "C" void fn_02e8e0d0() {
    if (data_104698d4) {
        void* p = data_104698d4;
        data_104698d4 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_104698d0) {
            void* q = data_104698d0;
            (*(void (**)(void*, int))(*(char**)((char*)q + 48) + 12))(q, 3);
        }
        data_104698d0 = 0;
    }
}

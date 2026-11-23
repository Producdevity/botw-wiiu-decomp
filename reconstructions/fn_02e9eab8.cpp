#include "botw/ghs_intrinsics.h"

extern "C" void* data_104698fc;
extern "C" void *data_104698f8;

extern "C" void fn_02e9eab8() {
    if (data_104698fc) {
        void* p = data_104698fc;
        data_104698fc = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_104698f8) {
            void* q = data_104698f8;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_104698f8 = 0;
    }
}

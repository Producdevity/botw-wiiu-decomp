#include "botw/ghs_intrinsics.h"
extern "C" void* data_104698cc;
extern "C" void* data_104698c8;

extern "C" void fn_02e8bf14() {
    if (data_104698cc) {
        void* p = data_104698cc;
        data_104698cc = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_104698c8) {
            void* q = data_104698c8;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_104698c8 = 0;
    }
}

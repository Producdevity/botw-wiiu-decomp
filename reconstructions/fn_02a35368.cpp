#include "botw/ghs_intrinsics.h"
extern "C" void* data_104637d8;
extern "C" void* data_104637d4;

extern "C" void fn_02a35368() {
    if (data_104637d8) {
        void* p = data_104637d8;
        data_104637d8 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_104637d4) {
            void* q = data_104637d4;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_104637d4 = 0;
    }
}

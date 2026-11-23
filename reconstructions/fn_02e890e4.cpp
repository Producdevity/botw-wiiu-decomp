#include "botw/ghs_intrinsics.h"
extern "C" void* data_10469898;
extern "C" void* data_10469894;

extern "C" void fn_02e890e4() {
    if (data_10469898) {
        void* p = data_10469898;
        data_10469898 = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_10469894) {
            void* q = data_10469894;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_10469894 = 0;
    }
}

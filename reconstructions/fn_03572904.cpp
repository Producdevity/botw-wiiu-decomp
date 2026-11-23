#include "botw/ghs_intrinsics.h"
extern "C" void* data_1047062c;
extern "C" void* data_10470628;

extern "C" void fn_03572904() {
    if (data_1047062c) {
        void* p = data_1047062c;
        data_1047062c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_10470628) {
            void* q = data_10470628;
            (*(void (**)(void*, int))(*(char**)q + 12))(q, 3);
        }
        data_10470628 = 0;
    }
}

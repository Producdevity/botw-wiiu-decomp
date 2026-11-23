#include "botw/ghs_intrinsics.h"

extern "C" void* data_1047ebcc;
extern "C" char* data_1047ebc8;

extern "C" void fn_03add8bc() {
    if (data_1047ebcc) {
        void* p = data_1047ebcc;
        data_1047ebcc = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_1047ebc8) {
            void* q = (void*)data_1047ebc8;
            (*(void (**)(void*, int))(*(char**)q + 20))(q, 3);
        }
        data_1047ebc8 = 0;
    }
}

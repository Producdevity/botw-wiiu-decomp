#include "botw/ghs_intrinsics.h"

extern "C" void* data_1046987c;
extern "C" char * data_10469878;

extern "C" void fn_02e86dcc() {
    if (data_1046987c) {
        void* p = data_1046987c;
        data_1046987c = 0;
        __schedule_barrier();
        (*(void (**)(void*, int))(*(char**)((char*)p + 12) + 12))(p, 2);
        if (data_10469878) {
            void* q = (void*)data_10469878;
            (*(void (**)(void*, int))(*(char**)((char*)q + 2908) + 12))(q, 3);
        }
        data_10469878 = 0;
    }
}
